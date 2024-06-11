#include "../../scripting_includes.h"
#include "enums.h"

class GCGlowProperty;
class GCEntityComponent;
class GCPlayerPawnComponent;
class Gfogparams_t;
class GCNetworkTransmitComponent;
class GCNetworkViewOffsetVector;
class GCNetworkVelocityVector;
class GCEntityInstance;
class GCBaseEntity;
class GCPropDataComponent;
class GCHitboxComponent;
class GVPhysicsCollisionAttribute_t;
class GCCollisionProperty;
class GCBaseModelEntity;
class GCServerOnlyEntity;
class GCBaseToggle;
class GCBaseTrigger;
class GCTriggerProximity;
class GCLogicalEntity;
class GCTriggerPush;
class GCTriggerMultiple;
class GCBasePlatTrain;
class GCTonemapTrigger;
class GCEconItemAttribute;
class GCIronSightController;
class GCFogTrigger;
class GCBaseFilter;
class GCCSPointScriptExtensions_weapon_cs_base;
class GCTriggerHostageReset;
class GCServerOnlyPointEntity;
class GCPointEntity;
class GCountdownTimer;
class GSceneEventId_t;
class GCBuoyancyHelper;
class GCMoverPathNode;
class GCBtNode;
class GCPlayer_ViewModelServices;
class GIEconItemInterface;
class GCEnvSoundscape;
class Gfogplayerparams_t;
class GCFogController;
class GCAttributeList;
class GCModelState;
class GCBaseAnimGraph;
class GCEnableMotionFixup;
class GCInButtonState;
class GCBtNodeDecorator;
class GCAttributeManager;
class GFilterHealth;
class GCPlayerPing;
class GCCSPointScriptEntity;
class GCNetworkOriginCellCoordQuantizedVector;
class GCInfoLandmark;
class GCBaseFlex;
class GCEconItemView;
class GCAnimGraphNetworkedVariables;
class GCBodyComponent;
class GCEnvFireSensor;
class GCCSGO_TeamPreviewCharacterPosition;
class GCEnvWindShared__WindAveEvent_t;
class GCBaseProp;
class GCPointGamestatsCounter;
class GCPhysicsShake;
class GCBreakable;
class GCPathKeyFrame;
class GCTriggerTripWire;
class GCEnvTilt;
class GCAttributeContainer;
class GCItemGenericTriggerHelper;
class GCLogicBranchList;
class Gaudioparams_t;
class GCEconEntity;
class GCModelPointEntity;
class GCMultiLightProxy;
class GCEffectData;
class GCEntityBlocker;
class GCLogicCase;
class GCItem;
class GCRuleEntity;
class GExtent;
class GCSoundEventEntity;
class GCCSPlayer_ViewModelServices;
class GCBasePlayerWeapon;
class GCInfoParticleTarget;
class GCEnvVolumetricFogController;
class GCPlayer_MovementServices;
class GCBreakableProp;
class GCEnvSoundscapeProxy;
class GCPhysConstraint;
class GCCSGameModeRules;
class GCItemAssaultSuit;
class GCInfoPlayerStart;
class GCSoundOpvarSetPointBase;
class Gragdoll_t;
class GCItemDogtags;
class GCLightEntity;
class GCPlayer_WaterServices;
class GCSkyboxReference;
class GCDynamicProp;
class GCRopeKeyframe;
class GCBarnLight;
class GSpawnPoint;
class GCEnvViewPunch;
class GCCSWeaponBase;
class GCPathCorner;
class GCPlayerControllerComponent;
class GCWeaponBaseItem;
class GCBaseCombatCharacter;
class GCMultiSource;
class GCLogicNavigation;
class GCEnvEntityMaker;
class GCProjectedDecal;
class GCLogicEventListener;
class GCFilterMultiple;
class GCPlayer_UseServices;
class GCScriptComponent;
class GCPhysicsWire;
class Glocksound_t;
class GCCSPointScriptExtensions_player_controller;
class GCBaseFire;
class GCBumpMine;
class GCLightGlow;
class GCSPerRoundStats_t;
class GCBasePropDoor;
class GCRagdollManager;
class GCTriggerFan;
class GCBaseCSGrenade;
class GCPathCornerCrash;
class GCHandleTest;
class GCSoundOpvarSetEntity;
class GWeaponPurchaseCount_t;
class GCNavSpaceInfo;
class GCLogicAchievement;
class GCPathSimple;
class GCBtActionParachutePositioning;
class GCPlayer_CameraServices;
class GCTouchExpansionComponent;
class GEntitySpottedState_t;
class GCBaseClientUIEntity;
class GCEnvDecal;
class GCCSPointScriptExtensions_entity;
class GCGameSceneNode;
class GCLogicAuto;
class GCSoundOpvarSetOBBWindEntity;
class GCLightDirectionalEntity;
class GCLogicNPCCounter;
class GCCSObserver_UseServices;
class GCFuncPlat;
class GCRuleBrushEntity;
class GCRulePointEntity;
class GCMessageEntity;
class GCSmokeGrenade;
class GCBaseViewModel;
class GCCSPlayer_PingServices;
class GCPlayer_FlashlightServices;
class GCServerOnlyModelEntity;
class GCBtActionCombatPositioning;
class GCFireSmoke;
class GCCSWeaponBaseGun;
class GCWeaponGlock;
class GCPredictedViewModel;
class GCTriggerActiveWeaponDetect;
class GCEnvMicrophone;
class GCInfoSpawnGroupLoadUnload;
class GCBasePlayerController;
class GCPointTemplateAPI;
class GCKnife;
class GCFuncTrackTrain;
class GCFogVolume;
class GCInfoPlayerCounterterrorist;
class GCFire;
class GISkeletonAnimationController;
class GCCSServerPointScriptEntity;
class GCWeaponBizon;
class GCFuncPlatRot;
class GCGenericConstraint;
class GCDecoyGrenade;
class GCWeaponG3SG1;
class GCItemDefuser;
class GCConstantForceController;
class GCDEagle;
class GCRagdollProp;
class GCItemSoda;
class GCEnvCubemap;
class GCBasePlayerControllerAPI;
class GCCSPointScriptExtensions_CCSWeaponBaseVData;
class GCEnvDetailController;
class GCTriggerOnce;
class GCInfoTeleportDestination;
class GCMathRemap;
class GCInstructorEventEntity;
class GCGradientFog;
class GCFootstepControl;
class GCTriggerVolume;
class GCInfoInstructorHintHostageRescueZone;
class GCEnvSoundscapeAlias_snd_soundscape;
class GCFishPool;
class GCPointClientCommand;
class GCFuncVPhysicsClip;
class GCCSPlayer_RadioServices;
class GCSceneEntity;
class GCEnvHudHint;
class GCParticleSystem;
class GAmmoIndex_t;
class Gsky3dparams_t;
class GCScriptItem;
class GIntervalTimer;
class GCWeaponSG556;
class Gdynpitchvol_base_t;
class GCDynamicLight;
class GCWeaponP90;
class GCTriggerToggleSave;
class GCPrecipitation;
class GCPointServerCommand;
class GCCSGO_TeamIntroCharacterPosition;
class GCLogicCollisionPair;
class GCSkeletonInstance;
class GCPhysicsProp;
class GCFuncWall;
class GCItemDefuserAlias_item_defuser;
class GCBaseGrenade;
class GCCSPlayerBase_CameraServices;
class GCCSGO_WingmanIntroCharacterPosition;
class GCSMatchStats_t;
class GCFuncLadder;
class GCTriggerSndSosOpvar;
class GCItemHeavyAssaultSuit;
class GCScriptedSequence;
class GCWeaponNegev;
class GCWeaponGalilAR;
class GCEnvProjectedTexture;
class GCDynamicPropAlias_prop_dynamic_override;
class GCSceneListManager;
class GCSplineConstraint;
class GCCSObserver_ViewModelServices;
class GCDynamicPropAlias_dynamic_prop;
class GModelConfigHandle_t;
class GCPhysicsPropMultiplayer;
class GCFuncTrackChange;
class GCMarkupVolume;
class GCInfoPlayerTerrorist;
class GVelocitySampler;
class GCTankTargetChange;
class GCLogicCompare;
class GCCSPlayer_BulletServices;
class GCLogicRelay;
class GCPlayer_ItemServices;
class GCKeepUpright;
class GCRevertSaved;
class GCFuncWater;
class GCFuncTimescale;
class GCBtActionMoveTo;
class GCTonemapController2;
class GCRopeKeyframeAlias_move_rope;
class GCEnvInstructorVRHint;
class GCWeaponXM1014;
class GCPlatTrigger;
class GCEnvWindShared;
class GCMolotovGrenade;
class GCPointHurt;
class GCPointValueRemapper;
class GCLogicNPCCounterAABB;
class GCLightOrthoEntity;
class GCEnvSoundscapeTriggerable;
class GCSoundOpvarSetPointEntity;
class GCBasePlayerPawn;
class GCGameMoney;
class GCLogicPlayerProxy;
class GCPlayer_ObserverServices;
class GCWeaponZoneRepulsor;
class GCPhysImpact;
class GCEnvCombinedLightProbeVolume;
class GCCSPlayer_WaterServices;
class GCWeaponM249;
class GCEnvParticleGlow;
class GCFuncVehicleClip;
class GCSoundAreaEntityBase;
class GCFuncBrush;
class GCEnvFunnel;
class GSequenceHistory_t;
class GCCSGameModeRules_Noop;
class GCPointAngularVelocitySensor;
class GCBaseCSGrenadeProjectile;
class GCHostageRescueZoneShim;
class GCEnvInstructorHint;
class GCEnvTracer;
class GCInfoGameEventProxy;
class GCPointCamera;
class GCBodyComponentSkeletonInstance;
class GCFuncLadderAlias_func_useableladder;
class GCBaseMoveBehavior;
class GCFuncInteractionLayerClip;
class GCWeaponMAC10;
class GCGameRules;
class GCWeaponRevolver;
class GCOrnamentProp;
class GCLogicGameEvent;
class GCEnvMuzzleFlash;
class GCPlayerSprayDecal;
class GCBombTarget;
class GCPhysicsSpring;
class GCEnvLightProbeVolume;
class GCCSGameModeRules_ArmsRace;
class GCScriptTriggerPush;
class GCEnvEntityIgniter;
class GCFuncWallToggle;
class GCDamageRecord;
class GCLogicAutosave;
class GCCSPlayerController_DamageServices;
class GCRenderComponent;
class GCSoundEventPathCornerEntity;
class GCEnvSoundscapeProxyAlias_snd_soundscape_proxy;
class GCLightComponent;
class GCSmokeGrenadeProjectile;
class GCScriptTriggerMultiple;
class GCSoundOpvarSetAutoRoomEntity;
class GCBodyComponentPoint;
class GFilterDamageType;
class GCBot;
class GCMotorController;
class GCSoundAreaEntitySphere;
class GCCSPlayer_UseServices;
class GCCSGO_WingmanIntroCounterTerroristPosition;
class GCItemKevlar;
class GCTriggerHurt;
class GCPhysBallSocket;
class GCMapVetoPickController;
class GCCSMinimapBoundary;
class GCSoundEnt;
class GCInfoSpawnGroupLandmark;
class GCPlayer_MovementServices_Humanoid;
class GCTriggerSave;
class GCPhysWheelConstraint;
class GCPhysFixed;
class GCSkillFloat;
class GCEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable;
class GCCSPlayerController_InGameMoneyServices;
class GCSprite;
class GCSoundOpvarSetAABBEntity;
class GCWeaponM4A1;
class GCBeam;
class GCCommentaryViewPosition;
class GCTonemapController2Alias_env_tonemap_controller2;
class GCPhysPulley;
class GCGameRulesProxy;
class GCWeaponMP7;
class GCCSPlayerController_ActionTrackingServices;
class GCPrecipitationBlocker;
class GCBaseFlexAlias_funCBaseFlex;
class GCFish;
class GCEnvFireSource;
class GCInfoLadderDismount;
class GCTriggerGameEvent;
class GSimpleConstraintSoundProfile;
class GCDebugHistory;
class GCInfoData;
class GCHostageCarriableProp;
class GCLightSpotEntity;
class GCFuncRotating;
class GCDecoyProjectile;
class GCCSPlace;
class GCFuncTrainControls;
class GCEntityDissolve;
class GCPointAngleSensor;
class GCSoundEventOBBEntity;
class GCBtNodeCondition;
class GCSharedGapTypeQueryRegistration;
class GCEnvVolumetricFogVolume;
class GCEnvBeam;
class GCFuncIllusionary;
class GCPhysMagnet;
class GCSceneEntityAlias_logic_choreographed_scene;
class GCFuncNavBlocker;
class GCRagdollMagnet;
class GCFuncElectrifiedVolume;
class GCPointProximitySensor;
class GWeaponPurchaseTracker_t;
class GCFilterClass;
class GCMelee;
class GCMultiplayRules;
class GCFilterLOS;
class GEngineCountdownTimer;
class GCPhysBox;
class GCSensorGrenadeProjectile;
class GCTimerEntity;
class GCCSGO_TeamIntroCounterTerroristPosition;
class GCHEGrenadeProjectile;
class GCEnvWind;
class GCTimeline;
class GCFists;
class GCHandleDummy;
class GCRagdollConstraint;
class GCPhysExplosion;
class GCPointPush;
class GCCredits;
class GCCSPlayerResource;
class GCPlayer_WeaponServices;
class GCAttributeManager__cached_attribute_float_t;
class GCTeam;
class GCCSGameModeRules_Deathmatch;
class GCFuncNavObstruction;
class GCTriggerImpact;
class GCSun;
class GCTriggerDetectBulletFire;
class GCWorld;
class GCPointGiveAmmo;
class GCFuncMoveLinear;
class GCPathParticleRope;
class GCPlayerVisibility;
class GCPointTeleport;
class GCAK47;
class GCTriggerTeleport;
class GCCSObserver_CameraServices;
class GCCSGO_TeamIntroTerroristPosition;
class GCFuncMover;
class GCCSPlayer_CameraServices;
class GCHEGrenade;
class GCGameEnd;
class GCTriggerCallback;
class GCBubbling;
class GCTeamplayRules;
class GCPhysicsPropOverride;
class GCAI_ChangeHintGroup;
class GCColorCorrectionVolume;
class GCFilterEnemy;
class GCShower;
class GCEnvCubemapFog;
class GCBaseButton;
class GCEnvExplosion;
class GCSoundEventAABBEntity;
class GCTriggerLook;
class GCEntitySubclassVDataBase;
class GCLogicProximity;
class GCPointClientUIWorldPanel;
class GCFilterContext;
class GCPathParticleRopeAlias_path_particle_rope_clientside;
class GCTriggerBuoyancy;
class GCFilterAttributeInt;
class GCCSPlayer_ActionTrackingServices;
class GCAISound;
class GCPointEntityFinder;
class Gshard_model_desc_t;
class GCPhysicsPropRespawnable;
class GCEnvSky;
class GCPointVelocitySensor;
class GCFilterMassGreater;
class GFilterTeam;
class GCFuncTankTrain;
class GCNullEntity;
class GCCSPointScriptExtensions_observer;
class GCMarkupVolumeTagged;
class GCBuyZone;
class GCPointTemplate;
class GCTripWireFire;
class GCPhysForce;
class GCLogicDistanceAutosave;
class GCInfoDynamicShadowHint;
class GCSoundOpvarSetOBBEntity;
class GCEnvWindShared__WindVariationEvent_t;
class GCTakeDamageInfoAPI;
class GCScriptTriggerOnce;
class GCNavWalkable;
class GCFuncMonitor;
class GCFlashbangProjectile;
class GCPointClientUIWorldTextPanel;
class GCInfoInstructorHintTarget;
class GCCSPlayer_HostageServices;
class GCWeaponSSG08;
class GCBreachCharge;
class GCLogicBranch;
class GCWeaponUMP45;
class GCSpriteAlias_env_glow;
class GCPhysicalButton;
class GCPhysLength;
class GCLogicNPCCounterOBB;
class GCCSGOViewModel;
class GCWeaponShield;
class GCBlood;
class GCEnvFade;
class GCDynamicPropAlias_cable_dynamic;
class GCCSPlayer_BuyServices;
class GCHostageExpresserShim;
class GCInferno;
class GCEnvGlobal;
class GCFilterName;
class GCCSTeam;
class GCWeaponUSPSilencer;
class GCSpriteOriented;
class GCTriggerGravity;
class GCServerRagdollTrigger;
class GCInfoDynamicShadowHintBox;
class GCPathMover;
class GCFlashbang;
class GCWeaponAug;
class GCIncendiaryGrenade;
class GCChangeLevel;
class GCTriggerLerpObject;
class GCTriggerSoundscape;
class GCLogicScript;
class GCWeaponFiveSeven;
class GCTriggerBrush;
class GCPhysicsEntitySolver;
class GCNetworkedSequenceOperation;
class GCPointWorldText;
class GCSoundAreaEntityOrientedBox;
class GCTriggerPhysics;
class GEntityRenderAttribute_t;
class GCPointBroadcastClientCommand;
class GCFuncShatterglass;
class GCRotButton;
class GCSoundEventSphereEntity;
class GCWeaponHKP2000;
class GCPlantedC4;
class GCPointClientUIDialog;
class GCEnvSplash;
class GCSkyCamera;
class GCWeaponNOVA;
class GCPointCameraVFOV;
class GCWeaponTaser;
class GCWaterBullet;
class GCMarkupVolumeWithRef;
class GCMessage;
class GCLogicGameEventListener;
class GCPushable;
class GCTriggerRemove;
class GCInfoTarget;
class GCMomentaryRotButton;
class GCPropDoorRotating;
class Ghudtextparms_t;
class GCWeaponMP5SD;
class GCTextureBasedAnimatable;
class GCMarkupVolumeTagged_NavGame;
class GCPhysThruster;
class GCCSPointScriptExtensions_player;
class GCCitadelSoundOpvarSetOBB;
class GSellbackPurchaseEntry_t;
class GCWeaponFamas;
class GCShatterGlassShardPhysics;
class GCFilterModel;
class GCCSPlayerPawnBase;
class GCPathTrack;
class GCLogicDistanceCheck;
class GCOmniLight;
class GCInfoOffscreenPanoramaTexture;
class GCInfoVisibilityBox;
class GCGamePlayerEquip;
class GCInfoTargetServerOnly;
class GCSoundOpvarSetPathCornerEntity;
class GCCSPlayer_WeaponServices;
class GCEntityFlame;
class GCWeaponMP9;
class GCCSBot;
class GCEntityIdentity;
class GCGunTarget;
class GCSoundEventParameter;
class GCSimpleMarkupVolumeTagged;
class GCTestEffect;
class GCWeaponM4A1Silencer;
class GCScriptNavBlocker;
class GCConstraintAnchor;
class GCWeaponTec9;
class GCMarkupVolumeTagged_Nav;
class GCInstancedSceneEntity;
class GCLightEnvironmentEntity;
class GCLogicActiveAutosave;
class GCEnvBeverage;
class GCWeaponCZ75a;
class GCWeaponP250;
class GCHostage;
class GCScriptTriggerHurt;
class GCBasePlayerWeaponVData;
class GCMathColorBlend;
class GCEnvScreenOverlay;
class GCCSPlayerPawn;
class GCBumpMineProjectile;
class GCCSPlayerController;
class GCChicken;
class GCInfoInstructorHintBombTargetA;
class GCWeaponAWP;
class GCCSObserverPawn;
class GCPostProcessingVolume;
class GCSpotlightEnd;
class GCGamePlayerZone;
class GCSensorGrenade;
class GCCSGO_WingmanIntroTerroristPosition;
class GCTriggerDetectExplosion;
class GCSoundStackSave;
class GConstraintSoundInfo;
class GCSingleplayRules;
class GCFilterProximity;
class GCEconWearable;
class GCCSPlayer_ItemServices;
class GCFuncConveyor;
class GCWeaponMag7;
class GCMathCounter;
class GCInfoWorldLayer;
class GCRectLight;
class GCCSGO_TeamSelectCharacterPosition;
class GCBaseDoor;
class GCLogicLineToEntity;
class GCRetakeGameRules;
class GCCSGameRulesProxy;
class GCEnvCubemapBox;
class GCCSPlayer_DamageReactServices;
class GServerAuthoritativeWeaponSlot_t;
class GCCSGameRules;
class GCColorCorrection;
class GCWeaponElite;
class GCSoundEventEntityAlias_snd_event_point;
class GCBaseEntityAPI;
class GCC4;
class GCHostageRescueZone;
class GCPointPrefab;
class GCRotDoor;
class GCSkeletonAnimationController;
class GCTablet;
class GCTankTrainAI;
class GCGameGibManager;
class GCCSPointScript;
class GCRagdollPropAlias_physics_prop_ragdoll;
class GCCSSprite;
class GCFuncPropRespawnZone;
class GCInfoDeathmatchSpawn;
class GCWeaponSCAR20;
class GCTripWireFireProjectile;
class GCFuncTrackAuto;
class GCEnvSpark;
class GCCSObserver_ObserverServices;
class GCPlayer_AutoaimServices;
class GCFuncTrain;
class GCHostageAlias_info_hostage_spawn;
class GCNavLinkAreaEntity;
class GCFuncMoveLinearAlias_momentary_door;
class GCCommentaryAuto;
class GCMapInfo;
class GCTriggerBombReset;
class GCBaseDMStart;
class GCLogicMeasureMovement;
class GViewAngleServerChange_t;
class GPhysicsRagdollPose_t;
class GCBreachChargeProjectile;
class GCRangeFloat;
class GCAnimEventListenerBase;
class GRelationship_t;
class GCRemapFloat;
class GIGapHost_GameEntity;
class GCFootstepTableHandle;
class GCCSPlayerController_InventoryServices;
class GCResponseQueue;
class GCScriptUniformRandomStream;
class GParticleIndex_t;
class GCPhysHinge;
class GCSimpleSimTimer;
class GCSkillDamage;
class GCAnimEventQueueListener;
class GCEnvLaser;
class GCFiringModeFloat;
class GCRopeOverlapHit;
class GResponseContext_t;
class GCNavVolume;
class GCCSObserver_MovementServices;
class GCCSGOPlayerAnimGraphState;
class GCGameScriptedMoveData;
class GCBaseAnimGraphController;
class GCNavVolumeSphere;
class GCResponseCriteriaSet;
class GCAI_Expresser;
class GIChoreoServices;
class GCStopwatchBase;
class GResponseParams;
class GCItem_Healthshot;
class GCPhysHingeAlias_phys_hinge_local;
class GPointCameraSettings_t;
class GCSoundEnvelope;
class Gdynpitchvol_t;
class GCStopwatch;
class GCNavVolumeVector;
class GNavGravity_t;
class GCEnvShake;
class GCPhysSlideConstraint;
class GCSound;
class GCTakeDamageResult;
class GCMolotovProjectile;
class GCCommentarySystem;
class GResponseFollowup;
class GCRangeInt;
class GCNavLinkAnimgraphVar;
class GCCSGO_TeamSelectCounterTerroristPosition;
class GCNavLinkMovementVData;
class GCAnimGraphControllerBase;
class GRagdollCreationParams_t;
class GAmmoTypeInfo_t;
class GCRandStopwatch;
class GCGameChoreoServices;
class GCSimpleStopwatch;
class GCShatterGlassShard;
class GCommandToolCommand_t;
class Gragdollelement_t;
class GCBodyComponentBaseModelEntity;
class GCNetworkOriginQuantizedVector;
class Gmagnetted_objects_t;
class GCHintMessageQueue;
class GCSkillInt;
class Gthinkfunc_t;
class GCNavHullPresetVData;
class GCBasePlayerVData;
class GCSceneEventInfo;
class GCCopyRecipientFilter;
class GCPropDoorRotatingBreakable;
class GCBtActionAim;
class GCFiringModeInt;
class GCSoundPatch;
class GCSmoothFunc;
class GIHasAttributes;
class GCRagdollPropAttached;
class GHullFlags_t;
class GCBodyComponentBaseAnimGraph;
class GGameAmmoTypeInfo_t;
class GCPhysMotor;
class GCSimTimer;
class GCBaseIssue;
class GCTakeDamageInfo;
class GConceptHistory_t;
class GCPhysTorque;
class GSummaryTakeDamageInfo_t;
class GCRandSimTimer;
class GCBtNodeComposite;
class GCFireCrackerBlast;
class Gsndopvarlatchdata_t;
class GCCSGO_TeamSelectTerroristPosition;
class GCAI_ExpresserWithFollowup;
class GCNavVolumeMarkupVolume;
class GQuestProgress;
class Glerpdata_t;
class GCMultiplayer_Expresser;
class GCTakeDamageSummaryScopeGuard;
class GCWeaponSawedoff;
class GCCSPlayer_MovementServices;
class GCNavHullVData;
class GSoundOpvarTraceResult_t;
class GCAnimEventListener;
class GCNavVolumeCalculatedVector;
class GCCSWeaponBaseVData;
class GCBtNodeConditionInactive;
class GCSAdditionalPerRoundStats_t;
class GActiveModelConfig_t;
class GCPrecipitationVData;
class GCBreakableStageHelper;
class GCNavVolumeBreadthFirstSearch;
class GCAmbientGeneric;
class GCSAdditionalMatchStats_t;
class GIRagdoll;
class GCGameText;
class GCInfoInstructorHintBombTargetB;
class GCNavVolumeAll;
class GCNavVolumeSphericalShell;
class GRelationshipOverride_t;
class GParticleAttributeIndex_t;
class GCParticleInput;
class GCParticleFloatInput;
class GVoxelVisBlockOffset_t;
class GAggregateLODSetup_t;
class GCProductQuantizer;
class GCAnimUpdateNodeRef;
class GCNmGraphNode;
class GCParticleCollectionFloatInput;
class GCParticleFunction;
class GCParticleFunctionOperator;
class GPARTICLE_WORLD_HANDLE__;
class GVMixDynamicsCompressorDesc_t;
class GFootStepTrigger;
class GParticleControlPointDriver_t;
class GFeSphereRigid_t;
class GCMotionMetricEvaluator;
class GCDrawCullingData;
class GCAnimUserDifference;
class GCSeqMultiFetchFlag;
class GCNmEvent;
class GCAnimParamHandle;
class GCFuseSymbolTable;
class GGeneratedTextureHandle_t;
class GSceneViewId_t;
class GPhysFeModelDesc_t;
class GCCycleBase;
class GCPhysSurfacePropertiesSoundNames;
class GDynamicMeshDeformParams_t;
class GCDistanceRemainingMetricEvaluator;
class GVMixDynamicsBand_t;
class GRnCapsule_t;
class GCAnimInputDamping;
class GAnimTagID;
class GCParticleFunctionPreEmission;
class GCPerParticleFloatInput;
class GCSosGroupActionSchema;
class GCFutureFacingMetricEvaluator;
class GCSeqTransition;
class GCAnimNodePath;
class GCParamSpanUpdater;
class GAnimNodeID;
class GCParticleFunctionInitializer;
class GRnFace_t;
class GEngineLoopState_t;
class GCNmPoseNode;
class GCParticleFunctionConstraint;
class GCNmStateMachineNode__TransitionDefinition_t;
class GCAnimAttachment;
class GEventSimulate_t;
class GCParticleCollectionRendererFloatInput;
class GModelSkeletonData_t;
class GEventModInitialized_t;
class GCParticleTransformInput;
class GCParticleVisibilityInputs;
class GMaterialGroup_t;
class GCAnimUpdateNodeBase;
class GCParticleFunctionRenderer;
class GCParticleVecInput;
class GVPhysXConstraintParams_t;
class GCMorphRectData;
class GEventServerPollNetworking_t;
class GCDspPresetModifierList;
class GSkeletonDemoDb_t;
class GCRenderGroom;
class GCUnaryUpdateNode;
class GCBlendCurve;
class GChangeAccessorFieldPathIndex_t;
class GFeKelagerBend2_t;
class GCMorphSetData;
class GCBinaryUpdateNode;
class Gconstraint_axislimit_t;
class GFuseFunctionIndex_t;
class GCGeneralSpin;
class GCFeJiggleBone;
class GCGlowOverlay;
class GTextureControls_t;
class GCParticleModelInput;
class GCNmPassthroughNode;
class GCAnimDecoder;
class GNmPercent_t;
class GEventProfileStorageAvailable_t;
class GCVoiceContainerBase;
class GCPerParticleVecInput;
class GCBoneMaskUpdateNode;
class GConfigIndex;
class GFeSimdRodConstraint_t;
class GCSSDSMsg_EndFrame;
class GSkeletonBoneBounds_t;
class GCDSPMixgroupModifier;
class GCBoneConstraintBase;
class GEventAdvanceTick_t;
class GMotionIndex;
class GCAnimBoneDifference;
class GCFootDefinition;
class GCFootCycle;
class GCMotionDataSet;
class GCVPhysXSurfacePropertiesList;
class GCParticleFunctionEmitter;
class GVMixFilterDesc_t;
class GCBaseConstraint;
class GCParticleMassCalculationParameters;
class GAnimParamID;
class GCTransitionUpdateData;
class GManifestTestResource_t;
class GFootPinningPoseOpFixedData_t;
class GCFootPinningUpdateNode;
class GCLeafUpdateNode;
class GCAnimMotorUpdaterBase;
class GRnMesh_t;
class GCModelConfigElement;
class GVPhysXAggregateData_t;
class GCSequenceUpdateNode;
class GCModelConfigElement_Command;
class GCAnimParameterBase;
class GCompositeMaterialInputLooseVariable_t;
class GVecInputMaterialVariable_t;
class GCCachedPose;
class GCAnimGraphSettingsGroup;
class GCModelConfig;
class GFootLockPoseOpFixedSettings;
class GCFlexRule;
class GCSosGroupActionSetSoundeventParameterSchema;
class GCStepsRemainingMetricEvaluator;
class GNmCompressionSettings_t__QuantizationRange_t;
class GCAnimParameterManagerUpdater;
class GCModelConfigElement_RandomColor;
class GCMotionNode;
class GCAnimTagBase;
class GAnimComponentID;
class GCAnimLocalHierarchy;
class GRnShapeDesc_t;
class GCBoneConstraintPoseSpaceBone__Input_t;
class GCModelConfigElement_SetRenderColor;
class GPhysSoftbodyDesc_t;
class GVMapResourceData_t;
class GFeCtrlSoftOffset_t;
class GCMorphBundleData;
class GCNmBoneMask;
class GCAudioEmphasisSample;
class GCNmFrameSnapEvent;
class GCJumpHelperUpdateNode;
class GSolveIKChainPoseOpFixedSettings_t;
class GCMaterialAttributeAnimTag;
class GCAnimComponentUpdater;
class GCReplicationParameters;
class GVMixEnvelopeDesc_t;
class GCNmValueNode;
class GCFollowPathUpdateNode;
class GEventClientPostSimulate_t;
class GAABB_t;
class GFeNodeBase_t;
class GModelBoneFlexDriverControl_t;
class GPostProcessingVignetteParameters_t;
class GConstantInfo_t;
class GFuseVariableIndex_t;
class GIParticleEffect;
class GCStopAtGoalUpdateNode;
class GCSequenceGroupData;
class GParticleNamedValueConfiguration_t;
class GCAnimSkeleton;
class GCAnimationGraphVisualizerPrimitiveBase;
class GCBodyGroupAnimTag;
class GFeAxialEdgeBend_t;
class GParamSpanSample_t;
class GFunctionInfo_t;
class GFourQuaternions;
class GSkeletonAnimCapture_t__FrameStamp_t;
class GCSeqAutoLayerFlag;
class GParamSpan_t;
class GCNmBoolValueNode;
class GRenderInputLayoutField_t;
class GCCPPScriptComponentUpdater;
class GCDampedValueComponentUpdater;
class GCSeqPoseSetting;
class GRenderHairStrandInfo_t;
class GCExampleSchemaVData_Monomorphic;
class GCPlayerSprayDecalRenderHelper;
class GFeTaperedCapsuleRigid_t;
class GCChoiceUpdateNode;
class GIKSolverSettings_t;
class GCNmLayerBlendNode;
class GCRandomNumberGeneratorParameters;
class GAnimationDecodeDebugDumpElement_t;
class GCNmFloatValueNode;
class GCSSDSMsg_LayerBase;
class GCSosGroupActionSoundeventClusterSchema;
class GCAnimationGraphVisualizerAxis;
class GMaterialResourceData_t;
class GBlendItem_t;
class GCVoiceContainerAnalysisBase;
class GCSosGroupActionLimitSchema;
class GFeWeightedNode_t;
class GCLookComponentUpdater;
class GCCycleControlUpdateNode;
class GCNetworkVarChainer;
class GRnTriangle_t;
class GCNmVectorValueNode;
class GCSeqSeqDescFlag;
class GAimCameraOpFixedSettings_t;
class GCParticleRemapFloatInput;
class GBaseSceneObjectOverride_t;
class GCConcreteAnimParameter;
class GFeAnimStrayRadius_t;
class GModelReference_t;
class GRnCapsuleDesc_t;
class GCAnimGraphDebugReplay;
class GCVoiceContainerSwitch;
class GLookAtBone_t;
class GCNmBoneMaskValueNode;
class GCNmTransitionEvent;
class GCStringAnimTag;
class GSkeletonAnimCapture_t__Bone_t;
class GCStaticPoseCache;
class GParticlePreviewBodyGroup_t;
class GFeWorldCollisionParams_t;
class GCPlayerInputAnimMotorUpdater;
class GCParticleCollectionRendererVecInput;
class GFeBandBendLimit_t;
class GCAnimFoot;
class GEventClientAdvanceTick_t;
class GMaterialOverride_t;
class GCAnimDemoCaptureSettings;
class GCNmIDEvent;
class GCPathMetricEvaluator;
class GMaterialParam_t;
class GCSpeedScaleUpdateNode;
class GVMixEQ8Desc_t;
class GCModelConfigElement_SetMaterialGroupOnAttachedModels;
class GTwoBoneIKSettings_t;
class GCompositeMaterialInputContainer_t;
class GCStateNodeStateData;
class GFeTwistConstraint_t;
class GFootFixedData_t;
class GVMixDiffusorDesc_t;
class GFeProxyVertexMap_t;
class GCDirectPlaybackUpdateNode;
class GPostProcessingLocalContrastParameters_t;
class GCFootLockUpdateNode;
class GCParentConstraint;
class GSkeletonAnimCapture_t__Frame_t;
class GCPathParameters;
class GCSlowDownOnSlopesUpdateNode;
class GCAttachment;
class GCEmptyEntityInstance;
class GCCompositeMaterialEditorDoc;
class GCPhysSurfacePropertiesPhysics;
class GEventClientPostOutput_t;
class GFeNodeIntegrator_t;
class GRnMeshDesc_t;
class GCAnimGraphNetworkSettings;
class GCAimConstraint;
class GCAnimActionUpdater;
class GCParticleFunctionForce;
class GCSpinUpdateBase;
class GControlPointReference_t;
class GCVoiceContainerRandomSampler;
class GFeFollowNode_t;
class GCovMatrix3;
class GAnimStateID;
class GCVoiceContainerStaticAdditiveSynth;
class GRnSoftbodyCapsule_t;
class GCModelConfigElement_RandomPick;
class GNmSyncTrackTime_t;
class GCGeneralRandomRotation;
class GRnPlane_t;
class GFeNodeWindBase_t;
class GCQuaternionAnimParameter;
class GSkeletonAnimCapture_t__Camera_t;
class GCAnimEncodeDifference;
class GAggregateSceneObject_t;
class GIKDemoCaptureSettings_t;
class GCParticleCollectionBindingInstance;
class GCVoiceContainerDefault;
class GCSoundEventMetaData;
class GCMorphConstraint;
class GDop26_t;
class GCAnimGraphModelBinding;
class GFakeEntityDerivedA_tAPI;
class GCAnimParamHandleMap;
class GFeMorphLayerDepr_t;
class GFourCovMatrices3;
class GFeFitMatrix_t;
class GRnVertex_t;
class GTraceSettings_t;
class GCConstraintTarget;
class GCompMatPropertyMutator_t;
class GIKBoneNameAndIndex_t;
class GPermEntityLumpData_t;
class GVMixDelayDesc_t;
class GCBoneConstraintDotToMorph;
class GPostProcessingBloomParameters_t;
class GEntOutput_t;
class GFakeEntityDerivedB_tAPI;
class GCSlopeComponentUpdater;
class GRnNode_t;
class GCSeqCmdSeqDesc;
class GCPathAnimMotorUpdaterBase;
class GCVariantDefaultAllocator;
class GVMixOscDesc_t;
class GFeEdgeDesc_t;
class GCPathAnimMotorUpdater;
class GCWayPointHelperUpdateNode;
class GMaterialParamInt_t;
class GPermModelInfo_t;
class GAnimScriptHandle;
class GFeCtrlOffset_t;
class GFeTri_t;
class GCLeanMatrixUpdateNode;
class GCStanceScaleUpdateNode;
class GIKTargetSettings_t;
class GTestResource_t;
class GCBaseRendererSource2;
class GCSSDSMsg_ViewRender;
class GCZeroPoseUpdateNode;
class GFeFitWeight_t;
class GCFootCycleMetricEvaluator;
class GCFootPositionMetricEvaluator;
class GCFlexOp;
class GCPointConstraint;
class GMotionBlendItem;
class GCVectorQuantizer;
class GSignatureOutflow_Resume;
class GFeBoxRigid_t;
class GCIntAnimParameter;
class GCNmTargetValueNode;
class GEventSimpleLoopFrameUpdate_t;
class GEventServerAdvanceTick_t;
class GTimedEvent;
class GTextureGroup_t;
class GCSosGroupActionSoundeventPrioritySchema;
class GCBonePositionMetricEvaluator;
class GCPhysSurfacePropertiesAudio;
class GCNmIDValueNode;
class GFeSimdNodeBase_t;
class GPermModelExtPart_t;
class GCCurrentRotationVelocityMetricEvaluator;
class GCAnimEventDefinition;
class GCAnimEnum;
class GCAnimFrameBlockAnim;
class GCNmVirtualParameterIDNode;
class GCFlashlightEffect;
class GFeBuildSphereRigid_t;
class GCAnimEncodedFrames;
class GEventSetTime_t;
class GOldFeEdge_t;
class GCStanceOverrideUpdateNode;
class Gconstraint_breakableparams_t;
class GCStateNodeTransitionData;
class GCMotionMatchingUpdateNode;
class GCNmSyncTrack__Event_t;
class GEventSplitScreenStateChanged_t;
class GParticleNamedValueSource_t;
class GMaterialParamBuffer_t;
class GEventPostDataUpdate_t;
class GRenderProjectedMaterial_t;
class GCSSDSMsg_ViewTargetList;
class GFeSimdAnimStrayRadius_t;
class GCAnimUser;
class GFeSpringIntegrator_t;
class GCModelConfigElement_UserPick;
class GRenderSkeletonBone_t;
class GAnimationDecodeDebugDump_t;
class GPARTICLE_EHANDLE__;
class GFeCollisionPlane_t;
class GCAnimCycle;
class GCNmSyncTrack__EventMarker_t;
class GCAnimGraphSettingsManager;
class GCRagdollUpdateNode;
class GCEntityComponentHelper;
class GCompositeMaterial_t;
class GSignatureOutflow_Continue;
class GWeightList;
class GRnBodyDesc_t;
class GCFeMorphLayer;
class GAnimNodeOutputID;
class GEventClientSceneSystemThreadStateChange_t;
class GEventClientPreSimulate_t;
class GClutterSceneObject_t;
class GCPoseHandle;
class GCAnimScriptBase;
class GCVoiceContainerBlender;
class Gvphysics_save_cphysicsbody_t;
class GCRagdollAnimTag;
class GIClientAlphaProperty;
class GPermModelData_t;
class GFootFixedSettings;
class GCSolveIKTargetHandle_t;
class GCBlendUpdateNode;
class GCAnimationGraphVisualizerSphere;
class GMaterialParamFloat_t;
class GEventServerSimulate_t;
class GCVoiceContainerEnvelopeAnalyzer;
class GFollowAttachmentSettings_t;
class GJiggleBoneSettings_t;
class GCAnimStateMachineUpdater;
class GCNmControlParameterFloatNode;
class GCSeqCmdLayer;
class GCAnimScriptComponentUpdater;
class GFeRigidColliderIndices_t;
class GCSeqAutoLayer;
class GBakedLightingInfo_t;
class GCExampleSchemaVData_PolymorphicBase;
class GFourVectors2D;
class GCOrientConstraint;
class GSequenceWeightedList_t;
class GCSosGroupActionMemberCountEnvelopeSchema;
class GFeRodConstraint_t;
class GFollowTargetOpFixedSettings_t;
class GCRenderSkeleton;
class GVMixConvolutionDesc_t;
class GCSosGroupBranchPattern;
class GCNmGraphDefinition__ExternalGraphSlot_t;
class GCNmStateMachineNode__StateDefinition_t;
class GCModelConfigElement_SetBodygroupOnAttachedModels;
class GCNmFootEvent;
class GCHandshakeAnimTagBase;
class GCBlend2DUpdateNode;
class GAnimationSnapshotBase_t;
class GCTiltTwistConstraint;
class GMaterialParamTexture_t;
class GCGlobalLightBase;
class GCModelConfigElement_SetBodygroup;
class GCModelConfigElement_AttachedModel;
class GCFollowAttachmentUpdateNode;
class GParticleChildrenInfo_t;
class GCVoiceContainerNull;
class GMoodAnimation_t;
class GCClientAlphaProperty;
class GCTimeRemainingMetricEvaluator;
class GNmSyncTrackTimeRange_t;
class GCAnimActivity;
class GCNmGraphDefinition;
class GCSolveIKChainUpdateNode;
class GEventClientPollNetworking_t;
class GCMeshletDescriptor;
class GCNmLayerBlendNode__LayerDefinition_t;
class GCAnimSequenceParams;
class GCDemoSettingsComponentUpdater;
class GCompositeMaterialAssemblyProcedure_t;
class GCTaskHandshakeAnimTag;
class GEventClientPauseSimulate_t;
class GCFireOverlay;
class GFeBuildTaperedCapsuleRigid_t;
class GCStateUpdateData;
class GCPhysSurfaceProperties;
class GCMotionSearchNode;
class GVMixVocoderDesc_t;
class GCAnimScriptManager;
class GCAnimationGraphVisualizerLine;
class GCFootTrajectory;
class GVMixModDelayDesc_t;
class GCHitBox;
class GCTestDomainDerived_Cursor;
class GCAudioMorphData;
class GCSeqIKLock;
class GFeQuad_t;
class GCSosGroupMatchPattern;
class GCSSDSEndFrameViewInfo;
class GCNmExternalGraphNode;
class GCMoverUpdateNode;
class GRnHull_t;
class GCMoodVData;
class GEventClientFrameSimulate_t;
class GCRagdollComponentUpdater;
class GCMotionNodeBlend1D;
class GCNmControlParameterVectorNode;
class GCPathHelperUpdateNode;
class GCSeqPoseParamDesc;
class GVMixPitchShiftDesc_t;
class GCAudioSentence;
class GCRenderBufferBinding;
class GCParticleAnimTag;
class GCStaticPoseCacheBuilder;
class GCNmRootMotionData;
class GCAnimReplayFrame;
class GCNmVirtualParameterBoneMaskNode;
class GCBlockSelectionMetricEvaluator;
class GCMotionGraph;
class GCSosSoundEventGroupSchema;
class GCFootMotion;
class GCDampedValueUpdateItem;
class GRnHalfEdge_t;
class GCAnimDataChannelDesc;
class GEventClientProcessNetworking_t;
class GCModelConfigList;
class GCNmGraphVariation;
class GCSosGroupActionTimeBlockLimitSchema;
class GVMixDynamics3BandDesc_t;
class GCModelConfigElement_SetMaterialGroup;
class GCMovementHandshakeAnimTag;
class GCSeqScaleSet;
class GEventClientProcessGameInput_t;
class GVsInputSignatureElement_t;
class GCompositeMaterialMatchFilter_t;
class GVertexPositionColor_t;
class GCFootTrajectories;
class GSceneObject_t;
class GCSSDSMsg_ViewTarget;
class GVMixSubgraphSwitchDesc_t;
class GCNmTransitionNode;
class GMotionDBIndex;
class GCToggleComponentActionUpdater;
class GCNmControlParameterIDNode;
class GPostProcessingTonemapParameters_t;
class GVMixAutoFilterDesc_t;
class GCSeqMultiFetch;
class GCNmStateMachineNode;
class GCBoneConstraintPoseSpaceMorph;
class GCSSDSMsg_PreLayer;
class GCSelectorUpdateNode;
class GCAimCameraUpdateNode;
class GCFootStepTriggerUpdateNode;
class GRnSoftbodyParticle_t;
class GCSingleFrameUpdateNode;
class GCSeqSynthAnimDesc;
class GCDirectPlaybackTagData;
class GEventFrameBoundary_t;
class GWorldNode_t;
class GAggregateMeshInfo_t;
class GFeSimdRodConstraintAnim_t;
class GEventPostAdvanceTick_t;
class GFeBuildBoxRigid_t;
class GIPhysicsPlayerController;
class GEventServerPostAdvanceTick_t;
class GEventClientPreOutput_t;
class GRnSoftbodySpring_t;
class GFeNodeReverseOffset_t;
class GRnHullDesc_t;
class GCSymbolAnimParameter;
class GFeStiffHingeBuild_t;
class GExtraVertexStreamOverride_t;
class GEntityIOConnectionData_t;
class GSkeletonAnimCapture_t;
class GCStateActionUpdater;
class GCSeqS1SeqDesc;
class GAimMatrixOpFixedSettings_t;
class GParticlePreviewState_t;
class GFeCtrlOsOffset_t;
class GCMorphData;
class GCAimMatrixUpdateNode;
class GCDirectionalBlendUpdateNode;
class GVMixPannerDesc_t;
class GFeSimdSpringIntegrator_t;
class GModelBoneFlexDriver_t;
class GCBoolAnimParameter;
class GEventAppShutdown_t;
class GResourceId_t;
class GCVoiceContainerRealtimeFMSineWave;
class GCNmVirtualParameterBoolNode;
class GCNmSyncTrack;
class GTagSpan_t;
class GCNmStateNode__TimedEvent_t;
class GCNmControlParameterTargetNode;
class GCFootstepLandedAnimTag;
class GCEnumAnimParameter;
class GCAnimationGraphVisualizerPie;
class GAnimationSnapshot_t;
class GVPhysXCollisionAttributes_t;
class GCActionComponentUpdater;
class GCNmVirtualParameterVectorNode;
class GCAnimFrameSegment;
class GCClothSettingsAnimTag;
class GVariableInfo_t;
class GVMixShaperDesc_t;
class GCSoundInfoHeader;
class GCVoiceContainerDecayingSineWave;
class GCCycleControlClipUpdateNode;
class GCBaseTrailRenderer;
class GCBoneConstraintPoseSpaceBone;
class GEventServerPostSimulate_t;
class GCChoreoUpdateNode;
class GCNmSkeleton;
class GVMixBoxverbDesc_t;
class GFeTreeChildren_t;
class GCSceneObjectData;
class GStanceInfo_t;
class GCMotionNodeSequence;
class GCFootCycleDefinition;
class GCAnimDesc_Flag;
class GCBoneVelocityMetricEvaluator;
class GCFuseProgram;
class GCFeVertexMapBuildArray;
class GFeSoftParent_t;
class GCFootFallAnimTag;
class GEventClientOutput_t;
class GMaterialVariable_t;
class GCFeNamedJiggleBone;
class GEventClientProcessInput_t;
class GJiggleBoneSettingsList_t;
class GCSequenceFinishedAnimTag;
class GCAnimationGraphVisualizerText;
class GCDampedPathAnimMotorUpdater;
class GLookAtOpFixedSettings_t;
class GCEntityIOOutput;
class GCDSPPresetMixgroupModifierTable;
class GRnWing_t;
class GCNmChildGraphNode;
class GVMixPlateverbDesc_t;
class GCMotionSearchDB;
class GVPhysics2ShapeDef_t;
class GWorldBuilderParams_t;
class GCFootAdjustmentUpdateNode;
class GCNmClipNode;
class GCAnimMorphDifference;
class GIParticleCollection;
class GCNmGraphDefinition__ChildGraphSlot_t;
class GCFutureVelocityMetricEvaluator;
class GCParticleProperty;
class GVertexPositionNormal_t;
class GFeEffectDesc_t;
class GCLODComponentUpdater;
class GCNmLegacyEvent;
class GMaterialParamVector_t;
class GCMotionGraphGroup;
class GHitReactFixedSettings_t;
class GCRootUpdateNode;
class GCAnimMovement;
class GCConstraintSlave;
class GCSeqBoneMaskList;
class GPermModelDataAnimatedMaterialAttribute_t;
class GScriptInfo_t;
class GVPhysXRange_t;
class GCJiggleBoneUpdateNode;
class GCollisionGroupContext_t;
class GCAudioPhonemeTag;
class GCAnimData;
class GSosEditItemInfo_t;
class GFeFitInfluence_t;
class GCInputStreamUpdateNode;
class GEventClientPollInput_t;
class GFeSimdQuad_t;
class GCEmitTagActionUpdater;
class GCAddUpdateNode;
class GCAnimTagManagerUpdater;
class GSampleCode;
class GCExpressionActionUpdater;
class GEventClientPostAdvanceTick_t;
class GBoneDemoCaptureSettings_t;
class GVPhysXBodyPart_t;
class GCDecalInfo;
class GParticleControlPointConfiguration_t;
class GVMixUtilityDesc_t;
class GCMotionGraphConfig;
class GCMovementComponentUpdater;
class GPointDefinition_t;
class GVMixEffectChainDesc_t;
class GCHitReactUpdateNode;
class GEntInput_t;
class GCNmVirtualParameterFloatNode;
class GCParticleSystemDefinition;
class GCVoiceContainerSelector;
class GCRegionSVM;
class GCSetParameterActionUpdater;
class GCAnimUpdateSharedData;
class GEventClientSimulate_t;
class GCVoiceContainerAmpedDecayingSineWave;
class GClutterTile_t;
class GPointDefinitionWithTimeValues_t;
class GFeVertexMapBuild_t;
class GCAnimDesc;
class GCTwistConstraint;
class GCNewParticleEffect;
class GCFeIndexedJiggleBone;
class GCFloatAnimParameter;
class GRnBlendVertex_t;
class GCVirtualAnimParameter;
class GCHitBoxSetList;
class GMaterialParamString_t;
class GVsInputSignature_t;
class GInfoOverlayData_t;
class GCastSphereSATParams_t;
class GCBindPoseUpdateNode;
class GVMixFreeverbDesc_t;
class GCCurrentVelocityMetricEvaluator;
class GCVoxelVisibility;
class GSelectedEditItemInfo_t;
class GChainToSolveData_t;
class GCGlowSprite;
class GCSSDSMsg_PostLayer;
class GCAnimBone;
class GVPhysXConstraint2_t;
class GCEditableMotionGraph;
class GCAnimKeyData;
class GEventPreDataUpdate_t;
class GWorld_t;
class GCVectorAnimParameter;
class GCNmControlParameterBoolNode;
class GCStateMachineUpdateNode;
class GCHitBoxSet;
class GCExampleSchemaVData_PolymorphicDerivedB;
class GFeSimdTri_t;
class GPostProcessingResource_t;
class GCNmStateNode;
class GNodeData_t;
class GCTaskStatusAnimTag;
class GCMaterialDrawDescriptor;
class GEventServerProcessNetworking_t;
class GCInterpolatedValue;
class GCMotionGraphUpdateNode;
class GCLookAtUpdateNode;
class GCFlexController;
class GCExampleSchemaVData_PolymorphicDerivedA;
class GEntityKeyValueData_t;
class GCFootStride;
class GCAnimationGroup;
class GCSubtractUpdateNode;
class GFeTaperedCapsuleStretch_t;
class GWorldNodeOnDiskBufferData_t;
class GEntComponentInfo_t;
class GCClientGapTypeQueryRegistration;
class GCNmVirtualParameterTargetNode;
class GCAudioAnimTag;
class GCRenderMesh;
class Gconstraint_hingeparams_t;
class GNmCompressionSettings_t;
class GCTurnHelperUpdateNode;
class GCSosGroupActionTimeLimitSchema;
class GCFollowTargetUpdateNode;
class GEventClientAdvanceNonRenderedFrame_t;
class GCSosSoundEventGroupListSchema;
class GCNmClip;
class GCFlexDesc;
class GCStateMachineComponentUpdater;
class GCompMatMutatorCondition_t;
class GFakeEntity_tAPI;
class GCBoneConstraintPoseSpaceMorph__Input_t;
class GCTwoBoneIKUpdateNode;
class GVMixDynamicsDesc_t;
class GFeVertexMapDesc_t;
class GFeSourceEdge_t;
class GCompositeMaterialEditorPoint_t;
class GVPhysXJoint_t;
class GCBodyGroupSetting;
class GRnSphereDesc_t;
class GCNmTarget;

class GCGlowProperty
{
private:
    void *m_ptr;

public:
    GCGlowProperty(std::string ptr);
    GCGlowProperty(void *ptr);

    Vector GetGlowColor() const;
    void SetGlowColor(Vector value);
    int32_t GetGlowType() const;
    void SetGlowType(int32_t value);
    int32_t GetGlowTeam() const;
    void SetGlowTeam(int32_t value);
    int32_t GetGlowRange() const;
    void SetGlowRange(int32_t value);
    int32_t GetGlowRangeMin() const;
    void SetGlowRangeMin(int32_t value);
    Color GetGlowColorOverride() const;
    void SetGlowColorOverride(Color value);
    bool GetFlashing() const;
    void SetFlashing(bool value);
    float GetGlowTime() const;
    void SetGlowTime(float value);
    float GetGlowStartTime() const;
    void SetGlowStartTime(float value);
    bool GetEligibleForScreenHighlight() const;
    void SetEligibleForScreenHighlight(bool value);
    bool GetGlowing() const;
    void SetGlowing(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCEntityComponent
{
private:
    void *m_ptr;

public:
    GCEntityComponent(std::string ptr);
    GCEntityComponent(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCPlayerPawnComponent
{
private:
    void *m_ptr;

public:
    GCPlayerPawnComponent(std::string ptr);
    GCPlayerPawnComponent(void *ptr);

    GCNetworkVarChainer Get__pChainEntity() const;
    void Set__pChainEntity(GCNetworkVarChainer value);

    std::string ToPtr();
    bool IsValid();
};

class Gfogparams_t
{
private:
    void *m_ptr;

public:
    Gfogparams_t(std::string ptr);
    Gfogparams_t(void *ptr);

    Vector GetDirPrimary() const;
    void SetDirPrimary(Vector value);
    Color GetColorPrimary() const;
    void SetColorPrimary(Color value);
    Color GetColorSecondary() const;
    void SetColorSecondary(Color value);
    Color GetColorPrimaryLerpTo() const;
    void SetColorPrimaryLerpTo(Color value);
    Color GetColorSecondaryLerpTo() const;
    void SetColorSecondaryLerpTo(Color value);
    float GetStart() const;
    void SetStart(float value);
    float GetEnd() const;
    void SetEnd(float value);
    float GetFarz() const;
    void SetFarz(float value);
    float GetMaxdensity() const;
    void SetMaxdensity(float value);
    float GetExponent() const;
    void SetExponent(float value);
    float GetHDRColorScale() const;
    void SetHDRColorScale(float value);
    float GetSkyboxFogFactor() const;
    void SetSkyboxFogFactor(float value);
    float GetSkyboxFogFactorLerpTo() const;
    void SetSkyboxFogFactorLerpTo(float value);
    float GetStartLerpTo() const;
    void SetStartLerpTo(float value);
    float GetEndLerpTo() const;
    void SetEndLerpTo(float value);
    float GetMaxdensityLerpTo() const;
    void SetMaxdensityLerpTo(float value);
    float GetDuration() const;
    void SetDuration(float value);
    float GetBlendtobackground() const;
    void SetBlendtobackground(float value);
    float GetScattering() const;
    void SetScattering(float value);
    float GetLocallightscale() const;
    void SetLocallightscale(float value);
    bool GetEnable() const;
    void SetEnable(bool value);
    bool GetBlend() const;
    void SetBlend(bool value);
    bool GetNoReflectionFog() const;
    void SetNoReflectionFog(bool value);
    bool GetPadding() const;
    void SetPadding(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCNetworkTransmitComponent
{
private:
    void *m_ptr;

public:
    GCNetworkTransmitComponent(std::string ptr);
    GCNetworkTransmitComponent(void *ptr);

    uint8_t GetTransmitStateOwnedCounter() const;
    void SetTransmitStateOwnedCounter(uint8_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCNetworkViewOffsetVector
{
private:
    void *m_ptr;

public:
    GCNetworkViewOffsetVector(std::string ptr);
    GCNetworkViewOffsetVector(void *ptr);

    float GetX() const;
    void SetX(float value);
    float GetY() const;
    void SetY(float value);
    float GetZ() const;
    void SetZ(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCNetworkVelocityVector
{
private:
    void *m_ptr;

public:
    GCNetworkVelocityVector(std::string ptr);
    GCNetworkVelocityVector(void *ptr);

    float GetX() const;
    void SetX(float value);
    float GetY() const;
    void SetY(float value);
    float GetZ() const;
    void SetZ(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCEntityInstance
{
private:
    void *m_ptr;

public:
    GCEntityInstance(std::string ptr);
    GCEntityInstance(void *ptr);

    CUtlSymbolLarge GetPrivateVScripts() const;
    void SetPrivateVScripts(CUtlSymbolLarge value);
    GCEntityIdentity GetEntity() const;
    void SetEntity(GCEntityIdentity* value);
    GCScriptComponent GetCScriptComponent() const;
    void SetCScriptComponent(GCScriptComponent* value);
    bool GetVisibleinPVS() const;
    void SetVisibleinPVS(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCBaseEntity
{
private:
    void *m_ptr;

public:
    GCBaseEntity(std::string ptr);
    GCBaseEntity(void *ptr);

    GCBodyComponent GetCBodyComponent() const;
    void SetCBodyComponent(GCBodyComponent* value);
    GCNetworkTransmitComponent GetNetworkTransmitComponent() const;
    void SetNetworkTransmitComponent(GCNetworkTransmitComponent value);
    std::vector<Gthinkfunc_t> GetThinkFunctions() const;
    void SetThinkFunctions(std::vector<Gthinkfunc_t> value);
    int32_t GetCurrentThinkContext() const;
    void SetCurrentThinkContext(int32_t value);
    bool GetDisabledContextThinks() const;
    void SetDisabledContextThinks(bool value);
    float GetLastNetworkChange() const;
    void SetLastNetworkChange(float value);
    std::vector<GResponseContext_t> GetResponseContexts() const;
    void SetResponseContexts(std::vector<GResponseContext_t> value);
    CUtlSymbolLarge GetResponseContext() const;
    void SetResponseContext(CUtlSymbolLarge value);
    int32_t GetHealth() const;
    void SetHealth(int32_t value);
    int32_t GetMaxHealth() const;
    void SetMaxHealth(int32_t value);
    uint8_t GetLifeState() const;
    void SetLifeState(uint8_t value);
    float GetDamageAccumulator() const;
    void SetDamageAccumulator(float value);
    bool GetTakesDamage() const;
    void SetTakesDamage(bool value);
    TakeDamageFlags_t GetTakeDamageFlags() const;
    void SetTakeDamageFlags(TakeDamageFlags_t value);
    bool GetIsPlatform() const;
    void SetIsPlatform(bool value);
    MoveCollide_t GetMoveCollide() const;
    void SetMoveCollide(MoveCollide_t value);
    MoveType_t GetMoveType() const;
    void SetMoveType(MoveType_t value);
    MoveType_t GetActualMoveType() const;
    void SetActualMoveType(MoveType_t value);
    uint8_t GetWaterTouch() const;
    void SetWaterTouch(uint8_t value);
    uint8_t GetSlimeTouch() const;
    void SetSlimeTouch(uint8_t value);
    bool GetRestoreInHierarchy() const;
    void SetRestoreInHierarchy(bool value);
    CUtlSymbolLarge GetTarget() const;
    void SetTarget(CUtlSymbolLarge value);
    GCBaseFilter GetDamageFilter() const;
    void SetDamageFilter(GCBaseFilter* value);
    CUtlSymbolLarge GetDamageFilterName() const;
    void SetDamageFilterName(CUtlSymbolLarge value);
    float GetMoveDoneTime() const;
    void SetMoveDoneTime(float value);
    CUtlStringToken GetSubclassID() const;
    void SetSubclassID(CUtlStringToken value);
    float GetAnimTime() const;
    void SetAnimTime(float value);
    float GetSimulationTime() const;
    void SetSimulationTime(float value);
    bool GetClientSideRagdoll() const;
    void SetClientSideRagdoll(bool value);
    uint8_t GetInterpolationFrame() const;
    void SetInterpolationFrame(uint8_t value);
    Vector GetPrevVPhysicsUpdatePos() const;
    void SetPrevVPhysicsUpdatePos(Vector value);
    uint8_t GetTeamNum() const;
    void SetTeamNum(uint8_t value);
    CUtlSymbolLarge GetGlobalname() const;
    void SetGlobalname(CUtlSymbolLarge value);
    int32_t GetSentToClients() const;
    void SetSentToClients(int32_t value);
    float GetSpeed() const;
    void SetSpeed(float value);
    CUtlString GetUniqueHammerID() const;
    void SetUniqueHammerID(CUtlString value);
    uint32_t GetSpawnflags() const;
    void SetSpawnflags(uint32_t value);
    int32_t GetSimulationTick() const;
    void SetSimulationTick(int32_t value);
    GCEntityIOOutput GetOnKilled() const;
    void SetOnKilled(GCEntityIOOutput value);
    uint32_t GetFlags() const;
    void SetFlags(uint32_t value);
    Vector GetAbsVelocity() const;
    void SetAbsVelocity(Vector value);
    GCNetworkVelocityVector GetVelocity() const;
    void SetVelocity(GCNetworkVelocityVector value);
    Vector GetBaseVelocity() const;
    void SetBaseVelocity(Vector value);
    int32_t GetPushEnumCount() const;
    void SetPushEnumCount(int32_t value);
    GCCollisionProperty GetCollision() const;
    void SetCollision(GCCollisionProperty* value);
    GCBaseEntity GetEffectEntity() const;
    void SetEffectEntity(GCBaseEntity* value);
    GCBaseEntity GetOwnerEntity() const;
    void SetOwnerEntity(GCBaseEntity* value);
    uint32_t GetEffects() const;
    void SetEffects(uint32_t value);
    GCBaseEntity GetGroundEntity() const;
    void SetGroundEntity(GCBaseEntity* value);
    int32_t GetGroundBodyIndex() const;
    void SetGroundBodyIndex(int32_t value);
    float GetFriction() const;
    void SetFriction(float value);
    float GetElasticity() const;
    void SetElasticity(float value);
    float GetGravityScale() const;
    void SetGravityScale(float value);
    float GetTimeScale() const;
    void SetTimeScale(float value);
    float GetWaterLevel() const;
    void SetWaterLevel(float value);
    bool GetAnimatedEveryTick() const;
    void SetAnimatedEveryTick(bool value);
    bool GetDisableLowViolence() const;
    void SetDisableLowViolence(bool value);
    uint8_t GetWaterType() const;
    void SetWaterType(uint8_t value);
    int32_t GetEFlags() const;
    void SetEFlags(int32_t value);
    GCEntityIOOutput GetOnUser1() const;
    void SetOnUser1(GCEntityIOOutput value);
    GCEntityIOOutput GetOnUser2() const;
    void SetOnUser2(GCEntityIOOutput value);
    GCEntityIOOutput GetOnUser3() const;
    void SetOnUser3(GCEntityIOOutput value);
    GCEntityIOOutput GetOnUser4() const;
    void SetOnUser4(GCEntityIOOutput value);
    int32_t GetInitialTeamNum() const;
    void SetInitialTeamNum(int32_t value);
    QAngle GetAngVelocity() const;
    void SetAngVelocity(QAngle value);
    bool GetNetworkQuantizeOriginAndAngles() const;
    void SetNetworkQuantizeOriginAndAngles(bool value);
    bool GetLagCompensate() const;
    void SetLagCompensate(bool value);
    float GetOverriddenFriction() const;
    void SetOverriddenFriction(float value);
    GCBaseEntity GetBlocker() const;
    void SetBlocker(GCBaseEntity* value);
    float GetLocalTime() const;
    void SetLocalTime(float value);
    float GetVPhysicsUpdateLocalTime() const;
    void SetVPhysicsUpdateLocalTime(float value);
    BloodType GetBloodType() const;
    void SetBloodType(BloodType value);

    std::string ToPtr();
    bool IsValid();
};

class GCPropDataComponent
{
private:
    void *m_ptr;

public:
    GCPropDataComponent(std::string ptr);
    GCPropDataComponent(void *ptr);

    float GetDmgModBullet() const;
    void SetDmgModBullet(float value);
    float GetDmgModClub() const;
    void SetDmgModClub(float value);
    float GetDmgModExplosive() const;
    void SetDmgModExplosive(float value);
    float GetDmgModFire() const;
    void SetDmgModFire(float value);
    CUtlSymbolLarge GetPhysicsDamageTableName() const;
    void SetPhysicsDamageTableName(CUtlSymbolLarge value);
    CUtlSymbolLarge GetBasePropData() const;
    void SetBasePropData(CUtlSymbolLarge value);
    int32_t GetInteractions() const;
    void SetInteractions(int32_t value);
    bool GetSpawnMotionDisabled() const;
    void SetSpawnMotionDisabled(bool value);
    int32_t GetDisableTakePhysicsDamageSpawnFlag() const;
    void SetDisableTakePhysicsDamageSpawnFlag(int32_t value);
    int32_t GetMotionDisabledSpawnFlag() const;
    void SetMotionDisabledSpawnFlag(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCHitboxComponent
{
private:
    void *m_ptr;

public:
    GCHitboxComponent(std::string ptr);
    GCHitboxComponent(void *ptr);

    std::vector<uint32_t> GetDisabledHitGroups() const;
    void SetDisabledHitGroups(std::vector<uint32_t> value);

    std::string ToPtr();
    bool IsValid();
};

class GVPhysicsCollisionAttribute_t
{
private:
    void *m_ptr;

public:
    GVPhysicsCollisionAttribute_t(std::string ptr);
    GVPhysicsCollisionAttribute_t(void *ptr);

    uint64_t GetInteractsAs() const;
    void SetInteractsAs(uint64_t value);
    uint64_t GetInteractsWith() const;
    void SetInteractsWith(uint64_t value);
    uint64_t GetInteractsExclude() const;
    void SetInteractsExclude(uint64_t value);
    uint32_t GetEntityId() const;
    void SetEntityId(uint32_t value);
    uint32_t GetOwnerId() const;
    void SetOwnerId(uint32_t value);
    uint16_t GetHierarchyId() const;
    void SetHierarchyId(uint16_t value);
    uint8_t GetCollisionGroup() const;
    void SetCollisionGroup(uint8_t value);
    uint8_t GetCollisionFunctionMask() const;
    void SetCollisionFunctionMask(uint8_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCCollisionProperty
{
private:
    void *m_ptr;

public:
    GCCollisionProperty(std::string ptr);
    GCCollisionProperty(void *ptr);

    GVPhysicsCollisionAttribute_t GetCollisionAttribute() const;
    void SetCollisionAttribute(GVPhysicsCollisionAttribute_t value);
    Vector GetMins() const;
    void SetMins(Vector value);
    Vector GetMaxs() const;
    void SetMaxs(Vector value);
    uint8_t GetSolidFlags() const;
    void SetSolidFlags(uint8_t value);
    SolidType_t GetSolidType() const;
    void SetSolidType(SolidType_t value);
    uint8_t GetTriggerBloat() const;
    void SetTriggerBloat(uint8_t value);
    SurroundingBoundsType_t GetSurroundType() const;
    void SetSurroundType(SurroundingBoundsType_t value);
    uint8_t GetCollisionGroup() const;
    void SetCollisionGroup(uint8_t value);
    uint8_t GetEnablePhysics() const;
    void SetEnablePhysics(uint8_t value);
    float GetBoundingRadius() const;
    void SetBoundingRadius(float value);
    Vector GetSpecifiedSurroundingMins() const;
    void SetSpecifiedSurroundingMins(Vector value);
    Vector GetSpecifiedSurroundingMaxs() const;
    void SetSpecifiedSurroundingMaxs(Vector value);
    Vector GetSurroundingMaxs() const;
    void SetSurroundingMaxs(Vector value);
    Vector GetSurroundingMins() const;
    void SetSurroundingMins(Vector value);
    Vector GetCapsuleCenter1() const;
    void SetCapsuleCenter1(Vector value);
    Vector GetCapsuleCenter2() const;
    void SetCapsuleCenter2(Vector value);
    float GetCapsuleRadius() const;
    void SetCapsuleRadius(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCBaseModelEntity
{
private:
    void *m_ptr;

public:
    GCBaseModelEntity(std::string ptr);
    GCBaseModelEntity(void *ptr);

    GCRenderComponent GetCRenderComponent() const;
    void SetCRenderComponent(GCRenderComponent* value);
    GCHitboxComponent GetCHitboxComponent() const;
    void SetCHitboxComponent(GCHitboxComponent value);
    GCEntityIOOutput GetOnIgnite() const;
    void SetOnIgnite(GCEntityIOOutput value);
    RenderMode_t GetRenderMode() const;
    void SetRenderMode(RenderMode_t value);
    RenderFx_t GetRenderFX() const;
    void SetRenderFX(RenderFx_t value);
    bool GetAllowFadeInView() const;
    void SetAllowFadeInView(bool value);
    Color GetRender() const;
    void SetRender(Color value);
    std::vector<GEntityRenderAttribute_t> GetRenderAttributes() const;
    void SetRenderAttributes(std::vector<GEntityRenderAttribute_t> value);
    bool GetRenderToCubemaps() const;
    void SetRenderToCubemaps(bool value);
    GCCollisionProperty GetCollision() const;
    void SetCollision(GCCollisionProperty value);
    GCGlowProperty GetGlow() const;
    void SetGlow(GCGlowProperty value);
    float GetGlowBackfaceMult() const;
    void SetGlowBackfaceMult(float value);
    float GetFadeMinDist() const;
    void SetFadeMinDist(float value);
    float GetFadeMaxDist() const;
    void SetFadeMaxDist(float value);
    float GetFadeScale() const;
    void SetFadeScale(float value);
    float GetShadowStrength() const;
    void SetShadowStrength(float value);
    uint8_t GetObjectCulling() const;
    void SetObjectCulling(uint8_t value);
    int32_t GetAddDecal() const;
    void SetAddDecal(int32_t value);
    Vector GetDecalPosition() const;
    void SetDecalPosition(Vector value);
    Vector GetDecalForwardAxis() const;
    void SetDecalForwardAxis(Vector value);
    float GetDecalHealBloodRate() const;
    void SetDecalHealBloodRate(float value);
    float GetDecalHealHeightRate() const;
    void SetDecalHealHeightRate(float value);
    std::vector<GCBaseModelEntity*> GetConfigEntitiesToPropagateMaterialDecalsTo() const;
    void SetConfigEntitiesToPropagateMaterialDecalsTo(std::vector<GCBaseModelEntity*> value);
    GCNetworkViewOffsetVector GetViewOffset() const;
    void SetViewOffset(GCNetworkViewOffsetVector value);

    std::string ToPtr();
    bool IsValid();
};

class GCServerOnlyEntity
{
private:
    void *m_ptr;

public:
    GCServerOnlyEntity(std::string ptr);
    GCServerOnlyEntity(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCBaseToggle
{
private:
    void *m_ptr;

public:
    GCBaseToggle(std::string ptr);
    GCBaseToggle(void *ptr);

    TOGGLE_STATE GetToggle_state() const;
    void SetToggle_state(TOGGLE_STATE value);
    float GetMoveDistance() const;
    void SetMoveDistance(float value);
    float GetWait() const;
    void SetWait(float value);
    float GetLip() const;
    void SetLip(float value);
    bool GetAlwaysFireBlockedOutputs() const;
    void SetAlwaysFireBlockedOutputs(bool value);
    Vector GetPosition1() const;
    void SetPosition1(Vector value);
    Vector GetPosition2() const;
    void SetPosition2(Vector value);
    QAngle GetMoveAng() const;
    void SetMoveAng(QAngle value);
    QAngle GetAngle1() const;
    void SetAngle1(QAngle value);
    QAngle GetAngle2() const;
    void SetAngle2(QAngle value);
    float GetHeight() const;
    void SetHeight(float value);
    GCBaseEntity GetActivator() const;
    void SetActivator(GCBaseEntity* value);
    Vector GetFinalDest() const;
    void SetFinalDest(Vector value);
    QAngle GetFinalAngle() const;
    void SetFinalAngle(QAngle value);
    int32_t GetMovementType() const;
    void SetMovementType(int32_t value);
    CUtlSymbolLarge GetMaster() const;
    void SetMaster(CUtlSymbolLarge value);

    std::string ToPtr();
    bool IsValid();
};

class GCBaseTrigger
{
private:
    void *m_ptr;

public:
    GCBaseTrigger(std::string ptr);
    GCBaseTrigger(void *ptr);

    bool GetDisabled() const;
    void SetDisabled(bool value);
    CUtlSymbolLarge GetFilterName() const;
    void SetFilterName(CUtlSymbolLarge value);
    GCBaseFilter GetFilter() const;
    void SetFilter(GCBaseFilter* value);
    GCEntityIOOutput GetOnStartTouch() const;
    void SetOnStartTouch(GCEntityIOOutput value);
    GCEntityIOOutput GetOnStartTouchAll() const;
    void SetOnStartTouchAll(GCEntityIOOutput value);
    GCEntityIOOutput GetOnEndTouch() const;
    void SetOnEndTouch(GCEntityIOOutput value);
    GCEntityIOOutput GetOnEndTouchAll() const;
    void SetOnEndTouchAll(GCEntityIOOutput value);
    GCEntityIOOutput GetOnTouching() const;
    void SetOnTouching(GCEntityIOOutput value);
    GCEntityIOOutput GetOnTouchingEachEntity() const;
    void SetOnTouchingEachEntity(GCEntityIOOutput value);
    GCEntityIOOutput GetOnNotTouching() const;
    void SetOnNotTouching(GCEntityIOOutput value);
    bool GetClientSidePredicted() const;
    void SetClientSidePredicted(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCTriggerProximity
{
private:
    void *m_ptr;

public:
    GCTriggerProximity(std::string ptr);
    GCTriggerProximity(void *ptr);

    GCBaseEntity GetMeasureTarget() const;
    void SetMeasureTarget(GCBaseEntity* value);
    CUtlSymbolLarge GetMeasureTarget1() const;
    void SetMeasureTarget1(CUtlSymbolLarge value);
    float GetRadius() const;
    void SetRadius(float value);
    int32_t GetTouchers() const;
    void SetTouchers(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCLogicalEntity
{
private:
    void *m_ptr;

public:
    GCLogicalEntity(std::string ptr);
    GCLogicalEntity(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCTriggerPush
{
private:
    void *m_ptr;

public:
    GCTriggerPush(std::string ptr);
    GCTriggerPush(void *ptr);

    QAngle GetPushEntitySpace() const;
    void SetPushEntitySpace(QAngle value);
    Vector GetPushDirEntitySpace() const;
    void SetPushDirEntitySpace(Vector value);
    bool GetTriggerOnStartTouch() const;
    void SetTriggerOnStartTouch(bool value);
    bool GetUsePathSimple() const;
    void SetUsePathSimple(bool value);
    CUtlSymbolLarge GetPathSimpleName() const;
    void SetPathSimpleName(CUtlSymbolLarge value);
    GCPathSimple GetPathSimple() const;
    void SetPathSimple(GCPathSimple* value);
    uint32_t GetSplinePushType() const;
    void SetSplinePushType(uint32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCTriggerMultiple
{
private:
    void *m_ptr;

public:
    GCTriggerMultiple(std::string ptr);
    GCTriggerMultiple(void *ptr);

    GCEntityIOOutput GetOnTrigger() const;
    void SetOnTrigger(GCEntityIOOutput value);

    std::string ToPtr();
    bool IsValid();
};

class GCBasePlatTrain
{
private:
    void *m_ptr;

public:
    GCBasePlatTrain(std::string ptr);
    GCBasePlatTrain(void *ptr);

    CUtlSymbolLarge GetNoiseMoving() const;
    void SetNoiseMoving(CUtlSymbolLarge value);
    CUtlSymbolLarge GetNoiseArrived() const;
    void SetNoiseArrived(CUtlSymbolLarge value);
    float GetVolume() const;
    void SetVolume(float value);
    float GetTWidth() const;
    void SetTWidth(float value);
    float GetTLength() const;
    void SetTLength(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCTonemapTrigger
{
private:
    void *m_ptr;

public:
    GCTonemapTrigger(std::string ptr);
    GCTonemapTrigger(void *ptr);

    CUtlSymbolLarge GetTonemapControllerName() const;
    void SetTonemapControllerName(CUtlSymbolLarge value);
    GCEntityInstance GetTonemapController() const;
    void SetTonemapController(GCEntityInstance* value);

    std::string ToPtr();
    bool IsValid();
};

class GCEconItemAttribute
{
private:
    void *m_ptr;

public:
    GCEconItemAttribute(std::string ptr);
    GCEconItemAttribute(void *ptr);

    uint16_t GetAttributeDefinitionIndex() const;
    void SetAttributeDefinitionIndex(uint16_t value);
    float GetValue() const;
    void SetValue(float value);
    float GetInitialValue() const;
    void SetInitialValue(float value);
    int32_t GetRefundableCurrency() const;
    void SetRefundableCurrency(int32_t value);
    bool GetSetBonus() const;
    void SetSetBonus(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCIronSightController
{
private:
    void *m_ptr;

public:
    GCIronSightController(std::string ptr);
    GCIronSightController(void *ptr);

    bool GetIronSightAvailable() const;
    void SetIronSightAvailable(bool value);
    float GetIronSightAmount() const;
    void SetIronSightAmount(float value);
    float GetIronSightAmountGained() const;
    void SetIronSightAmountGained(float value);
    float GetIronSightAmountBiased() const;
    void SetIronSightAmountBiased(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCFogTrigger
{
private:
    void *m_ptr;

public:
    GCFogTrigger(std::string ptr);
    GCFogTrigger(void *ptr);

    Gfogparams_t GetFog() const;
    void SetFog(Gfogparams_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCBaseFilter
{
private:
    void *m_ptr;

public:
    GCBaseFilter(std::string ptr);
    GCBaseFilter(void *ptr);

    bool GetNegated() const;
    void SetNegated(bool value);
    GCEntityIOOutput GetOnPass() const;
    void SetOnPass(GCEntityIOOutput value);
    GCEntityIOOutput GetOnFail() const;
    void SetOnFail(GCEntityIOOutput value);

    std::string ToPtr();
    bool IsValid();
};

class GCCSPointScriptExtensions_weapon_cs_base
{
private:
    void *m_ptr;

public:
    GCCSPointScriptExtensions_weapon_cs_base(std::string ptr);
    GCCSPointScriptExtensions_weapon_cs_base(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCTriggerHostageReset
{
private:
    void *m_ptr;

public:
    GCTriggerHostageReset(std::string ptr);
    GCTriggerHostageReset(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCServerOnlyPointEntity
{
private:
    void *m_ptr;

public:
    GCServerOnlyPointEntity(std::string ptr);
    GCServerOnlyPointEntity(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCPointEntity
{
private:
    void *m_ptr;

public:
    GCPointEntity(std::string ptr);
    GCPointEntity(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCountdownTimer
{
private:
    void *m_ptr;

public:
    GCountdownTimer(std::string ptr);
    GCountdownTimer(void *ptr);

    float GetDuration() const;
    void SetDuration(float value);
    float GetTimescale() const;
    void SetTimescale(float value);
    WorldGroupId_t GetWorldGroupId() const;
    void SetWorldGroupId(WorldGroupId_t value);

    std::string ToPtr();
    bool IsValid();
};

class GSceneEventId_t
{
private:
    void *m_ptr;

public:
    GSceneEventId_t(std::string ptr);
    GSceneEventId_t(void *ptr);

    uint32_t GetValue() const;
    void SetValue(uint32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCBuoyancyHelper
{
private:
    void *m_ptr;

public:
    GCBuoyancyHelper(std::string ptr);
    GCBuoyancyHelper(void *ptr);

    float GetFluidDensity() const;
    void SetFluidDensity(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCMoverPathNode
{
private:
    void *m_ptr;

public:
    GCMoverPathNode(std::string ptr);
    GCMoverPathNode(void *ptr);

    Vector GetInTangentLocal() const;
    void SetInTangentLocal(Vector value);
    Vector GetOutTangentLocal() const;
    void SetOutTangentLocal(Vector value);
    CUtlSymbolLarge GetParentPathUniqueID() const;
    void SetParentPathUniqueID(CUtlSymbolLarge value);
    GCEntityIOOutput GetOnPassThrough() const;
    void SetOnPassThrough(GCEntityIOOutput value);
    GCPathMover GetMover() const;
    void SetMover(GCPathMover* value);

    std::string ToPtr();
    bool IsValid();
};

class GCBtNode
{
private:
    void *m_ptr;

public:
    GCBtNode(std::string ptr);
    GCBtNode(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCPlayer_ViewModelServices
{
private:
    void *m_ptr;

public:
    GCPlayer_ViewModelServices(std::string ptr);
    GCPlayer_ViewModelServices(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GIEconItemInterface
{
private:
    void *m_ptr;

public:
    GIEconItemInterface(std::string ptr);
    GIEconItemInterface(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCEnvSoundscape
{
private:
    void *m_ptr;

public:
    GCEnvSoundscape(std::string ptr);
    GCEnvSoundscape(void *ptr);

    GCEntityIOOutput GetOnPlay() const;
    void SetOnPlay(GCEntityIOOutput value);
    float GetRadius() const;
    void SetRadius(float value);
    CUtlSymbolLarge GetSoundscapeName() const;
    void SetSoundscapeName(CUtlSymbolLarge value);
    CUtlSymbolLarge GetSoundEventName() const;
    void SetSoundEventName(CUtlSymbolLarge value);
    bool GetOverrideWithEvent() const;
    void SetOverrideWithEvent(bool value);
    int32_t GetSoundscapeIndex() const;
    void SetSoundscapeIndex(int32_t value);
    int32_t GetSoundscapeEntityListId() const;
    void SetSoundscapeEntityListId(int32_t value);
    uint32_t GetSoundEventHash() const;
    void SetSoundEventHash(uint32_t value);
    std::vector<CUtlSymbolLarge> GetPositionNames() const;
    void SetPositionNames(std::vector<CUtlSymbolLarge> value);
    GCEnvSoundscape GetProxySoundscape() const;
    void SetProxySoundscape(GCEnvSoundscape* value);
    bool GetDisabled() const;
    void SetDisabled(bool value);

    std::string ToPtr();
    bool IsValid();
};

class Gfogplayerparams_t
{
private:
    void *m_ptr;

public:
    Gfogplayerparams_t(std::string ptr);
    Gfogplayerparams_t(void *ptr);

    GCFogController GetCtrl() const;
    void SetCtrl(GCFogController* value);
    float GetTransitionTime() const;
    void SetTransitionTime(float value);
    Color GetOldColor() const;
    void SetOldColor(Color value);
    float GetOldStart() const;
    void SetOldStart(float value);
    float GetOldEnd() const;
    void SetOldEnd(float value);
    float GetOldMaxDensity() const;
    void SetOldMaxDensity(float value);
    float GetOldHDRColorScale() const;
    void SetOldHDRColorScale(float value);
    float GetOldFarZ() const;
    void SetOldFarZ(float value);
    Color GetNewColor() const;
    void SetNewColor(Color value);
    float GetNewStart() const;
    void SetNewStart(float value);
    float GetNewEnd() const;
    void SetNewEnd(float value);
    float GetNewMaxDensity() const;
    void SetNewMaxDensity(float value);
    float GetNewHDRColorScale() const;
    void SetNewHDRColorScale(float value);
    float GetNewFarZ() const;
    void SetNewFarZ(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCFogController
{
private:
    void *m_ptr;

public:
    GCFogController(std::string ptr);
    GCFogController(void *ptr);

    Gfogparams_t GetFog() const;
    void SetFog(Gfogparams_t value);
    bool GetUseAngles() const;
    void SetUseAngles(bool value);
    int32_t GetChangedVariables() const;
    void SetChangedVariables(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCAttributeList
{
private:
    void *m_ptr;

public:
    GCAttributeList(std::string ptr);
    GCAttributeList(void *ptr);

    std::vector<GCEconItemAttribute> GetAttributes() const;
    void SetAttributes(std::vector<GCEconItemAttribute> value);
    GCAttributeManager GetManager() const;
    void SetManager(GCAttributeManager* value);

    std::string ToPtr();
    bool IsValid();
};

class GCModelState
{
private:
    void *m_ptr;

public:
    GCModelState(std::string ptr);
    GCModelState(void *ptr);

    CUtlSymbolLarge GetModelName() const;
    void SetModelName(CUtlSymbolLarge value);
    bool GetClientClothCreationSuppressed() const;
    void SetClientClothCreationSuppressed(bool value);
    uint64_t GetMeshGroupMask() const;
    void SetMeshGroupMask(uint64_t value);
    int8_t GetIdealMotionType() const;
    void SetIdealMotionType(int8_t value);
    int8_t GetForceLOD() const;
    void SetForceLOD(int8_t value);
    int8_t GetClothUpdateFlags() const;
    void SetClothUpdateFlags(int8_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCBaseAnimGraph
{
private:
    void *m_ptr;

public:
    GCBaseAnimGraph(std::string ptr);
    GCBaseAnimGraph(void *ptr);

    bool GetInitiallyPopulateInterpHistory() const;
    void SetInitiallyPopulateInterpHistory(bool value);
    GIChoreoServices GetChoreoServices() const;
    void SetChoreoServices(GIChoreoServices* value);
    bool GetAnimGraphUpdateEnabled() const;
    void SetAnimGraphUpdateEnabled(bool value);
    float GetMaxSlopeDistance() const;
    void SetMaxSlopeDistance(float value);
    Vector GetLastSlopeCheckPos() const;
    void SetLastSlopeCheckPos(Vector value);
    bool GetAnimationUpdateScheduled() const;
    void SetAnimationUpdateScheduled(bool value);
    Vector GetForce() const;
    void SetForce(Vector value);
    int32_t GetForceBone() const;
    void SetForceBone(int32_t value);
    GPhysicsRagdollPose_t GetRagdollPose() const;
    void SetRagdollPose(GPhysicsRagdollPose_t* value);
    bool GetRagdollClientSide() const;
    void SetRagdollClientSide(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCEnableMotionFixup
{
private:
    void *m_ptr;

public:
    GCEnableMotionFixup(std::string ptr);
    GCEnableMotionFixup(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCInButtonState
{
private:
    void *m_ptr;

public:
    GCInButtonState(std::string ptr);
    GCInButtonState(void *ptr);

    std::vector<uint64_t> GetButtonStates() const;
    void SetButtonStates(std::vector<uint64_t> value);

    std::string ToPtr();
    bool IsValid();
};

class GCBtNodeDecorator
{
private:
    void *m_ptr;

public:
    GCBtNodeDecorator(std::string ptr);
    GCBtNodeDecorator(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCAttributeManager
{
private:
    void *m_ptr;

public:
    GCAttributeManager(std::string ptr);
    GCAttributeManager(void *ptr);

    int32_t GetReapplyProvisionParity() const;
    void SetReapplyProvisionParity(int32_t value);
    GCBaseEntity GetOuter() const;
    void SetOuter(GCBaseEntity* value);
    bool GetPreventLoopback() const;
    void SetPreventLoopback(bool value);
    attributeprovidertypes_t GetProviderType() const;
    void SetProviderType(attributeprovidertypes_t value);
    std::vector<GCAttributeManager> GetCachedResults() const;
    void SetCachedResults(std::vector<GCAttributeManager> value);

    std::string ToPtr();
    bool IsValid();
};

class GFilterHealth
{
private:
    void *m_ptr;

public:
    GFilterHealth(std::string ptr);
    GFilterHealth(void *ptr);

    bool GetAdrenalineActive() const;
    void SetAdrenalineActive(bool value);
    int32_t GetHealthMin() const;
    void SetHealthMin(int32_t value);
    int32_t GetHealthMax() const;
    void SetHealthMax(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCPlayerPing
{
private:
    void *m_ptr;

public:
    GCPlayerPing(std::string ptr);
    GCPlayerPing(void *ptr);

    GCCSPlayerPawn GetPlayer() const;
    void SetPlayer(GCCSPlayerPawn* value);
    GCBaseEntity GetPingedEntity() const;
    void SetPingedEntity(GCBaseEntity* value);
    int32_t GetType() const;
    void SetType(int32_t value);
    bool GetUrgent() const;
    void SetUrgent(bool value);
    std::string GetPlaceName() const;
    void SetPlaceName(std::string value);

    std::string ToPtr();
    bool IsValid();
};

class GCCSPointScriptEntity
{
private:
    void *m_ptr;

public:
    GCCSPointScriptEntity(std::string ptr);
    GCCSPointScriptEntity(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCNetworkOriginCellCoordQuantizedVector
{
private:
    void *m_ptr;

public:
    GCNetworkOriginCellCoordQuantizedVector(std::string ptr);
    GCNetworkOriginCellCoordQuantizedVector(void *ptr);

    uint16_t GetCellX() const;
    void SetCellX(uint16_t value);
    uint16_t GetCellY() const;
    void SetCellY(uint16_t value);
    uint16_t GetCellZ() const;
    void SetCellZ(uint16_t value);
    uint16_t GetOutsideWorld() const;
    void SetOutsideWorld(uint16_t value);
    float GetX() const;
    void SetX(float value);
    float GetY() const;
    void SetY(float value);
    float GetZ() const;
    void SetZ(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCInfoLandmark
{
private:
    void *m_ptr;

public:
    GCInfoLandmark(std::string ptr);
    GCInfoLandmark(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCBaseFlex
{
private:
    void *m_ptr;

public:
    GCBaseFlex(std::string ptr);
    GCBaseFlex(void *ptr);

    std::vector<float32> GetFlexWeight() const;
    void SetFlexWeight(std::vector<float32> value);
    Vector GetLookTargetPosition() const;
    void SetLookTargetPosition(Vector value);
    bool GetBlinktoggle() const;
    void SetBlinktoggle(bool value);
    GSceneEventId_t GetNextSceneEventId() const;
    void SetNextSceneEventId(GSceneEventId_t value);
    bool GetUpdateLayerPriorities() const;
    void SetUpdateLayerPriorities(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCEconItemView
{
private:
    void *m_ptr;

public:
    GCEconItemView(std::string ptr);
    GCEconItemView(void *ptr);

    uint16_t GetItemDefinitionIndex() const;
    void SetItemDefinitionIndex(uint16_t value);
    int32_t GetEntityQuality() const;
    void SetEntityQuality(int32_t value);
    uint32_t GetEntityLevel() const;
    void SetEntityLevel(uint32_t value);
    uint64_t GetItemID() const;
    void SetItemID(uint64_t value);
    uint32_t GetItemIDHigh() const;
    void SetItemIDHigh(uint32_t value);
    uint32_t GetItemIDLow() const;
    void SetItemIDLow(uint32_t value);
    uint32_t GetAccountID() const;
    void SetAccountID(uint32_t value);
    uint32_t GetInventoryPosition() const;
    void SetInventoryPosition(uint32_t value);
    bool GetInitialized() const;
    void SetInitialized(bool value);
    GCAttributeList GetAttributeList() const;
    void SetAttributeList(GCAttributeList value);
    GCAttributeList GetNetworkedDynamicAttributes() const;
    void SetNetworkedDynamicAttributes(GCAttributeList value);
    std::string GetCustomName() const;
    void SetCustomName(std::string value);
    std::string GetCustomNameOverride() const;
    void SetCustomNameOverride(std::string value);

    std::string ToPtr();
    bool IsValid();
};

class GCAnimGraphNetworkedVariables
{
private:
    void *m_ptr;

public:
    GCAnimGraphNetworkedVariables(std::string ptr);
    GCAnimGraphNetworkedVariables(void *ptr);

    std::vector<uint32> GetPredNetBoolVariables() const;
    void SetPredNetBoolVariables(std::vector<uint32> value);
    std::vector<uint8> GetPredNetByteVariables() const;
    void SetPredNetByteVariables(std::vector<uint8> value);
    std::vector<uint16> GetPredNetUInt16Variables() const;
    void SetPredNetUInt16Variables(std::vector<uint16> value);
    std::vector<int32> GetPredNetIntVariables() const;
    void SetPredNetIntVariables(std::vector<int32> value);
    std::vector<uint32> GetPredNetUInt32Variables() const;
    void SetPredNetUInt32Variables(std::vector<uint32> value);
    std::vector<uint64> GetPredNetUInt64Variables() const;
    void SetPredNetUInt64Variables(std::vector<uint64> value);
    std::vector<float32> GetPredNetFloatVariables() const;
    void SetPredNetFloatVariables(std::vector<float32> value);
    std::vector<Vector> GetPredNetVectorVariables() const;
    void SetPredNetVectorVariables(std::vector<Vector> value);
    std::vector<Quaternion> GetPredNetQuaternionVariables() const;
    void SetPredNetQuaternionVariables(std::vector<Quaternion> value);
    std::vector<uint32> GetOwnerOnlyPredNetBoolVariables() const;
    void SetOwnerOnlyPredNetBoolVariables(std::vector<uint32> value);
    std::vector<uint8> GetOwnerOnlyPredNetByteVariables() const;
    void SetOwnerOnlyPredNetByteVariables(std::vector<uint8> value);
    std::vector<uint16> GetOwnerOnlyPredNetUInt16Variables() const;
    void SetOwnerOnlyPredNetUInt16Variables(std::vector<uint16> value);
    std::vector<int32> GetOwnerOnlyPredNetIntVariables() const;
    void SetOwnerOnlyPredNetIntVariables(std::vector<int32> value);
    std::vector<uint32> GetOwnerOnlyPredNetUInt32Variables() const;
    void SetOwnerOnlyPredNetUInt32Variables(std::vector<uint32> value);
    std::vector<uint64> GetOwnerOnlyPredNetUInt64Variables() const;
    void SetOwnerOnlyPredNetUInt64Variables(std::vector<uint64> value);
    std::vector<float32> GetOwnerOnlyPredNetFloatVariables() const;
    void SetOwnerOnlyPredNetFloatVariables(std::vector<float32> value);
    std::vector<Vector> GetOwnerOnlyPredNetVectorVariables() const;
    void SetOwnerOnlyPredNetVectorVariables(std::vector<Vector> value);
    std::vector<Quaternion> GetOwnerOnlyPredNetQuaternionVariables() const;
    void SetOwnerOnlyPredNetQuaternionVariables(std::vector<Quaternion> value);
    int32_t GetBoolVariablesCount() const;
    void SetBoolVariablesCount(int32_t value);
    int32_t GetOwnerOnlyBoolVariablesCount() const;
    void SetOwnerOnlyBoolVariablesCount(int32_t value);
    int32_t GetRandomSeedOffset() const;
    void SetRandomSeedOffset(int32_t value);
    float GetLastTeleportTime() const;
    void SetLastTeleportTime(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCBodyComponent
{
private:
    void *m_ptr;

public:
    GCBodyComponent(std::string ptr);
    GCBodyComponent(void *ptr);

    GCGameSceneNode GetSceneNode() const;
    void SetSceneNode(GCGameSceneNode* value);
    GCNetworkVarChainer Get__pChainEntity() const;
    void Set__pChainEntity(GCNetworkVarChainer value);

    std::string ToPtr();
    bool IsValid();
};

class GCEnvFireSensor
{
private:
    void *m_ptr;

public:
    GCEnvFireSensor(std::string ptr);
    GCEnvFireSensor(void *ptr);

    bool GetEnabled() const;
    void SetEnabled(bool value);
    bool GetHeatAtLevel() const;
    void SetHeatAtLevel(bool value);
    float GetRadius() const;
    void SetRadius(float value);
    float GetTargetLevel() const;
    void SetTargetLevel(float value);
    float GetTargetTime() const;
    void SetTargetTime(float value);
    float GetLevelTime() const;
    void SetLevelTime(float value);
    GCEntityIOOutput GetOnHeatLevelStart() const;
    void SetOnHeatLevelStart(GCEntityIOOutput value);
    GCEntityIOOutput GetOnHeatLevelEnd() const;
    void SetOnHeatLevelEnd(GCEntityIOOutput value);

    std::string ToPtr();
    bool IsValid();
};

class GCCSGO_TeamPreviewCharacterPosition
{
private:
    void *m_ptr;

public:
    GCCSGO_TeamPreviewCharacterPosition(std::string ptr);
    GCCSGO_TeamPreviewCharacterPosition(void *ptr);

    int32_t GetVariant() const;
    void SetVariant(int32_t value);
    int32_t GetRandom() const;
    void SetRandom(int32_t value);
    int32_t GetOrdinal() const;
    void SetOrdinal(int32_t value);
    CUtlString GetWeaponName() const;
    void SetWeaponName(CUtlString value);
    uint64_t GetXuid() const;
    void SetXuid(uint64_t value);
    GCEconItemView GetAgentItem() const;
    void SetAgentItem(GCEconItemView value);
    GCEconItemView GetGlovesItem() const;
    void SetGlovesItem(GCEconItemView value);
    GCEconItemView GetWeaponItem() const;
    void SetWeaponItem(GCEconItemView value);

    std::string ToPtr();
    bool IsValid();
};

class GCEnvWindShared__WindAveEvent_t
{
private:
    void *m_ptr;

public:
    GCEnvWindShared__WindAveEvent_t(std::string ptr);
    GCEnvWindShared__WindAveEvent_t(void *ptr);

    float GetStartWindSpeed() const;
    void SetStartWindSpeed(float value);
    float GetAveWindSpeed() const;
    void SetAveWindSpeed(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCBaseProp
{
private:
    void *m_ptr;

public:
    GCBaseProp(std::string ptr);
    GCBaseProp(void *ptr);

    bool GetModelOverrodeBlockLOS() const;
    void SetModelOverrodeBlockLOS(bool value);
    int32_t GetShapeType() const;
    void SetShapeType(int32_t value);
    bool GetConformToCollisionBounds() const;
    void SetConformToCollisionBounds(bool value);
    matrix3x4_t GetMPreferredCatchTransform() const;
    void SetMPreferredCatchTransform(matrix3x4_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCPointGamestatsCounter
{
private:
    void *m_ptr;

public:
    GCPointGamestatsCounter(std::string ptr);
    GCPointGamestatsCounter(void *ptr);

    CUtlSymbolLarge GetStrStatisticName() const;
    void SetStrStatisticName(CUtlSymbolLarge value);
    bool GetDisabled() const;
    void SetDisabled(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCPhysicsShake
{
private:
    void *m_ptr;

public:
    GCPhysicsShake(std::string ptr);
    GCPhysicsShake(void *ptr);

    Vector GetForce() const;
    void SetForce(Vector value);

    std::string ToPtr();
    bool IsValid();
};

class GCBreakable
{
private:
    void *m_ptr;

public:
    GCBreakable(std::string ptr);
    GCBreakable(void *ptr);

    GCPropDataComponent GetCPropDataComponent() const;
    void SetCPropDataComponent(GCPropDataComponent value);
    Materials GetMaterial() const;
    void SetMaterial(Materials value);
    GCBaseEntity GetBreaker() const;
    void SetBreaker(GCBaseEntity* value);
    Explosions GetExplosion() const;
    void SetExplosion(Explosions value);
    CUtlSymbolLarge GetSpawnObject() const;
    void SetSpawnObject(CUtlSymbolLarge value);
    float GetPressureDelay() const;
    void SetPressureDelay(float value);
    int32_t GetMinHealthDmg() const;
    void SetMinHealthDmg(int32_t value);
    CUtlSymbolLarge GetPropData() const;
    void SetPropData(CUtlSymbolLarge value);
    float GetImpactEnergyScale() const;
    void SetImpactEnergyScale(float value);
    EOverrideBlockLOS_t GetOverrideBlockLOS() const;
    void SetOverrideBlockLOS(EOverrideBlockLOS_t value);
    GCEntityIOOutput GetOnBreak() const;
    void SetOnBreak(GCEntityIOOutput value);
    PerformanceMode_t GetPerformanceMode() const;
    void SetPerformanceMode(PerformanceMode_t value);
    GCBasePlayerPawn GetPhysicsAttacker() const;
    void SetPhysicsAttacker(GCBasePlayerPawn* value);

    std::string ToPtr();
    bool IsValid();
};

class GCPathKeyFrame
{
private:
    void *m_ptr;

public:
    GCPathKeyFrame(std::string ptr);
    GCPathKeyFrame(void *ptr);

    Vector GetOrigin() const;
    void SetOrigin(Vector value);
    QAngle GetAngles() const;
    void SetAngles(QAngle value);
    Quaternion GetAngle() const;
    void SetAngle(Quaternion value);
    CUtlSymbolLarge GetNextKey() const;
    void SetNextKey(CUtlSymbolLarge value);
    float GetNextTime() const;
    void SetNextTime(float value);
    GCPathKeyFrame GetNextKey1() const;
    void SetNextKey1(GCPathKeyFrame* value);
    GCPathKeyFrame GetPrevKey() const;
    void SetPrevKey(GCPathKeyFrame* value);
    float GetMoveSpeed() const;
    void SetMoveSpeed(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCTriggerTripWire
{
private:
    void *m_ptr;

public:
    GCTriggerTripWire(std::string ptr);
    GCTriggerTripWire(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCEnvTilt
{
private:
    void *m_ptr;

public:
    GCEnvTilt(std::string ptr);
    GCEnvTilt(void *ptr);

    float GetDuration() const;
    void SetDuration(float value);
    float GetRadius() const;
    void SetRadius(float value);
    float GetTiltTime() const;
    void SetTiltTime(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCAttributeContainer
{
private:
    void *m_ptr;

public:
    GCAttributeContainer(std::string ptr);
    GCAttributeContainer(void *ptr);

    GCEconItemView GetItem() const;
    void SetItem(GCEconItemView value);

    std::string ToPtr();
    bool IsValid();
};

class GCItemGenericTriggerHelper
{
private:
    void *m_ptr;

public:
    GCItemGenericTriggerHelper(std::string ptr);
    GCItemGenericTriggerHelper(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCLogicBranchList
{
private:
    void *m_ptr;

public:
    GCLogicBranchList(std::string ptr);
    GCLogicBranchList(void *ptr);

    std::vector<CUtlSymbolLarge> GetLogicBranchNames() const;
    void SetLogicBranchNames(std::vector<CUtlSymbolLarge> value);
    GCLogicBranchList GetLastState() const;
    void SetLastState(GCLogicBranchList value);
    GCEntityIOOutput GetOnAllTrue() const;
    void SetOnAllTrue(GCEntityIOOutput value);
    GCEntityIOOutput GetOnAllFalse() const;
    void SetOnAllFalse(GCEntityIOOutput value);
    GCEntityIOOutput GetOnMixed() const;
    void SetOnMixed(GCEntityIOOutput value);

    std::string ToPtr();
    bool IsValid();
};

class Gaudioparams_t
{
private:
    void *m_ptr;

public:
    Gaudioparams_t(std::string ptr);
    Gaudioparams_t(void *ptr);

    std::vector<Vector> GetLocalSound() const;
    void SetLocalSound(std::vector<Vector> value);
    int32_t GetSoundscapeIndex() const;
    void SetSoundscapeIndex(int32_t value);
    uint8_t GetLocalBits() const;
    void SetLocalBits(uint8_t value);
    int32_t GetSoundscapeEntityListIndex() const;
    void SetSoundscapeEntityListIndex(int32_t value);
    uint32_t GetSoundEventHash() const;
    void SetSoundEventHash(uint32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCEconEntity
{
private:
    void *m_ptr;

public:
    GCEconEntity(std::string ptr);
    GCEconEntity(void *ptr);

    GCAttributeContainer GetAttributeManager() const;
    void SetAttributeManager(GCAttributeContainer value);
    uint32_t GetOriginalOwnerXuidLow() const;
    void SetOriginalOwnerXuidLow(uint32_t value);
    uint32_t GetOriginalOwnerXuidHigh() const;
    void SetOriginalOwnerXuidHigh(uint32_t value);
    int32_t GetFallbackPaintKit() const;
    void SetFallbackPaintKit(int32_t value);
    int32_t GetFallbackSeed() const;
    void SetFallbackSeed(int32_t value);
    float GetFallbackWear() const;
    void SetFallbackWear(float value);
    int32_t GetFallbackStatTrak() const;
    void SetFallbackStatTrak(int32_t value);
    GCBaseEntity GetOldProvidee() const;
    void SetOldProvidee(GCBaseEntity* value);
    int32_t GetOldOwnerClass() const;
    void SetOldOwnerClass(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCModelPointEntity
{
private:
    void *m_ptr;

public:
    GCModelPointEntity(std::string ptr);
    GCModelPointEntity(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCMultiLightProxy
{
private:
    void *m_ptr;

public:
    GCMultiLightProxy(std::string ptr);
    GCMultiLightProxy(void *ptr);

    CUtlSymbolLarge GetLightNameFilter() const;
    void SetLightNameFilter(CUtlSymbolLarge value);
    CUtlSymbolLarge GetLightClassFilter() const;
    void SetLightClassFilter(CUtlSymbolLarge value);
    float GetLightRadiusFilter() const;
    void SetLightRadiusFilter(float value);
    float GetBrightnessDelta() const;
    void SetBrightnessDelta(float value);
    bool GetPerformScreenFade() const;
    void SetPerformScreenFade(bool value);
    float GetTargetBrightnessMultiplier() const;
    void SetTargetBrightnessMultiplier(float value);
    float GetCurrentBrightnessMultiplier() const;
    void SetCurrentBrightnessMultiplier(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCEffectData
{
private:
    void *m_ptr;

public:
    GCEffectData(std::string ptr);
    GCEffectData(void *ptr);

    Vector GetOrigin() const;
    void SetOrigin(Vector value);
    Vector GetStart() const;
    void SetStart(Vector value);
    Vector GetNormal() const;
    void SetNormal(Vector value);
    QAngle GetAngles() const;
    void SetAngles(QAngle value);
    GCEntityInstance GetEntity() const;
    void SetEntity(GCEntityInstance* value);
    GCEntityInstance GetOtherEntity() const;
    void SetOtherEntity(GCEntityInstance* value);
    float GetScale() const;
    void SetScale(float value);
    float GetMagnitude() const;
    void SetMagnitude(float value);
    float GetRadius() const;
    void SetRadius(float value);
    CUtlStringToken GetSurfaceProp() const;
    void SetSurfaceProp(CUtlStringToken value);
    uint32_t GetDamageType() const;
    void SetDamageType(uint32_t value);
    uint8_t GetPenetrate() const;
    void SetPenetrate(uint8_t value);
    uint16_t GetMaterial() const;
    void SetMaterial(uint16_t value);
    uint16_t GetHitBox() const;
    void SetHitBox(uint16_t value);
    uint8_t GetColor() const;
    void SetColor(uint8_t value);
    uint8_t GetFlags() const;
    void SetFlags(uint8_t value);
    CUtlStringToken GetAttachmentName() const;
    void SetAttachmentName(CUtlStringToken value);
    uint16_t GetEffectName() const;
    void SetEffectName(uint16_t value);
    uint8_t GetExplosionType() const;
    void SetExplosionType(uint8_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCEntityBlocker
{
private:
    void *m_ptr;

public:
    GCEntityBlocker(std::string ptr);
    GCEntityBlocker(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCLogicCase
{
private:
    void *m_ptr;

public:
    GCLogicCase(std::string ptr);
    GCLogicCase(void *ptr);

    std::vector<CUtlSymbolLarge> GetCase() const;
    void SetCase(std::vector<CUtlSymbolLarge> value);
    int32_t GetShuffleCases() const;
    void SetShuffleCases(int32_t value);
    int32_t GetLastShuffleCase() const;
    void SetLastShuffleCase(int32_t value);
    std::vector<uint8_t> GetUchShuffleCaseMap() const;
    void SetUchShuffleCaseMap(std::vector<uint8_t> value);
    std::vector<GCEntityIOOutput> GetOnCase() const;
    void SetOnCase(std::vector<GCEntityIOOutput> value);

    std::string ToPtr();
    bool IsValid();
};

class GCItem
{
private:
    void *m_ptr;

public:
    GCItem(std::string ptr);
    GCItem(void *ptr);

    GCEntityIOOutput GetOnPlayerTouch() const;
    void SetOnPlayerTouch(GCEntityIOOutput value);
    GCEntityIOOutput GetOnPlayerPickup() const;
    void SetOnPlayerPickup(GCEntityIOOutput value);
    bool GetActivateWhenAtRest() const;
    void SetActivateWhenAtRest(bool value);
    GCEntityIOOutput GetOnCacheInteraction() const;
    void SetOnCacheInteraction(GCEntityIOOutput value);
    GCEntityIOOutput GetOnGlovePulled() const;
    void SetOnGlovePulled(GCEntityIOOutput value);
    Vector GetOriginalSpawnOrigin() const;
    void SetOriginalSpawnOrigin(Vector value);
    QAngle GetOriginalSpawnAngles() const;
    void SetOriginalSpawnAngles(QAngle value);
    bool GetPhysStartAsleep() const;
    void SetPhysStartAsleep(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCRuleEntity
{
private:
    void *m_ptr;

public:
    GCRuleEntity(std::string ptr);
    GCRuleEntity(void *ptr);

    CUtlSymbolLarge GetMaster() const;
    void SetMaster(CUtlSymbolLarge value);

    std::string ToPtr();
    bool IsValid();
};

class GExtent
{
private:
    void *m_ptr;

public:
    GExtent(std::string ptr);
    GExtent(void *ptr);

    Vector GetLo() const;
    void SetLo(Vector value);
    Vector GetHi() const;
    void SetHi(Vector value);

    std::string ToPtr();
    bool IsValid();
};

class GCSoundEventEntity
{
private:
    void *m_ptr;

public:
    GCSoundEventEntity(std::string ptr);
    GCSoundEventEntity(void *ptr);

    bool GetStartOnSpawn() const;
    void SetStartOnSpawn(bool value);
    bool GetToLocalPlayer() const;
    void SetToLocalPlayer(bool value);
    bool GetStopOnNew() const;
    void SetStopOnNew(bool value);
    bool GetSaveRestore() const;
    void SetSaveRestore(bool value);
    bool GetSavedIsPlaying() const;
    void SetSavedIsPlaying(bool value);
    float GetSavedElapsedTime() const;
    void SetSavedElapsedTime(float value);
    CUtlSymbolLarge GetSourceEntityName() const;
    void SetSourceEntityName(CUtlSymbolLarge value);
    CUtlSymbolLarge GetAttachmentName() const;
    void SetAttachmentName(CUtlSymbolLarge value);
    GCEntityIOOutput GetOnSoundFinished() const;
    void SetOnSoundFinished(GCEntityIOOutput value);
    CUtlSymbolLarge GetSoundName() const;
    void SetSoundName(CUtlSymbolLarge value);
    GCEntityInstance GetSource() const;
    void SetSource(GCEntityInstance* value);
    int32_t GetEntityIndexSelection() const;
    void SetEntityIndexSelection(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCCSPlayer_ViewModelServices
{
private:
    void *m_ptr;

public:
    GCCSPlayer_ViewModelServices(std::string ptr);
    GCCSPlayer_ViewModelServices(void *ptr);

    std::vector<GCBaseViewModel*> GetViewModel() const;
    void SetViewModel(std::vector<GCBaseViewModel*> value);

    std::string ToPtr();
    bool IsValid();
};

class GCBasePlayerWeapon
{
private:
    void *m_ptr;

public:
    GCBasePlayerWeapon(std::string ptr);
    GCBasePlayerWeapon(void *ptr);

    float GetNextPrimaryAttackTickRatio() const;
    void SetNextPrimaryAttackTickRatio(float value);
    float GetNextSecondaryAttackTickRatio() const;
    void SetNextSecondaryAttackTickRatio(float value);
    int32_t GetClip1() const;
    void SetClip1(int32_t value);
    int32_t GetClip2() const;
    void SetClip2(int32_t value);
    std::vector<int32_t> GetReserveAmmo() const;
    void SetReserveAmmo(std::vector<int32_t> value);
    GCEntityIOOutput GetOnPlayerUse() const;
    void SetOnPlayerUse(GCEntityIOOutput value);

    std::string ToPtr();
    bool IsValid();
};

class GCInfoParticleTarget
{
private:
    void *m_ptr;

public:
    GCInfoParticleTarget(std::string ptr);
    GCInfoParticleTarget(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCEnvVolumetricFogController
{
private:
    void *m_ptr;

public:
    GCEnvVolumetricFogController(std::string ptr);
    GCEnvVolumetricFogController(void *ptr);

    float GetScattering() const;
    void SetScattering(float value);
    float GetAnisotropy() const;
    void SetAnisotropy(float value);
    float GetFadeSpeed() const;
    void SetFadeSpeed(float value);
    float GetDrawDistance() const;
    void SetDrawDistance(float value);
    float GetFadeInStart() const;
    void SetFadeInStart(float value);
    float GetFadeInEnd() const;
    void SetFadeInEnd(float value);
    float GetIndirectStrength() const;
    void SetIndirectStrength(float value);
    int32_t GetIndirectTextureDimX() const;
    void SetIndirectTextureDimX(int32_t value);
    int32_t GetIndirectTextureDimY() const;
    void SetIndirectTextureDimY(int32_t value);
    int32_t GetIndirectTextureDimZ() const;
    void SetIndirectTextureDimZ(int32_t value);
    Vector GetBoxMins() const;
    void SetBoxMins(Vector value);
    Vector GetBoxMaxs() const;
    void SetBoxMaxs(Vector value);
    bool GetActive() const;
    void SetActive(bool value);
    float GetStartAnisotropy() const;
    void SetStartAnisotropy(float value);
    float GetStartScattering() const;
    void SetStartScattering(float value);
    float GetStartDrawDistance() const;
    void SetStartDrawDistance(float value);
    float GetDefaultAnisotropy() const;
    void SetDefaultAnisotropy(float value);
    float GetDefaultScattering() const;
    void SetDefaultScattering(float value);
    float GetDefaultDrawDistance() const;
    void SetDefaultDrawDistance(float value);
    bool GetStartDisabled() const;
    void SetStartDisabled(bool value);
    bool GetEnableIndirect() const;
    void SetEnableIndirect(bool value);
    bool GetIndirectUseLPVs() const;
    void SetIndirectUseLPVs(bool value);
    bool GetIsMaster() const;
    void SetIsMaster(bool value);
    int32_t GetForceRefreshCount() const;
    void SetForceRefreshCount(int32_t value);
    float GetNoiseSpeed() const;
    void SetNoiseSpeed(float value);
    float GetNoiseStrength() const;
    void SetNoiseStrength(float value);
    Vector GetNoiseScale() const;
    void SetNoiseScale(Vector value);
    bool GetFirstTime() const;
    void SetFirstTime(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCPlayer_MovementServices
{
private:
    void *m_ptr;

public:
    GCPlayer_MovementServices(std::string ptr);
    GCPlayer_MovementServices(void *ptr);

    int32_t GetImpulse() const;
    void SetImpulse(int32_t value);
    GCInButtonState GetButtons() const;
    void SetButtons(GCInButtonState value);
    uint64_t GetQueuedButtonDownMask() const;
    void SetQueuedButtonDownMask(uint64_t value);
    uint64_t GetQueuedButtonChangeMask() const;
    void SetQueuedButtonChangeMask(uint64_t value);
    uint64_t GetButtonDoublePressed() const;
    void SetButtonDoublePressed(uint64_t value);
    std::vector<uint32_t> GetButtonPressedCmdNumber() const;
    void SetButtonPressedCmdNumber(std::vector<uint32_t> value);
    uint32_t GetLastCommandNumberProcessed() const;
    void SetLastCommandNumberProcessed(uint32_t value);
    uint64_t GetToggleButtonDownMask() const;
    void SetToggleButtonDownMask(uint64_t value);
    float GetMaxspeed() const;
    void SetMaxspeed(float value);
    std::vector<float> GetForceSubtickMoveWhen() const;
    void SetForceSubtickMoveWhen(std::vector<float> value);
    float GetForwardMove() const;
    void SetForwardMove(float value);
    float GetLeftMove() const;
    void SetLeftMove(float value);
    float GetUpMove() const;
    void SetUpMove(float value);
    Vector GetLastMovementImpulses() const;
    void SetLastMovementImpulses(Vector value);
    QAngle GetOldViewAngles() const;
    void SetOldViewAngles(QAngle value);

    std::string ToPtr();
    bool IsValid();
};

class GCBreakableProp
{
private:
    void *m_ptr;

public:
    GCBreakableProp(std::string ptr);
    GCBreakableProp(void *ptr);

    GCPropDataComponent GetCPropDataComponent() const;
    void SetCPropDataComponent(GCPropDataComponent value);
    GCEntityIOOutput GetOnBreak() const;
    void SetOnBreak(GCEntityIOOutput value);
    GCEntityIOOutput GetOnTakeDamage() const;
    void SetOnTakeDamage(GCEntityIOOutput value);
    float GetImpactEnergyScale() const;
    void SetImpactEnergyScale(float value);
    int32_t GetMinHealthDmg() const;
    void SetMinHealthDmg(int32_t value);
    QAngle GetPreferredCarryAngles() const;
    void SetPreferredCarryAngles(QAngle value);
    float GetPressureDelay() const;
    void SetPressureDelay(float value);
    float GetDefBurstScale() const;
    void SetDefBurstScale(float value);
    Vector GetDefBurstOffset() const;
    void SetDefBurstOffset(Vector value);
    GCBaseEntity GetBreaker() const;
    void SetBreaker(GCBaseEntity* value);
    PerformanceMode_t GetPerformanceMode() const;
    void SetPerformanceMode(PerformanceMode_t value);
    bool GetHasBreakPiecesOrCommands() const;
    void SetHasBreakPiecesOrCommands(bool value);
    float GetExplodeDamage() const;
    void SetExplodeDamage(float value);
    float GetExplodeRadius() const;
    void SetExplodeRadius(float value);
    float GetExplosionDelay() const;
    void SetExplosionDelay(float value);
    CUtlSymbolLarge GetExplosionBuildupSound() const;
    void SetExplosionBuildupSound(CUtlSymbolLarge value);
    CUtlSymbolLarge GetExplosionCustomEffect() const;
    void SetExplosionCustomEffect(CUtlSymbolLarge value);
    CUtlSymbolLarge GetExplosionCustomSound() const;
    void SetExplosionCustomSound(CUtlSymbolLarge value);
    CUtlSymbolLarge GetExplosionModifier() const;
    void SetExplosionModifier(CUtlSymbolLarge value);
    GCBasePlayerPawn GetPhysicsAttacker() const;
    void SetPhysicsAttacker(GCBasePlayerPawn* value);
    bool GetOriginalBlockLOS() const;
    void SetOriginalBlockLOS(bool value);
    float GetDefaultFadeScale() const;
    void SetDefaultFadeScale(float value);
    GCBaseEntity GetLastAttacker() const;
    void SetLastAttacker(GCBaseEntity* value);
    GCBaseEntity GetFlareEnt() const;
    void SetFlareEnt(GCBaseEntity* value);
    bool GetUsePuntSound() const;
    void SetUsePuntSound(bool value);
    CUtlSymbolLarge GetPuntSound() const;
    void SetPuntSound(CUtlSymbolLarge value);
    bool GetNoGhostCollision() const;
    void SetNoGhostCollision(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCEnvSoundscapeProxy
{
private:
    void *m_ptr;

public:
    GCEnvSoundscapeProxy(std::string ptr);
    GCEnvSoundscapeProxy(void *ptr);

    CUtlSymbolLarge GetMainSoundscapeName() const;
    void SetMainSoundscapeName(CUtlSymbolLarge value);

    std::string ToPtr();
    bool IsValid();
};

class GCPhysConstraint
{
private:
    void *m_ptr;

public:
    GCPhysConstraint(std::string ptr);
    GCPhysConstraint(void *ptr);

    CUtlSymbolLarge GetNameAttach1() const;
    void SetNameAttach1(CUtlSymbolLarge value);
    CUtlSymbolLarge GetNameAttach2() const;
    void SetNameAttach2(CUtlSymbolLarge value);
    GCBaseEntity GetAttach1() const;
    void SetAttach1(GCBaseEntity* value);
    GCBaseEntity GetAttach2() const;
    void SetAttach2(GCBaseEntity* value);
    CUtlSymbolLarge GetNameAttachment1() const;
    void SetNameAttachment1(CUtlSymbolLarge value);
    CUtlSymbolLarge GetNameAttachment2() const;
    void SetNameAttachment2(CUtlSymbolLarge value);
    CUtlSymbolLarge GetBreakSound() const;
    void SetBreakSound(CUtlSymbolLarge value);
    float GetForceLimit() const;
    void SetForceLimit(float value);
    float GetTorqueLimit() const;
    void SetTorqueLimit(float value);
    uint32_t GetTeleportTick() const;
    void SetTeleportTick(uint32_t value);
    float GetMinTeleportDistance() const;
    void SetMinTeleportDistance(float value);
    bool GetSnapObjectPositions() const;
    void SetSnapObjectPositions(bool value);
    GCEntityIOOutput GetOnBreak() const;
    void SetOnBreak(GCEntityIOOutput value);

    std::string ToPtr();
    bool IsValid();
};

class GCCSGameModeRules
{
private:
    void *m_ptr;

public:
    GCCSGameModeRules(std::string ptr);
    GCCSGameModeRules(void *ptr);

    GCNetworkVarChainer Get__pChainEntity() const;
    void Set__pChainEntity(GCNetworkVarChainer value);

    std::string ToPtr();
    bool IsValid();
};

class GCItemAssaultSuit
{
private:
    void *m_ptr;

public:
    GCItemAssaultSuit(std::string ptr);
    GCItemAssaultSuit(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCInfoPlayerStart
{
private:
    void *m_ptr;

public:
    GCInfoPlayerStart(std::string ptr);
    GCInfoPlayerStart(void *ptr);

    bool GetDisabled() const;
    void SetDisabled(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCSoundOpvarSetPointBase
{
private:
    void *m_ptr;

public:
    GCSoundOpvarSetPointBase(std::string ptr);
    GCSoundOpvarSetPointBase(void *ptr);

    bool GetDisabled() const;
    void SetDisabled(bool value);
    GCEntityInstance GetSource() const;
    void SetSource(GCEntityInstance* value);
    CUtlSymbolLarge GetSourceEntityName() const;
    void SetSourceEntityName(CUtlSymbolLarge value);
    Vector GetLastPosition() const;
    void SetLastPosition(Vector value);
    CUtlSymbolLarge GetStackName() const;
    void SetStackName(CUtlSymbolLarge value);
    CUtlSymbolLarge GetOperatorName() const;
    void SetOperatorName(CUtlSymbolLarge value);
    CUtlSymbolLarge GetOpvarName() const;
    void SetOpvarName(CUtlSymbolLarge value);
    int32_t GetOpvarIndex() const;
    void SetOpvarIndex(int32_t value);
    bool GetUseAutoCompare() const;
    void SetUseAutoCompare(bool value);

    std::string ToPtr();
    bool IsValid();
};

class Gragdoll_t
{
private:
    void *m_ptr;

public:
    Gragdoll_t(std::string ptr);
    Gragdoll_t(void *ptr);

    std::vector<Gragdollelement_t> GetList() const;
    void SetList(std::vector<Gragdollelement_t> value);
    std::vector<int32> GetBoneIndex() const;
    void SetBoneIndex(std::vector<int32> value);
    bool GetAllowStretch() const;
    void SetAllowStretch(bool value);
    bool GetUnused() const;
    void SetUnused(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCItemDogtags
{
private:
    void *m_ptr;

public:
    GCItemDogtags(std::string ptr);
    GCItemDogtags(void *ptr);

    GCCSPlayerPawn GetOwningPlayer() const;
    void SetOwningPlayer(GCCSPlayerPawn* value);
    GCCSPlayerPawn GetKillingPlayer() const;
    void SetKillingPlayer(GCCSPlayerPawn* value);

    std::string ToPtr();
    bool IsValid();
};

class GCLightEntity
{
private:
    void *m_ptr;

public:
    GCLightEntity(std::string ptr);
    GCLightEntity(void *ptr);

    GCLightComponent GetCLightComponent() const;
    void SetCLightComponent(GCLightComponent* value);

    std::string ToPtr();
    bool IsValid();
};

class GCPlayer_WaterServices
{
private:
    void *m_ptr;

public:
    GCPlayer_WaterServices(std::string ptr);
    GCPlayer_WaterServices(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCSkyboxReference
{
private:
    void *m_ptr;

public:
    GCSkyboxReference(std::string ptr);
    GCSkyboxReference(void *ptr);

    WorldGroupId_t GetWorldGroupId() const;
    void SetWorldGroupId(WorldGroupId_t value);
    GCSkyCamera GetSkyCamera() const;
    void SetSkyCamera(GCSkyCamera* value);

    std::string ToPtr();
    bool IsValid();
};

class GCDynamicProp
{
private:
    void *m_ptr;

public:
    GCDynamicProp(std::string ptr);
    GCDynamicProp(void *ptr);

    bool GetCreateNavObstacle() const;
    void SetCreateNavObstacle(bool value);
    bool GetUseHitboxesForRenderBox() const;
    void SetUseHitboxesForRenderBox(bool value);
    bool GetUseAnimGraph() const;
    void SetUseAnimGraph(bool value);
    GCEntityIOOutput GetOutputAnimBegun() const;
    void SetOutputAnimBegun(GCEntityIOOutput value);
    GCEntityIOOutput GetOutputAnimOver() const;
    void SetOutputAnimOver(GCEntityIOOutput value);
    GCEntityIOOutput GetOutputAnimLoopCycleOver() const;
    void SetOutputAnimLoopCycleOver(GCEntityIOOutput value);
    GCEntityIOOutput GetOnAnimReachedStart() const;
    void SetOnAnimReachedStart(GCEntityIOOutput value);
    GCEntityIOOutput GetOnAnimReachedEnd() const;
    void SetOnAnimReachedEnd(GCEntityIOOutput value);
    CUtlSymbolLarge GetIdleAnim() const;
    void SetIdleAnim(CUtlSymbolLarge value);
    AnimLoopMode_t GetIdleAnimLoopMode() const;
    void SetIdleAnimLoopMode(AnimLoopMode_t value);
    bool GetRandomizeCycle() const;
    void SetRandomizeCycle(bool value);
    bool GetStartDisabled() const;
    void SetStartDisabled(bool value);
    bool GetFiredStartEndOutput() const;
    void SetFiredStartEndOutput(bool value);
    bool GetForceNpcExclude() const;
    void SetForceNpcExclude(bool value);
    bool GetCreateNonSolid() const;
    void SetCreateNonSolid(bool value);
    bool GetIsOverrideProp() const;
    void SetIsOverrideProp(bool value);
    int32_t GetInitialGlowState() const;
    void SetInitialGlowState(int32_t value);
    int32_t GetGlowRange() const;
    void SetGlowRange(int32_t value);
    int32_t GetGlowRangeMin() const;
    void SetGlowRangeMin(int32_t value);
    Color GetGlowColor() const;
    void SetGlowColor(Color value);
    int32_t GetGlowTeam() const;
    void SetGlowTeam(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCRopeKeyframe
{
private:
    void *m_ptr;

public:
    GCRopeKeyframe(std::string ptr);
    GCRopeKeyframe(void *ptr);

    uint16_t GetRopeFlags() const;
    void SetRopeFlags(uint16_t value);
    CUtlSymbolLarge GetNextLinkName() const;
    void SetNextLinkName(CUtlSymbolLarge value);
    int16_t GetSlack() const;
    void SetSlack(int16_t value);
    float GetWidth() const;
    void SetWidth(float value);
    float GetTextureScale() const;
    void SetTextureScale(float value);
    uint8_t GetSegments() const;
    void SetSegments(uint8_t value);
    bool GetConstrainBetweenEndpoints() const;
    void SetConstrainBetweenEndpoints(bool value);
    CUtlSymbolLarge GetStrRopeMaterialModel() const;
    void SetStrRopeMaterialModel(CUtlSymbolLarge value);
    uint8_t GetSubdiv() const;
    void SetSubdiv(uint8_t value);
    uint8_t GetChangeCount() const;
    void SetChangeCount(uint8_t value);
    int16_t GetRopeLength() const;
    void SetRopeLength(int16_t value);
    uint8_t GetLockedPoints() const;
    void SetLockedPoints(uint8_t value);
    bool GetCreatedFromMapFile() const;
    void SetCreatedFromMapFile(bool value);
    float GetScrollSpeed() const;
    void SetScrollSpeed(float value);
    bool GetStartPointValid() const;
    void SetStartPointValid(bool value);
    bool GetEndPointValid() const;
    void SetEndPointValid(bool value);
    GCBaseEntity GetStartPoint() const;
    void SetStartPoint(GCBaseEntity* value);
    GCBaseEntity GetEndPoint() const;
    void SetEndPoint(GCBaseEntity* value);

    std::string ToPtr();
    bool IsValid();
};

class GCBarnLight
{
private:
    void *m_ptr;

public:
    GCBarnLight(std::string ptr);
    GCBarnLight(void *ptr);

    bool GetEnabled() const;
    void SetEnabled(bool value);
    int32_t GetColorMode() const;
    void SetColorMode(int32_t value);
    Color GetColor() const;
    void SetColor(Color value);
    float GetColorTemperature() const;
    void SetColorTemperature(float value);
    float GetBrightness() const;
    void SetBrightness(float value);
    float GetBrightnessScale() const;
    void SetBrightnessScale(float value);
    int32_t GetDirectLight() const;
    void SetDirectLight(int32_t value);
    int32_t GetBakedShadowIndex() const;
    void SetBakedShadowIndex(int32_t value);
    int32_t GetLuminaireShape() const;
    void SetLuminaireShape(int32_t value);
    float GetLuminaireSize() const;
    void SetLuminaireSize(float value);
    float GetLuminaireAnisotropy() const;
    void SetLuminaireAnisotropy(float value);
    CUtlString GetLightStyleString() const;
    void SetLightStyleString(CUtlString value);
    std::vector<CUtlString> GetQueuedLightStyleStrings() const;
    void SetQueuedLightStyleStrings(std::vector<CUtlString> value);
    std::vector<CUtlString> GetLightStyleEvents() const;
    void SetLightStyleEvents(std::vector<CUtlString> value);
    std::vector<GCBaseModelEntity*> GetLightStyleTargets() const;
    void SetLightStyleTargets(std::vector<GCBaseModelEntity*> value);
    std::vector<GCEntityIOOutput> GetStyleEvent() const;
    void SetStyleEvent(std::vector<GCEntityIOOutput> value);
    float GetShape() const;
    void SetShape(float value);
    float GetSoftX() const;
    void SetSoftX(float value);
    float GetSoftY() const;
    void SetSoftY(float value);
    float GetSkirt() const;
    void SetSkirt(float value);
    float GetSkirtNear() const;
    void SetSkirtNear(float value);
    Vector GetSizeParams() const;
    void SetSizeParams(Vector value);
    float GetRange() const;
    void SetRange(float value);
    Vector GetShear() const;
    void SetShear(Vector value);
    int32_t GetBakeSpecularToCubemaps() const;
    void SetBakeSpecularToCubemaps(int32_t value);
    Vector GetBakeSpecularToCubemapsSize() const;
    void SetBakeSpecularToCubemapsSize(Vector value);
    int32_t GetCastShadows() const;
    void SetCastShadows(int32_t value);
    int32_t GetShadowMapSize() const;
    void SetShadowMapSize(int32_t value);
    int32_t GetShadowPriority() const;
    void SetShadowPriority(int32_t value);
    bool GetContactShadow() const;
    void SetContactShadow(bool value);
    int32_t GetBounceLight() const;
    void SetBounceLight(int32_t value);
    float GetBounceScale() const;
    void SetBounceScale(float value);
    float GetMinRoughness() const;
    void SetMinRoughness(float value);
    Vector GetAlternateColor() const;
    void SetAlternateColor(Vector value);
    float GetAlternateColorBrightness() const;
    void SetAlternateColorBrightness(float value);
    int32_t GetFog() const;
    void SetFog(int32_t value);
    float GetFogStrength() const;
    void SetFogStrength(float value);
    int32_t GetFogShadows() const;
    void SetFogShadows(int32_t value);
    float GetFogScale() const;
    void SetFogScale(float value);
    float GetFadeSizeStart() const;
    void SetFadeSizeStart(float value);
    float GetFadeSizeEnd() const;
    void SetFadeSizeEnd(float value);
    float GetShadowFadeSizeStart() const;
    void SetShadowFadeSizeStart(float value);
    float GetShadowFadeSizeEnd() const;
    void SetShadowFadeSizeEnd(float value);
    bool GetPrecomputedFieldsValid() const;
    void SetPrecomputedFieldsValid(bool value);
    Vector GetPrecomputedBoundsMins() const;
    void SetPrecomputedBoundsMins(Vector value);
    Vector GetPrecomputedBoundsMaxs() const;
    void SetPrecomputedBoundsMaxs(Vector value);
    Vector GetPrecomputedOBBOrigin() const;
    void SetPrecomputedOBBOrigin(Vector value);
    QAngle GetPrecomputedOBBAngles() const;
    void SetPrecomputedOBBAngles(QAngle value);
    Vector GetPrecomputedOBBExtent() const;
    void SetPrecomputedOBBExtent(Vector value);
    bool GetPvsModifyEntity() const;
    void SetPvsModifyEntity(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GSpawnPoint
{
private:
    void *m_ptr;

public:
    GSpawnPoint(std::string ptr);
    GSpawnPoint(void *ptr);

    int32_t GetPriority() const;
    void SetPriority(int32_t value);
    bool GetEnabled() const;
    void SetEnabled(bool value);
    int32_t GetType() const;
    void SetType(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCEnvViewPunch
{
private:
    void *m_ptr;

public:
    GCEnvViewPunch(std::string ptr);
    GCEnvViewPunch(void *ptr);

    float GetRadius() const;
    void SetRadius(float value);
    QAngle GetViewPunch() const;
    void SetViewPunch(QAngle value);

    std::string ToPtr();
    bool IsValid();
};

class GCCSWeaponBase
{
private:
    void *m_ptr;

public:
    GCCSWeaponBase(std::string ptr);
    GCCSWeaponBase(void *ptr);

    bool GetRemoveable() const;
    void SetRemoveable(bool value);
    float GetFireSequenceStartTime() const;
    void SetFireSequenceStartTime(float value);
    int32_t GetFireSequenceStartTimeChange() const;
    void SetFireSequenceStartTimeChange(int32_t value);
    int32_t GetFireSequenceStartTimeAck() const;
    void SetFireSequenceStartTimeAck(int32_t value);
    PlayerAnimEvent_t GetPlayerFireEvent() const;
    void SetPlayerFireEvent(PlayerAnimEvent_t value);
    WeaponAttackType_t GetPlayerFireEventAttackType() const;
    void SetPlayerFireEventAttackType(WeaponAttackType_t value);
    int32_t GetSilencerBoneIndex() const;
    void SetSilencerBoneIndex(int32_t value);
    bool GetPlayerAmmoStockOnPickup() const;
    void SetPlayerAmmoStockOnPickup(bool value);
    bool GetRequireUseToTouch() const;
    void SetRequireUseToTouch(bool value);
    CSWeaponState_t GetState() const;
    void SetState(CSWeaponState_t value);
    int32_t GetLastEmptySoundCmdNum() const;
    void SetLastEmptySoundCmdNum(int32_t value);
    uint32_t GetViewModelIndex() const;
    void SetViewModelIndex(uint32_t value);
    bool GetReloadsWithClips() const;
    void SetReloadsWithClips(bool value);
    bool GetFireOnEmpty() const;
    void SetFireOnEmpty(bool value);
    GCEntityIOOutput GetOnPlayerPickup() const;
    void SetOnPlayerPickup(GCEntityIOOutput value);
    CSWeaponMode GetWeaponMode() const;
    void SetWeaponMode(CSWeaponMode value);
    float GetTurningInaccuracyDelta() const;
    void SetTurningInaccuracyDelta(float value);
    Vector GetTurningInaccuracyEyeDirLast() const;
    void SetTurningInaccuracyEyeDirLast(Vector value);
    float GetTurningInaccuracy() const;
    void SetTurningInaccuracy(float value);
    float GetAccuracyPenalty() const;
    void SetAccuracyPenalty(float value);
    float GetAccuracySmoothedForZoom() const;
    void SetAccuracySmoothedForZoom(float value);
    int32_t GetRecoilIndex() const;
    void SetRecoilIndex(int32_t value);
    float GetRecoilIndex1() const;
    void SetRecoilIndex1(float value);
    bool GetBurstMode() const;
    void SetBurstMode(bool value);
    float GetPostponeFireReadyFrac() const;
    void SetPostponeFireReadyFrac(float value);
    bool GetInReload() const;
    void SetInReload(bool value);
    bool GetReloadVisuallyComplete() const;
    void SetReloadVisuallyComplete(bool value);
    bool GetIsHauledBack() const;
    void SetIsHauledBack(bool value);
    bool GetSilencerOn() const;
    void SetSilencerOn(bool value);
    int32_t GetOriginalTeamNumber() const;
    void SetOriginalTeamNumber(int32_t value);
    int32_t GetMostRecentTeamNumber() const;
    void SetMostRecentTeamNumber(int32_t value);
    bool GetDroppedNearBuyZone() const;
    void SetDroppedNearBuyZone(bool value);
    float GetNextAttackRenderTimeOffset() const;
    void SetNextAttackRenderTimeOffset(float value);
    bool GetCanBePickedUp() const;
    void SetCanBePickedUp(bool value);
    bool GetUseCanOverrideNextOwnerTouchTime() const;
    void SetUseCanOverrideNextOwnerTouchTime(bool value);
    GCCSPlayerPawn GetPrevOwner() const;
    void SetPrevOwner(GCCSPlayerPawn* value);
    bool GetDonated() const;
    void SetDonated(bool value);
    bool GetWasOwnedByCT() const;
    void SetWasOwnedByCT(bool value);
    bool GetWasOwnedByTerrorist() const;
    void SetWasOwnedByTerrorist(bool value);
    bool GetFiredOutOfAmmoEvent() const;
    void SetFiredOutOfAmmoEvent(bool value);
    int32_t GetNumRemoveUnownedWeaponThink() const;
    void SetNumRemoveUnownedWeaponThink(int32_t value);
    GCIronSightController GetIronSightController() const;
    void SetIronSightController(GCIronSightController value);
    int32_t GetIronSightMode() const;
    void SetIronSightMode(int32_t value);
    int32_t GetNumEmptyAttacks() const;
    void SetNumEmptyAttacks(int32_t value);
    float GetWatTickOffset() const;
    void SetWatTickOffset(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCPathCorner
{
private:
    void *m_ptr;

public:
    GCPathCorner(std::string ptr);
    GCPathCorner(void *ptr);

    float GetWait() const;
    void SetWait(float value);
    float GetRadius() const;
    void SetRadius(float value);
    GCEntityIOOutput GetOnPass() const;
    void SetOnPass(GCEntityIOOutput value);

    std::string ToPtr();
    bool IsValid();
};

class GCPlayerControllerComponent
{
private:
    void *m_ptr;

public:
    GCPlayerControllerComponent(std::string ptr);
    GCPlayerControllerComponent(void *ptr);

    GCNetworkVarChainer Get__pChainEntity() const;
    void Set__pChainEntity(GCNetworkVarChainer value);

    std::string ToPtr();
    bool IsValid();
};

class GCWeaponBaseItem
{
private:
    void *m_ptr;

public:
    GCWeaponBaseItem(std::string ptr);
    GCWeaponBaseItem(void *ptr);

    GCountdownTimer GetSequenceCompleteTimer() const;
    void SetSequenceCompleteTimer(GCountdownTimer value);
    bool GetRedraw() const;
    void SetRedraw(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCBaseCombatCharacter
{
private:
    void *m_ptr;

public:
    GCBaseCombatCharacter(std::string ptr);
    GCBaseCombatCharacter(void *ptr);

    bool GetForceServerRagdoll() const;
    void SetForceServerRagdoll(bool value);
    std::vector<GCEconWearable*> GetMyWearables() const;
    void SetMyWearables(std::vector<GCEconWearable*> value);
    float GetFieldOfView() const;
    void SetFieldOfView(float value);
    float GetImpactEnergyScale() const;
    void SetImpactEnergyScale(float value);
    HitGroup_t GetLastHitGroup() const;
    void SetLastHitGroup(HitGroup_t value);
    bool GetApplyStressDamage() const;
    void SetApplyStressDamage(bool value);
    int32_t GetDamageCount() const;
    void SetDamageCount(int32_t value);
    CUtlSymbolLarge GetStrRelationships() const;
    void SetStrRelationships(CUtlSymbolLarge value);
    Hull_t GetHull() const;
    void SetHull(Hull_t value);
    uint32_t GetNavHullIdx() const;
    void SetNavHullIdx(uint32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCMultiSource
{
private:
    void *m_ptr;

public:
    GCMultiSource(std::string ptr);
    GCMultiSource(void *ptr);

    std::vector<GCBaseEntity*> GetRgEntities() const;
    void SetRgEntities(std::vector<GCBaseEntity*> value);
    std::vector<int32_t> GetRgTriggered() const;
    void SetRgTriggered(std::vector<int32_t> value);
    GCEntityIOOutput GetOnTrigger() const;
    void SetOnTrigger(GCEntityIOOutput value);
    int32_t GetTotal() const;
    void SetTotal(int32_t value);
    CUtlSymbolLarge GetGlobalstate() const;
    void SetGlobalstate(CUtlSymbolLarge value);

    std::string ToPtr();
    bool IsValid();
};

class GCLogicNavigation
{
private:
    void *m_ptr;

public:
    GCLogicNavigation(std::string ptr);
    GCLogicNavigation(void *ptr);

    bool GetIsOn() const;
    void SetIsOn(bool value);
    navproperties_t GetNavProperty() const;
    void SetNavProperty(navproperties_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCEnvEntityMaker
{
private:
    void *m_ptr;

public:
    GCEnvEntityMaker(std::string ptr);
    GCEnvEntityMaker(void *ptr);

    Vector GetEntityMins() const;
    void SetEntityMins(Vector value);
    Vector GetEntityMaxs() const;
    void SetEntityMaxs(Vector value);
    GCBaseEntity GetCurrentInstance() const;
    void SetCurrentInstance(GCBaseEntity* value);
    GCBaseEntity GetCurrentBlocker() const;
    void SetCurrentBlocker(GCBaseEntity* value);
    Vector GetBlockerOrigin() const;
    void SetBlockerOrigin(Vector value);
    QAngle GetPostSpawnDirection() const;
    void SetPostSpawnDirection(QAngle value);
    float GetPostSpawnDirectionVariance() const;
    void SetPostSpawnDirectionVariance(float value);
    float GetPostSpawnSpeed() const;
    void SetPostSpawnSpeed(float value);
    bool GetPostSpawnUseAngles() const;
    void SetPostSpawnUseAngles(bool value);
    CUtlSymbolLarge GetTemplate() const;
    void SetTemplate(CUtlSymbolLarge value);
    GCEntityIOOutput GetOutputOnSpawned() const;
    void SetOutputOnSpawned(GCEntityIOOutput value);
    GCEntityIOOutput GetOutputOnFailedSpawn() const;
    void SetOutputOnFailedSpawn(GCEntityIOOutput value);

    std::string ToPtr();
    bool IsValid();
};

class GCProjectedDecal
{
private:
    void *m_ptr;

public:
    GCProjectedDecal(std::string ptr);
    GCProjectedDecal(void *ptr);

    int32_t GetTexture() const;
    void SetTexture(int32_t value);
    float GetDistance() const;
    void SetDistance(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCLogicEventListener
{
private:
    void *m_ptr;

public:
    GCLogicEventListener(std::string ptr);
    GCLogicEventListener(void *ptr);

    CUtlString GetStrEventName() const;
    void SetStrEventName(CUtlString value);
    bool GetIsEnabled() const;
    void SetIsEnabled(bool value);
    int32_t GetTeam() const;
    void SetTeam(int32_t value);
    GCEntityIOOutput GetOnEventFired() const;
    void SetOnEventFired(GCEntityIOOutput value);

    std::string ToPtr();
    bool IsValid();
};

class GCFilterMultiple
{
private:
    void *m_ptr;

public:
    GCFilterMultiple(std::string ptr);
    GCFilterMultiple(void *ptr);

    filter_t GetFilterType() const;
    void SetFilterType(filter_t value);
    std::vector<CUtlSymbolLarge> GetFilterName() const;
    void SetFilterName(std::vector<CUtlSymbolLarge> value);
    std::vector<GCBaseEntity*> GetFilter() const;
    void SetFilter(std::vector<GCBaseEntity*> value);
    int32_t GetFilterCount() const;
    void SetFilterCount(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCPlayer_UseServices
{
private:
    void *m_ptr;

public:
    GCPlayer_UseServices(std::string ptr);
    GCPlayer_UseServices(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCScriptComponent
{
private:
    void *m_ptr;

public:
    GCScriptComponent(std::string ptr);
    GCScriptComponent(void *ptr);

    CUtlSymbolLarge GetScriptClassName() const;
    void SetScriptClassName(CUtlSymbolLarge value);

    std::string ToPtr();
    bool IsValid();
};

class GCPhysicsWire
{
private:
    void *m_ptr;

public:
    GCPhysicsWire(std::string ptr);
    GCPhysicsWire(void *ptr);

    int32_t GetDensity() const;
    void SetDensity(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class Glocksound_t
{
private:
    void *m_ptr;

public:
    Glocksound_t(std::string ptr);
    Glocksound_t(void *ptr);

    CUtlSymbolLarge GetLockedSound() const;
    void SetLockedSound(CUtlSymbolLarge value);
    CUtlSymbolLarge GetUnlockedSound() const;
    void SetUnlockedSound(CUtlSymbolLarge value);

    std::string ToPtr();
    bool IsValid();
};

class GCCSPointScriptExtensions_player_controller
{
private:
    void *m_ptr;

public:
    GCCSPointScriptExtensions_player_controller(std::string ptr);
    GCCSPointScriptExtensions_player_controller(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCBaseFire
{
private:
    void *m_ptr;

public:
    GCBaseFire(std::string ptr);
    GCBaseFire(void *ptr);

    float GetScale() const;
    void SetScale(float value);
    float GetStartScale() const;
    void SetStartScale(float value);
    float GetScaleTime() const;
    void SetScaleTime(float value);
    uint32_t GetFlags() const;
    void SetFlags(uint32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCBumpMine
{
private:
    void *m_ptr;

public:
    GCBumpMine(std::string ptr);
    GCBumpMine(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCLightGlow
{
private:
    void *m_ptr;

public:
    GCLightGlow(std::string ptr);
    GCLightGlow(void *ptr);

    uint32_t GetHorizontalSize() const;
    void SetHorizontalSize(uint32_t value);
    uint32_t GetVerticalSize() const;
    void SetVerticalSize(uint32_t value);
    uint32_t GetMinDist() const;
    void SetMinDist(uint32_t value);
    uint32_t GetMaxDist() const;
    void SetMaxDist(uint32_t value);
    uint32_t GetOuterMaxDist() const;
    void SetOuterMaxDist(uint32_t value);
    float GetGlowProxySize() const;
    void SetGlowProxySize(float value);
    float GetHDRColorScale() const;
    void SetHDRColorScale(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCSPerRoundStats_t
{
private:
    void *m_ptr;

public:
    GCSPerRoundStats_t(std::string ptr);
    GCSPerRoundStats_t(void *ptr);

    int32_t GetKills() const;
    void SetKills(int32_t value);
    int32_t GetDeaths() const;
    void SetDeaths(int32_t value);
    int32_t GetAssists() const;
    void SetAssists(int32_t value);
    int32_t GetDamage() const;
    void SetDamage(int32_t value);
    int32_t GetEquipmentValue() const;
    void SetEquipmentValue(int32_t value);
    int32_t GetMoneySaved() const;
    void SetMoneySaved(int32_t value);
    int32_t GetKillReward() const;
    void SetKillReward(int32_t value);
    int32_t GetLiveTime() const;
    void SetLiveTime(int32_t value);
    int32_t GetHeadShotKills() const;
    void SetHeadShotKills(int32_t value);
    int32_t GetObjective() const;
    void SetObjective(int32_t value);
    int32_t GetCashEarned() const;
    void SetCashEarned(int32_t value);
    int32_t GetUtilityDamage() const;
    void SetUtilityDamage(int32_t value);
    int32_t GetEnemiesFlashed() const;
    void SetEnemiesFlashed(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCBasePropDoor
{
private:
    void *m_ptr;

public:
    GCBasePropDoor(std::string ptr);
    GCBasePropDoor(void *ptr);

    float GetAutoReturnDelay() const;
    void SetAutoReturnDelay(float value);
    int32_t GetHardwareType() const;
    void SetHardwareType(int32_t value);
    bool GetNeedsHardware() const;
    void SetNeedsHardware(bool value);
    DoorState_t GetDoorState() const;
    void SetDoorState(DoorState_t value);
    bool GetLocked() const;
    void SetLocked(bool value);
    Vector GetClosedPosition() const;
    void SetClosedPosition(Vector value);
    QAngle GetClosedAngles() const;
    void SetClosedAngles(QAngle value);
    GCBaseEntity GetBlocker() const;
    void SetBlocker(GCBaseEntity* value);
    bool GetFirstBlocked() const;
    void SetFirstBlocked(bool value);
    Glocksound_t GetLs() const;
    void SetLs(Glocksound_t value);
    bool GetForceClosed() const;
    void SetForceClosed(bool value);
    Vector GetLatchWorldPosition() const;
    void SetLatchWorldPosition(Vector value);
    GCBaseEntity GetActivator() const;
    void SetActivator(GCBaseEntity* value);
    CUtlSymbolLarge GetSoundMoving() const;
    void SetSoundMoving(CUtlSymbolLarge value);
    CUtlSymbolLarge GetSoundOpen() const;
    void SetSoundOpen(CUtlSymbolLarge value);
    CUtlSymbolLarge GetSoundClose() const;
    void SetSoundClose(CUtlSymbolLarge value);
    CUtlSymbolLarge GetSoundLock() const;
    void SetSoundLock(CUtlSymbolLarge value);
    CUtlSymbolLarge GetSoundUnlock() const;
    void SetSoundUnlock(CUtlSymbolLarge value);
    CUtlSymbolLarge GetSoundLatch() const;
    void SetSoundLatch(CUtlSymbolLarge value);
    CUtlSymbolLarge GetSoundPound() const;
    void SetSoundPound(CUtlSymbolLarge value);
    CUtlSymbolLarge GetSoundJiggle() const;
    void SetSoundJiggle(CUtlSymbolLarge value);
    CUtlSymbolLarge GetSoundLockedAnim() const;
    void SetSoundLockedAnim(CUtlSymbolLarge value);
    int32_t GetNumCloseAttempts() const;
    void SetNumCloseAttempts(int32_t value);
    CUtlStringToken GetPhysicsMaterial() const;
    void SetPhysicsMaterial(CUtlStringToken value);
    CUtlSymbolLarge GetSlaveName() const;
    void SetSlaveName(CUtlSymbolLarge value);
    GCBasePropDoor GetMaster() const;
    void SetMaster(GCBasePropDoor* value);
    GCEntityIOOutput GetOnBlockedClosing() const;
    void SetOnBlockedClosing(GCEntityIOOutput value);
    GCEntityIOOutput GetOnBlockedOpening() const;
    void SetOnBlockedOpening(GCEntityIOOutput value);
    GCEntityIOOutput GetOnUnblockedClosing() const;
    void SetOnUnblockedClosing(GCEntityIOOutput value);
    GCEntityIOOutput GetOnUnblockedOpening() const;
    void SetOnUnblockedOpening(GCEntityIOOutput value);
    GCEntityIOOutput GetOnFullyClosed() const;
    void SetOnFullyClosed(GCEntityIOOutput value);
    GCEntityIOOutput GetOnFullyOpen() const;
    void SetOnFullyOpen(GCEntityIOOutput value);
    GCEntityIOOutput GetOnClose() const;
    void SetOnClose(GCEntityIOOutput value);
    GCEntityIOOutput GetOnOpen() const;
    void SetOnOpen(GCEntityIOOutput value);
    GCEntityIOOutput GetOnLockedUse() const;
    void SetOnLockedUse(GCEntityIOOutput value);
    GCEntityIOOutput GetOnAjarOpen() const;
    void SetOnAjarOpen(GCEntityIOOutput value);

    std::string ToPtr();
    bool IsValid();
};

class GCRagdollManager
{
private:
    void *m_ptr;

public:
    GCRagdollManager(std::string ptr);
    GCRagdollManager(void *ptr);

    int8_t GetCurrentMaxRagdollCount() const;
    void SetCurrentMaxRagdollCount(int8_t value);
    int32_t GetMaxRagdollCount() const;
    void SetMaxRagdollCount(int32_t value);
    bool GetSaveImportant() const;
    void SetSaveImportant(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCTriggerFan
{
private:
    void *m_ptr;

public:
    GCTriggerFan(std::string ptr);
    GCTriggerFan(void *ptr);

    Vector GetFanOrigin() const;
    void SetFanOrigin(Vector value);
    Vector GetFanEnd() const;
    void SetFanEnd(Vector value);
    Vector GetNoise() const;
    void SetNoise(Vector value);
    float GetForce() const;
    void SetForce(float value);
    float GetRopeForceScale() const;
    void SetRopeForceScale(float value);
    float GetPlayerForce() const;
    void SetPlayerForce(float value);
    float GetRampTime() const;
    void SetRampTime(float value);
    bool GetFalloff() const;
    void SetFalloff(bool value);
    bool GetPushPlayer() const;
    void SetPushPlayer(bool value);
    bool GetRampDown() const;
    void SetRampDown(bool value);
    bool GetAddNoise() const;
    void SetAddNoise(bool value);
    GCountdownTimer GetRampTimer() const;
    void SetRampTimer(GCountdownTimer value);

    std::string ToPtr();
    bool IsValid();
};

class GCBaseCSGrenade
{
private:
    void *m_ptr;

public:
    GCBaseCSGrenade(std::string ptr);
    GCBaseCSGrenade(void *ptr);

    bool GetRedraw() const;
    void SetRedraw(bool value);
    bool GetIsHeldByPlayer() const;
    void SetIsHeldByPlayer(bool value);
    bool GetPinPulled() const;
    void SetPinPulled(bool value);
    bool GetJumpThrow() const;
    void SetJumpThrow(bool value);
    bool GetThrowAnimating() const;
    void SetThrowAnimating(bool value);
    float GetThrowStrength() const;
    void SetThrowStrength(float value);
    float GetThrowStrengthApproach() const;
    void SetThrowStrengthApproach(float value);
    bool GetJustPulledPin() const;
    void SetJustPulledPin(bool value);
    float GetNextHoldFrac() const;
    void SetNextHoldFrac(float value);
    GCCSWeaponBase GetSwitchToWeaponAfterThrow() const;
    void SetSwitchToWeaponAfterThrow(GCCSWeaponBase* value);

    std::string ToPtr();
    bool IsValid();
};

class GCPathCornerCrash
{
private:
    void *m_ptr;

public:
    GCPathCornerCrash(std::string ptr);
    GCPathCornerCrash(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCHandleTest
{
private:
    void *m_ptr;

public:
    GCHandleTest(std::string ptr);
    GCHandleTest(void *ptr);

    GCBaseEntity GetHandle() const;
    void SetHandle(GCBaseEntity* value);
    bool GetSendHandle() const;
    void SetSendHandle(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCSoundOpvarSetEntity
{
private:
    void *m_ptr;

public:
    GCSoundOpvarSetEntity(std::string ptr);
    GCSoundOpvarSetEntity(void *ptr);

    CUtlSymbolLarge GetStackName() const;
    void SetStackName(CUtlSymbolLarge value);
    CUtlSymbolLarge GetOperatorName() const;
    void SetOperatorName(CUtlSymbolLarge value);
    CUtlSymbolLarge GetOpvarName() const;
    void SetOpvarName(CUtlSymbolLarge value);
    int32_t GetOpvarType() const;
    void SetOpvarType(int32_t value);
    int32_t GetOpvarIndex() const;
    void SetOpvarIndex(int32_t value);
    float GetOpvarValue() const;
    void SetOpvarValue(float value);
    CUtlSymbolLarge GetOpvarValueString() const;
    void SetOpvarValueString(CUtlSymbolLarge value);
    bool GetSetOnSpawn() const;
    void SetSetOnSpawn(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GWeaponPurchaseCount_t
{
private:
    void *m_ptr;

public:
    GWeaponPurchaseCount_t(std::string ptr);
    GWeaponPurchaseCount_t(void *ptr);

    uint16_t GetItemDefIndex() const;
    void SetItemDefIndex(uint16_t value);
    uint16_t GetCount() const;
    void SetCount(uint16_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCNavSpaceInfo
{
private:
    void *m_ptr;

public:
    GCNavSpaceInfo(std::string ptr);
    GCNavSpaceInfo(void *ptr);

    bool GetCreateFlightSpace() const;
    void SetCreateFlightSpace(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCLogicAchievement
{
private:
    void *m_ptr;

public:
    GCLogicAchievement(std::string ptr);
    GCLogicAchievement(void *ptr);

    bool GetDisabled() const;
    void SetDisabled(bool value);
    CUtlSymbolLarge GetAchievementEventID() const;
    void SetAchievementEventID(CUtlSymbolLarge value);
    GCEntityIOOutput GetOnFired() const;
    void SetOnFired(GCEntityIOOutput value);

    std::string ToPtr();
    bool IsValid();
};

class GCPathSimple
{
private:
    void *m_ptr;

public:
    GCPathSimple(std::string ptr);
    GCPathSimple(void *ptr);

    CUtlString GetPathString() const;
    void SetPathString(CUtlString value);

    std::string ToPtr();
    bool IsValid();
};

class GCBtActionParachutePositioning
{
private:
    void *m_ptr;

public:
    GCBtActionParachutePositioning(std::string ptr);
    GCBtActionParachutePositioning(void *ptr);

    GCountdownTimer GetActionTimer() const;
    void SetActionTimer(GCountdownTimer value);

    std::string ToPtr();
    bool IsValid();
};

class GCPlayer_CameraServices
{
private:
    void *m_ptr;

public:
    GCPlayer_CameraServices(std::string ptr);
    GCPlayer_CameraServices(void *ptr);

    QAngle GetCsViewPunchAngle() const;
    void SetCsViewPunchAngle(QAngle value);
    float GetCsViewPunchAngleTickRatio() const;
    void SetCsViewPunchAngleTickRatio(float value);
    Gfogplayerparams_t GetPlayerFog() const;
    void SetPlayerFog(Gfogplayerparams_t value);
    GCColorCorrection GetColorCorrectionCtrl() const;
    void SetColorCorrectionCtrl(GCColorCorrection* value);
    GCBaseEntity GetViewEntity() const;
    void SetViewEntity(GCBaseEntity* value);
    GCTonemapController2 GetTonemapController() const;
    void SetTonemapController(GCTonemapController2* value);
    Gaudioparams_t GetAudio() const;
    void SetAudio(Gaudioparams_t value);
    std::vector<GCPostProcessingVolume*> GetPostProcessingVolumes() const;
    void SetPostProcessingVolumes(std::vector<GCPostProcessingVolume*> value);
    float GetOldPlayerZ() const;
    void SetOldPlayerZ(float value);
    float GetOldPlayerViewOffsetZ() const;
    void SetOldPlayerViewOffsetZ(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCTouchExpansionComponent
{
private:
    void *m_ptr;

public:
    GCTouchExpansionComponent(std::string ptr);
    GCTouchExpansionComponent(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GEntitySpottedState_t
{
private:
    void *m_ptr;

public:
    GEntitySpottedState_t(std::string ptr);
    GEntitySpottedState_t(void *ptr);

    bool GetSpotted() const;
    void SetSpotted(bool value);
    std::vector<uint32_t> GetSpottedByMask() const;
    void SetSpottedByMask(std::vector<uint32_t> value);

    std::string ToPtr();
    bool IsValid();
};

class GCBaseClientUIEntity
{
private:
    void *m_ptr;

public:
    GCBaseClientUIEntity(std::string ptr);
    GCBaseClientUIEntity(void *ptr);

    bool GetEnabled() const;
    void SetEnabled(bool value);
    CUtlSymbolLarge GetDialogXMLName() const;
    void SetDialogXMLName(CUtlSymbolLarge value);
    CUtlSymbolLarge GetPanelClassName() const;
    void SetPanelClassName(CUtlSymbolLarge value);
    CUtlSymbolLarge GetPanelID() const;
    void SetPanelID(CUtlSymbolLarge value);
    GCEntityIOOutput GetCustomOutput0() const;
    void SetCustomOutput0(GCEntityIOOutput value);
    GCEntityIOOutput GetCustomOutput1() const;
    void SetCustomOutput1(GCEntityIOOutput value);
    GCEntityIOOutput GetCustomOutput2() const;
    void SetCustomOutput2(GCEntityIOOutput value);
    GCEntityIOOutput GetCustomOutput3() const;
    void SetCustomOutput3(GCEntityIOOutput value);
    GCEntityIOOutput GetCustomOutput4() const;
    void SetCustomOutput4(GCEntityIOOutput value);
    GCEntityIOOutput GetCustomOutput5() const;
    void SetCustomOutput5(GCEntityIOOutput value);
    GCEntityIOOutput GetCustomOutput6() const;
    void SetCustomOutput6(GCEntityIOOutput value);
    GCEntityIOOutput GetCustomOutput7() const;
    void SetCustomOutput7(GCEntityIOOutput value);
    GCEntityIOOutput GetCustomOutput8() const;
    void SetCustomOutput8(GCEntityIOOutput value);
    GCEntityIOOutput GetCustomOutput9() const;
    void SetCustomOutput9(GCEntityIOOutput value);

    std::string ToPtr();
    bool IsValid();
};

class GCEnvDecal
{
private:
    void *m_ptr;

public:
    GCEnvDecal(std::string ptr);
    GCEnvDecal(void *ptr);

    float GetWidth() const;
    void SetWidth(float value);
    float GetHeight() const;
    void SetHeight(float value);
    float GetDepth() const;
    void SetDepth(float value);
    uint32_t GetRenderOrder() const;
    void SetRenderOrder(uint32_t value);
    bool GetProjectOnWorld() const;
    void SetProjectOnWorld(bool value);
    bool GetProjectOnCharacters() const;
    void SetProjectOnCharacters(bool value);
    bool GetProjectOnWater() const;
    void SetProjectOnWater(bool value);
    float GetDepthSortBias() const;
    void SetDepthSortBias(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCCSPointScriptExtensions_entity
{
private:
    void *m_ptr;

public:
    GCCSPointScriptExtensions_entity(std::string ptr);
    GCCSPointScriptExtensions_entity(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCGameSceneNode
{
private:
    void *m_ptr;

public:
    GCGameSceneNode(std::string ptr);
    GCGameSceneNode(void *ptr);

    GCEntityInstance GetOwner() const;
    void SetOwner(GCEntityInstance* value);
    GCGameSceneNode GetParent() const;
    void SetParent(GCGameSceneNode* value);
    GCGameSceneNode GetChild() const;
    void SetChild(GCGameSceneNode* value);
    GCGameSceneNode GetNextSibling() const;
    void SetNextSibling(GCGameSceneNode* value);
    GCNetworkOriginCellCoordQuantizedVector GetOrigin() const;
    void SetOrigin(GCNetworkOriginCellCoordQuantizedVector value);
    QAngle GetRotation() const;
    void SetRotation(QAngle value);
    float GetScale() const;
    void SetScale(float value);
    Vector GetAbsOrigin() const;
    void SetAbsOrigin(Vector value);
    QAngle GetAbsRotation() const;
    void SetAbsRotation(QAngle value);
    float GetAbsScale() const;
    void SetAbsScale(float value);
    int16_t GetParentAttachmentOrBone() const;
    void SetParentAttachmentOrBone(int16_t value);
    bool GetDebugAbsOriginChanges() const;
    void SetDebugAbsOriginChanges(bool value);
    bool GetDormant() const;
    void SetDormant(bool value);
    bool GetForceParentToBeNetworked() const;
    void SetForceParentToBeNetworked(bool value);
    uint8_t GetHierarchicalDepth() const;
    void SetHierarchicalDepth(uint8_t value);
    uint8_t GetHierarchyType() const;
    void SetHierarchyType(uint8_t value);
    uint8_t GetDoNotSetAnimTimeInInvalidatePhysicsCount() const;
    void SetDoNotSetAnimTimeInInvalidatePhysicsCount(uint8_t value);
    CUtlStringToken GetName() const;
    void SetName(CUtlStringToken value);
    CUtlStringToken GetHierarchyAttachName() const;
    void SetHierarchyAttachName(CUtlStringToken value);
    float GetZOffset() const;
    void SetZOffset(float value);
    float GetClientLocalScale() const;
    void SetClientLocalScale(float value);
    Vector GetRenderOrigin() const;
    void SetRenderOrigin(Vector value);

    std::string ToPtr();
    bool IsValid();
};

class GCLogicAuto
{
private:
    void *m_ptr;

public:
    GCLogicAuto(std::string ptr);
    GCLogicAuto(void *ptr);

    GCEntityIOOutput GetOnMapSpawn() const;
    void SetOnMapSpawn(GCEntityIOOutput value);
    GCEntityIOOutput GetOnDemoMapSpawn() const;
    void SetOnDemoMapSpawn(GCEntityIOOutput value);
    GCEntityIOOutput GetOnNewGame() const;
    void SetOnNewGame(GCEntityIOOutput value);
    GCEntityIOOutput GetOnLoadGame() const;
    void SetOnLoadGame(GCEntityIOOutput value);
    GCEntityIOOutput GetOnMapTransition() const;
    void SetOnMapTransition(GCEntityIOOutput value);
    GCEntityIOOutput GetOnBackgroundMap() const;
    void SetOnBackgroundMap(GCEntityIOOutput value);
    GCEntityIOOutput GetOnMultiNewMap() const;
    void SetOnMultiNewMap(GCEntityIOOutput value);
    GCEntityIOOutput GetOnMultiNewRound() const;
    void SetOnMultiNewRound(GCEntityIOOutput value);
    GCEntityIOOutput GetOnVREnabled() const;
    void SetOnVREnabled(GCEntityIOOutput value);
    GCEntityIOOutput GetOnVRNotEnabled() const;
    void SetOnVRNotEnabled(GCEntityIOOutput value);
    CUtlSymbolLarge GetGlobalstate() const;
    void SetGlobalstate(CUtlSymbolLarge value);

    std::string ToPtr();
    bool IsValid();
};

class GCSoundOpvarSetOBBWindEntity
{
private:
    void *m_ptr;

public:
    GCSoundOpvarSetOBBWindEntity(std::string ptr);
    GCSoundOpvarSetOBBWindEntity(void *ptr);

    Vector GetMins() const;
    void SetMins(Vector value);
    Vector GetMaxs() const;
    void SetMaxs(Vector value);
    Vector GetDistanceMins() const;
    void SetDistanceMins(Vector value);
    Vector GetDistanceMaxs() const;
    void SetDistanceMaxs(Vector value);
    float GetWindMin() const;
    void SetWindMin(float value);
    float GetWindMax() const;
    void SetWindMax(float value);
    float GetWindMapMin() const;
    void SetWindMapMin(float value);
    float GetWindMapMax() const;
    void SetWindMapMax(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCLightDirectionalEntity
{
private:
    void *m_ptr;

public:
    GCLightDirectionalEntity(std::string ptr);
    GCLightDirectionalEntity(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCLogicNPCCounter
{
private:
    void *m_ptr;

public:
    GCLogicNPCCounter(std::string ptr);
    GCLogicNPCCounter(void *ptr);

    GCEntityIOOutput GetOnMinCountAll() const;
    void SetOnMinCountAll(GCEntityIOOutput value);
    GCEntityIOOutput GetOnMaxCountAll() const;
    void SetOnMaxCountAll(GCEntityIOOutput value);
    GCEntityIOOutput GetOnMinCount_1() const;
    void SetOnMinCount_1(GCEntityIOOutput value);
    GCEntityIOOutput GetOnMaxCount_1() const;
    void SetOnMaxCount_1(GCEntityIOOutput value);
    GCEntityIOOutput GetOnMinCount_2() const;
    void SetOnMinCount_2(GCEntityIOOutput value);
    GCEntityIOOutput GetOnMaxCount_2() const;
    void SetOnMaxCount_2(GCEntityIOOutput value);
    GCEntityIOOutput GetOnMinCount_3() const;
    void SetOnMinCount_3(GCEntityIOOutput value);
    GCEntityIOOutput GetOnMaxCount_3() const;
    void SetOnMaxCount_3(GCEntityIOOutput value);
    GCEntityInstance GetSource() const;
    void SetSource(GCEntityInstance* value);
    CUtlSymbolLarge GetSourceEntityName() const;
    void SetSourceEntityName(CUtlSymbolLarge value);
    float GetDistanceMax() const;
    void SetDistanceMax(float value);
    bool GetDisabled() const;
    void SetDisabled(bool value);
    int32_t GetMinCountAll() const;
    void SetMinCountAll(int32_t value);
    int32_t GetMaxCountAll() const;
    void SetMaxCountAll(int32_t value);
    int32_t GetMinFactorAll() const;
    void SetMinFactorAll(int32_t value);
    int32_t GetMaxFactorAll() const;
    void SetMaxFactorAll(int32_t value);
    CUtlSymbolLarge GetNPCClassname_1() const;
    void SetNPCClassname_1(CUtlSymbolLarge value);
    int32_t GetNPCState_1() const;
    void SetNPCState_1(int32_t value);
    bool GetInvertState_1() const;
    void SetInvertState_1(bool value);
    int32_t GetMinCount_1() const;
    void SetMinCount_1(int32_t value);
    int32_t GetMaxCount_1() const;
    void SetMaxCount_1(int32_t value);
    int32_t GetMinFactor_1() const;
    void SetMinFactor_1(int32_t value);
    int32_t GetMaxFactor_1() const;
    void SetMaxFactor_1(int32_t value);
    float GetDefaultDist_1() const;
    void SetDefaultDist_1(float value);
    CUtlSymbolLarge GetNPCClassname_2() const;
    void SetNPCClassname_2(CUtlSymbolLarge value);
    int32_t GetNPCState_2() const;
    void SetNPCState_2(int32_t value);
    bool GetInvertState_2() const;
    void SetInvertState_2(bool value);
    int32_t GetMinCount_2() const;
    void SetMinCount_2(int32_t value);
    int32_t GetMaxCount_2() const;
    void SetMaxCount_2(int32_t value);
    int32_t GetMinFactor_2() const;
    void SetMinFactor_2(int32_t value);
    int32_t GetMaxFactor_2() const;
    void SetMaxFactor_2(int32_t value);
    float GetDefaultDist_2() const;
    void SetDefaultDist_2(float value);
    CUtlSymbolLarge GetNPCClassname_3() const;
    void SetNPCClassname_3(CUtlSymbolLarge value);
    int32_t GetNPCState_3() const;
    void SetNPCState_3(int32_t value);
    bool GetInvertState_3() const;
    void SetInvertState_3(bool value);
    int32_t GetMinCount_3() const;
    void SetMinCount_3(int32_t value);
    int32_t GetMaxCount_3() const;
    void SetMaxCount_3(int32_t value);
    int32_t GetMinFactor_3() const;
    void SetMinFactor_3(int32_t value);
    int32_t GetMaxFactor_3() const;
    void SetMaxFactor_3(int32_t value);
    float GetDefaultDist_3() const;
    void SetDefaultDist_3(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCCSObserver_UseServices
{
private:
    void *m_ptr;

public:
    GCCSObserver_UseServices(std::string ptr);
    GCCSObserver_UseServices(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCFuncPlat
{
private:
    void *m_ptr;

public:
    GCFuncPlat(std::string ptr);
    GCFuncPlat(void *ptr);

    CUtlSymbolLarge GetNoise() const;
    void SetNoise(CUtlSymbolLarge value);

    std::string ToPtr();
    bool IsValid();
};

class GCRuleBrushEntity
{
private:
    void *m_ptr;

public:
    GCRuleBrushEntity(std::string ptr);
    GCRuleBrushEntity(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCRulePointEntity
{
private:
    void *m_ptr;

public:
    GCRulePointEntity(std::string ptr);
    GCRulePointEntity(void *ptr);

    int32_t GetScore() const;
    void SetScore(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCMessageEntity
{
private:
    void *m_ptr;

public:
    GCMessageEntity(std::string ptr);
    GCMessageEntity(void *ptr);

    int32_t GetRadius() const;
    void SetRadius(int32_t value);
    CUtlSymbolLarge GetMessageText() const;
    void SetMessageText(CUtlSymbolLarge value);
    bool GetDrawText() const;
    void SetDrawText(bool value);
    bool GetDeveloperOnly() const;
    void SetDeveloperOnly(bool value);
    bool GetEnabled() const;
    void SetEnabled(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCSmokeGrenade
{
private:
    void *m_ptr;

public:
    GCSmokeGrenade(std::string ptr);
    GCSmokeGrenade(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCBaseViewModel
{
private:
    void *m_ptr;

public:
    GCBaseViewModel(std::string ptr);
    GCBaseViewModel(void *ptr);

    Vector GetLastFacing() const;
    void SetLastFacing(Vector value);
    uint32_t GetViewModelIndex() const;
    void SetViewModelIndex(uint32_t value);
    uint32_t GetAnimationParity() const;
    void SetAnimationParity(uint32_t value);
    float GetAnimationStartTime() const;
    void SetAnimationStartTime(float value);
    GCBasePlayerWeapon GetWeapon() const;
    void SetWeapon(GCBasePlayerWeapon* value);
    CUtlSymbolLarge GetVMName() const;
    void SetVMName(CUtlSymbolLarge value);
    CUtlSymbolLarge GetAnimationPrefix() const;
    void SetAnimationPrefix(CUtlSymbolLarge value);
    int32_t GetOldLayer() const;
    void SetOldLayer(int32_t value);
    float GetOldLayerStartTime() const;
    void SetOldLayerStartTime(float value);
    GCBaseEntity GetControlPanel() const;
    void SetControlPanel(GCBaseEntity* value);

    std::string ToPtr();
    bool IsValid();
};

class GCCSPlayer_PingServices
{
private:
    void *m_ptr;

public:
    GCCSPlayer_PingServices(std::string ptr);
    GCCSPlayer_PingServices(void *ptr);

    GCBaseEntity GetPlayerPing() const;
    void SetPlayerPing(GCBaseEntity* value);

    std::string ToPtr();
    bool IsValid();
};

class GCPlayer_FlashlightServices
{
private:
    void *m_ptr;

public:
    GCPlayer_FlashlightServices(std::string ptr);
    GCPlayer_FlashlightServices(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCServerOnlyModelEntity
{
private:
    void *m_ptr;

public:
    GCServerOnlyModelEntity(std::string ptr);
    GCServerOnlyModelEntity(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCBtActionCombatPositioning
{
private:
    void *m_ptr;

public:
    GCBtActionCombatPositioning(std::string ptr);
    GCBtActionCombatPositioning(void *ptr);

    CUtlString GetSensorInputKey() const;
    void SetSensorInputKey(CUtlString value);
    CUtlString GetIsAttackingKey() const;
    void SetIsAttackingKey(CUtlString value);
    GCountdownTimer GetActionTimer() const;
    void SetActionTimer(GCountdownTimer value);
    bool GetCrouching() const;
    void SetCrouching(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCFireSmoke
{
private:
    void *m_ptr;

public:
    GCFireSmoke(std::string ptr);
    GCFireSmoke(void *ptr);

    int32_t GetFlameModelIndex() const;
    void SetFlameModelIndex(int32_t value);
    int32_t GetFlameFromAboveModelIndex() const;
    void SetFlameFromAboveModelIndex(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCCSWeaponBaseGun
{
private:
    void *m_ptr;

public:
    GCCSWeaponBaseGun(std::string ptr);
    GCCSWeaponBaseGun(void *ptr);

    int32_t GetZoomLevel() const;
    void SetZoomLevel(int32_t value);
    int32_t GetBurstShotsRemaining() const;
    void SetBurstShotsRemaining(int32_t value);
    int32_t GetSilencedModelIndex() const;
    void SetSilencedModelIndex(int32_t value);
    bool GetInPrecache() const;
    void SetInPrecache(bool value);
    bool GetNeedsBoltAction() const;
    void SetNeedsBoltAction(bool value);
    bool GetSkillReloadAvailable() const;
    void SetSkillReloadAvailable(bool value);
    bool GetSkillReloadLiftedReloadKey() const;
    void SetSkillReloadLiftedReloadKey(bool value);
    bool GetSkillBoltInterruptAvailable() const;
    void SetSkillBoltInterruptAvailable(bool value);
    bool GetSkillBoltLiftedFireKey() const;
    void SetSkillBoltLiftedFireKey(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCWeaponGlock
{
private:
    void *m_ptr;

public:
    GCWeaponGlock(std::string ptr);
    GCWeaponGlock(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCPredictedViewModel
{
private:
    void *m_ptr;

public:
    GCPredictedViewModel(std::string ptr);
    GCPredictedViewModel(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCTriggerActiveWeaponDetect
{
private:
    void *m_ptr;

public:
    GCTriggerActiveWeaponDetect(std::string ptr);
    GCTriggerActiveWeaponDetect(void *ptr);

    GCEntityIOOutput GetOnTouchedActiveWeapon() const;
    void SetOnTouchedActiveWeapon(GCEntityIOOutput value);
    CUtlSymbolLarge GetWeaponClassName() const;
    void SetWeaponClassName(CUtlSymbolLarge value);

    std::string ToPtr();
    bool IsValid();
};

class GCEnvMicrophone
{
private:
    void *m_ptr;

public:
    GCEnvMicrophone(std::string ptr);
    GCEnvMicrophone(void *ptr);

    bool GetDisabled() const;
    void SetDisabled(bool value);
    GCBaseEntity GetMeasureTarget() const;
    void SetMeasureTarget(GCBaseEntity* value);
    SoundTypes_t GetSoundType() const;
    void SetSoundType(SoundTypes_t value);
    SoundFlags_t GetSoundFlags() const;
    void SetSoundFlags(SoundFlags_t value);
    float GetSensitivity() const;
    void SetSensitivity(float value);
    float GetSmoothFactor() const;
    void SetSmoothFactor(float value);
    float GetMaxRange() const;
    void SetMaxRange(float value);
    CUtlSymbolLarge GetSpeakerName() const;
    void SetSpeakerName(CUtlSymbolLarge value);
    GCBaseEntity GetSpeaker() const;
    void SetSpeaker(GCBaseEntity* value);
    bool GetAvoidFeedback() const;
    void SetAvoidFeedback(bool value);
    int32_t GetSpeakerDSPPreset() const;
    void SetSpeakerDSPPreset(int32_t value);
    CUtlSymbolLarge GetListenFilter() const;
    void SetListenFilter(CUtlSymbolLarge value);
    GCBaseFilter GetListenFilter1() const;
    void SetListenFilter1(GCBaseFilter* value);
    GCEntityIOOutput GetOnRoutedSound() const;
    void SetOnRoutedSound(GCEntityIOOutput value);
    GCEntityIOOutput GetOnHeardSound() const;
    void SetOnHeardSound(GCEntityIOOutput value);
    std::string GetLastSound() const;
    void SetLastSound(std::string value);
    int32_t GetLastRoutedFrame() const;
    void SetLastRoutedFrame(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCInfoSpawnGroupLoadUnload
{
private:
    void *m_ptr;

public:
    GCInfoSpawnGroupLoadUnload(std::string ptr);
    GCInfoSpawnGroupLoadUnload(void *ptr);

    GCEntityIOOutput GetOnSpawnGroupLoadStarted() const;
    void SetOnSpawnGroupLoadStarted(GCEntityIOOutput value);
    GCEntityIOOutput GetOnSpawnGroupLoadFinished() const;
    void SetOnSpawnGroupLoadFinished(GCEntityIOOutput value);
    GCEntityIOOutput GetOnSpawnGroupUnloadStarted() const;
    void SetOnSpawnGroupUnloadStarted(GCEntityIOOutput value);
    GCEntityIOOutput GetOnSpawnGroupUnloadFinished() const;
    void SetOnSpawnGroupUnloadFinished(GCEntityIOOutput value);
    CUtlSymbolLarge GetSpawnGroupName() const;
    void SetSpawnGroupName(CUtlSymbolLarge value);
    CUtlSymbolLarge GetSpawnGroupFilterName() const;
    void SetSpawnGroupFilterName(CUtlSymbolLarge value);
    CUtlSymbolLarge GetLandmarkName() const;
    void SetLandmarkName(CUtlSymbolLarge value);
    CUtlString GetFixedSpawnGroupName() const;
    void SetFixedSpawnGroupName(CUtlString value);
    float GetTimeoutInterval() const;
    void SetTimeoutInterval(float value);
    bool GetStreamingStarted() const;
    void SetStreamingStarted(bool value);
    bool GetUnloadingStarted() const;
    void SetUnloadingStarted(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCBasePlayerController
{
private:
    void *m_ptr;

public:
    GCBasePlayerController(std::string ptr);
    GCBasePlayerController(void *ptr);

    uint64_t GetInButtonsWhichAreToggles() const;
    void SetInButtonsWhichAreToggles(uint64_t value);
    uint32_t GetTickBase() const;
    void SetTickBase(uint32_t value);
    GCBasePlayerPawn GetPawn() const;
    void SetPawn(GCBasePlayerPawn* value);
    bool GetKnownTeamMismatch() const;
    void SetKnownTeamMismatch(bool value);
    int32_t GetSplitScreenSlot() const;
    void SetSplitScreenSlot(int32_t value);
    GCBasePlayerController GetSplitOwner() const;
    void SetSplitOwner(GCBasePlayerController* value);
    bool GetIsHLTV() const;
    void SetIsHLTV(bool value);
    PlayerConnectedState GetConnected() const;
    void SetConnected(PlayerConnectedState value);
    std::string GetPlayerName() const;
    void SetPlayerName(std::string value);
    CUtlString GetNetworkIDString() const;
    void SetNetworkIDString(CUtlString value);
    float GetLerpTime() const;
    void SetLerpTime(float value);
    bool GetLagCompensation() const;
    void SetLagCompensation(bool value);
    bool GetPredict() const;
    void SetPredict(bool value);
    bool GetAutoKickDisabled() const;
    void SetAutoKickDisabled(bool value);
    bool GetIsLowViolence() const;
    void SetIsLowViolence(bool value);
    bool GetGamePaused() const;
    void SetGamePaused(bool value);
    int32_t GetLastRealCommandNumberExecuted() const;
    void SetLastRealCommandNumberExecuted(int32_t value);
    int32_t GetLastLateCommandExecuted() const;
    void SetLastLateCommandExecuted(int32_t value);
    ChatIgnoreType_t GetIgnoreGlobalChat() const;
    void SetIgnoreGlobalChat(ChatIgnoreType_t value);
    float GetLastPlayerTalkTime() const;
    void SetLastPlayerTalkTime(float value);
    float GetLastEntitySteadyState() const;
    void SetLastEntitySteadyState(float value);
    int32_t GetAvailableEntitySteadyState() const;
    void SetAvailableEntitySteadyState(int32_t value);
    bool GetHasAnySteadyStateEnts() const;
    void SetHasAnySteadyStateEnts(bool value);
    uint64_t GetSteamID() const;
    void SetSteamID(uint64_t value);
    uint32_t GetDesiredFOV() const;
    void SetDesiredFOV(uint32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCPointTemplateAPI
{
private:
    void *m_ptr;

public:
    GCPointTemplateAPI(std::string ptr);
    GCPointTemplateAPI(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCKnife
{
private:
    void *m_ptr;

public:
    GCKnife(std::string ptr);
    GCKnife(void *ptr);

    bool GetFirstAttack() const;
    void SetFirstAttack(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCFuncTrackTrain
{
private:
    void *m_ptr;

public:
    GCFuncTrackTrain(std::string ptr);
    GCFuncTrackTrain(void *ptr);

    GCPathTrack GetPpath() const;
    void SetPpath(GCPathTrack* value);
    float GetLength() const;
    void SetLength(float value);
    Vector GetPosPrev() const;
    void SetPosPrev(Vector value);
    QAngle GetPrev() const;
    void SetPrev(QAngle value);
    Vector GetControlMins() const;
    void SetControlMins(Vector value);
    Vector GetControlMaxs() const;
    void SetControlMaxs(Vector value);
    Vector GetLastBlockPos() const;
    void SetLastBlockPos(Vector value);
    int32_t GetLastBlockTick() const;
    void SetLastBlockTick(int32_t value);
    float GetVolume() const;
    void SetVolume(float value);
    float GetBank() const;
    void SetBank(float value);
    float GetOldSpeed() const;
    void SetOldSpeed(float value);
    float GetBlockDamage() const;
    void SetBlockDamage(float value);
    float GetHeight() const;
    void SetHeight(float value);
    float GetMaxSpeed() const;
    void SetMaxSpeed(float value);
    float GetDir() const;
    void SetDir(float value);
    CUtlSymbolLarge GetSoundMove() const;
    void SetSoundMove(CUtlSymbolLarge value);
    CUtlSymbolLarge GetSoundMovePing() const;
    void SetSoundMovePing(CUtlSymbolLarge value);
    CUtlSymbolLarge GetSoundStart() const;
    void SetSoundStart(CUtlSymbolLarge value);
    CUtlSymbolLarge GetSoundStop() const;
    void SetSoundStop(CUtlSymbolLarge value);
    CUtlSymbolLarge GetStrPathTarget() const;
    void SetStrPathTarget(CUtlSymbolLarge value);
    float GetMoveSoundMinDuration() const;
    void SetMoveSoundMinDuration(float value);
    float GetMoveSoundMaxDuration() const;
    void SetMoveSoundMaxDuration(float value);
    float GetMoveSoundMinPitch() const;
    void SetMoveSoundMinPitch(float value);
    float GetMoveSoundMaxPitch() const;
    void SetMoveSoundMaxPitch(float value);
    TrainOrientationType_t GetOrientationType() const;
    void SetOrientationType(TrainOrientationType_t value);
    TrainVelocityType_t GetVelocityType() const;
    void SetVelocityType(TrainVelocityType_t value);
    GCEntityIOOutput GetOnStart() const;
    void SetOnStart(GCEntityIOOutput value);
    GCEntityIOOutput GetOnNext() const;
    void SetOnNext(GCEntityIOOutput value);
    GCEntityIOOutput GetOnArrivedAtDestinationNode() const;
    void SetOnArrivedAtDestinationNode(GCEntityIOOutput value);
    bool GetManualSpeedChanges() const;
    void SetManualSpeedChanges(bool value);
    float GetDesiredSpeed() const;
    void SetDesiredSpeed(float value);
    float GetAccelSpeed() const;
    void SetAccelSpeed(float value);
    float GetDecelSpeed() const;
    void SetDecelSpeed(float value);
    bool GetAccelToSpeed() const;
    void SetAccelToSpeed(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCFogVolume
{
private:
    void *m_ptr;

public:
    GCFogVolume(std::string ptr);
    GCFogVolume(void *ptr);

    CUtlSymbolLarge GetFogName() const;
    void SetFogName(CUtlSymbolLarge value);
    CUtlSymbolLarge GetPostProcessName() const;
    void SetPostProcessName(CUtlSymbolLarge value);
    CUtlSymbolLarge GetColorCorrectionName() const;
    void SetColorCorrectionName(CUtlSymbolLarge value);
    bool GetDisabled() const;
    void SetDisabled(bool value);
    bool GetInFogVolumesList() const;
    void SetInFogVolumesList(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCInfoPlayerCounterterrorist
{
private:
    void *m_ptr;

public:
    GCInfoPlayerCounterterrorist(std::string ptr);
    GCInfoPlayerCounterterrorist(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCFire
{
private:
    void *m_ptr;

public:
    GCFire(std::string ptr);
    GCFire(void *ptr);

    GCBaseFire GetEffect() const;
    void SetEffect(GCBaseFire* value);
    GCBaseEntity GetOwner() const;
    void SetOwner(GCBaseEntity* value);
    int32_t GetFireType() const;
    void SetFireType(int32_t value);
    float GetFuel() const;
    void SetFuel(float value);
    float GetFireSize() const;
    void SetFireSize(float value);
    float GetHeatLevel() const;
    void SetHeatLevel(float value);
    float GetHeatAbsorb() const;
    void SetHeatAbsorb(float value);
    float GetDamageScale() const;
    void SetDamageScale(float value);
    float GetMaxHeat() const;
    void SetMaxHeat(float value);
    float GetLastHeatLevel() const;
    void SetLastHeatLevel(float value);
    float GetAttackTime() const;
    void SetAttackTime(float value);
    bool GetEnabled() const;
    void SetEnabled(bool value);
    bool GetStartDisabled() const;
    void SetStartDisabled(bool value);
    bool GetDidActivate() const;
    void SetDidActivate(bool value);
    GCEntityIOOutput GetOnIgnited() const;
    void SetOnIgnited(GCEntityIOOutput value);
    GCEntityIOOutput GetOnExtinguished() const;
    void SetOnExtinguished(GCEntityIOOutput value);

    std::string ToPtr();
    bool IsValid();
};

class GISkeletonAnimationController
{
private:
    void *m_ptr;

public:
    GISkeletonAnimationController(std::string ptr);
    GISkeletonAnimationController(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCCSServerPointScriptEntity
{
private:
    void *m_ptr;

public:
    GCCSServerPointScriptEntity(std::string ptr);
    GCCSServerPointScriptEntity(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCWeaponBizon
{
private:
    void *m_ptr;

public:
    GCWeaponBizon(std::string ptr);
    GCWeaponBizon(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCFuncPlatRot
{
private:
    void *m_ptr;

public:
    GCFuncPlatRot(std::string ptr);
    GCFuncPlatRot(void *ptr);

    QAngle GetEnd() const;
    void SetEnd(QAngle value);
    QAngle GetStart() const;
    void SetStart(QAngle value);

    std::string ToPtr();
    bool IsValid();
};

class GCGenericConstraint
{
private:
    void *m_ptr;

public:
    GCGenericConstraint(std::string ptr);
    GCGenericConstraint(void *ptr);

    JointMotion_t GetLinearMotionX() const;
    void SetLinearMotionX(JointMotion_t value);
    JointMotion_t GetLinearMotionY() const;
    void SetLinearMotionY(JointMotion_t value);
    JointMotion_t GetLinearMotionZ() const;
    void SetLinearMotionZ(JointMotion_t value);
    float GetLinearFrequencyX() const;
    void SetLinearFrequencyX(float value);
    float GetLinearFrequencyY() const;
    void SetLinearFrequencyY(float value);
    float GetLinearFrequencyZ() const;
    void SetLinearFrequencyZ(float value);
    float GetLinearDampingRatioX() const;
    void SetLinearDampingRatioX(float value);
    float GetLinearDampingRatioY() const;
    void SetLinearDampingRatioY(float value);
    float GetLinearDampingRatioZ() const;
    void SetLinearDampingRatioZ(float value);
    float GetMaxLinearImpulseX() const;
    void SetMaxLinearImpulseX(float value);
    float GetMaxLinearImpulseY() const;
    void SetMaxLinearImpulseY(float value);
    float GetMaxLinearImpulseZ() const;
    void SetMaxLinearImpulseZ(float value);
    float GetBreakAfterTimeX() const;
    void SetBreakAfterTimeX(float value);
    float GetBreakAfterTimeY() const;
    void SetBreakAfterTimeY(float value);
    float GetBreakAfterTimeZ() const;
    void SetBreakAfterTimeZ(float value);
    float GetBreakAfterTimeThresholdX() const;
    void SetBreakAfterTimeThresholdX(float value);
    float GetBreakAfterTimeThresholdY() const;
    void SetBreakAfterTimeThresholdY(float value);
    float GetBreakAfterTimeThresholdZ() const;
    void SetBreakAfterTimeThresholdZ(float value);
    float GetNotifyForceX() const;
    void SetNotifyForceX(float value);
    float GetNotifyForceY() const;
    void SetNotifyForceY(float value);
    float GetNotifyForceZ() const;
    void SetNotifyForceZ(float value);
    float GetNotifyForceMinTimeX() const;
    void SetNotifyForceMinTimeX(float value);
    float GetNotifyForceMinTimeY() const;
    void SetNotifyForceMinTimeY(float value);
    float GetNotifyForceMinTimeZ() const;
    void SetNotifyForceMinTimeZ(float value);
    bool GetAxisNotifiedX() const;
    void SetAxisNotifiedX(bool value);
    bool GetAxisNotifiedY() const;
    void SetAxisNotifiedY(bool value);
    bool GetAxisNotifiedZ() const;
    void SetAxisNotifiedZ(bool value);
    JointMotion_t GetAngularMotionX() const;
    void SetAngularMotionX(JointMotion_t value);
    JointMotion_t GetAngularMotionY() const;
    void SetAngularMotionY(JointMotion_t value);
    JointMotion_t GetAngularMotionZ() const;
    void SetAngularMotionZ(JointMotion_t value);
    float GetAngularFrequencyX() const;
    void SetAngularFrequencyX(float value);
    float GetAngularFrequencyY() const;
    void SetAngularFrequencyY(float value);
    float GetAngularFrequencyZ() const;
    void SetAngularFrequencyZ(float value);
    float GetAngularDampingRatioX() const;
    void SetAngularDampingRatioX(float value);
    float GetAngularDampingRatioY() const;
    void SetAngularDampingRatioY(float value);
    float GetAngularDampingRatioZ() const;
    void SetAngularDampingRatioZ(float value);
    float GetMaxAngularImpulseX() const;
    void SetMaxAngularImpulseX(float value);
    float GetMaxAngularImpulseY() const;
    void SetMaxAngularImpulseY(float value);
    float GetMaxAngularImpulseZ() const;
    void SetMaxAngularImpulseZ(float value);
    GCEntityIOOutput GetNotifyForceReachedX() const;
    void SetNotifyForceReachedX(GCEntityIOOutput value);
    GCEntityIOOutput GetNotifyForceReachedY() const;
    void SetNotifyForceReachedY(GCEntityIOOutput value);
    GCEntityIOOutput GetNotifyForceReachedZ() const;
    void SetNotifyForceReachedZ(GCEntityIOOutput value);

    std::string ToPtr();
    bool IsValid();
};

class GCDecoyGrenade
{
private:
    void *m_ptr;

public:
    GCDecoyGrenade(std::string ptr);
    GCDecoyGrenade(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCWeaponG3SG1
{
private:
    void *m_ptr;

public:
    GCWeaponG3SG1(std::string ptr);
    GCWeaponG3SG1(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCItemDefuser
{
private:
    void *m_ptr;

public:
    GCItemDefuser(std::string ptr);
    GCItemDefuser(void *ptr);

    GEntitySpottedState_t GetEntitySpottedState() const;
    void SetEntitySpottedState(GEntitySpottedState_t value);
    int32_t GetSpotRules() const;
    void SetSpotRules(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCConstantForceController
{
private:
    void *m_ptr;

public:
    GCConstantForceController(std::string ptr);
    GCConstantForceController(void *ptr);

    Vector GetLinear() const;
    void SetLinear(Vector value);
    Vector GetAngular() const;
    void SetAngular(Vector value);
    Vector GetLinearSave() const;
    void SetLinearSave(Vector value);
    Vector GetAngularSave() const;
    void SetAngularSave(Vector value);

    std::string ToPtr();
    bool IsValid();
};

class GCDEagle
{
private:
    void *m_ptr;

public:
    GCDEagle(std::string ptr);
    GCDEagle(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCRagdollProp
{
private:
    void *m_ptr;

public:
    GCRagdollProp(std::string ptr);
    GCRagdollProp(void *ptr);

    Gragdoll_t GetRagdoll() const;
    void SetRagdoll(Gragdoll_t value);
    bool GetStartDisabled() const;
    void SetStartDisabled(bool value);
    std::vector<Vector> GetRagPos() const;
    void SetRagPos(std::vector<Vector> value);
    std::vector<QAngle> GetRagAngles() const;
    void SetRagAngles(std::vector<QAngle> value);
    GCBaseEntity GetRagdollSource() const;
    void SetRagdollSource(GCBaseEntity* value);
    uint32_t GetLastUpdateTickCount() const;
    void SetLastUpdateTickCount(uint32_t value);
    bool GetAllAsleep() const;
    void SetAllAsleep(bool value);
    bool GetFirstCollisionAfterLaunch() const;
    void SetFirstCollisionAfterLaunch(bool value);
    GCBaseEntity GetDamageEntity() const;
    void SetDamageEntity(GCBaseEntity* value);
    GCBaseEntity GetKiller() const;
    void SetKiller(GCBaseEntity* value);
    GCBasePlayerPawn GetPhysicsAttacker() const;
    void SetPhysicsAttacker(GCBasePlayerPawn* value);
    float GetFadeTime() const;
    void SetFadeTime(float value);
    Vector GetLastOrigin() const;
    void SetLastOrigin(Vector value);
    CUtlSymbolLarge GetStrOriginClassName() const;
    void SetStrOriginClassName(CUtlSymbolLarge value);
    CUtlSymbolLarge GetStrSourceClassName() const;
    void SetStrSourceClassName(CUtlSymbolLarge value);
    bool GetHasBeenPhysgunned() const;
    void SetHasBeenPhysgunned(bool value);
    bool GetShouldTeleportPhysics() const;
    void SetShouldTeleportPhysics(bool value);
    float GetBlendWeight() const;
    void SetBlendWeight(float value);
    float GetDefaultFadeScale() const;
    void SetDefaultFadeScale(float value);
    std::vector<Vector> GetRagdollMins() const;
    void SetRagdollMins(std::vector<Vector> value);
    std::vector<Vector> GetRagdollMaxs() const;
    void SetRagdollMaxs(std::vector<Vector> value);
    bool GetShouldDeleteActivationRecord() const;
    void SetShouldDeleteActivationRecord(bool value);
    bool GetValidatePoweredRagdollPose() const;
    void SetValidatePoweredRagdollPose(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCItemSoda
{
private:
    void *m_ptr;

public:
    GCItemSoda(std::string ptr);
    GCItemSoda(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCEnvCubemap
{
private:
    void *m_ptr;

public:
    GCEnvCubemap(std::string ptr);
    GCEnvCubemap(void *ptr);

    bool GetEntity_bCustomCubemapTexture() const;
    void SetEntity_bCustomCubemapTexture(bool value);
    float GetEntity_flInfluenceRadius() const;
    void SetEntity_flInfluenceRadius(float value);
    Vector GetEntity_vBoxProjectMins() const;
    void SetEntity_vBoxProjectMins(Vector value);
    Vector GetEntity_vBoxProjectMaxs() const;
    void SetEntity_vBoxProjectMaxs(Vector value);
    bool GetEntity_bMoveable() const;
    void SetEntity_bMoveable(bool value);
    int32_t GetEntity_nHandshake() const;
    void SetEntity_nHandshake(int32_t value);
    int32_t GetEntity_nEnvCubeMapArrayIndex() const;
    void SetEntity_nEnvCubeMapArrayIndex(int32_t value);
    int32_t GetEntity_nPriority() const;
    void SetEntity_nPriority(int32_t value);
    float GetEntity_flEdgeFadeDist() const;
    void SetEntity_flEdgeFadeDist(float value);
    Vector GetEntity_vEdgeFadeDists() const;
    void SetEntity_vEdgeFadeDists(Vector value);
    float GetEntity_flDiffuseScale() const;
    void SetEntity_flDiffuseScale(float value);
    bool GetEntity_bStartDisabled() const;
    void SetEntity_bStartDisabled(bool value);
    bool GetEntity_bDefaultEnvMap() const;
    void SetEntity_bDefaultEnvMap(bool value);
    bool GetEntity_bDefaultSpecEnvMap() const;
    void SetEntity_bDefaultSpecEnvMap(bool value);
    bool GetEntity_bIndoorCubeMap() const;
    void SetEntity_bIndoorCubeMap(bool value);
    bool GetEntity_bCopyDiffuseFromDefaultCubemap() const;
    void SetEntity_bCopyDiffuseFromDefaultCubemap(bool value);
    bool GetEntity_bEnabled() const;
    void SetEntity_bEnabled(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCBasePlayerControllerAPI
{
private:
    void *m_ptr;

public:
    GCBasePlayerControllerAPI(std::string ptr);
    GCBasePlayerControllerAPI(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCCSPointScriptExtensions_CCSWeaponBaseVData
{
private:
    void *m_ptr;

public:
    GCCSPointScriptExtensions_CCSWeaponBaseVData(std::string ptr);
    GCCSPointScriptExtensions_CCSWeaponBaseVData(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCEnvDetailController
{
private:
    void *m_ptr;

public:
    GCEnvDetailController(std::string ptr);
    GCEnvDetailController(void *ptr);

    float GetFadeStartDist() const;
    void SetFadeStartDist(float value);
    float GetFadeEndDist() const;
    void SetFadeEndDist(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCTriggerOnce
{
private:
    void *m_ptr;

public:
    GCTriggerOnce(std::string ptr);
    GCTriggerOnce(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCInfoTeleportDestination
{
private:
    void *m_ptr;

public:
    GCInfoTeleportDestination(std::string ptr);
    GCInfoTeleportDestination(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCMathRemap
{
private:
    void *m_ptr;

public:
    GCMathRemap(std::string ptr);
    GCMathRemap(void *ptr);

    float GetInMin() const;
    void SetInMin(float value);
    float GetInMax() const;
    void SetInMax(float value);
    float GetOut1() const;
    void SetOut1(float value);
    float GetOut2() const;
    void SetOut2(float value);
    float GetOldInValue() const;
    void SetOldInValue(float value);
    bool GetEnabled() const;
    void SetEnabled(bool value);
    GCEntityIOOutput GetOnRoseAboveMin() const;
    void SetOnRoseAboveMin(GCEntityIOOutput value);
    GCEntityIOOutput GetOnRoseAboveMax() const;
    void SetOnRoseAboveMax(GCEntityIOOutput value);
    GCEntityIOOutput GetOnFellBelowMin() const;
    void SetOnFellBelowMin(GCEntityIOOutput value);
    GCEntityIOOutput GetOnFellBelowMax() const;
    void SetOnFellBelowMax(GCEntityIOOutput value);

    std::string ToPtr();
    bool IsValid();
};

class GCInstructorEventEntity
{
private:
    void *m_ptr;

public:
    GCInstructorEventEntity(std::string ptr);
    GCInstructorEventEntity(void *ptr);

    CUtlSymbolLarge GetName() const;
    void SetName(CUtlSymbolLarge value);
    CUtlSymbolLarge GetHintTargetEntity() const;
    void SetHintTargetEntity(CUtlSymbolLarge value);
    GCBasePlayerPawn GetTargetPlayer() const;
    void SetTargetPlayer(GCBasePlayerPawn* value);

    std::string ToPtr();
    bool IsValid();
};

class GCGradientFog
{
private:
    void *m_ptr;

public:
    GCGradientFog(std::string ptr);
    GCGradientFog(void *ptr);

    float GetFogStartDistance() const;
    void SetFogStartDistance(float value);
    float GetFogEndDistance() const;
    void SetFogEndDistance(float value);
    bool GetHeightFogEnabled() const;
    void SetHeightFogEnabled(bool value);
    float GetFogStartHeight() const;
    void SetFogStartHeight(float value);
    float GetFogEndHeight() const;
    void SetFogEndHeight(float value);
    float GetFarZ() const;
    void SetFarZ(float value);
    float GetFogMaxOpacity() const;
    void SetFogMaxOpacity(float value);
    float GetFogFalloffExponent() const;
    void SetFogFalloffExponent(float value);
    float GetFogVerticalExponent() const;
    void SetFogVerticalExponent(float value);
    Color GetFogColor() const;
    void SetFogColor(Color value);
    float GetFogStrength() const;
    void SetFogStrength(float value);
    float GetFadeTime() const;
    void SetFadeTime(float value);
    bool GetStartDisabled() const;
    void SetStartDisabled(bool value);
    bool GetIsEnabled() const;
    void SetIsEnabled(bool value);
    bool GetGradientFogNeedsTextures() const;
    void SetGradientFogNeedsTextures(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCFootstepControl
{
private:
    void *m_ptr;

public:
    GCFootstepControl(std::string ptr);
    GCFootstepControl(void *ptr);

    CUtlSymbolLarge GetSource() const;
    void SetSource(CUtlSymbolLarge value);
    CUtlSymbolLarge GetDestination() const;
    void SetDestination(CUtlSymbolLarge value);

    std::string ToPtr();
    bool IsValid();
};

class GCTriggerVolume
{
private:
    void *m_ptr;

public:
    GCTriggerVolume(std::string ptr);
    GCTriggerVolume(void *ptr);

    CUtlSymbolLarge GetFilterName() const;
    void SetFilterName(CUtlSymbolLarge value);
    GCBaseFilter GetFilter() const;
    void SetFilter(GCBaseFilter* value);

    std::string ToPtr();
    bool IsValid();
};

class GCInfoInstructorHintHostageRescueZone
{
private:
    void *m_ptr;

public:
    GCInfoInstructorHintHostageRescueZone(std::string ptr);
    GCInfoInstructorHintHostageRescueZone(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCEnvSoundscapeAlias_snd_soundscape
{
private:
    void *m_ptr;

public:
    GCEnvSoundscapeAlias_snd_soundscape(std::string ptr);
    GCEnvSoundscapeAlias_snd_soundscape(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCFishPool
{
private:
    void *m_ptr;

public:
    GCFishPool(std::string ptr);
    GCFishPool(void *ptr);

    int32_t GetFishCount() const;
    void SetFishCount(int32_t value);
    float GetMaxRange() const;
    void SetMaxRange(float value);
    float GetSwimDepth() const;
    void SetSwimDepth(float value);
    float GetWaterLevel() const;
    void SetWaterLevel(float value);
    bool GetIsDormant() const;
    void SetIsDormant(bool value);
    GCountdownTimer GetVisTimer() const;
    void SetVisTimer(GCountdownTimer value);

    std::string ToPtr();
    bool IsValid();
};

class GCPointClientCommand
{
private:
    void *m_ptr;

public:
    GCPointClientCommand(std::string ptr);
    GCPointClientCommand(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCFuncVPhysicsClip
{
private:
    void *m_ptr;

public:
    GCFuncVPhysicsClip(std::string ptr);
    GCFuncVPhysicsClip(void *ptr);

    bool GetDisabled() const;
    void SetDisabled(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCCSPlayer_RadioServices
{
private:
    void *m_ptr;

public:
    GCCSPlayer_RadioServices(std::string ptr);
    GCCSPlayer_RadioServices(void *ptr);

    bool GetIgnoreRadio() const;
    void SetIgnoreRadio(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCSceneEntity
{
private:
    void *m_ptr;

public:
    GCSceneEntity(std::string ptr);
    GCSceneEntity(void *ptr);

    CUtlSymbolLarge GetSceneFile() const;
    void SetSceneFile(CUtlSymbolLarge value);
    CUtlSymbolLarge GetResumeSceneFile() const;
    void SetResumeSceneFile(CUtlSymbolLarge value);
    CUtlSymbolLarge GetTarget1() const;
    void SetTarget1(CUtlSymbolLarge value);
    CUtlSymbolLarge GetTarget2() const;
    void SetTarget2(CUtlSymbolLarge value);
    CUtlSymbolLarge GetTarget3() const;
    void SetTarget3(CUtlSymbolLarge value);
    CUtlSymbolLarge GetTarget4() const;
    void SetTarget4(CUtlSymbolLarge value);
    CUtlSymbolLarge GetTarget5() const;
    void SetTarget5(CUtlSymbolLarge value);
    CUtlSymbolLarge GetTarget6() const;
    void SetTarget6(CUtlSymbolLarge value);
    CUtlSymbolLarge GetTarget7() const;
    void SetTarget7(CUtlSymbolLarge value);
    CUtlSymbolLarge GetTarget8() const;
    void SetTarget8(CUtlSymbolLarge value);
    GCBaseEntity GetTarget11() const;
    void SetTarget11(GCBaseEntity* value);
    GCBaseEntity GetTarget21() const;
    void SetTarget21(GCBaseEntity* value);
    GCBaseEntity GetTarget31() const;
    void SetTarget31(GCBaseEntity* value);
    GCBaseEntity GetTarget41() const;
    void SetTarget41(GCBaseEntity* value);
    GCBaseEntity GetTarget51() const;
    void SetTarget51(GCBaseEntity* value);
    GCBaseEntity GetTarget61() const;
    void SetTarget61(GCBaseEntity* value);
    GCBaseEntity GetTarget71() const;
    void SetTarget71(GCBaseEntity* value);
    GCBaseEntity GetTarget81() const;
    void SetTarget81(GCBaseEntity* value);
    CUtlSymbolLarge GetTargetAttachment() const;
    void SetTargetAttachment(CUtlSymbolLarge value);
    bool GetIsPlayingBack() const;
    void SetIsPlayingBack(bool value);
    bool GetPaused() const;
    void SetPaused(bool value);
    bool GetMultiplayer() const;
    void SetMultiplayer(bool value);
    bool GetAutogenerated() const;
    void SetAutogenerated(bool value);
    float GetForceClientTime() const;
    void SetForceClientTime(float value);
    float GetCurrentTime() const;
    void SetCurrentTime(float value);
    float GetFrameTime() const;
    void SetFrameTime(float value);
    bool GetCancelAtNextInterrupt() const;
    void SetCancelAtNextInterrupt(bool value);
    float GetPitch() const;
    void SetPitch(float value);
    bool GetAutomated() const;
    void SetAutomated(bool value);
    int32_t GetAutomatedAction() const;
    void SetAutomatedAction(int32_t value);
    float GetAutomationDelay() const;
    void SetAutomationDelay(float value);
    float GetAutomationTime() const;
    void SetAutomationTime(float value);
    GCBaseEntity GetWaitingForThisResumeScene() const;
    void SetWaitingForThisResumeScene(GCBaseEntity* value);
    bool GetWaitingForResumeScene() const;
    void SetWaitingForResumeScene(bool value);
    bool GetPausedViaInput() const;
    void SetPausedViaInput(bool value);
    bool GetPauseAtNextInterrupt() const;
    void SetPauseAtNextInterrupt(bool value);
    bool GetWaitingForActor() const;
    void SetWaitingForActor(bool value);
    bool GetWaitingForInterrupt() const;
    void SetWaitingForInterrupt(bool value);
    bool GetInterruptedActorsScenes() const;
    void SetInterruptedActorsScenes(bool value);
    bool GetBreakOnNonIdle() const;
    void SetBreakOnNonIdle(bool value);
    bool GetSceneFinished() const;
    void SetSceneFinished(bool value);
    std::vector<GCBaseFlex*> GetActorList() const;
    void SetActorList(std::vector<GCBaseFlex*> value);
    int32_t GetSceneFlushCounter() const;
    void SetSceneFlushCounter(int32_t value);
    uint16_t GetSceneStringIndex() const;
    void SetSceneStringIndex(uint16_t value);
    GCEntityIOOutput GetOnStart() const;
    void SetOnStart(GCEntityIOOutput value);
    GCEntityIOOutput GetOnCompletion() const;
    void SetOnCompletion(GCEntityIOOutput value);
    GCEntityIOOutput GetOnCanceled() const;
    void SetOnCanceled(GCEntityIOOutput value);
    GCEntityIOOutput GetOnPaused() const;
    void SetOnPaused(GCEntityIOOutput value);
    GCEntityIOOutput GetOnResumed() const;
    void SetOnResumed(GCEntityIOOutput value);
    std::vector<GCEntityIOOutput> GetOnTrigger() const;
    void SetOnTrigger(std::vector<GCEntityIOOutput> value);
    GCSceneEntity GetInterruptScene() const;
    void SetInterruptScene(GCSceneEntity* value);
    int32_t GetInterruptCount() const;
    void SetInterruptCount(int32_t value);
    bool GetSceneMissing() const;
    void SetSceneMissing(bool value);
    bool GetInterrupted() const;
    void SetInterrupted(bool value);
    bool GetCompletedEarly() const;
    void SetCompletedEarly(bool value);
    bool GetInterruptSceneFinished() const;
    void SetInterruptSceneFinished(bool value);
    bool GetRestoring() const;
    void SetRestoring(bool value);
    CUtlSymbolLarge GetSoundName() const;
    void SetSoundName(CUtlSymbolLarge value);
    CUtlSymbolLarge GetSequenceName() const;
    void SetSequenceName(CUtlSymbolLarge value);
    GCBaseFlex GetActor() const;
    void SetActor(GCBaseFlex* value);
    GCBaseEntity GetActivator() const;
    void SetActivator(GCBaseEntity* value);
    int32_t GetBusyActor() const;
    void SetBusyActor(int32_t value);
    SceneOnPlayerDeath_t GetPlayerDeathBehavior() const;
    void SetPlayerDeathBehavior(SceneOnPlayerDeath_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCEnvHudHint
{
private:
    void *m_ptr;

public:
    GCEnvHudHint(std::string ptr);
    GCEnvHudHint(void *ptr);

    CUtlSymbolLarge GetMessage() const;
    void SetMessage(CUtlSymbolLarge value);

    std::string ToPtr();
    bool IsValid();
};

class GCParticleSystem
{
private:
    void *m_ptr;

public:
    GCParticleSystem(std::string ptr);
    GCParticleSystem(void *ptr);

    std::string GetSnapshotFileName() const;
    void SetSnapshotFileName(std::string value);
    bool GetActive() const;
    void SetActive(bool value);
    bool GetFrozen() const;
    void SetFrozen(bool value);
    float GetFreezeTransitionDuration() const;
    void SetFreezeTransitionDuration(float value);
    int32_t GetStopType() const;
    void SetStopType(int32_t value);
    bool GetAnimateDuringGameplayPause() const;
    void SetAnimateDuringGameplayPause(bool value);
    float GetPreSimTime() const;
    void SetPreSimTime(float value);
    std::vector<Vector> GetServerControlPoints() const;
    void SetServerControlPoints(std::vector<Vector> value);
    std::vector<uint8_t> GetServerControlPointAssignments() const;
    void SetServerControlPointAssignments(std::vector<uint8_t> value);
    std::vector<GCBaseEntity*> GetControlPointEnts() const;
    void SetControlPointEnts(std::vector<GCBaseEntity*> value);
    bool GetNoSave() const;
    void SetNoSave(bool value);
    bool GetNoFreeze() const;
    void SetNoFreeze(bool value);
    bool GetNoRamp() const;
    void SetNoRamp(bool value);
    bool GetStartActive() const;
    void SetStartActive(bool value);
    CUtlSymbolLarge GetEffectName() const;
    void SetEffectName(CUtlSymbolLarge value);
    std::vector<CUtlSymbolLarge> GetControlPointNames() const;
    void SetControlPointNames(std::vector<CUtlSymbolLarge> value);
    int32_t GetDataCP() const;
    void SetDataCP(int32_t value);
    Vector GetDataCPValue() const;
    void SetDataCPValue(Vector value);
    int32_t GetTintCP() const;
    void SetTintCP(int32_t value);
    Color GetTint() const;
    void SetTint(Color value);

    std::string ToPtr();
    bool IsValid();
};

class GAmmoIndex_t
{
private:
    void *m_ptr;

public:
    GAmmoIndex_t(std::string ptr);
    GAmmoIndex_t(void *ptr);

    int8_t GetValue() const;
    void SetValue(int8_t value);

    std::string ToPtr();
    bool IsValid();
};

class Gsky3dparams_t
{
private:
    void *m_ptr;

public:
    Gsky3dparams_t(std::string ptr);
    Gsky3dparams_t(void *ptr);

    int16_t GetScale() const;
    void SetScale(int16_t value);
    Vector GetOrigin() const;
    void SetOrigin(Vector value);
    bool GetClip3DSkyBoxNearToWorldFar() const;
    void SetClip3DSkyBoxNearToWorldFar(bool value);
    float GetClip3DSkyBoxNearToWorldFarOffset() const;
    void SetClip3DSkyBoxNearToWorldFarOffset(float value);
    Gfogparams_t GetFog() const;
    void SetFog(Gfogparams_t value);
    WorldGroupId_t GetWorldGroupID() const;
    void SetWorldGroupID(WorldGroupId_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCScriptItem
{
private:
    void *m_ptr;

public:
    GCScriptItem(std::string ptr);
    GCScriptItem(void *ptr);

    MoveType_t GetMoveTypeOverride() const;
    void SetMoveTypeOverride(MoveType_t value);

    std::string ToPtr();
    bool IsValid();
};

class GIntervalTimer
{
private:
    void *m_ptr;

public:
    GIntervalTimer(std::string ptr);
    GIntervalTimer(void *ptr);

    WorldGroupId_t GetWorldGroupId() const;
    void SetWorldGroupId(WorldGroupId_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCWeaponSG556
{
private:
    void *m_ptr;

public:
    GCWeaponSG556(std::string ptr);
    GCWeaponSG556(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class Gdynpitchvol_base_t
{
private:
    void *m_ptr;

public:
    Gdynpitchvol_base_t(std::string ptr);
    Gdynpitchvol_base_t(void *ptr);

    int32_t GetPreset() const;
    void SetPreset(int32_t value);
    int32_t GetPitchrun() const;
    void SetPitchrun(int32_t value);
    int32_t GetPitchstart() const;
    void SetPitchstart(int32_t value);
    int32_t GetSpinup() const;
    void SetSpinup(int32_t value);
    int32_t GetSpindown() const;
    void SetSpindown(int32_t value);
    int32_t GetVolrun() const;
    void SetVolrun(int32_t value);
    int32_t GetVolstart() const;
    void SetVolstart(int32_t value);
    int32_t GetFadein() const;
    void SetFadein(int32_t value);
    int32_t GetFadeout() const;
    void SetFadeout(int32_t value);
    int32_t GetLfotype() const;
    void SetLfotype(int32_t value);
    int32_t GetLforate() const;
    void SetLforate(int32_t value);
    int32_t GetLfomodpitch() const;
    void SetLfomodpitch(int32_t value);
    int32_t GetLfomodvol() const;
    void SetLfomodvol(int32_t value);
    int32_t GetCspinup() const;
    void SetCspinup(int32_t value);
    int32_t GetCspincount() const;
    void SetCspincount(int32_t value);
    int32_t GetPitch() const;
    void SetPitch(int32_t value);
    int32_t GetSpinupsav() const;
    void SetSpinupsav(int32_t value);
    int32_t GetSpindownsav() const;
    void SetSpindownsav(int32_t value);
    int32_t GetPitchfrac() const;
    void SetPitchfrac(int32_t value);
    int32_t GetVol() const;
    void SetVol(int32_t value);
    int32_t GetFadeinsav() const;
    void SetFadeinsav(int32_t value);
    int32_t GetFadeoutsav() const;
    void SetFadeoutsav(int32_t value);
    int32_t GetVolfrac() const;
    void SetVolfrac(int32_t value);
    int32_t GetLfofrac() const;
    void SetLfofrac(int32_t value);
    int32_t GetLfomult() const;
    void SetLfomult(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCDynamicLight
{
private:
    void *m_ptr;

public:
    GCDynamicLight(std::string ptr);
    GCDynamicLight(void *ptr);

    uint8_t GetActualFlags() const;
    void SetActualFlags(uint8_t value);
    uint8_t GetFlags() const;
    void SetFlags(uint8_t value);
    uint8_t GetLightStyle() const;
    void SetLightStyle(uint8_t value);
    bool GetOn() const;
    void SetOn(bool value);
    float GetRadius() const;
    void SetRadius(float value);
    int32_t GetExponent() const;
    void SetExponent(int32_t value);
    float GetInnerAngle() const;
    void SetInnerAngle(float value);
    float GetOuterAngle() const;
    void SetOuterAngle(float value);
    float GetSpotRadius() const;
    void SetSpotRadius(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCWeaponP90
{
private:
    void *m_ptr;

public:
    GCWeaponP90(std::string ptr);
    GCWeaponP90(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCTriggerToggleSave
{
private:
    void *m_ptr;

public:
    GCTriggerToggleSave(std::string ptr);
    GCTriggerToggleSave(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCPrecipitation
{
private:
    void *m_ptr;

public:
    GCPrecipitation(std::string ptr);
    GCPrecipitation(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCPointServerCommand
{
private:
    void *m_ptr;

public:
    GCPointServerCommand(std::string ptr);
    GCPointServerCommand(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCCSGO_TeamIntroCharacterPosition
{
private:
    void *m_ptr;

public:
    GCCSGO_TeamIntroCharacterPosition(std::string ptr);
    GCCSGO_TeamIntroCharacterPosition(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCLogicCollisionPair
{
private:
    void *m_ptr;

public:
    GCLogicCollisionPair(std::string ptr);
    GCLogicCollisionPair(void *ptr);

    CUtlSymbolLarge GetNameAttach1() const;
    void SetNameAttach1(CUtlSymbolLarge value);
    CUtlSymbolLarge GetNameAttach2() const;
    void SetNameAttach2(CUtlSymbolLarge value);
    bool GetSupportMultipleEntitiesWithSameName() const;
    void SetSupportMultipleEntitiesWithSameName(bool value);
    bool GetDisabled() const;
    void SetDisabled(bool value);
    bool GetSucceeded() const;
    void SetSucceeded(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCSkeletonInstance
{
private:
    void *m_ptr;

public:
    GCSkeletonInstance(std::string ptr);
    GCSkeletonInstance(void *ptr);

    GCModelState GetModelState() const;
    void SetModelState(GCModelState value);
    bool GetIsAnimationEnabled() const;
    void SetIsAnimationEnabled(bool value);
    bool GetUseParentRenderBounds() const;
    void SetUseParentRenderBounds(bool value);
    bool GetDisableSolidCollisionsForHierarchy() const;
    void SetDisableSolidCollisionsForHierarchy(bool value);
    CUtlStringToken GetMaterialGroup() const;
    void SetMaterialGroup(CUtlStringToken value);
    uint8_t GetHitboxSet() const;
    void SetHitboxSet(uint8_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCPhysicsProp
{
private:
    void *m_ptr;

public:
    GCPhysicsProp(std::string ptr);
    GCPhysicsProp(void *ptr);

    GCEntityIOOutput GetMotionEnabled() const;
    void SetMotionEnabled(GCEntityIOOutput value);
    GCEntityIOOutput GetOnAwakened() const;
    void SetOnAwakened(GCEntityIOOutput value);
    GCEntityIOOutput GetOnAwake() const;
    void SetOnAwake(GCEntityIOOutput value);
    GCEntityIOOutput GetOnAsleep() const;
    void SetOnAsleep(GCEntityIOOutput value);
    GCEntityIOOutput GetOnPlayerUse() const;
    void SetOnPlayerUse(GCEntityIOOutput value);
    GCEntityIOOutput GetOnOutOfWorld() const;
    void SetOnOutOfWorld(GCEntityIOOutput value);
    GCEntityIOOutput GetOnPlayerPickup() const;
    void SetOnPlayerPickup(GCEntityIOOutput value);
    bool GetForceNavIgnore() const;
    void SetForceNavIgnore(bool value);
    bool GetNoNavmeshBlocker() const;
    void SetNoNavmeshBlocker(bool value);
    bool GetForceNpcExclude() const;
    void SetForceNpcExclude(bool value);
    float GetMassScale() const;
    void SetMassScale(float value);
    float GetInertiaScale() const;
    void SetInertiaScale(float value);
    float GetBuoyancyScale() const;
    void SetBuoyancyScale(float value);
    int32_t GetDamageType() const;
    void SetDamageType(int32_t value);
    int32_t GetDamageToEnableMotion() const;
    void SetDamageToEnableMotion(int32_t value);
    float GetForceToEnableMotion() const;
    void SetForceToEnableMotion(float value);
    bool GetThrownByPlayer() const;
    void SetThrownByPlayer(bool value);
    bool GetDroppedByPlayer() const;
    void SetDroppedByPlayer(bool value);
    bool GetTouchedByPlayer() const;
    void SetTouchedByPlayer(bool value);
    bool GetFirstCollisionAfterLaunch() const;
    void SetFirstCollisionAfterLaunch(bool value);
    int32_t GetExploitableByPlayer() const;
    void SetExploitableByPlayer(int32_t value);
    bool GetHasBeenAwakened() const;
    void SetHasBeenAwakened(bool value);
    bool GetIsOverrideProp() const;
    void SetIsOverrideProp(bool value);
    int32_t GetInitialGlowState() const;
    void SetInitialGlowState(int32_t value);
    int32_t GetGlowRange() const;
    void SetGlowRange(int32_t value);
    int32_t GetGlowRangeMin() const;
    void SetGlowRangeMin(int32_t value);
    Color GetGlowColor() const;
    void SetGlowColor(Color value);
    bool GetShouldAutoConvertBackFromDebris() const;
    void SetShouldAutoConvertBackFromDebris(bool value);
    bool GetMuteImpactEffects() const;
    void SetMuteImpactEffects(bool value);
    bool GetAcceptDamageFromHeldObjects() const;
    void SetAcceptDamageFromHeldObjects(bool value);
    bool GetEnableUseOutput() const;
    void SetEnableUseOutput(bool value);
    bool GetAwake() const;
    void SetAwake(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCFuncWall
{
private:
    void *m_ptr;

public:
    GCFuncWall(std::string ptr);
    GCFuncWall(void *ptr);

    int32_t GetState() const;
    void SetState(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCItemDefuserAlias_item_defuser
{
private:
    void *m_ptr;

public:
    GCItemDefuserAlias_item_defuser(std::string ptr);
    GCItemDefuserAlias_item_defuser(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCBaseGrenade
{
private:
    void *m_ptr;

public:
    GCBaseGrenade(std::string ptr);
    GCBaseGrenade(void *ptr);

    GCEntityIOOutput GetOnPlayerPickup() const;
    void SetOnPlayerPickup(GCEntityIOOutput value);
    GCEntityIOOutput GetOnExplode() const;
    void SetOnExplode(GCEntityIOOutput value);
    bool GetHasWarnedAI() const;
    void SetHasWarnedAI(bool value);
    bool GetIsSmokeGrenade() const;
    void SetIsSmokeGrenade(bool value);
    bool GetIsLive() const;
    void SetIsLive(bool value);
    float GetDmgRadius() const;
    void SetDmgRadius(float value);
    float GetWarnAITime() const;
    void SetWarnAITime(float value);
    float GetDamage() const;
    void SetDamage(float value);
    CUtlSymbolLarge GetBounceSound() const;
    void SetBounceSound(CUtlSymbolLarge value);
    CUtlString GetExplosionSound() const;
    void SetExplosionSound(CUtlString value);
    GCCSPlayerPawn GetThrower() const;
    void SetThrower(GCCSPlayerPawn* value);
    GCCSPlayerPawn GetOriginalThrower() const;
    void SetOriginalThrower(GCCSPlayerPawn* value);

    std::string ToPtr();
    bool IsValid();
};

class GCCSPlayerBase_CameraServices
{
private:
    void *m_ptr;

public:
    GCCSPlayerBase_CameraServices(std::string ptr);
    GCCSPlayerBase_CameraServices(void *ptr);

    uint32_t GetFOV() const;
    void SetFOV(uint32_t value);
    uint32_t GetFOVStart() const;
    void SetFOVStart(uint32_t value);
    float GetFOVRate() const;
    void SetFOVRate(float value);
    GCBaseEntity GetZoomOwner() const;
    void SetZoomOwner(GCBaseEntity* value);
    GCBaseEntity GetLastFogTrigger() const;
    void SetLastFogTrigger(GCBaseEntity* value);

    std::string ToPtr();
    bool IsValid();
};

class GCCSGO_WingmanIntroCharacterPosition
{
private:
    void *m_ptr;

public:
    GCCSGO_WingmanIntroCharacterPosition(std::string ptr);
    GCCSGO_WingmanIntroCharacterPosition(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCSMatchStats_t
{
private:
    void *m_ptr;

public:
    GCSMatchStats_t(std::string ptr);
    GCSMatchStats_t(void *ptr);

    int32_t GetEnemy5Ks() const;
    void SetEnemy5Ks(int32_t value);
    int32_t GetEnemy4Ks() const;
    void SetEnemy4Ks(int32_t value);
    int32_t GetEnemy3Ks() const;
    void SetEnemy3Ks(int32_t value);
    int32_t GetEnemyKnifeKills() const;
    void SetEnemyKnifeKills(int32_t value);
    int32_t GetEnemyTaserKills() const;
    void SetEnemyTaserKills(int32_t value);
    int32_t GetEnemy2Ks() const;
    void SetEnemy2Ks(int32_t value);
    int32_t GetUtility_Count() const;
    void SetUtility_Count(int32_t value);
    int32_t GetUtility_Successes() const;
    void SetUtility_Successes(int32_t value);
    int32_t GetUtility_Enemies() const;
    void SetUtility_Enemies(int32_t value);
    int32_t GetFlash_Count() const;
    void SetFlash_Count(int32_t value);
    int32_t GetFlash_Successes() const;
    void SetFlash_Successes(int32_t value);
    int32_t GetHealthPointsRemovedTotal() const;
    void SetHealthPointsRemovedTotal(int32_t value);
    int32_t GetHealthPointsDealtTotal() const;
    void SetHealthPointsDealtTotal(int32_t value);
    int32_t GetShotsFiredTotal() const;
    void SetShotsFiredTotal(int32_t value);
    int32_t GetShotsOnTargetTotal() const;
    void SetShotsOnTargetTotal(int32_t value);
    int32_t Get1v1Count() const;
    void Set1v1Count(int32_t value);
    int32_t Get1v1Wins() const;
    void Set1v1Wins(int32_t value);
    int32_t Get1v2Count() const;
    void Set1v2Count(int32_t value);
    int32_t Get1v2Wins() const;
    void Set1v2Wins(int32_t value);
    int32_t GetEntryCount() const;
    void SetEntryCount(int32_t value);
    int32_t GetEntryWins() const;
    void SetEntryWins(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCFuncLadder
{
private:
    void *m_ptr;

public:
    GCFuncLadder(std::string ptr);
    GCFuncLadder(void *ptr);

    Vector GetLadderDir() const;
    void SetLadderDir(Vector value);
    Vector GetLocalTop() const;
    void SetLocalTop(Vector value);
    Vector GetPlayerMountPositionTop() const;
    void SetPlayerMountPositionTop(Vector value);
    Vector GetPlayerMountPositionBottom() const;
    void SetPlayerMountPositionBottom(Vector value);
    float GetAutoRideSpeed() const;
    void SetAutoRideSpeed(float value);
    bool GetDisabled() const;
    void SetDisabled(bool value);
    bool GetFakeLadder() const;
    void SetFakeLadder(bool value);
    bool GetHasSlack() const;
    void SetHasSlack(bool value);
    CUtlSymbolLarge GetSurfacePropName() const;
    void SetSurfacePropName(CUtlSymbolLarge value);
    GCEntityIOOutput GetOnPlayerGotOnLadder() const;
    void SetOnPlayerGotOnLadder(GCEntityIOOutput value);
    GCEntityIOOutput GetOnPlayerGotOffLadder() const;
    void SetOnPlayerGotOffLadder(GCEntityIOOutput value);

    std::string ToPtr();
    bool IsValid();
};

class GCTriggerSndSosOpvar
{
private:
    void *m_ptr;

public:
    GCTriggerSndSosOpvar(std::string ptr);
    GCTriggerSndSosOpvar(void *ptr);

    Vector GetPosition() const;
    void SetPosition(Vector value);
    float GetCenterSize() const;
    void SetCenterSize(float value);
    float GetMinVal() const;
    void SetMinVal(float value);
    float GetMaxVal() const;
    void SetMaxVal(float value);
    CUtlSymbolLarge GetOpvarName() const;
    void SetOpvarName(CUtlSymbolLarge value);
    CUtlSymbolLarge GetStackName() const;
    void SetStackName(CUtlSymbolLarge value);
    CUtlSymbolLarge GetOperatorName() const;
    void SetOperatorName(CUtlSymbolLarge value);
    bool GetVolIs2D() const;
    void SetVolIs2D(bool value);
    std::string GetOpvarNameChar() const;
    void SetOpvarNameChar(std::string value);
    std::string GetStackNameChar() const;
    void SetStackNameChar(std::string value);
    std::string GetOperatorNameChar() const;
    void SetOperatorNameChar(std::string value);
    Vector GetVecNormPos() const;
    void SetVecNormPos(Vector value);
    float GetNormCenterSize() const;
    void SetNormCenterSize(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCItemHeavyAssaultSuit
{
private:
    void *m_ptr;

public:
    GCItemHeavyAssaultSuit(std::string ptr);
    GCItemHeavyAssaultSuit(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCScriptedSequence
{
private:
    void *m_ptr;

public:
    GCScriptedSequence(std::string ptr);
    GCScriptedSequence(void *ptr);

    CUtlSymbolLarge GetEntry() const;
    void SetEntry(CUtlSymbolLarge value);
    CUtlSymbolLarge GetPreIdle() const;
    void SetPreIdle(CUtlSymbolLarge value);
    CUtlSymbolLarge GetPlay() const;
    void SetPlay(CUtlSymbolLarge value);
    CUtlSymbolLarge GetPostIdle() const;
    void SetPostIdle(CUtlSymbolLarge value);
    CUtlSymbolLarge GetModifierToAddOnPlay() const;
    void SetModifierToAddOnPlay(CUtlSymbolLarge value);
    CUtlSymbolLarge GetNextScript() const;
    void SetNextScript(CUtlSymbolLarge value);
    CUtlSymbolLarge GetEntity() const;
    void SetEntity(CUtlSymbolLarge value);
    CUtlSymbolLarge GetSyncGroup() const;
    void SetSyncGroup(CUtlSymbolLarge value);
    ScriptedMoveTo_t GetMoveTo() const;
    void SetMoveTo(ScriptedMoveTo_t value);
    MovementGait_t GetMoveToGait() const;
    void SetMoveToGait(MovementGait_t value);
    bool GetIsPlayingPreIdle() const;
    void SetIsPlayingPreIdle(bool value);
    bool GetIsPlayingEntry() const;
    void SetIsPlayingEntry(bool value);
    bool GetIsPlayingAction() const;
    void SetIsPlayingAction(bool value);
    bool GetIsPlayingPostIdle() const;
    void SetIsPlayingPostIdle(bool value);
    bool GetDontRotateOther() const;
    void SetDontRotateOther(bool value);
    bool GetIsRepeatable() const;
    void SetIsRepeatable(bool value);
    bool GetShouldLeaveCorpse() const;
    void SetShouldLeaveCorpse(bool value);
    bool GetStartOnSpawn() const;
    void SetStartOnSpawn(bool value);
    bool GetDisallowInterrupts() const;
    void SetDisallowInterrupts(bool value);
    bool GetCanOverrideNPCState() const;
    void SetCanOverrideNPCState(bool value);
    bool GetDontTeleportAtEnd() const;
    void SetDontTeleportAtEnd(bool value);
    bool GetHighPriority() const;
    void SetHighPriority(bool value);
    bool GetHideDebugComplaints() const;
    void SetHideDebugComplaints(bool value);
    bool GetContinueOnDeath() const;
    void SetContinueOnDeath(bool value);
    bool GetLoopPreIdleSequence() const;
    void SetLoopPreIdleSequence(bool value);
    bool GetLoopActionSequence() const;
    void SetLoopActionSequence(bool value);
    bool GetLoopPostIdleSequence() const;
    void SetLoopPostIdleSequence(bool value);
    bool GetSynchPostIdles() const;
    void SetSynchPostIdles(bool value);
    bool GetIgnoreLookAt() const;
    void SetIgnoreLookAt(bool value);
    bool GetIgnoreGravity() const;
    void SetIgnoreGravity(bool value);
    bool GetDisableNPCCollisions() const;
    void SetDisableNPCCollisions(bool value);
    bool GetKeepAnimgraphLockedPost() const;
    void SetKeepAnimgraphLockedPost(bool value);
    bool GetDontAddModifiers() const;
    void SetDontAddModifiers(bool value);
    float GetRadius() const;
    void SetRadius(float value);
    float GetRepeat() const;
    void SetRepeat(float value);
    float GetPlayAnimFadeInTime() const;
    void SetPlayAnimFadeInTime(float value);
    float GetMoveInterpTime() const;
    void SetMoveInterpTime(float value);
    float GetAngRate() const;
    void SetAngRate(float value);
    int32_t GetNotReadySequenceCount() const;
    void SetNotReadySequenceCount(int32_t value);
    bool GetWaitForBeginSequence() const;
    void SetWaitForBeginSequence(bool value);
    int32_t GetSaved_effects() const;
    void SetSaved_effects(int32_t value);
    int32_t GetSavedFlags() const;
    void SetSavedFlags(int32_t value);
    int32_t GetSavedCollisionGroup() const;
    void SetSavedCollisionGroup(int32_t value);
    bool GetInterruptable() const;
    void SetInterruptable(bool value);
    bool GetSequenceStarted() const;
    void SetSequenceStarted(bool value);
    bool GetPositionRelativeToOtherEntity() const;
    void SetPositionRelativeToOtherEntity(bool value);
    GCBaseEntity GetTargetEnt() const;
    void SetTargetEnt(GCBaseEntity* value);
    GCScriptedSequence GetNextCine() const;
    void SetNextCine(GCScriptedSequence* value);
    bool GetThinking() const;
    void SetThinking(bool value);
    bool GetInitiatedSelfDelete() const;
    void SetInitiatedSelfDelete(bool value);
    bool GetIsTeleportingDueToMoveTo() const;
    void SetIsTeleportingDueToMoveTo(bool value);
    bool GetAllowCustomInterruptConditions() const;
    void SetAllowCustomInterruptConditions(bool value);
    GCBaseAnimGraph GetForcedTarget() const;
    void SetForcedTarget(GCBaseAnimGraph* value);
    bool GetDontCancelOtherSequences() const;
    void SetDontCancelOtherSequences(bool value);
    bool GetForceSynch() const;
    void SetForceSynch(bool value);
    bool GetPreventUpdateYawOnFinish() const;
    void SetPreventUpdateYawOnFinish(bool value);
    bool GetEnsureOnNavmeshOnFinish() const;
    void SetEnsureOnNavmeshOnFinish(bool value);
    ScriptedOnDeath_t GetOnDeathBehavior() const;
    void SetOnDeathBehavior(ScriptedOnDeath_t value);
    ScriptedConflictResponse_t GetConflictResponse() const;
    void SetConflictResponse(ScriptedConflictResponse_t value);
    GCEntityIOOutput GetOnBeginSequence() const;
    void SetOnBeginSequence(GCEntityIOOutput value);
    GCEntityIOOutput GetOnActionStartOrLoop() const;
    void SetOnActionStartOrLoop(GCEntityIOOutput value);
    GCEntityIOOutput GetOnEndSequence() const;
    void SetOnEndSequence(GCEntityIOOutput value);
    GCEntityIOOutput GetOnPostIdleEndSequence() const;
    void SetOnPostIdleEndSequence(GCEntityIOOutput value);
    GCEntityIOOutput GetOnCancelSequence() const;
    void SetOnCancelSequence(GCEntityIOOutput value);
    GCEntityIOOutput GetOnCancelFailedSequence() const;
    void SetOnCancelFailedSequence(GCEntityIOOutput value);
    std::vector<GCEntityIOOutput> GetOnScriptEvent() const;
    void SetOnScriptEvent(std::vector<GCEntityIOOutput> value);
    GCBaseEntity GetInteractionMainEntity() const;
    void SetInteractionMainEntity(GCBaseEntity* value);
    int32_t GetPlayerDeathBehavior() const;
    void SetPlayerDeathBehavior(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCWeaponNegev
{
private:
    void *m_ptr;

public:
    GCWeaponNegev(std::string ptr);
    GCWeaponNegev(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCWeaponGalilAR
{
private:
    void *m_ptr;

public:
    GCWeaponGalilAR(std::string ptr);
    GCWeaponGalilAR(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCEnvProjectedTexture
{
private:
    void *m_ptr;

public:
    GCEnvProjectedTexture(std::string ptr);
    GCEnvProjectedTexture(void *ptr);

    GCBaseEntity GetTargetEntity() const;
    void SetTargetEntity(GCBaseEntity* value);
    bool GetState() const;
    void SetState(bool value);
    bool GetAlwaysUpdate() const;
    void SetAlwaysUpdate(bool value);
    float GetLightFOV() const;
    void SetLightFOV(float value);
    bool GetEnableShadows() const;
    void SetEnableShadows(bool value);
    bool GetSimpleProjection() const;
    void SetSimpleProjection(bool value);
    bool GetLightOnlyTarget() const;
    void SetLightOnlyTarget(bool value);
    bool GetLightWorld() const;
    void SetLightWorld(bool value);
    bool GetCameraSpace() const;
    void SetCameraSpace(bool value);
    float GetBrightnessScale() const;
    void SetBrightnessScale(float value);
    Color GetLightColor() const;
    void SetLightColor(Color value);
    float GetIntensity() const;
    void SetIntensity(float value);
    float GetLinearAttenuation() const;
    void SetLinearAttenuation(float value);
    float GetQuadraticAttenuation() const;
    void SetQuadraticAttenuation(float value);
    bool GetVolumetric() const;
    void SetVolumetric(bool value);
    float GetNoiseStrength() const;
    void SetNoiseStrength(float value);
    float GetFlashlightTime() const;
    void SetFlashlightTime(float value);
    uint32_t GetNumPlanes() const;
    void SetNumPlanes(uint32_t value);
    float GetPlaneOffset() const;
    void SetPlaneOffset(float value);
    float GetVolumetricIntensity() const;
    void SetVolumetricIntensity(float value);
    float GetColorTransitionTime() const;
    void SetColorTransitionTime(float value);
    float GetAmbient() const;
    void SetAmbient(float value);
    std::string GetSpotlightTextureName() const;
    void SetSpotlightTextureName(std::string value);
    int32_t GetSpotlightTextureFrame() const;
    void SetSpotlightTextureFrame(int32_t value);
    uint32_t GetShadowQuality() const;
    void SetShadowQuality(uint32_t value);
    float GetNearZ() const;
    void SetNearZ(float value);
    float GetFarZ() const;
    void SetFarZ(float value);
    float GetProjectionSize() const;
    void SetProjectionSize(float value);
    float GetRotation() const;
    void SetRotation(float value);
    bool GetFlipHorizontal() const;
    void SetFlipHorizontal(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCDynamicPropAlias_prop_dynamic_override
{
private:
    void *m_ptr;

public:
    GCDynamicPropAlias_prop_dynamic_override(std::string ptr);
    GCDynamicPropAlias_prop_dynamic_override(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCSceneListManager
{
private:
    void *m_ptr;

public:
    GCSceneListManager(std::string ptr);
    GCSceneListManager(void *ptr);

    std::vector<CUtlSymbolLarge> GetScenes() const;
    void SetScenes(std::vector<CUtlSymbolLarge> value);
    std::vector<GCBaseEntity*> GetScenes1() const;
    void SetScenes1(std::vector<GCBaseEntity*> value);

    std::string ToPtr();
    bool IsValid();
};

class GCSplineConstraint
{
private:
    void *m_ptr;

public:
    GCSplineConstraint(std::string ptr);
    GCSplineConstraint(void *ptr);

    Vector GetAnchorOffsetRestore() const;
    void SetAnchorOffsetRestore(Vector value);

    std::string ToPtr();
    bool IsValid();
};

class GCCSObserver_ViewModelServices
{
private:
    void *m_ptr;

public:
    GCCSObserver_ViewModelServices(std::string ptr);
    GCCSObserver_ViewModelServices(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCDynamicPropAlias_dynamic_prop
{
private:
    void *m_ptr;

public:
    GCDynamicPropAlias_dynamic_prop(std::string ptr);
    GCDynamicPropAlias_dynamic_prop(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GModelConfigHandle_t
{
private:
    void *m_ptr;

public:
    GModelConfigHandle_t(std::string ptr);
    GModelConfigHandle_t(void *ptr);

    uint32_t GetValue() const;
    void SetValue(uint32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCPhysicsPropMultiplayer
{
private:
    void *m_ptr;

public:
    GCPhysicsPropMultiplayer(std::string ptr);
    GCPhysicsPropMultiplayer(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCFuncTrackChange
{
private:
    void *m_ptr;

public:
    GCFuncTrackChange(std::string ptr);
    GCFuncTrackChange(void *ptr);

    GCPathTrack GetTrackTop() const;
    void SetTrackTop(GCPathTrack* value);
    GCPathTrack GetTrackBottom() const;
    void SetTrackBottom(GCPathTrack* value);
    GCFuncTrackTrain GetTrain() const;
    void SetTrain(GCFuncTrackTrain* value);
    CUtlSymbolLarge GetTrackTopName() const;
    void SetTrackTopName(CUtlSymbolLarge value);
    CUtlSymbolLarge GetTrackBottomName() const;
    void SetTrackBottomName(CUtlSymbolLarge value);
    CUtlSymbolLarge GetTrainName() const;
    void SetTrainName(CUtlSymbolLarge value);
    TRAIN_CODE GetCode() const;
    void SetCode(TRAIN_CODE value);
    int32_t GetTargetState() const;
    void SetTargetState(int32_t value);
    int32_t GetUse() const;
    void SetUse(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCMarkupVolume
{
private:
    void *m_ptr;

public:
    GCMarkupVolume(std::string ptr);
    GCMarkupVolume(void *ptr);

    bool GetDisabled() const;
    void SetDisabled(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCInfoPlayerTerrorist
{
private:
    void *m_ptr;

public:
    GCInfoPlayerTerrorist(std::string ptr);
    GCInfoPlayerTerrorist(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GVelocitySampler
{
private:
    void *m_ptr;

public:
    GVelocitySampler(std::string ptr);
    GVelocitySampler(void *ptr);

    Vector GetPrevSample() const;
    void SetPrevSample(Vector value);
    float GetIdealSampleRate() const;
    void SetIdealSampleRate(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCTankTargetChange
{
private:
    void *m_ptr;

public:
    GCTankTargetChange(std::string ptr);
    GCTankTargetChange(void *ptr);

    CUtlSymbolLarge GetNewTargetName() const;
    void SetNewTargetName(CUtlSymbolLarge value);

    std::string ToPtr();
    bool IsValid();
};

class GCLogicCompare
{
private:
    void *m_ptr;

public:
    GCLogicCompare(std::string ptr);
    GCLogicCompare(void *ptr);

    float GetInValue() const;
    void SetInValue(float value);
    float GetCompareValue() const;
    void SetCompareValue(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCCSPlayer_BulletServices
{
private:
    void *m_ptr;

public:
    GCCSPlayer_BulletServices(std::string ptr);
    GCCSPlayer_BulletServices(void *ptr);

    int32_t GetTotalHitsOnServer() const;
    void SetTotalHitsOnServer(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCLogicRelay
{
private:
    void *m_ptr;

public:
    GCLogicRelay(std::string ptr);
    GCLogicRelay(void *ptr);

    GCEntityIOOutput GetOnTrigger() const;
    void SetOnTrigger(GCEntityIOOutput value);
    GCEntityIOOutput GetOnSpawn() const;
    void SetOnSpawn(GCEntityIOOutput value);
    bool GetDisabled() const;
    void SetDisabled(bool value);
    bool GetWaitForRefire() const;
    void SetWaitForRefire(bool value);
    bool GetTriggerOnce() const;
    void SetTriggerOnce(bool value);
    bool GetFastRetrigger() const;
    void SetFastRetrigger(bool value);
    bool GetPassthoughCaller() const;
    void SetPassthoughCaller(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCPlayer_ItemServices
{
private:
    void *m_ptr;

public:
    GCPlayer_ItemServices(std::string ptr);
    GCPlayer_ItemServices(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCKeepUpright
{
private:
    void *m_ptr;

public:
    GCKeepUpright(std::string ptr);
    GCKeepUpright(void *ptr);

    Vector GetWorldGoalAxis() const;
    void SetWorldGoalAxis(Vector value);
    Vector GetLocalTestAxis() const;
    void SetLocalTestAxis(Vector value);
    CUtlSymbolLarge GetNameAttach() const;
    void SetNameAttach(CUtlSymbolLarge value);
    GCBaseEntity GetAttachedObject() const;
    void SetAttachedObject(GCBaseEntity* value);
    float GetAngularLimit() const;
    void SetAngularLimit(float value);
    bool GetActive() const;
    void SetActive(bool value);
    bool GetDampAllRotation() const;
    void SetDampAllRotation(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCRevertSaved
{
private:
    void *m_ptr;

public:
    GCRevertSaved(std::string ptr);
    GCRevertSaved(void *ptr);

    float GetLoadTime() const;
    void SetLoadTime(float value);
    float GetDuration() const;
    void SetDuration(float value);
    float GetHoldTime() const;
    void SetHoldTime(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCFuncWater
{
private:
    void *m_ptr;

public:
    GCFuncWater(std::string ptr);
    GCFuncWater(void *ptr);

    GCBuoyancyHelper GetBuoyancyHelper() const;
    void SetBuoyancyHelper(GCBuoyancyHelper value);

    std::string ToPtr();
    bool IsValid();
};

class GCFuncTimescale
{
private:
    void *m_ptr;

public:
    GCFuncTimescale(std::string ptr);
    GCFuncTimescale(void *ptr);

    float GetDesiredTimescale() const;
    void SetDesiredTimescale(float value);
    float GetAcceleration() const;
    void SetAcceleration(float value);
    float GetMinBlendRate() const;
    void SetMinBlendRate(float value);
    float GetBlendDeltaMultiplier() const;
    void SetBlendDeltaMultiplier(float value);
    bool GetIsStarted() const;
    void SetIsStarted(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCBtActionMoveTo
{
private:
    void *m_ptr;

public:
    GCBtActionMoveTo(std::string ptr);
    GCBtActionMoveTo(void *ptr);

    CUtlString GetDestinationInputKey() const;
    void SetDestinationInputKey(CUtlString value);
    CUtlString GetHidingSpotInputKey() const;
    void SetHidingSpotInputKey(CUtlString value);
    CUtlString GetThreatInputKey() const;
    void SetThreatInputKey(CUtlString value);
    Vector GetDestination() const;
    void SetDestination(Vector value);
    bool GetAutoLookAdjust() const;
    void SetAutoLookAdjust(bool value);
    bool GetComputePath() const;
    void SetComputePath(bool value);
    float GetDamagingAreasPenaltyCost() const;
    void SetDamagingAreasPenaltyCost(float value);
    GCountdownTimer GetCheckApproximateCornersTimer() const;
    void SetCheckApproximateCornersTimer(GCountdownTimer value);
    GCountdownTimer GetCheckHighPriorityItem() const;
    void SetCheckHighPriorityItem(GCountdownTimer value);
    GCountdownTimer GetRepathTimer() const;
    void SetRepathTimer(GCountdownTimer value);
    float GetArrivalEpsilon() const;
    void SetArrivalEpsilon(float value);
    float GetAdditionalArrivalEpsilon2D() const;
    void SetAdditionalArrivalEpsilon2D(float value);
    float GetHidingSpotCheckDistanceThreshold() const;
    void SetHidingSpotCheckDistanceThreshold(float value);
    float GetNearestAreaDistanceThreshold() const;
    void SetNearestAreaDistanceThreshold(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCTonemapController2
{
private:
    void *m_ptr;

public:
    GCTonemapController2(std::string ptr);
    GCTonemapController2(void *ptr);

    float GetAutoExposureMin() const;
    void SetAutoExposureMin(float value);
    float GetAutoExposureMax() const;
    void SetAutoExposureMax(float value);
    float GetTonemapPercentTarget() const;
    void SetTonemapPercentTarget(float value);
    float GetTonemapPercentBrightPixels() const;
    void SetTonemapPercentBrightPixels(float value);
    float GetTonemapMinAvgLum() const;
    void SetTonemapMinAvgLum(float value);
    float GetExposureAdaptationSpeedUp() const;
    void SetExposureAdaptationSpeedUp(float value);
    float GetExposureAdaptationSpeedDown() const;
    void SetExposureAdaptationSpeedDown(float value);
    float GetTonemapEVSmoothingRange() const;
    void SetTonemapEVSmoothingRange(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCRopeKeyframeAlias_move_rope
{
private:
    void *m_ptr;

public:
    GCRopeKeyframeAlias_move_rope(std::string ptr);
    GCRopeKeyframeAlias_move_rope(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCEnvInstructorVRHint
{
private:
    void *m_ptr;

public:
    GCEnvInstructorVRHint(std::string ptr);
    GCEnvInstructorVRHint(void *ptr);

    CUtlSymbolLarge GetName() const;
    void SetName(CUtlSymbolLarge value);
    CUtlSymbolLarge GetHintTargetEntity() const;
    void SetHintTargetEntity(CUtlSymbolLarge value);
    int32_t GetTimeout() const;
    void SetTimeout(int32_t value);
    CUtlSymbolLarge GetCaption() const;
    void SetCaption(CUtlSymbolLarge value);
    CUtlSymbolLarge GetStartSound() const;
    void SetStartSound(CUtlSymbolLarge value);
    int32_t GetLayoutFileType() const;
    void SetLayoutFileType(int32_t value);
    CUtlSymbolLarge GetCustomLayoutFile() const;
    void SetCustomLayoutFile(CUtlSymbolLarge value);
    int32_t GetAttachType() const;
    void SetAttachType(int32_t value);
    float GetHeightOffset() const;
    void SetHeightOffset(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCWeaponXM1014
{
private:
    void *m_ptr;

public:
    GCWeaponXM1014(std::string ptr);
    GCWeaponXM1014(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCPlatTrigger
{
private:
    void *m_ptr;

public:
    GCPlatTrigger(std::string ptr);
    GCPlatTrigger(void *ptr);

    GCFuncPlat GetPlatform() const;
    void SetPlatform(GCFuncPlat* value);

    std::string ToPtr();
    bool IsValid();
};

class GCEnvWindShared
{
private:
    void *m_ptr;

public:
    GCEnvWindShared(std::string ptr);
    GCEnvWindShared(void *ptr);

    uint32_t GetWindSeed() const;
    void SetWindSeed(uint32_t value);
    uint16_t GetMinWind() const;
    void SetMinWind(uint16_t value);
    uint16_t GetMaxWind() const;
    void SetMaxWind(uint16_t value);
    int32_t GetWindRadius() const;
    void SetWindRadius(int32_t value);
    uint16_t GetMinGust() const;
    void SetMinGust(uint16_t value);
    uint16_t GetMaxGust() const;
    void SetMaxGust(uint16_t value);
    float GetMinGustDelay() const;
    void SetMinGustDelay(float value);
    float GetMaxGustDelay() const;
    void SetMaxGustDelay(float value);
    float GetGustDuration() const;
    void SetGustDuration(float value);
    uint16_t GetGustDirChange() const;
    void SetGustDirChange(uint16_t value);
    Vector GetLocation() const;
    void SetLocation(Vector value);
    int32_t GetGustSound() const;
    void SetGustSound(int32_t value);
    int32_t GetWindDir() const;
    void SetWindDir(int32_t value);
    float GetWindSpeed() const;
    void SetWindSpeed(float value);
    Vector GetCurrentWindVector() const;
    void SetCurrentWindVector(Vector value);
    Vector GetCurrentSwayVector() const;
    void SetCurrentSwayVector(Vector value);
    Vector GetPrevSwayVector() const;
    void SetPrevSwayVector(Vector value);
    uint16_t GetInitialWindDir() const;
    void SetInitialWindDir(uint16_t value);
    float GetInitialWindSpeed() const;
    void SetInitialWindSpeed(float value);
    GCEntityIOOutput GetOnGustStart() const;
    void SetOnGustStart(GCEntityIOOutput value);
    GCEntityIOOutput GetOnGustEnd() const;
    void SetOnGustEnd(GCEntityIOOutput value);
    float GetAveWindSpeed() const;
    void SetAveWindSpeed(float value);
    bool GetGusting() const;
    void SetGusting(bool value);
    float GetWindAngleVariation() const;
    void SetWindAngleVariation(float value);
    float GetWindSpeedVariation() const;
    void SetWindSpeedVariation(float value);
    CEntityIndex GetEntIndex() const;
    void SetEntIndex(CEntityIndex value);

    std::string ToPtr();
    bool IsValid();
};

class GCMolotovGrenade
{
private:
    void *m_ptr;

public:
    GCMolotovGrenade(std::string ptr);
    GCMolotovGrenade(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCPointHurt
{
private:
    void *m_ptr;

public:
    GCPointHurt(std::string ptr);
    GCPointHurt(void *ptr);

    int32_t GetDamage() const;
    void SetDamage(int32_t value);
    int32_t GetBitsDamageType() const;
    void SetBitsDamageType(int32_t value);
    float GetRadius() const;
    void SetRadius(float value);
    float GetDelay() const;
    void SetDelay(float value);
    CUtlSymbolLarge GetStrTarget() const;
    void SetStrTarget(CUtlSymbolLarge value);
    GCBaseEntity GetActivator() const;
    void SetActivator(GCBaseEntity* value);

    std::string ToPtr();
    bool IsValid();
};

class GCPointValueRemapper
{
private:
    void *m_ptr;

public:
    GCPointValueRemapper(std::string ptr);
    GCPointValueRemapper(void *ptr);

    bool GetDisabled() const;
    void SetDisabled(bool value);
    bool GetUpdateOnClient() const;
    void SetUpdateOnClient(bool value);
    ValueRemapperInputType_t GetInputType() const;
    void SetInputType(ValueRemapperInputType_t value);
    CUtlSymbolLarge GetRemapLineStartName() const;
    void SetRemapLineStartName(CUtlSymbolLarge value);
    CUtlSymbolLarge GetRemapLineEndName() const;
    void SetRemapLineEndName(CUtlSymbolLarge value);
    GCBaseEntity GetRemapLineStart() const;
    void SetRemapLineStart(GCBaseEntity* value);
    GCBaseEntity GetRemapLineEnd() const;
    void SetRemapLineEnd(GCBaseEntity* value);
    float GetMaximumChangePerSecond() const;
    void SetMaximumChangePerSecond(float value);
    float GetDisengageDistance() const;
    void SetDisengageDistance(float value);
    float GetEngageDistance() const;
    void SetEngageDistance(float value);
    bool GetRequiresUseKey() const;
    void SetRequiresUseKey(bool value);
    ValueRemapperOutputType_t GetOutputType() const;
    void SetOutputType(ValueRemapperOutputType_t value);
    CUtlSymbolLarge GetOutputEntityName() const;
    void SetOutputEntityName(CUtlSymbolLarge value);
    CUtlSymbolLarge GetOutputEntity2Name() const;
    void SetOutputEntity2Name(CUtlSymbolLarge value);
    CUtlSymbolLarge GetOutputEntity3Name() const;
    void SetOutputEntity3Name(CUtlSymbolLarge value);
    CUtlSymbolLarge GetOutputEntity4Name() const;
    void SetOutputEntity4Name(CUtlSymbolLarge value);
    std::vector<GCBaseEntity*> GetOutputEntities() const;
    void SetOutputEntities(std::vector<GCBaseEntity*> value);
    ValueRemapperHapticsType_t GetHapticsType() const;
    void SetHapticsType(ValueRemapperHapticsType_t value);
    ValueRemapperMomentumType_t GetMomentumType() const;
    void SetMomentumType(ValueRemapperMomentumType_t value);
    float GetMomentumModifier() const;
    void SetMomentumModifier(float value);
    float GetSnapValue() const;
    void SetSnapValue(float value);
    float GetCurrentMomentum() const;
    void SetCurrentMomentum(float value);
    ValueRemapperRatchetType_t GetRatchetType() const;
    void SetRatchetType(ValueRemapperRatchetType_t value);
    float GetRatchetOffset() const;
    void SetRatchetOffset(float value);
    float GetInputOffset() const;
    void SetInputOffset(float value);
    bool GetEngaged() const;
    void SetEngaged(bool value);
    bool GetFirstUpdate() const;
    void SetFirstUpdate(bool value);
    float GetPreviousValue() const;
    void SetPreviousValue(float value);
    Vector GetPreviousTestPoint() const;
    void SetPreviousTestPoint(Vector value);
    GCBasePlayerPawn GetUsingPlayer() const;
    void SetUsingPlayer(GCBasePlayerPawn* value);
    float GetCustomOutputValue() const;
    void SetCustomOutputValue(float value);
    CUtlSymbolLarge GetSoundEngage() const;
    void SetSoundEngage(CUtlSymbolLarge value);
    CUtlSymbolLarge GetSoundDisengage() const;
    void SetSoundDisengage(CUtlSymbolLarge value);
    CUtlSymbolLarge GetSoundReachedValueZero() const;
    void SetSoundReachedValueZero(CUtlSymbolLarge value);
    CUtlSymbolLarge GetSoundReachedValueOne() const;
    void SetSoundReachedValueOne(CUtlSymbolLarge value);
    CUtlSymbolLarge GetSoundMovingLoop() const;
    void SetSoundMovingLoop(CUtlSymbolLarge value);
    GCEntityIOOutput GetOnReachedValueZero() const;
    void SetOnReachedValueZero(GCEntityIOOutput value);
    GCEntityIOOutput GetOnReachedValueOne() const;
    void SetOnReachedValueOne(GCEntityIOOutput value);
    GCEntityIOOutput GetOnReachedValueCustom() const;
    void SetOnReachedValueCustom(GCEntityIOOutput value);
    GCEntityIOOutput GetOnEngage() const;
    void SetOnEngage(GCEntityIOOutput value);
    GCEntityIOOutput GetOnDisengage() const;
    void SetOnDisengage(GCEntityIOOutput value);

    std::string ToPtr();
    bool IsValid();
};

class GCLogicNPCCounterAABB
{
private:
    void *m_ptr;

public:
    GCLogicNPCCounterAABB(std::string ptr);
    GCLogicNPCCounterAABB(void *ptr);

    Vector GetDistanceOuterMins() const;
    void SetDistanceOuterMins(Vector value);
    Vector GetDistanceOuterMaxs() const;
    void SetDistanceOuterMaxs(Vector value);
    Vector GetOuterMins() const;
    void SetOuterMins(Vector value);
    Vector GetOuterMaxs() const;
    void SetOuterMaxs(Vector value);

    std::string ToPtr();
    bool IsValid();
};

class GCLightOrthoEntity
{
private:
    void *m_ptr;

public:
    GCLightOrthoEntity(std::string ptr);
    GCLightOrthoEntity(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCEnvSoundscapeTriggerable
{
private:
    void *m_ptr;

public:
    GCEnvSoundscapeTriggerable(std::string ptr);
    GCEnvSoundscapeTriggerable(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCSoundOpvarSetPointEntity
{
private:
    void *m_ptr;

public:
    GCSoundOpvarSetPointEntity(std::string ptr);
    GCSoundOpvarSetPointEntity(void *ptr);

    GCEntityIOOutput GetOnEnter() const;
    void SetOnEnter(GCEntityIOOutput value);
    GCEntityIOOutput GetOnExit() const;
    void SetOnExit(GCEntityIOOutput value);
    bool GetAutoDisable() const;
    void SetAutoDisable(bool value);
    float GetDistanceMin() const;
    void SetDistanceMin(float value);
    float GetDistanceMax() const;
    void SetDistanceMax(float value);
    float GetDistanceMapMin() const;
    void SetDistanceMapMin(float value);
    float GetDistanceMapMax() const;
    void SetDistanceMapMax(float value);
    float GetOcclusionRadius() const;
    void SetOcclusionRadius(float value);
    float GetOcclusionMin() const;
    void SetOcclusionMin(float value);
    float GetOcclusionMax() const;
    void SetOcclusionMax(float value);
    float GetValSetOnDisable() const;
    void SetValSetOnDisable(float value);
    bool GetSetValueOnDisable() const;
    void SetSetValueOnDisable(bool value);
    int32_t GetSimulationMode() const;
    void SetSimulationMode(int32_t value);
    int32_t GetVisibilitySamples() const;
    void SetVisibilitySamples(int32_t value);
    Vector GetDynamicProxyPoint() const;
    void SetDynamicProxyPoint(Vector value);
    float GetDynamicMaximumOcclusion() const;
    void SetDynamicMaximumOcclusion(float value);
    GCEntityInstance GetDynamicEntity() const;
    void SetDynamicEntity(GCEntityInstance* value);
    CUtlSymbolLarge GetDynamicEntityName() const;
    void SetDynamicEntityName(CUtlSymbolLarge value);
    float GetPathingDistanceNormFactor() const;
    void SetPathingDistanceNormFactor(float value);
    Vector GetPathingSourcePos() const;
    void SetPathingSourcePos(Vector value);
    Vector GetPathingListenerPos() const;
    void SetPathingListenerPos(Vector value);
    Vector GetPathingDirection() const;
    void SetPathingDirection(Vector value);
    int32_t GetPathingSourceIndex() const;
    void SetPathingSourceIndex(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCBasePlayerPawn
{
private:
    void *m_ptr;

public:
    GCBasePlayerPawn(std::string ptr);
    GCBasePlayerPawn(void *ptr);

    GCPlayer_WeaponServices GetWeaponServices() const;
    void SetWeaponServices(GCPlayer_WeaponServices* value);
    GCPlayer_ItemServices GetItemServices() const;
    void SetItemServices(GCPlayer_ItemServices* value);
    GCPlayer_AutoaimServices GetAutoaimServices() const;
    void SetAutoaimServices(GCPlayer_AutoaimServices* value);
    GCPlayer_ObserverServices GetObserverServices() const;
    void SetObserverServices(GCPlayer_ObserverServices* value);
    GCPlayer_WaterServices GetWaterServices() const;
    void SetWaterServices(GCPlayer_WaterServices* value);
    GCPlayer_UseServices GetUseServices() const;
    void SetUseServices(GCPlayer_UseServices* value);
    GCPlayer_FlashlightServices GetFlashlightServices() const;
    void SetFlashlightServices(GCPlayer_FlashlightServices* value);
    GCPlayer_CameraServices GetCameraServices() const;
    void SetCameraServices(GCPlayer_CameraServices* value);
    GCPlayer_MovementServices GetMovementServices() const;
    void SetMovementServices(GCPlayer_MovementServices* value);
    std::vector<GViewAngleServerChange_t> GetServerViewAngleChanges() const;
    void SetServerViewAngleChanges(std::vector<GViewAngleServerChange_t> value);
    uint32_t GetHighestGeneratedServerViewAngleChangeIndex() const;
    void SetHighestGeneratedServerViewAngleChangeIndex(uint32_t value);
    QAngle Get_angle() const;
    void Set_angle(QAngle value);
    QAngle Get_anglePrevious() const;
    void Set_anglePrevious(QAngle value);
    uint32_t GetHideHUD() const;
    void SetHideHUD(uint32_t value);
    Gsky3dparams_t GetSkybox3d() const;
    void SetSkybox3d(Gsky3dparams_t value);
    bool GetInitHUD() const;
    void SetInitHUD(bool value);
    GCAI_Expresser GetExpresser() const;
    void SetExpresser(GCAI_Expresser* value);
    GCBasePlayerController GetController() const;
    void SetController(GCBasePlayerController* value);
    float GetHltvReplayDelay() const;
    void SetHltvReplayDelay(float value);
    float GetHltvReplayEnd() const;
    void SetHltvReplayEnd(float value);
    CEntityIndex GetHltvReplayEntity() const;
    void SetHltvReplayEntity(CEntityIndex value);
    std::vector<Gsndopvarlatchdata_t> GetSndOpvarLatchData() const;
    void SetSndOpvarLatchData(std::vector<Gsndopvarlatchdata_t> value);

    std::string ToPtr();
    bool IsValid();
};

class GCGameMoney
{
private:
    void *m_ptr;

public:
    GCGameMoney(std::string ptr);
    GCGameMoney(void *ptr);

    GCEntityIOOutput GetOnMoneySpent() const;
    void SetOnMoneySpent(GCEntityIOOutput value);
    GCEntityIOOutput GetOnMoneySpentFail() const;
    void SetOnMoneySpentFail(GCEntityIOOutput value);
    int32_t GetMoney() const;
    void SetMoney(int32_t value);
    CUtlString GetStrAwardText() const;
    void SetStrAwardText(CUtlString value);

    std::string ToPtr();
    bool IsValid();
};

class GCLogicPlayerProxy
{
private:
    void *m_ptr;

public:
    GCLogicPlayerProxy(std::string ptr);
    GCLogicPlayerProxy(void *ptr);

    GCBaseEntity GetPlayer() const;
    void SetPlayer(GCBaseEntity* value);
    GCEntityIOOutput GetPlayerHasAmmo() const;
    void SetPlayerHasAmmo(GCEntityIOOutput value);
    GCEntityIOOutput GetPlayerHasNoAmmo() const;
    void SetPlayerHasNoAmmo(GCEntityIOOutput value);
    GCEntityIOOutput GetPlayerDied() const;
    void SetPlayerDied(GCEntityIOOutput value);

    std::string ToPtr();
    bool IsValid();
};

class GCPlayer_ObserverServices
{
private:
    void *m_ptr;

public:
    GCPlayer_ObserverServices(std::string ptr);
    GCPlayer_ObserverServices(void *ptr);

    uint8_t GetObserverMode() const;
    void SetObserverMode(uint8_t value);
    GCBaseEntity GetObserverTarget() const;
    void SetObserverTarget(GCBaseEntity* value);
    ObserverMode_t GetObserverLastMode() const;
    void SetObserverLastMode(ObserverMode_t value);
    bool GetForcedObserverMode() const;
    void SetForcedObserverMode(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCWeaponZoneRepulsor
{
private:
    void *m_ptr;

public:
    GCWeaponZoneRepulsor(std::string ptr);
    GCWeaponZoneRepulsor(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCPhysImpact
{
private:
    void *m_ptr;

public:
    GCPhysImpact(std::string ptr);
    GCPhysImpact(void *ptr);

    float GetDamage() const;
    void SetDamage(float value);
    float GetDistance() const;
    void SetDistance(float value);
    CUtlSymbolLarge GetDirectionEntityName() const;
    void SetDirectionEntityName(CUtlSymbolLarge value);

    std::string ToPtr();
    bool IsValid();
};

class GCEnvCombinedLightProbeVolume
{
private:
    void *m_ptr;

public:
    GCEnvCombinedLightProbeVolume(std::string ptr);
    GCEnvCombinedLightProbeVolume(void *ptr);

    Color GetEntity_Color() const;
    void SetEntity_Color(Color value);
    float GetEntity_flBrightness() const;
    void SetEntity_flBrightness(float value);
    bool GetEntity_bCustomCubemapTexture() const;
    void SetEntity_bCustomCubemapTexture(bool value);
    Vector GetEntity_vBoxMins() const;
    void SetEntity_vBoxMins(Vector value);
    Vector GetEntity_vBoxMaxs() const;
    void SetEntity_vBoxMaxs(Vector value);
    bool GetEntity_bMoveable() const;
    void SetEntity_bMoveable(bool value);
    int32_t GetEntity_nHandshake() const;
    void SetEntity_nHandshake(int32_t value);
    int32_t GetEntity_nEnvCubeMapArrayIndex() const;
    void SetEntity_nEnvCubeMapArrayIndex(int32_t value);
    int32_t GetEntity_nPriority() const;
    void SetEntity_nPriority(int32_t value);
    bool GetEntity_bStartDisabled() const;
    void SetEntity_bStartDisabled(bool value);
    float GetEntity_flEdgeFadeDist() const;
    void SetEntity_flEdgeFadeDist(float value);
    Vector GetEntity_vEdgeFadeDists() const;
    void SetEntity_vEdgeFadeDists(Vector value);
    int32_t GetEntity_nLightProbeSizeX() const;
    void SetEntity_nLightProbeSizeX(int32_t value);
    int32_t GetEntity_nLightProbeSizeY() const;
    void SetEntity_nLightProbeSizeY(int32_t value);
    int32_t GetEntity_nLightProbeSizeZ() const;
    void SetEntity_nLightProbeSizeZ(int32_t value);
    int32_t GetEntity_nLightProbeAtlasX() const;
    void SetEntity_nLightProbeAtlasX(int32_t value);
    int32_t GetEntity_nLightProbeAtlasY() const;
    void SetEntity_nLightProbeAtlasY(int32_t value);
    int32_t GetEntity_nLightProbeAtlasZ() const;
    void SetEntity_nLightProbeAtlasZ(int32_t value);
    bool GetEntity_bEnabled() const;
    void SetEntity_bEnabled(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCCSPlayer_WaterServices
{
private:
    void *m_ptr;

public:
    GCCSPlayer_WaterServices(std::string ptr);
    GCCSPlayer_WaterServices(void *ptr);

    float GetNextDrownDamageTime() const;
    void SetNextDrownDamageTime(float value);
    int32_t GetDrownDmgRate() const;
    void SetDrownDmgRate(int32_t value);
    float GetWaterJumpTime() const;
    void SetWaterJumpTime(float value);
    Vector GetWaterJumpVel() const;
    void SetWaterJumpVel(Vector value);
    float GetSwimSoundTime() const;
    void SetSwimSoundTime(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCWeaponM249
{
private:
    void *m_ptr;

public:
    GCWeaponM249(std::string ptr);
    GCWeaponM249(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCEnvParticleGlow
{
private:
    void *m_ptr;

public:
    GCEnvParticleGlow(std::string ptr);
    GCEnvParticleGlow(void *ptr);

    float GetAlphaScale() const;
    void SetAlphaScale(float value);
    float GetRadiusScale() const;
    void SetRadiusScale(float value);
    float GetSelfIllumScale() const;
    void SetSelfIllumScale(float value);
    Color GetColorTint() const;
    void SetColorTint(Color value);

    std::string ToPtr();
    bool IsValid();
};

class GCFuncVehicleClip
{
private:
    void *m_ptr;

public:
    GCFuncVehicleClip(std::string ptr);
    GCFuncVehicleClip(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCSoundAreaEntityBase
{
private:
    void *m_ptr;

public:
    GCSoundAreaEntityBase(std::string ptr);
    GCSoundAreaEntityBase(void *ptr);

    bool GetDisabled() const;
    void SetDisabled(bool value);
    CUtlSymbolLarge GetSoundAreaType() const;
    void SetSoundAreaType(CUtlSymbolLarge value);
    Vector GetPos() const;
    void SetPos(Vector value);

    std::string ToPtr();
    bool IsValid();
};

class GCFuncBrush
{
private:
    void *m_ptr;

public:
    GCFuncBrush(std::string ptr);
    GCFuncBrush(void *ptr);

    BrushSolidities_e GetSolidity() const;
    void SetSolidity(BrushSolidities_e value);
    int32_t GetDisabled() const;
    void SetDisabled(int32_t value);
    bool GetSolidBsp() const;
    void SetSolidBsp(bool value);
    CUtlSymbolLarge GetExcludedClass() const;
    void SetExcludedClass(CUtlSymbolLarge value);
    bool GetInvertExclusion() const;
    void SetInvertExclusion(bool value);
    bool GetScriptedMovement() const;
    void SetScriptedMovement(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCEnvFunnel
{
private:
    void *m_ptr;

public:
    GCEnvFunnel(std::string ptr);
    GCEnvFunnel(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GSequenceHistory_t
{
private:
    void *m_ptr;

public:
    GSequenceHistory_t(std::string ptr);
    GSequenceHistory_t(void *ptr);

    float GetSeqFixedCycle() const;
    void SetSeqFixedCycle(float value);
    AnimLoopMode_t GetSeqLoopMode() const;
    void SetSeqLoopMode(AnimLoopMode_t value);
    float GetPlaybackRate() const;
    void SetPlaybackRate(float value);
    float GetCyclesPerSecond() const;
    void SetCyclesPerSecond(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCCSGameModeRules_Noop
{
private:
    void *m_ptr;

public:
    GCCSGameModeRules_Noop(std::string ptr);
    GCCSGameModeRules_Noop(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCPointAngularVelocitySensor
{
private:
    void *m_ptr;

public:
    GCPointAngularVelocitySensor(std::string ptr);
    GCPointAngularVelocitySensor(void *ptr);

    GCBaseEntity GetTargetEntity() const;
    void SetTargetEntity(GCBaseEntity* value);
    float GetThreshold() const;
    void SetThreshold(float value);
    int32_t GetLastCompareResult() const;
    void SetLastCompareResult(int32_t value);
    int32_t GetLastFireResult() const;
    void SetLastFireResult(int32_t value);
    float GetFireInterval() const;
    void SetFireInterval(float value);
    float GetLastAngVelocity() const;
    void SetLastAngVelocity(float value);
    QAngle GetLastOrientation() const;
    void SetLastOrientation(QAngle value);
    Vector GetAxis() const;
    void SetAxis(Vector value);
    bool GetUseHelper() const;
    void SetUseHelper(bool value);
    GCEntityIOOutput GetOnLessThan() const;
    void SetOnLessThan(GCEntityIOOutput value);
    GCEntityIOOutput GetOnLessThanOrEqualTo() const;
    void SetOnLessThanOrEqualTo(GCEntityIOOutput value);
    GCEntityIOOutput GetOnGreaterThan() const;
    void SetOnGreaterThan(GCEntityIOOutput value);
    GCEntityIOOutput GetOnGreaterThanOrEqualTo() const;
    void SetOnGreaterThanOrEqualTo(GCEntityIOOutput value);
    GCEntityIOOutput GetOnEqualTo() const;
    void SetOnEqualTo(GCEntityIOOutput value);

    std::string ToPtr();
    bool IsValid();
};

class GCBaseCSGrenadeProjectile
{
private:
    void *m_ptr;

public:
    GCBaseCSGrenadeProjectile(std::string ptr);
    GCBaseCSGrenadeProjectile(void *ptr);

    Vector GetInitialPosition() const;
    void SetInitialPosition(Vector value);
    Vector GetInitialVelocity() const;
    void SetInitialVelocity(Vector value);
    int32_t GetBounces() const;
    void SetBounces(int32_t value);
    int32_t GetExplodeEffectTickBegin() const;
    void SetExplodeEffectTickBegin(int32_t value);
    Vector GetExplodeEffectOrigin() const;
    void SetExplodeEffectOrigin(Vector value);
    uint8_t GetOGSExtraFlags() const;
    void SetOGSExtraFlags(uint8_t value);
    bool GetDetonationRecorded() const;
    void SetDetonationRecorded(bool value);
    uint16_t GetItemIndex() const;
    void SetItemIndex(uint16_t value);
    Vector GetOriginalSpawnLocation() const;
    void SetOriginalSpawnLocation(Vector value);
    Vector GetGrenadeSpin() const;
    void SetGrenadeSpin(Vector value);
    Vector GetLastHitSurfaceNormal() const;
    void SetLastHitSurfaceNormal(Vector value);
    int32_t GetTicksAtZeroVelocity() const;
    void SetTicksAtZeroVelocity(int32_t value);
    bool GetHasEverHitPlayer() const;
    void SetHasEverHitPlayer(bool value);
    bool GetClearFromPlayers() const;
    void SetClearFromPlayers(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCHostageRescueZoneShim
{
private:
    void *m_ptr;

public:
    GCHostageRescueZoneShim(std::string ptr);
    GCHostageRescueZoneShim(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCEnvInstructorHint
{
private:
    void *m_ptr;

public:
    GCEnvInstructorHint(std::string ptr);
    GCEnvInstructorHint(void *ptr);

    CUtlSymbolLarge GetName() const;
    void SetName(CUtlSymbolLarge value);
    CUtlSymbolLarge GetReplace_Key() const;
    void SetReplace_Key(CUtlSymbolLarge value);
    CUtlSymbolLarge GetHintTargetEntity() const;
    void SetHintTargetEntity(CUtlSymbolLarge value);
    int32_t GetTimeout() const;
    void SetTimeout(int32_t value);
    int32_t GetDisplayLimit() const;
    void SetDisplayLimit(int32_t value);
    CUtlSymbolLarge GetIcon_Onscreen() const;
    void SetIcon_Onscreen(CUtlSymbolLarge value);
    CUtlSymbolLarge GetIcon_Offscreen() const;
    void SetIcon_Offscreen(CUtlSymbolLarge value);
    CUtlSymbolLarge GetCaption() const;
    void SetCaption(CUtlSymbolLarge value);
    CUtlSymbolLarge GetActivatorCaption() const;
    void SetActivatorCaption(CUtlSymbolLarge value);
    Color GetColor() const;
    void SetColor(Color value);
    float GetIconOffset() const;
    void SetIconOffset(float value);
    float GetRange() const;
    void SetRange(float value);
    uint8_t GetPulseOption() const;
    void SetPulseOption(uint8_t value);
    uint8_t GetAlphaOption() const;
    void SetAlphaOption(uint8_t value);
    uint8_t GetShakeOption() const;
    void SetShakeOption(uint8_t value);
    bool GetStatic() const;
    void SetStatic(bool value);
    bool GetNoOffscreen() const;
    void SetNoOffscreen(bool value);
    bool GetForceCaption() const;
    void SetForceCaption(bool value);
    int32_t GetInstanceType() const;
    void SetInstanceType(int32_t value);
    bool GetSuppressRest() const;
    void SetSuppressRest(bool value);
    CUtlSymbolLarge GetBinding() const;
    void SetBinding(CUtlSymbolLarge value);
    bool GetAllowNoDrawTarget() const;
    void SetAllowNoDrawTarget(bool value);
    bool GetAutoStart() const;
    void SetAutoStart(bool value);
    bool GetLocalPlayerOnly() const;
    void SetLocalPlayerOnly(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCEnvTracer
{
private:
    void *m_ptr;

public:
    GCEnvTracer(std::string ptr);
    GCEnvTracer(void *ptr);

    Vector GetEnd() const;
    void SetEnd(Vector value);
    float GetDelay() const;
    void SetDelay(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCInfoGameEventProxy
{
private:
    void *m_ptr;

public:
    GCInfoGameEventProxy(std::string ptr);
    GCInfoGameEventProxy(void *ptr);

    CUtlSymbolLarge GetEventName() const;
    void SetEventName(CUtlSymbolLarge value);
    float GetRange() const;
    void SetRange(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCPointCamera
{
private:
    void *m_ptr;

public:
    GCPointCamera(std::string ptr);
    GCPointCamera(void *ptr);

    float GetFOV() const;
    void SetFOV(float value);
    float GetResolution() const;
    void SetResolution(float value);
    bool GetFogEnable() const;
    void SetFogEnable(bool value);
    Color GetFogColor() const;
    void SetFogColor(Color value);
    float GetFogStart() const;
    void SetFogStart(float value);
    float GetFogEnd() const;
    void SetFogEnd(float value);
    float GetFogMaxDensity() const;
    void SetFogMaxDensity(float value);
    bool GetActive() const;
    void SetActive(bool value);
    bool GetUseScreenAspectRatio() const;
    void SetUseScreenAspectRatio(bool value);
    float GetAspectRatio() const;
    void SetAspectRatio(float value);
    bool GetNoSky() const;
    void SetNoSky(bool value);
    float GetBrightness() const;
    void SetBrightness(float value);
    float GetZFar() const;
    void SetZFar(float value);
    float GetZNear() const;
    void SetZNear(float value);
    bool GetCanHLTVUse() const;
    void SetCanHLTVUse(bool value);
    bool GetDofEnabled() const;
    void SetDofEnabled(bool value);
    float GetDofNearBlurry() const;
    void SetDofNearBlurry(float value);
    float GetDofNearCrisp() const;
    void SetDofNearCrisp(float value);
    float GetDofFarCrisp() const;
    void SetDofFarCrisp(float value);
    float GetDofFarBlurry() const;
    void SetDofFarBlurry(float value);
    float GetDofTiltToGround() const;
    void SetDofTiltToGround(float value);
    float GetTargetFOV() const;
    void SetTargetFOV(float value);
    float GetDegreesPerSecond() const;
    void SetDegreesPerSecond(float value);
    bool GetIsOn() const;
    void SetIsOn(bool value);
    GCPointCamera GetNext() const;
    void SetNext(GCPointCamera* value);

    std::string ToPtr();
    bool IsValid();
};

class GCBodyComponentSkeletonInstance
{
private:
    void *m_ptr;

public:
    GCBodyComponentSkeletonInstance(std::string ptr);
    GCBodyComponentSkeletonInstance(void *ptr);

    GCSkeletonInstance GetSkeletonInstance() const;
    void SetSkeletonInstance(GCSkeletonInstance value);

    std::string ToPtr();
    bool IsValid();
};

class GCFuncLadderAlias_func_useableladder
{
private:
    void *m_ptr;

public:
    GCFuncLadderAlias_func_useableladder(std::string ptr);
    GCFuncLadderAlias_func_useableladder(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCBaseMoveBehavior
{
private:
    void *m_ptr;

public:
    GCBaseMoveBehavior(std::string ptr);
    GCBaseMoveBehavior(void *ptr);

    int32_t GetPositionInterpolator() const;
    void SetPositionInterpolator(int32_t value);
    int32_t GetRotationInterpolator() const;
    void SetRotationInterpolator(int32_t value);
    float GetAnimStartTime() const;
    void SetAnimStartTime(float value);
    float GetAnimEndTime() const;
    void SetAnimEndTime(float value);
    float GetAverageSpeedAcrossFrame() const;
    void SetAverageSpeedAcrossFrame(float value);
    GCPathKeyFrame GetCurrentKeyFrame() const;
    void SetCurrentKeyFrame(GCPathKeyFrame* value);
    GCPathKeyFrame GetTargetKeyFrame() const;
    void SetTargetKeyFrame(GCPathKeyFrame* value);
    GCPathKeyFrame GetPreKeyFrame() const;
    void SetPreKeyFrame(GCPathKeyFrame* value);
    GCPathKeyFrame GetPostKeyFrame() const;
    void SetPostKeyFrame(GCPathKeyFrame* value);
    float GetTimeIntoFrame() const;
    void SetTimeIntoFrame(float value);
    int32_t GetDirection() const;
    void SetDirection(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCFuncInteractionLayerClip
{
private:
    void *m_ptr;

public:
    GCFuncInteractionLayerClip(std::string ptr);
    GCFuncInteractionLayerClip(void *ptr);

    bool GetDisabled() const;
    void SetDisabled(bool value);
    CUtlSymbolLarge GetInteractsAs() const;
    void SetInteractsAs(CUtlSymbolLarge value);
    CUtlSymbolLarge GetInteractsWith() const;
    void SetInteractsWith(CUtlSymbolLarge value);

    std::string ToPtr();
    bool IsValid();
};

class GCWeaponMAC10
{
private:
    void *m_ptr;

public:
    GCWeaponMAC10(std::string ptr);
    GCWeaponMAC10(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCGameRules
{
private:
    void *m_ptr;

public:
    GCGameRules(std::string ptr);
    GCGameRules(void *ptr);

    GCNetworkVarChainer Get__pChainEntity() const;
    void Set__pChainEntity(GCNetworkVarChainer value);
    std::string GetQuestName() const;
    void SetQuestName(std::string value);
    int32_t GetQuestPhase() const;
    void SetQuestPhase(int32_t value);
    int32_t GetTotalPausedTicks() const;
    void SetTotalPausedTicks(int32_t value);
    int32_t GetPauseStartTick() const;
    void SetPauseStartTick(int32_t value);
    bool GetGamePaused() const;
    void SetGamePaused(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCWeaponRevolver
{
private:
    void *m_ptr;

public:
    GCWeaponRevolver(std::string ptr);
    GCWeaponRevolver(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCOrnamentProp
{
private:
    void *m_ptr;

public:
    GCOrnamentProp(std::string ptr);
    GCOrnamentProp(void *ptr);

    CUtlSymbolLarge GetInitialOwner() const;
    void SetInitialOwner(CUtlSymbolLarge value);

    std::string ToPtr();
    bool IsValid();
};

class GCLogicGameEvent
{
private:
    void *m_ptr;

public:
    GCLogicGameEvent(std::string ptr);
    GCLogicGameEvent(void *ptr);

    CUtlSymbolLarge GetEventName() const;
    void SetEventName(CUtlSymbolLarge value);

    std::string ToPtr();
    bool IsValid();
};

class GCEnvMuzzleFlash
{
private:
    void *m_ptr;

public:
    GCEnvMuzzleFlash(std::string ptr);
    GCEnvMuzzleFlash(void *ptr);

    float GetScale() const;
    void SetScale(float value);
    CUtlSymbolLarge GetParentAttachment() const;
    void SetParentAttachment(CUtlSymbolLarge value);

    std::string ToPtr();
    bool IsValid();
};

class GCPlayerSprayDecal
{
private:
    void *m_ptr;

public:
    GCPlayerSprayDecal(std::string ptr);
    GCPlayerSprayDecal(void *ptr);

    int32_t GetUniqueID() const;
    void SetUniqueID(int32_t value);
    uint32_t GetAccountID() const;
    void SetAccountID(uint32_t value);
    uint32_t GetTraceID() const;
    void SetTraceID(uint32_t value);
    uint32_t GetRtGcTime() const;
    void SetRtGcTime(uint32_t value);
    Vector GetEndPos() const;
    void SetEndPos(Vector value);
    Vector GetStart() const;
    void SetStart(Vector value);
    Vector GetLeft() const;
    void SetLeft(Vector value);
    Vector GetNormal() const;
    void SetNormal(Vector value);
    int32_t GetPlayer() const;
    void SetPlayer(int32_t value);
    int32_t GetEntity() const;
    void SetEntity(int32_t value);
    int32_t GetHitbox() const;
    void SetHitbox(int32_t value);
    float GetCreationTime() const;
    void SetCreationTime(float value);
    int32_t GetTintID() const;
    void SetTintID(int32_t value);
    uint8_t GetVersion() const;
    void SetVersion(uint8_t value);
    std::vector<uint8_t> GetSignature() const;
    void SetSignature(std::vector<uint8_t> value);

    std::string ToPtr();
    bool IsValid();
};

class GCBombTarget
{
private:
    void *m_ptr;

public:
    GCBombTarget(std::string ptr);
    GCBombTarget(void *ptr);

    GCEntityIOOutput GetOnBombExplode() const;
    void SetOnBombExplode(GCEntityIOOutput value);
    GCEntityIOOutput GetOnBombPlanted() const;
    void SetOnBombPlanted(GCEntityIOOutput value);
    GCEntityIOOutput GetOnBombDefused() const;
    void SetOnBombDefused(GCEntityIOOutput value);
    bool GetIsBombSiteB() const;
    void SetIsBombSiteB(bool value);
    bool GetIsHeistBombTarget() const;
    void SetIsHeistBombTarget(bool value);
    bool GetBombPlantedHere() const;
    void SetBombPlantedHere(bool value);
    CUtlSymbolLarge GetMountTarget() const;
    void SetMountTarget(CUtlSymbolLarge value);
    GCBaseEntity GetInstructorHint() const;
    void SetInstructorHint(GCBaseEntity* value);
    int32_t GetBombSiteDesignation() const;
    void SetBombSiteDesignation(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCPhysicsSpring
{
private:
    void *m_ptr;

public:
    GCPhysicsSpring(std::string ptr);
    GCPhysicsSpring(void *ptr);

    float GetFrequency() const;
    void SetFrequency(float value);
    float GetDampingRatio() const;
    void SetDampingRatio(float value);
    float GetRestLength() const;
    void SetRestLength(float value);
    CUtlSymbolLarge GetNameAttachStart() const;
    void SetNameAttachStart(CUtlSymbolLarge value);
    CUtlSymbolLarge GetNameAttachEnd() const;
    void SetNameAttachEnd(CUtlSymbolLarge value);
    Vector GetStart() const;
    void SetStart(Vector value);
    Vector GetEnd() const;
    void SetEnd(Vector value);
    uint32_t GetTeleportTick() const;
    void SetTeleportTick(uint32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCEnvLightProbeVolume
{
private:
    void *m_ptr;

public:
    GCEnvLightProbeVolume(std::string ptr);
    GCEnvLightProbeVolume(void *ptr);

    Vector GetEntity_vBoxMins() const;
    void SetEntity_vBoxMins(Vector value);
    Vector GetEntity_vBoxMaxs() const;
    void SetEntity_vBoxMaxs(Vector value);
    bool GetEntity_bMoveable() const;
    void SetEntity_bMoveable(bool value);
    int32_t GetEntity_nHandshake() const;
    void SetEntity_nHandshake(int32_t value);
    int32_t GetEntity_nPriority() const;
    void SetEntity_nPriority(int32_t value);
    bool GetEntity_bStartDisabled() const;
    void SetEntity_bStartDisabled(bool value);
    int32_t GetEntity_nLightProbeSizeX() const;
    void SetEntity_nLightProbeSizeX(int32_t value);
    int32_t GetEntity_nLightProbeSizeY() const;
    void SetEntity_nLightProbeSizeY(int32_t value);
    int32_t GetEntity_nLightProbeSizeZ() const;
    void SetEntity_nLightProbeSizeZ(int32_t value);
    int32_t GetEntity_nLightProbeAtlasX() const;
    void SetEntity_nLightProbeAtlasX(int32_t value);
    int32_t GetEntity_nLightProbeAtlasY() const;
    void SetEntity_nLightProbeAtlasY(int32_t value);
    int32_t GetEntity_nLightProbeAtlasZ() const;
    void SetEntity_nLightProbeAtlasZ(int32_t value);
    bool GetEntity_bEnabled() const;
    void SetEntity_bEnabled(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCCSGameModeRules_ArmsRace
{
private:
    void *m_ptr;

public:
    GCCSGameModeRules_ArmsRace(std::string ptr);
    GCCSGameModeRules_ArmsRace(void *ptr);

    std::vector<CUtlString> GetWeaponSequence() const;
    void SetWeaponSequence(std::vector<CUtlString> value);

    std::string ToPtr();
    bool IsValid();
};

class GCScriptTriggerPush
{
private:
    void *m_ptr;

public:
    GCScriptTriggerPush(std::string ptr);
    GCScriptTriggerPush(void *ptr);

    Vector GetExtent() const;
    void SetExtent(Vector value);

    std::string ToPtr();
    bool IsValid();
};

class GCEnvEntityIgniter
{
private:
    void *m_ptr;

public:
    GCEnvEntityIgniter(std::string ptr);
    GCEnvEntityIgniter(void *ptr);

    float GetLifetime() const;
    void SetLifetime(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCFuncWallToggle
{
private:
    void *m_ptr;

public:
    GCFuncWallToggle(std::string ptr);
    GCFuncWallToggle(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCDamageRecord
{
private:
    void *m_ptr;

public:
    GCDamageRecord(std::string ptr);
    GCDamageRecord(void *ptr);

    GCCSPlayerPawn GetPlayerDamager() const;
    void SetPlayerDamager(GCCSPlayerPawn* value);
    GCCSPlayerPawn GetPlayerRecipient() const;
    void SetPlayerRecipient(GCCSPlayerPawn* value);
    GCCSPlayerController GetPlayerControllerDamager() const;
    void SetPlayerControllerDamager(GCCSPlayerController* value);
    GCCSPlayerController GetPlayerControllerRecipient() const;
    void SetPlayerControllerRecipient(GCCSPlayerController* value);
    CUtlString GetPlayerDamagerName() const;
    void SetPlayerDamagerName(CUtlString value);
    CUtlString GetPlayerRecipientName() const;
    void SetPlayerRecipientName(CUtlString value);
    uint64_t GetDamagerXuid() const;
    void SetDamagerXuid(uint64_t value);
    uint64_t GetRecipientXuid() const;
    void SetRecipientXuid(uint64_t value);
    int32_t GetDamage() const;
    void SetDamage(int32_t value);
    int32_t GetActualHealthRemoved() const;
    void SetActualHealthRemoved(int32_t value);
    int32_t GetNumHits() const;
    void SetNumHits(int32_t value);
    int32_t GetLastBulletUpdate() const;
    void SetLastBulletUpdate(int32_t value);
    bool GetIsOtherEnemy() const;
    void SetIsOtherEnemy(bool value);
    EKillTypes_t GetKillType() const;
    void SetKillType(EKillTypes_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCLogicAutosave
{
private:
    void *m_ptr;

public:
    GCLogicAutosave(std::string ptr);
    GCLogicAutosave(void *ptr);

    bool GetForceNewLevelUnit() const;
    void SetForceNewLevelUnit(bool value);
    int32_t GetMinHitPoints() const;
    void SetMinHitPoints(int32_t value);
    int32_t GetMinHitPointsToCommit() const;
    void SetMinHitPointsToCommit(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCCSPlayerController_DamageServices
{
private:
    void *m_ptr;

public:
    GCCSPlayerController_DamageServices(std::string ptr);
    GCCSPlayerController_DamageServices(void *ptr);

    int32_t GetSendUpdate() const;
    void SetSendUpdate(int32_t value);
    std::vector<GCDamageRecord> GetDamageList() const;
    void SetDamageList(std::vector<GCDamageRecord> value);

    std::string ToPtr();
    bool IsValid();
};

class GCRenderComponent
{
private:
    void *m_ptr;

public:
    GCRenderComponent(std::string ptr);
    GCRenderComponent(void *ptr);

    GCNetworkVarChainer Get__pChainEntity() const;
    void Set__pChainEntity(GCNetworkVarChainer value);
    bool GetIsRenderingWithViewModels() const;
    void SetIsRenderingWithViewModels(bool value);
    uint32_t GetSplitscreenFlags() const;
    void SetSplitscreenFlags(uint32_t value);
    bool GetEnableRendering() const;
    void SetEnableRendering(bool value);
    bool GetInterpolationReadyToDraw() const;
    void SetInterpolationReadyToDraw(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCSoundEventPathCornerEntity
{
private:
    void *m_ptr;

public:
    GCSoundEventPathCornerEntity(std::string ptr);
    GCSoundEventPathCornerEntity(void *ptr);

    CUtlSymbolLarge GetPathCorner() const;
    void SetPathCorner(CUtlSymbolLarge value);
    int32_t GetCountMax() const;
    void SetCountMax(int32_t value);
    float GetDistanceMax() const;
    void SetDistanceMax(float value);
    float GetDistMaxSqr() const;
    void SetDistMaxSqr(float value);
    float GetDotProductMax() const;
    void SetDotProductMax(float value);
    bool GetPlaying() const;
    void SetPlaying(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCEnvSoundscapeProxyAlias_snd_soundscape_proxy
{
private:
    void *m_ptr;

public:
    GCEnvSoundscapeProxyAlias_snd_soundscape_proxy(std::string ptr);
    GCEnvSoundscapeProxyAlias_snd_soundscape_proxy(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCLightComponent
{
private:
    void *m_ptr;

public:
    GCLightComponent(std::string ptr);
    GCLightComponent(void *ptr);

    GCNetworkVarChainer Get__pChainEntity() const;
    void Set__pChainEntity(GCNetworkVarChainer value);
    Color GetColor() const;
    void SetColor(Color value);
    Color GetSecondaryColor() const;
    void SetSecondaryColor(Color value);
    float GetBrightness() const;
    void SetBrightness(float value);
    float GetBrightnessScale() const;
    void SetBrightnessScale(float value);
    float GetBrightnessMult() const;
    void SetBrightnessMult(float value);
    float GetRange() const;
    void SetRange(float value);
    float GetFalloff() const;
    void SetFalloff(float value);
    float GetAttenuation0() const;
    void SetAttenuation0(float value);
    float GetAttenuation1() const;
    void SetAttenuation1(float value);
    float GetAttenuation2() const;
    void SetAttenuation2(float value);
    float GetTheta() const;
    void SetTheta(float value);
    float GetPhi() const;
    void SetPhi(float value);
    int32_t GetCascades() const;
    void SetCascades(int32_t value);
    int32_t GetCastShadows() const;
    void SetCastShadows(int32_t value);
    int32_t GetShadowWidth() const;
    void SetShadowWidth(int32_t value);
    int32_t GetShadowHeight() const;
    void SetShadowHeight(int32_t value);
    bool GetRenderDiffuse() const;
    void SetRenderDiffuse(bool value);
    int32_t GetRenderSpecular() const;
    void SetRenderSpecular(int32_t value);
    bool GetRenderTransmissive() const;
    void SetRenderTransmissive(bool value);
    float GetOrthoLightWidth() const;
    void SetOrthoLightWidth(float value);
    float GetOrthoLightHeight() const;
    void SetOrthoLightHeight(float value);
    int32_t GetStyle() const;
    void SetStyle(int32_t value);
    CUtlString GetPattern() const;
    void SetPattern(CUtlString value);
    int32_t GetCascadeRenderStaticObjects() const;
    void SetCascadeRenderStaticObjects(int32_t value);
    float GetShadowCascadeCrossFade() const;
    void SetShadowCascadeCrossFade(float value);
    float GetShadowCascadeDistanceFade() const;
    void SetShadowCascadeDistanceFade(float value);
    float GetShadowCascadeDistance0() const;
    void SetShadowCascadeDistance0(float value);
    float GetShadowCascadeDistance1() const;
    void SetShadowCascadeDistance1(float value);
    float GetShadowCascadeDistance2() const;
    void SetShadowCascadeDistance2(float value);
    float GetShadowCascadeDistance3() const;
    void SetShadowCascadeDistance3(float value);
    int32_t GetShadowCascadeResolution0() const;
    void SetShadowCascadeResolution0(int32_t value);
    int32_t GetShadowCascadeResolution1() const;
    void SetShadowCascadeResolution1(int32_t value);
    int32_t GetShadowCascadeResolution2() const;
    void SetShadowCascadeResolution2(int32_t value);
    int32_t GetShadowCascadeResolution3() const;
    void SetShadowCascadeResolution3(int32_t value);
    bool GetUsesBakedShadowing() const;
    void SetUsesBakedShadowing(bool value);
    int32_t GetShadowPriority() const;
    void SetShadowPriority(int32_t value);
    int32_t GetBakedShadowIndex() const;
    void SetBakedShadowIndex(int32_t value);
    bool GetRenderToCubemaps() const;
    void SetRenderToCubemaps(bool value);
    int32_t GetDirectLight() const;
    void SetDirectLight(int32_t value);
    int32_t GetIndirectLight() const;
    void SetIndirectLight(int32_t value);
    float GetFadeMinDist() const;
    void SetFadeMinDist(float value);
    float GetFadeMaxDist() const;
    void SetFadeMaxDist(float value);
    float GetShadowFadeMinDist() const;
    void SetShadowFadeMinDist(float value);
    float GetShadowFadeMaxDist() const;
    void SetShadowFadeMaxDist(float value);
    bool GetEnabled() const;
    void SetEnabled(bool value);
    bool GetFlicker() const;
    void SetFlicker(bool value);
    bool GetPrecomputedFieldsValid() const;
    void SetPrecomputedFieldsValid(bool value);
    Vector GetPrecomputedBoundsMins() const;
    void SetPrecomputedBoundsMins(Vector value);
    Vector GetPrecomputedBoundsMaxs() const;
    void SetPrecomputedBoundsMaxs(Vector value);
    Vector GetPrecomputedOBBOrigin() const;
    void SetPrecomputedOBBOrigin(Vector value);
    QAngle GetPrecomputedOBBAngles() const;
    void SetPrecomputedOBBAngles(QAngle value);
    Vector GetPrecomputedOBBExtent() const;
    void SetPrecomputedOBBExtent(Vector value);
    float GetPrecomputedMaxRange() const;
    void SetPrecomputedMaxRange(float value);
    int32_t GetFogLightingMode() const;
    void SetFogLightingMode(int32_t value);
    float GetFogContributionStength() const;
    void SetFogContributionStength(float value);
    float GetNearClipPlane() const;
    void SetNearClipPlane(float value);
    Color GetSkyColor() const;
    void SetSkyColor(Color value);
    float GetSkyIntensity() const;
    void SetSkyIntensity(float value);
    Color GetSkyAmbientBounce() const;
    void SetSkyAmbientBounce(Color value);
    bool GetUseSecondaryColor() const;
    void SetUseSecondaryColor(bool value);
    bool GetMixedShadows() const;
    void SetMixedShadows(bool value);
    float GetCapsuleLength() const;
    void SetCapsuleLength(float value);
    float GetMinRoughness() const;
    void SetMinRoughness(float value);
    bool GetPvsModifyEntity() const;
    void SetPvsModifyEntity(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCSmokeGrenadeProjectile
{
private:
    void *m_ptr;

public:
    GCSmokeGrenadeProjectile(std::string ptr);
    GCSmokeGrenadeProjectile(void *ptr);

    int32_t GetSmokeEffectTickBegin() const;
    void SetSmokeEffectTickBegin(int32_t value);
    bool GetDidSmokeEffect() const;
    void SetDidSmokeEffect(bool value);
    int32_t GetRandomSeed() const;
    void SetRandomSeed(int32_t value);
    Vector GetSmokeColor() const;
    void SetSmokeColor(Vector value);
    Vector GetSmokeDetonationPos() const;
    void SetSmokeDetonationPos(Vector value);
    std::vector<uint8> GetVoxelFrameData() const;
    void SetVoxelFrameData(std::vector<uint8> value);

    std::string ToPtr();
    bool IsValid();
};

class GCScriptTriggerMultiple
{
private:
    void *m_ptr;

public:
    GCScriptTriggerMultiple(std::string ptr);
    GCScriptTriggerMultiple(void *ptr);

    Vector GetExtent() const;
    void SetExtent(Vector value);

    std::string ToPtr();
    bool IsValid();
};

class GCSoundOpvarSetAutoRoomEntity
{
private:
    void *m_ptr;

public:
    GCSoundOpvarSetAutoRoomEntity(std::string ptr);
    GCSoundOpvarSetAutoRoomEntity(void *ptr);

    std::vector<GSoundOpvarTraceResult_t> GetTraceResults() const;
    void SetTraceResults(std::vector<GSoundOpvarTraceResult_t> value);
    float GetSize() const;
    void SetSize(float value);
    float GetHeightTolerance() const;
    void SetHeightTolerance(float value);
    float GetSizeSqr() const;
    void SetSizeSqr(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCBodyComponentPoint
{
private:
    void *m_ptr;

public:
    GCBodyComponentPoint(std::string ptr);
    GCBodyComponentPoint(void *ptr);

    GCGameSceneNode GetSceneNode() const;
    void SetSceneNode(GCGameSceneNode value);

    std::string ToPtr();
    bool IsValid();
};

class GFilterDamageType
{
private:
    void *m_ptr;

public:
    GFilterDamageType(std::string ptr);
    GFilterDamageType(void *ptr);

    int32_t GetDamageType() const;
    void SetDamageType(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCBot
{
private:
    void *m_ptr;

public:
    GCBot(std::string ptr);
    GCBot(void *ptr);

    GCCSPlayerController GetController() const;
    void SetController(GCCSPlayerController* value);
    GCCSPlayerPawn GetPlayer() const;
    void SetPlayer(GCCSPlayerPawn* value);
    bool GetHasSpawned() const;
    void SetHasSpawned(bool value);
    uint32_t GetId() const;
    void SetId(uint32_t value);
    bool GetIsRunning() const;
    void SetIsRunning(bool value);
    bool GetIsCrouching() const;
    void SetIsCrouching(bool value);
    float GetForwardSpeed() const;
    void SetForwardSpeed(float value);
    float GetLeftSpeed() const;
    void SetLeftSpeed(float value);
    float GetVerticalSpeed() const;
    void SetVerticalSpeed(float value);
    uint64_t GetButtonFlags() const;
    void SetButtonFlags(uint64_t value);
    float GetJumpTimestamp() const;
    void SetJumpTimestamp(float value);
    Vector GetViewForward() const;
    void SetViewForward(Vector value);
    int32_t GetPostureStackIndex() const;
    void SetPostureStackIndex(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCMotorController
{
private:
    void *m_ptr;

public:
    GCMotorController(std::string ptr);
    GCMotorController(void *ptr);

    float GetSpeed() const;
    void SetSpeed(float value);
    float GetMaxTorque() const;
    void SetMaxTorque(float value);
    Vector GetAxis() const;
    void SetAxis(Vector value);
    float GetInertiaFactor() const;
    void SetInertiaFactor(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCSoundAreaEntitySphere
{
private:
    void *m_ptr;

public:
    GCSoundAreaEntitySphere(std::string ptr);
    GCSoundAreaEntitySphere(void *ptr);

    float GetRadius() const;
    void SetRadius(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCCSPlayer_UseServices
{
private:
    void *m_ptr;

public:
    GCCSPlayer_UseServices(std::string ptr);
    GCCSPlayer_UseServices(void *ptr);

    GCBaseEntity GetLastKnownUseEntity() const;
    void SetLastKnownUseEntity(GCBaseEntity* value);

    std::string ToPtr();
    bool IsValid();
};

class GCCSGO_WingmanIntroCounterTerroristPosition
{
private:
    void *m_ptr;

public:
    GCCSGO_WingmanIntroCounterTerroristPosition(std::string ptr);
    GCCSGO_WingmanIntroCounterTerroristPosition(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCItemKevlar
{
private:
    void *m_ptr;

public:
    GCItemKevlar(std::string ptr);
    GCItemKevlar(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCTriggerHurt
{
private:
    void *m_ptr;

public:
    GCTriggerHurt(std::string ptr);
    GCTriggerHurt(void *ptr);

    float GetOriginalDamage() const;
    void SetOriginalDamage(float value);
    float GetDamage() const;
    void SetDamage(float value);
    float GetDamageCap() const;
    void SetDamageCap(float value);
    float GetForgivenessDelay() const;
    void SetForgivenessDelay(float value);
    int32_t GetBitsDamageInflict() const;
    void SetBitsDamageInflict(int32_t value);
    int32_t GetDamageModel() const;
    void SetDamageModel(int32_t value);
    bool GetNoDmgForce() const;
    void SetNoDmgForce(bool value);
    Vector GetDamageForce() const;
    void SetDamageForce(Vector value);
    bool GetThinkAlways() const;
    void SetThinkAlways(bool value);
    float GetHurtThinkPeriod() const;
    void SetHurtThinkPeriod(float value);
    GCEntityIOOutput GetOnHurt() const;
    void SetOnHurt(GCEntityIOOutput value);
    GCEntityIOOutput GetOnHurtPlayer() const;
    void SetOnHurtPlayer(GCEntityIOOutput value);

    std::string ToPtr();
    bool IsValid();
};

class GCPhysBallSocket
{
private:
    void *m_ptr;

public:
    GCPhysBallSocket(std::string ptr);
    GCPhysBallSocket(void *ptr);

    float GetJointFriction() const;
    void SetJointFriction(float value);
    bool GetEnableSwingLimit() const;
    void SetEnableSwingLimit(bool value);
    float GetSwingLimit() const;
    void SetSwingLimit(float value);
    bool GetEnableTwistLimit() const;
    void SetEnableTwistLimit(bool value);
    float GetMinTwistAngle() const;
    void SetMinTwistAngle(float value);
    float GetMaxTwistAngle() const;
    void SetMaxTwistAngle(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCMapVetoPickController
{
private:
    void *m_ptr;

public:
    GCMapVetoPickController(std::string ptr);
    GCMapVetoPickController(void *ptr);

    bool GetPlayedIntroVcd() const;
    void SetPlayedIntroVcd(bool value);
    bool GetNeedToPlayFiveSecondsRemaining() const;
    void SetNeedToPlayFiveSecondsRemaining(bool value);
    double GetDblPreMatchDraftSequenceTime() const;
    void SetDblPreMatchDraftSequenceTime(double value);
    bool GetPreMatchDraftStateChanged() const;
    void SetPreMatchDraftStateChanged(bool value);
    int32_t GetDraftType() const;
    void SetDraftType(int32_t value);
    int32_t GetTeamWinningCoinToss() const;
    void SetTeamWinningCoinToss(int32_t value);
    std::vector<int32_t> GetTeamWithFirstChoice() const;
    void SetTeamWithFirstChoice(std::vector<int32_t> value);
    std::vector<int32_t> GetVoteMapIdsList() const;
    void SetVoteMapIdsList(std::vector<int32_t> value);
    std::vector<int32_t> GetAccountIDs() const;
    void SetAccountIDs(std::vector<int32_t> value);
    std::vector<int32_t> GetMapId0() const;
    void SetMapId0(std::vector<int32_t> value);
    std::vector<int32_t> GetMapId1() const;
    void SetMapId1(std::vector<int32_t> value);
    std::vector<int32_t> GetMapId2() const;
    void SetMapId2(std::vector<int32_t> value);
    std::vector<int32_t> GetMapId3() const;
    void SetMapId3(std::vector<int32_t> value);
    std::vector<int32_t> GetMapId4() const;
    void SetMapId4(std::vector<int32_t> value);
    std::vector<int32_t> GetMapId5() const;
    void SetMapId5(std::vector<int32_t> value);
    std::vector<int32_t> GetStartingSide0() const;
    void SetStartingSide0(std::vector<int32_t> value);
    int32_t GetCurrentPhase() const;
    void SetCurrentPhase(int32_t value);
    int32_t GetPhaseStartTick() const;
    void SetPhaseStartTick(int32_t value);
    int32_t GetPhaseDurationTicks() const;
    void SetPhaseDurationTicks(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCCSMinimapBoundary
{
private:
    void *m_ptr;

public:
    GCCSMinimapBoundary(std::string ptr);
    GCCSMinimapBoundary(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCSoundEnt
{
private:
    void *m_ptr;

public:
    GCSoundEnt(std::string ptr);
    GCSoundEnt(void *ptr);

    int32_t GetFreeSound() const;
    void SetFreeSound(int32_t value);
    int32_t GetActiveSound() const;
    void SetActiveSound(int32_t value);
    int32_t GetCLastActiveSounds() const;
    void SetCLastActiveSounds(int32_t value);
    std::vector<GCSound> GetSoundPool() const;
    void SetSoundPool(std::vector<GCSound> value);

    std::string ToPtr();
    bool IsValid();
};

class GCInfoSpawnGroupLandmark
{
private:
    void *m_ptr;

public:
    GCInfoSpawnGroupLandmark(std::string ptr);
    GCInfoSpawnGroupLandmark(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCPlayer_MovementServices_Humanoid
{
private:
    void *m_ptr;

public:
    GCPlayer_MovementServices_Humanoid(std::string ptr);
    GCPlayer_MovementServices_Humanoid(void *ptr);

    float GetStepSoundTime() const;
    void SetStepSoundTime(float value);
    float GetFallVelocity() const;
    void SetFallVelocity(float value);
    bool GetInCrouch() const;
    void SetInCrouch(bool value);
    uint32_t GetCrouchState() const;
    void SetCrouchState(uint32_t value);
    bool GetDucked() const;
    void SetDucked(bool value);
    bool GetDucking() const;
    void SetDucking(bool value);
    bool GetInDuckJump() const;
    void SetInDuckJump(bool value);
    Vector GetGroundNormal() const;
    void SetGroundNormal(Vector value);
    float GetSurfaceFriction() const;
    void SetSurfaceFriction(float value);
    CUtlStringToken GetSurfaceProps() const;
    void SetSurfaceProps(CUtlStringToken value);
    int32_t GetStepside() const;
    void SetStepside(int32_t value);
    int32_t GetTargetVolume() const;
    void SetTargetVolume(int32_t value);
    Vector GetSmoothedVelocity() const;
    void SetSmoothedVelocity(Vector value);

    std::string ToPtr();
    bool IsValid();
};

class GCTriggerSave
{
private:
    void *m_ptr;

public:
    GCTriggerSave(std::string ptr);
    GCTriggerSave(void *ptr);

    bool GetForceNewLevelUnit() const;
    void SetForceNewLevelUnit(bool value);
    float GetDangerousTimer() const;
    void SetDangerousTimer(float value);
    int32_t GetMinHitPoints() const;
    void SetMinHitPoints(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCPhysWheelConstraint
{
private:
    void *m_ptr;

public:
    GCPhysWheelConstraint(std::string ptr);
    GCPhysWheelConstraint(void *ptr);

    float GetSuspensionFrequency() const;
    void SetSuspensionFrequency(float value);
    float GetSuspensionDampingRatio() const;
    void SetSuspensionDampingRatio(float value);
    float GetSuspensionHeightOffset() const;
    void SetSuspensionHeightOffset(float value);
    bool GetEnableSuspensionLimit() const;
    void SetEnableSuspensionLimit(bool value);
    float GetMinSuspensionOffset() const;
    void SetMinSuspensionOffset(float value);
    float GetMaxSuspensionOffset() const;
    void SetMaxSuspensionOffset(float value);
    bool GetEnableSteeringLimit() const;
    void SetEnableSteeringLimit(bool value);
    float GetMinSteeringAngle() const;
    void SetMinSteeringAngle(float value);
    float GetMaxSteeringAngle() const;
    void SetMaxSteeringAngle(float value);
    float GetSteeringAxisFriction() const;
    void SetSteeringAxisFriction(float value);
    float GetSpinAxisFriction() const;
    void SetSpinAxisFriction(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCPhysFixed
{
private:
    void *m_ptr;

public:
    GCPhysFixed(std::string ptr);
    GCPhysFixed(void *ptr);

    float GetLinearFrequency() const;
    void SetLinearFrequency(float value);
    float GetLinearDampingRatio() const;
    void SetLinearDampingRatio(float value);
    float GetAngularFrequency() const;
    void SetAngularFrequency(float value);
    float GetAngularDampingRatio() const;
    void SetAngularDampingRatio(float value);
    bool GetEnableLinearConstraint() const;
    void SetEnableLinearConstraint(bool value);
    bool GetEnableAngularConstraint() const;
    void SetEnableAngularConstraint(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCSkillFloat
{
private:
    void *m_ptr;

public:
    GCSkillFloat(std::string ptr);
    GCSkillFloat(void *ptr);

    std::vector<float> GetValue() const;
    void SetValue(std::vector<float> value);

    std::string ToPtr();
    bool IsValid();
};

class GCEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable
{
private:
    void *m_ptr;

public:
    GCEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable(std::string ptr);
    GCEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCCSPlayerController_InGameMoneyServices
{
private:
    void *m_ptr;

public:
    GCCSPlayerController_InGameMoneyServices(std::string ptr);
    GCCSPlayerController_InGameMoneyServices(void *ptr);

    bool GetReceivesMoneyNextRound() const;
    void SetReceivesMoneyNextRound(bool value);
    int32_t GetMoneyEarnedForNextRound() const;
    void SetMoneyEarnedForNextRound(int32_t value);
    int32_t GetAccount() const;
    void SetAccount(int32_t value);
    int32_t GetStartAccount() const;
    void SetStartAccount(int32_t value);
    int32_t GetTotalCashSpent() const;
    void SetTotalCashSpent(int32_t value);
    int32_t GetCashSpentThisRound() const;
    void SetCashSpentThisRound(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCSprite
{
private:
    void *m_ptr;

public:
    GCSprite(std::string ptr);
    GCSprite(void *ptr);

    GCBaseEntity GetAttachedToEntity() const;
    void SetAttachedToEntity(GCBaseEntity* value);
    float GetSpriteFramerate() const;
    void SetSpriteFramerate(float value);
    float GetFrame() const;
    void SetFrame(float value);
    uint32_t GetBrightness() const;
    void SetBrightness(uint32_t value);
    float GetBrightnessDuration() const;
    void SetBrightnessDuration(float value);
    float GetSpriteScale() const;
    void SetSpriteScale(float value);
    float GetScaleDuration() const;
    void SetScaleDuration(float value);
    bool GetWorldSpaceScale() const;
    void SetWorldSpaceScale(bool value);
    float GetGlowProxySize() const;
    void SetGlowProxySize(float value);
    float GetHDRColorScale() const;
    void SetHDRColorScale(float value);
    float GetMaxFrame() const;
    void SetMaxFrame(float value);
    float GetStartScale() const;
    void SetStartScale(float value);
    float GetDestScale() const;
    void SetDestScale(float value);
    int32_t GetStartBrightness() const;
    void SetStartBrightness(int32_t value);
    int32_t GetDestBrightness() const;
    void SetDestBrightness(int32_t value);
    int32_t GetSpriteWidth() const;
    void SetSpriteWidth(int32_t value);
    int32_t GetSpriteHeight() const;
    void SetSpriteHeight(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCSoundOpvarSetAABBEntity
{
private:
    void *m_ptr;

public:
    GCSoundOpvarSetAABBEntity(std::string ptr);
    GCSoundOpvarSetAABBEntity(void *ptr);

    Vector GetDistanceInnerMins() const;
    void SetDistanceInnerMins(Vector value);
    Vector GetDistanceInnerMaxs() const;
    void SetDistanceInnerMaxs(Vector value);
    Vector GetDistanceOuterMins() const;
    void SetDistanceOuterMins(Vector value);
    Vector GetDistanceOuterMaxs() const;
    void SetDistanceOuterMaxs(Vector value);
    int32_t GetAABBDirection() const;
    void SetAABBDirection(int32_t value);
    Vector GetInnerMins() const;
    void SetInnerMins(Vector value);
    Vector GetInnerMaxs() const;
    void SetInnerMaxs(Vector value);
    Vector GetOuterMins() const;
    void SetOuterMins(Vector value);
    Vector GetOuterMaxs() const;
    void SetOuterMaxs(Vector value);

    std::string ToPtr();
    bool IsValid();
};

class GCWeaponM4A1
{
private:
    void *m_ptr;

public:
    GCWeaponM4A1(std::string ptr);
    GCWeaponM4A1(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCBeam
{
private:
    void *m_ptr;

public:
    GCBeam(std::string ptr);
    GCBeam(void *ptr);

    float GetFrameRate() const;
    void SetFrameRate(float value);
    float GetHDRColorScale() const;
    void SetHDRColorScale(float value);
    float GetDamage() const;
    void SetDamage(float value);
    uint8_t GetNumBeamEnts() const;
    void SetNumBeamEnts(uint8_t value);
    BeamType_t GetBeamType() const;
    void SetBeamType(BeamType_t value);
    uint32_t GetBeamFlags() const;
    void SetBeamFlags(uint32_t value);
    std::vector<GCBaseEntity*> GetAttachEntity() const;
    void SetAttachEntity(std::vector<GCBaseEntity*> value);
    float GetWidth() const;
    void SetWidth(float value);
    float GetEndWidth() const;
    void SetEndWidth(float value);
    float GetFadeLength() const;
    void SetFadeLength(float value);
    float GetHaloScale() const;
    void SetHaloScale(float value);
    float GetAmplitude() const;
    void SetAmplitude(float value);
    float GetStartFrame() const;
    void SetStartFrame(float value);
    float GetSpeed() const;
    void SetSpeed(float value);
    float GetFrame() const;
    void SetFrame(float value);
    BeamClipStyle_t GetClipStyle() const;
    void SetClipStyle(BeamClipStyle_t value);
    bool GetTurnedOff() const;
    void SetTurnedOff(bool value);
    Vector GetEndPos() const;
    void SetEndPos(Vector value);
    GCBaseEntity GetEndEntity() const;
    void SetEndEntity(GCBaseEntity* value);
    int32_t GetDissolveType() const;
    void SetDissolveType(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCCommentaryViewPosition
{
private:
    void *m_ptr;

public:
    GCCommentaryViewPosition(std::string ptr);
    GCCommentaryViewPosition(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCTonemapController2Alias_env_tonemap_controller2
{
private:
    void *m_ptr;

public:
    GCTonemapController2Alias_env_tonemap_controller2(std::string ptr);
    GCTonemapController2Alias_env_tonemap_controller2(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCPhysPulley
{
private:
    void *m_ptr;

public:
    GCPhysPulley(std::string ptr);
    GCPhysPulley(void *ptr);

    Vector GetPosition2() const;
    void SetPosition2(Vector value);
    std::vector<Vector> GetOffset() const;
    void SetOffset(std::vector<Vector> value);
    float GetAddLength() const;
    void SetAddLength(float value);
    float GetGearRatio() const;
    void SetGearRatio(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCGameRulesProxy
{
private:
    void *m_ptr;

public:
    GCGameRulesProxy(std::string ptr);
    GCGameRulesProxy(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCWeaponMP7
{
private:
    void *m_ptr;

public:
    GCWeaponMP7(std::string ptr);
    GCWeaponMP7(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCCSPlayerController_ActionTrackingServices
{
private:
    void *m_ptr;

public:
    GCCSPlayerController_ActionTrackingServices(std::string ptr);
    GCCSPlayerController_ActionTrackingServices(void *ptr);

    std::vector<GCSPerRoundStats_t> GetPerRoundStats() const;
    void SetPerRoundStats(std::vector<GCSPerRoundStats_t> value);
    GCSMatchStats_t GetMatchStats() const;
    void SetMatchStats(GCSMatchStats_t value);
    int32_t GetNumRoundKills() const;
    void SetNumRoundKills(int32_t value);
    int32_t GetNumRoundKillsHeadshots() const;
    void SetNumRoundKillsHeadshots(int32_t value);
    uint32_t GetTotalRoundDamageDealt() const;
    void SetTotalRoundDamageDealt(uint32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCPrecipitationBlocker
{
private:
    void *m_ptr;

public:
    GCPrecipitationBlocker(std::string ptr);
    GCPrecipitationBlocker(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCBaseFlexAlias_funCBaseFlex
{
private:
    void *m_ptr;

public:
    GCBaseFlexAlias_funCBaseFlex(std::string ptr);
    GCBaseFlexAlias_funCBaseFlex(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCFish
{
private:
    void *m_ptr;

public:
    GCFish(std::string ptr);
    GCFish(void *ptr);

    GCFishPool GetPool() const;
    void SetPool(GCFishPool* value);
    uint32_t GetId() const;
    void SetId(uint32_t value);
    float GetX() const;
    void SetX(float value);
    float GetY() const;
    void SetY(float value);
    float GetZ() const;
    void SetZ(float value);
    float GetAngle() const;
    void SetAngle(float value);
    float GetAngleChange() const;
    void SetAngleChange(float value);
    Vector GetForward() const;
    void SetForward(Vector value);
    Vector GetPerp() const;
    void SetPerp(Vector value);
    Vector GetPoolOrigin() const;
    void SetPoolOrigin(Vector value);
    float GetWaterLevel() const;
    void SetWaterLevel(float value);
    float GetSpeed() const;
    void SetSpeed(float value);
    float GetDesiredSpeed() const;
    void SetDesiredSpeed(float value);
    float GetCalmSpeed() const;
    void SetCalmSpeed(float value);
    float GetPanicSpeed() const;
    void SetPanicSpeed(float value);
    float GetAvoidRange() const;
    void SetAvoidRange(float value);
    GCountdownTimer GetTurnTimer() const;
    void SetTurnTimer(GCountdownTimer value);
    bool GetTurnClockwise() const;
    void SetTurnClockwise(bool value);
    GCountdownTimer GetGoTimer() const;
    void SetGoTimer(GCountdownTimer value);
    GCountdownTimer GetMoveTimer() const;
    void SetMoveTimer(GCountdownTimer value);
    GCountdownTimer GetPanicTimer() const;
    void SetPanicTimer(GCountdownTimer value);
    GCountdownTimer GetDisperseTimer() const;
    void SetDisperseTimer(GCountdownTimer value);
    GCountdownTimer GetProximityTimer() const;
    void SetProximityTimer(GCountdownTimer value);
    std::vector<GCFish*> GetVisible() const;
    void SetVisible(std::vector<GCFish*> value);

    std::string ToPtr();
    bool IsValid();
};

class GCEnvFireSource
{
private:
    void *m_ptr;

public:
    GCEnvFireSource(std::string ptr);
    GCEnvFireSource(void *ptr);

    bool GetEnabled() const;
    void SetEnabled(bool value);
    float GetRadius() const;
    void SetRadius(float value);
    float GetDamage() const;
    void SetDamage(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCInfoLadderDismount
{
private:
    void *m_ptr;

public:
    GCInfoLadderDismount(std::string ptr);
    GCInfoLadderDismount(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCTriggerGameEvent
{
private:
    void *m_ptr;

public:
    GCTriggerGameEvent(std::string ptr);
    GCTriggerGameEvent(void *ptr);

    CUtlString GetStrStartTouchEventName() const;
    void SetStrStartTouchEventName(CUtlString value);
    CUtlString GetStrEndTouchEventName() const;
    void SetStrEndTouchEventName(CUtlString value);
    CUtlString GetStrTriggerID() const;
    void SetStrTriggerID(CUtlString value);

    std::string ToPtr();
    bool IsValid();
};

class GSimpleConstraintSoundProfile
{
private:
    void *m_ptr;

public:
    GSimpleConstraintSoundProfile(std::string ptr);
    GSimpleConstraintSoundProfile(void *ptr);

    GSimpleConstraintSoundProfile GetKeypoints() const;
    void SetKeypoints(GSimpleConstraintSoundProfile value);
    std::vector<float> GetKeyPoints() const;
    void SetKeyPoints(std::vector<float> value);
    std::vector<float> GetReversalSoundThresholds() const;
    void SetReversalSoundThresholds(std::vector<float> value);

    std::string ToPtr();
    bool IsValid();
};

class GCDebugHistory
{
private:
    void *m_ptr;

public:
    GCDebugHistory(std::string ptr);
    GCDebugHistory(void *ptr);

    int32_t GetNpcEvents() const;
    void SetNpcEvents(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCInfoData
{
private:
    void *m_ptr;

public:
    GCInfoData(std::string ptr);
    GCInfoData(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCHostageCarriableProp
{
private:
    void *m_ptr;

public:
    GCHostageCarriableProp(std::string ptr);
    GCHostageCarriableProp(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCLightSpotEntity
{
private:
    void *m_ptr;

public:
    GCLightSpotEntity(std::string ptr);
    GCLightSpotEntity(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCFuncRotating
{
private:
    void *m_ptr;

public:
    GCFuncRotating(std::string ptr);
    GCFuncRotating(void *ptr);

    GCEntityIOOutput GetOnStopped() const;
    void SetOnStopped(GCEntityIOOutput value);
    GCEntityIOOutput GetOnStarted() const;
    void SetOnStarted(GCEntityIOOutput value);
    GCEntityIOOutput GetOnReachedStart() const;
    void SetOnReachedStart(GCEntityIOOutput value);
    Vector GetLocalRotationVector() const;
    void SetLocalRotationVector(Vector value);
    float GetFanFriction() const;
    void SetFanFriction(float value);
    float GetAttenuation() const;
    void SetAttenuation(float value);
    float GetVolume() const;
    void SetVolume(float value);
    float GetTargetSpeed() const;
    void SetTargetSpeed(float value);
    float GetMaxSpeed() const;
    void SetMaxSpeed(float value);
    float GetBlockDamage() const;
    void SetBlockDamage(float value);
    CUtlSymbolLarge GetNoiseRunning() const;
    void SetNoiseRunning(CUtlSymbolLarge value);
    bool GetReversed() const;
    void SetReversed(bool value);
    bool GetAccelDecel() const;
    void SetAccelDecel(bool value);
    QAngle GetPrevLocalAngles() const;
    void SetPrevLocalAngles(QAngle value);
    QAngle GetStart() const;
    void SetStart(QAngle value);
    bool GetStopAtStartPos() const;
    void SetStopAtStartPos(bool value);
    Vector GetClientOrigin() const;
    void SetClientOrigin(Vector value);
    QAngle GetClientAngles() const;
    void SetClientAngles(QAngle value);

    std::string ToPtr();
    bool IsValid();
};

class GCDecoyProjectile
{
private:
    void *m_ptr;

public:
    GCDecoyProjectile(std::string ptr);
    GCDecoyProjectile(void *ptr);

    int32_t GetDecoyShotTick() const;
    void SetDecoyShotTick(int32_t value);
    int32_t GetShotsRemaining() const;
    void SetShotsRemaining(int32_t value);
    uint16_t GetDecoyWeaponDefIndex() const;
    void SetDecoyWeaponDefIndex(uint16_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCCSPlace
{
private:
    void *m_ptr;

public:
    GCCSPlace(std::string ptr);
    GCCSPlace(void *ptr);

    CUtlSymbolLarge GetName() const;
    void SetName(CUtlSymbolLarge value);

    std::string ToPtr();
    bool IsValid();
};

class GCFuncTrainControls
{
private:
    void *m_ptr;

public:
    GCFuncTrainControls(std::string ptr);
    GCFuncTrainControls(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCEntityDissolve
{
private:
    void *m_ptr;

public:
    GCEntityDissolve(std::string ptr);
    GCEntityDissolve(void *ptr);

    float GetFadeInStart() const;
    void SetFadeInStart(float value);
    float GetFadeInLength() const;
    void SetFadeInLength(float value);
    float GetFadeOutModelStart() const;
    void SetFadeOutModelStart(float value);
    float GetFadeOutModelLength() const;
    void SetFadeOutModelLength(float value);
    float GetFadeOutStart() const;
    void SetFadeOutStart(float value);
    float GetFadeOutLength() const;
    void SetFadeOutLength(float value);
    EntityDisolveType_t GetDissolveType() const;
    void SetDissolveType(EntityDisolveType_t value);
    Vector GetDissolverOrigin() const;
    void SetDissolverOrigin(Vector value);
    uint32_t GetMagnitude() const;
    void SetMagnitude(uint32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCPointAngleSensor
{
private:
    void *m_ptr;

public:
    GCPointAngleSensor(std::string ptr);
    GCPointAngleSensor(void *ptr);

    bool GetDisabled() const;
    void SetDisabled(bool value);
    CUtlSymbolLarge GetLookAtName() const;
    void SetLookAtName(CUtlSymbolLarge value);
    GCBaseEntity GetTargetEntity() const;
    void SetTargetEntity(GCBaseEntity* value);
    GCBaseEntity GetLookAtEntity() const;
    void SetLookAtEntity(GCBaseEntity* value);
    float GetDuration() const;
    void SetDuration(float value);
    float GetDotTolerance() const;
    void SetDotTolerance(float value);
    bool GetFired() const;
    void SetFired(bool value);
    GCEntityIOOutput GetOnFacingLookat() const;
    void SetOnFacingLookat(GCEntityIOOutput value);
    GCEntityIOOutput GetOnNotFacingLookat() const;
    void SetOnNotFacingLookat(GCEntityIOOutput value);

    std::string ToPtr();
    bool IsValid();
};

class GCSoundEventOBBEntity
{
private:
    void *m_ptr;

public:
    GCSoundEventOBBEntity(std::string ptr);
    GCSoundEventOBBEntity(void *ptr);

    Vector GetMins() const;
    void SetMins(Vector value);
    Vector GetMaxs() const;
    void SetMaxs(Vector value);

    std::string ToPtr();
    bool IsValid();
};

class GCBtNodeCondition
{
private:
    void *m_ptr;

public:
    GCBtNodeCondition(std::string ptr);
    GCBtNodeCondition(void *ptr);

    bool GetNegated() const;
    void SetNegated(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCSharedGapTypeQueryRegistration
{
private:
    void *m_ptr;

public:
    GCSharedGapTypeQueryRegistration(std::string ptr);
    GCSharedGapTypeQueryRegistration(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCEnvVolumetricFogVolume
{
private:
    void *m_ptr;

public:
    GCEnvVolumetricFogVolume(std::string ptr);
    GCEnvVolumetricFogVolume(void *ptr);

    bool GetActive() const;
    void SetActive(bool value);
    Vector GetBoxMins() const;
    void SetBoxMins(Vector value);
    Vector GetBoxMaxs() const;
    void SetBoxMaxs(Vector value);
    bool GetStartDisabled() const;
    void SetStartDisabled(bool value);
    float GetStrength() const;
    void SetStrength(float value);
    int32_t GetFalloffShape() const;
    void SetFalloffShape(int32_t value);
    float GetFalloffExponent() const;
    void SetFalloffExponent(float value);
    float GetHeightFogDepth() const;
    void SetHeightFogDepth(float value);
    float GetHeightFogEdgeWidth() const;
    void SetHeightFogEdgeWidth(float value);
    float GetIndirectLightStrength() const;
    void SetIndirectLightStrength(float value);
    float GetSunLightStrength() const;
    void SetSunLightStrength(float value);
    float GetNoiseStrength() const;
    void SetNoiseStrength(float value);
    bool GetOverrideIndirectLightStrength() const;
    void SetOverrideIndirectLightStrength(bool value);
    bool GetOverrideSunLightStrength() const;
    void SetOverrideSunLightStrength(bool value);
    bool GetOverrideNoiseStrength() const;
    void SetOverrideNoiseStrength(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCEnvBeam
{
private:
    void *m_ptr;

public:
    GCEnvBeam(std::string ptr);
    GCEnvBeam(void *ptr);

    int32_t GetActive() const;
    void SetActive(int32_t value);
    CUtlSymbolLarge GetStartEntity() const;
    void SetStartEntity(CUtlSymbolLarge value);
    CUtlSymbolLarge GetEndEntity() const;
    void SetEndEntity(CUtlSymbolLarge value);
    float GetLife() const;
    void SetLife(float value);
    float GetBoltWidth() const;
    void SetBoltWidth(float value);
    float GetNoiseAmplitude() const;
    void SetNoiseAmplitude(float value);
    int32_t GetSpeed() const;
    void SetSpeed(int32_t value);
    float GetRestrike() const;
    void SetRestrike(float value);
    CUtlSymbolLarge GetSpriteName() const;
    void SetSpriteName(CUtlSymbolLarge value);
    int32_t GetFrameStart() const;
    void SetFrameStart(int32_t value);
    Vector GetEndPointWorld() const;
    void SetEndPointWorld(Vector value);
    Vector GetEndPointRelative() const;
    void SetEndPointRelative(Vector value);
    float GetRadius() const;
    void SetRadius(float value);
    Touch_t GetTouchType() const;
    void SetTouchType(Touch_t value);
    CUtlSymbolLarge GetFilterName() const;
    void SetFilterName(CUtlSymbolLarge value);
    GCBaseEntity GetFilter() const;
    void SetFilter(GCBaseEntity* value);
    CUtlSymbolLarge GetDecal() const;
    void SetDecal(CUtlSymbolLarge value);
    GCEntityIOOutput GetOnTouchedByEntity() const;
    void SetOnTouchedByEntity(GCEntityIOOutput value);

    std::string ToPtr();
    bool IsValid();
};

class GCFuncIllusionary
{
private:
    void *m_ptr;

public:
    GCFuncIllusionary(std::string ptr);
    GCFuncIllusionary(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCPhysMagnet
{
private:
    void *m_ptr;

public:
    GCPhysMagnet(std::string ptr);
    GCPhysMagnet(void *ptr);

    GCEntityIOOutput GetOnMagnetAttach() const;
    void SetOnMagnetAttach(GCEntityIOOutput value);
    GCEntityIOOutput GetOnMagnetDetach() const;
    void SetOnMagnetDetach(GCEntityIOOutput value);
    float GetMassScale() const;
    void SetMassScale(float value);
    float GetForceLimit() const;
    void SetForceLimit(float value);
    float GetTorqueLimit() const;
    void SetTorqueLimit(float value);
    std::vector<Gmagnetted_objects_t> GetMagnettedEntities() const;
    void SetMagnettedEntities(std::vector<Gmagnetted_objects_t> value);
    bool GetActive() const;
    void SetActive(bool value);
    bool GetHasHitSomething() const;
    void SetHasHitSomething(bool value);
    float GetTotalMass() const;
    void SetTotalMass(float value);
    float GetRadius() const;
    void SetRadius(float value);
    int32_t GetMaxObjectsAttached() const;
    void SetMaxObjectsAttached(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCSceneEntityAlias_logic_choreographed_scene
{
private:
    void *m_ptr;

public:
    GCSceneEntityAlias_logic_choreographed_scene(std::string ptr);
    GCSceneEntityAlias_logic_choreographed_scene(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCFuncNavBlocker
{
private:
    void *m_ptr;

public:
    GCFuncNavBlocker(std::string ptr);
    GCFuncNavBlocker(void *ptr);

    bool GetDisabled() const;
    void SetDisabled(bool value);
    int32_t GetBlockedTeamNumber() const;
    void SetBlockedTeamNumber(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCRagdollMagnet
{
private:
    void *m_ptr;

public:
    GCRagdollMagnet(std::string ptr);
    GCRagdollMagnet(void *ptr);

    bool GetDisabled() const;
    void SetDisabled(bool value);
    float GetRadius() const;
    void SetRadius(float value);
    float GetForce() const;
    void SetForce(float value);
    Vector GetAxis() const;
    void SetAxis(Vector value);

    std::string ToPtr();
    bool IsValid();
};

class GCFuncElectrifiedVolume
{
private:
    void *m_ptr;

public:
    GCFuncElectrifiedVolume(std::string ptr);
    GCFuncElectrifiedVolume(void *ptr);

    CUtlSymbolLarge GetEffectName() const;
    void SetEffectName(CUtlSymbolLarge value);
    CUtlSymbolLarge GetEffectInterpenetrateName() const;
    void SetEffectInterpenetrateName(CUtlSymbolLarge value);
    CUtlSymbolLarge GetEffectZapName() const;
    void SetEffectZapName(CUtlSymbolLarge value);
    CUtlSymbolLarge GetEffectSource() const;
    void SetEffectSource(CUtlSymbolLarge value);

    std::string ToPtr();
    bool IsValid();
};

class GCPointProximitySensor
{
private:
    void *m_ptr;

public:
    GCPointProximitySensor(std::string ptr);
    GCPointProximitySensor(void *ptr);

    bool GetDisabled() const;
    void SetDisabled(bool value);
    GCBaseEntity GetTargetEntity() const;
    void SetTargetEntity(GCBaseEntity* value);

    std::string ToPtr();
    bool IsValid();
};

class GWeaponPurchaseTracker_t
{
private:
    void *m_ptr;

public:
    GWeaponPurchaseTracker_t(std::string ptr);
    GWeaponPurchaseTracker_t(void *ptr);

    std::vector<GWeaponPurchaseCount_t> GetWeaponPurchases() const;
    void SetWeaponPurchases(std::vector<GWeaponPurchaseCount_t> value);

    std::string ToPtr();
    bool IsValid();
};

class GCFilterClass
{
private:
    void *m_ptr;

public:
    GCFilterClass(std::string ptr);
    GCFilterClass(void *ptr);

    CUtlSymbolLarge GetFilterClass() const;
    void SetFilterClass(CUtlSymbolLarge value);

    std::string ToPtr();
    bool IsValid();
};

class GCMelee
{
private:
    void *m_ptr;

public:
    GCMelee(std::string ptr);
    GCMelee(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCMultiplayRules
{
private:
    void *m_ptr;

public:
    GCMultiplayRules(std::string ptr);
    GCMultiplayRules(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCFilterLOS
{
private:
    void *m_ptr;

public:
    GCFilterLOS(std::string ptr);
    GCFilterLOS(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GEngineCountdownTimer
{
private:
    void *m_ptr;

public:
    GEngineCountdownTimer(std::string ptr);
    GEngineCountdownTimer(void *ptr);

    float GetDuration() const;
    void SetDuration(float value);
    float GetTimestamp() const;
    void SetTimestamp(float value);
    float GetTimescale() const;
    void SetTimescale(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCPhysBox
{
private:
    void *m_ptr;

public:
    GCPhysBox(std::string ptr);
    GCPhysBox(void *ptr);

    int32_t GetDamageType() const;
    void SetDamageType(int32_t value);
    float GetMassScale() const;
    void SetMassScale(float value);
    int32_t GetDamageToEnableMotion() const;
    void SetDamageToEnableMotion(int32_t value);
    float GetForceToEnableMotion() const;
    void SetForceToEnableMotion(float value);
    QAngle GetPreferredCarryAngles() const;
    void SetPreferredCarryAngles(QAngle value);
    bool GetNotSolidToWorld() const;
    void SetNotSolidToWorld(bool value);
    bool GetEnableUseOutput() const;
    void SetEnableUseOutput(bool value);
    int32_t GetExploitableByPlayer() const;
    void SetExploitableByPlayer(int32_t value);
    float GetTouchOutputPerEntityDelay() const;
    void SetTouchOutputPerEntityDelay(float value);
    GCEntityIOOutput GetOnDamaged() const;
    void SetOnDamaged(GCEntityIOOutput value);
    GCEntityIOOutput GetOnAwakened() const;
    void SetOnAwakened(GCEntityIOOutput value);
    GCEntityIOOutput GetOnMotionEnabled() const;
    void SetOnMotionEnabled(GCEntityIOOutput value);
    GCEntityIOOutput GetOnPlayerUse() const;
    void SetOnPlayerUse(GCEntityIOOutput value);
    GCEntityIOOutput GetOnStartTouch() const;
    void SetOnStartTouch(GCEntityIOOutput value);
    GCBasePlayerPawn GetCarryingPlayer() const;
    void SetCarryingPlayer(GCBasePlayerPawn* value);

    std::string ToPtr();
    bool IsValid();
};

class GCSensorGrenadeProjectile
{
private:
    void *m_ptr;

public:
    GCSensorGrenadeProjectile(std::string ptr);
    GCSensorGrenadeProjectile(void *ptr);

    GCBaseEntity GetDisplayGrenade() const;
    void SetDisplayGrenade(GCBaseEntity* value);

    std::string ToPtr();
    bool IsValid();
};

class GCTimerEntity
{
private:
    void *m_ptr;

public:
    GCTimerEntity(std::string ptr);
    GCTimerEntity(void *ptr);

    GCEntityIOOutput GetOnTimer() const;
    void SetOnTimer(GCEntityIOOutput value);
    GCEntityIOOutput GetOnTimerHigh() const;
    void SetOnTimerHigh(GCEntityIOOutput value);
    GCEntityIOOutput GetOnTimerLow() const;
    void SetOnTimerLow(GCEntityIOOutput value);
    int32_t GetDisabled() const;
    void SetDisabled(int32_t value);
    float GetInitialDelay() const;
    void SetInitialDelay(float value);
    float GetRefireTime() const;
    void SetRefireTime(float value);
    bool GetUpDownState() const;
    void SetUpDownState(bool value);
    int32_t GetUseRandomTime() const;
    void SetUseRandomTime(int32_t value);
    bool GetPauseAfterFiring() const;
    void SetPauseAfterFiring(bool value);
    float GetLowerRandomBound() const;
    void SetLowerRandomBound(float value);
    float GetUpperRandomBound() const;
    void SetUpperRandomBound(float value);
    float GetRemainingTime() const;
    void SetRemainingTime(float value);
    bool GetPaused() const;
    void SetPaused(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCCSGO_TeamIntroCounterTerroristPosition
{
private:
    void *m_ptr;

public:
    GCCSGO_TeamIntroCounterTerroristPosition(std::string ptr);
    GCCSGO_TeamIntroCounterTerroristPosition(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCHEGrenadeProjectile
{
private:
    void *m_ptr;

public:
    GCHEGrenadeProjectile(std::string ptr);
    GCHEGrenadeProjectile(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCEnvWind
{
private:
    void *m_ptr;

public:
    GCEnvWind(std::string ptr);
    GCEnvWind(void *ptr);

    GCEnvWindShared GetEnvWindShared() const;
    void SetEnvWindShared(GCEnvWindShared value);

    std::string ToPtr();
    bool IsValid();
};

class GCTimeline
{
private:
    void *m_ptr;

public:
    GCTimeline(std::string ptr);
    GCTimeline(void *ptr);

    std::vector<float> GetValues() const;
    void SetValues(std::vector<float> value);
    std::vector<int32_t> GetValueCounts() const;
    void SetValueCounts(std::vector<int32_t> value);
    int32_t GetBucketCount() const;
    void SetBucketCount(int32_t value);
    float GetInterval() const;
    void SetInterval(float value);
    float GetFinalValue() const;
    void SetFinalValue(float value);
    TimelineCompression_t GetCompressionType() const;
    void SetCompressionType(TimelineCompression_t value);
    bool GetStopped() const;
    void SetStopped(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCFists
{
private:
    void *m_ptr;

public:
    GCFists(std::string ptr);
    GCFists(void *ptr);

    bool GetPlayingUninterruptableAct() const;
    void SetPlayingUninterruptableAct(bool value);
    PlayerAnimEvent_t GetUninterruptableActivity() const;
    void SetUninterruptableActivity(PlayerAnimEvent_t value);
    bool GetRestorePrevWep() const;
    void SetRestorePrevWep(bool value);
    GCBasePlayerWeapon GetWeaponBeforePrevious() const;
    void SetWeaponBeforePrevious(GCBasePlayerWeapon* value);
    GCBasePlayerWeapon GetWeaponPrevious() const;
    void SetWeaponPrevious(GCBasePlayerWeapon* value);
    bool GetDelayedHardPunchIncoming() const;
    void SetDelayedHardPunchIncoming(bool value);
    bool GetDestroyAfterTaunt() const;
    void SetDestroyAfterTaunt(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCHandleDummy
{
private:
    void *m_ptr;

public:
    GCHandleDummy(std::string ptr);
    GCHandleDummy(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCRagdollConstraint
{
private:
    void *m_ptr;

public:
    GCRagdollConstraint(std::string ptr);
    GCRagdollConstraint(void *ptr);

    float GetXmin() const;
    void SetXmin(float value);
    float GetXmax() const;
    void SetXmax(float value);
    float GetYmin() const;
    void SetYmin(float value);
    float GetYmax() const;
    void SetYmax(float value);
    float GetZmin() const;
    void SetZmin(float value);
    float GetZmax() const;
    void SetZmax(float value);
    float GetXfriction() const;
    void SetXfriction(float value);
    float GetYfriction() const;
    void SetYfriction(float value);
    float GetZfriction() const;
    void SetZfriction(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCPhysExplosion
{
private:
    void *m_ptr;

public:
    GCPhysExplosion(std::string ptr);
    GCPhysExplosion(void *ptr);

    bool GetExplodeOnSpawn() const;
    void SetExplodeOnSpawn(bool value);
    float GetMagnitude() const;
    void SetMagnitude(float value);
    float GetDamage() const;
    void SetDamage(float value);
    float GetRadius() const;
    void SetRadius(float value);
    CUtlSymbolLarge GetTargetEntityName() const;
    void SetTargetEntityName(CUtlSymbolLarge value);
    float GetInnerRadius() const;
    void SetInnerRadius(float value);
    float GetPushScale() const;
    void SetPushScale(float value);
    bool GetConvertToDebrisWhenPossible() const;
    void SetConvertToDebrisWhenPossible(bool value);
    GCEntityIOOutput GetOnPushedPlayer() const;
    void SetOnPushedPlayer(GCEntityIOOutput value);

    std::string ToPtr();
    bool IsValid();
};

class GCPointPush
{
private:
    void *m_ptr;

public:
    GCPointPush(std::string ptr);
    GCPointPush(void *ptr);

    bool GetEnabled() const;
    void SetEnabled(bool value);
    float GetMagnitude() const;
    void SetMagnitude(float value);
    float GetRadius() const;
    void SetRadius(float value);
    float GetInnerRadius() const;
    void SetInnerRadius(float value);
    float GetConeOfInfluence() const;
    void SetConeOfInfluence(float value);
    CUtlSymbolLarge GetFilterName() const;
    void SetFilterName(CUtlSymbolLarge value);
    GCBaseFilter GetFilter() const;
    void SetFilter(GCBaseFilter* value);

    std::string ToPtr();
    bool IsValid();
};

class GCCredits
{
private:
    void *m_ptr;

public:
    GCCredits(std::string ptr);
    GCCredits(void *ptr);

    GCEntityIOOutput GetOnCreditsDone() const;
    void SetOnCreditsDone(GCEntityIOOutput value);
    bool GetRolledOutroCredits() const;
    void SetRolledOutroCredits(bool value);
    float GetLogoLength() const;
    void SetLogoLength(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCCSPlayerResource
{
private:
    void *m_ptr;

public:
    GCCSPlayerResource(std::string ptr);
    GCCSPlayerResource(void *ptr);

    std::vector<bool> GetHostageAlive() const;
    void SetHostageAlive(std::vector<bool> value);
    std::vector<bool> GetIsHostageFollowingSomeone() const;
    void SetIsHostageFollowingSomeone(std::vector<bool> value);
    std::vector<CEntityIndex> GetHostageEntityIDs() const;
    void SetHostageEntityIDs(std::vector<CEntityIndex> value);
    Vector GetBombsiteCenterA() const;
    void SetBombsiteCenterA(Vector value);
    Vector GetBombsiteCenterB() const;
    void SetBombsiteCenterB(Vector value);
    std::vector<int32_t> GetHostageRescueX() const;
    void SetHostageRescueX(std::vector<int32_t> value);
    std::vector<int32_t> GetHostageRescueY() const;
    void SetHostageRescueY(std::vector<int32_t> value);
    std::vector<int32_t> GetHostageRescueZ() const;
    void SetHostageRescueZ(std::vector<int32_t> value);
    bool GetEndMatchNextMapAllVoted() const;
    void SetEndMatchNextMapAllVoted(bool value);
    bool GetFoundGoalPositions() const;
    void SetFoundGoalPositions(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCPlayer_WeaponServices
{
private:
    void *m_ptr;

public:
    GCPlayer_WeaponServices(std::string ptr);
    GCPlayer_WeaponServices(void *ptr);

    std::vector<GCBasePlayerWeapon*> GetMyWeapons() const;
    void SetMyWeapons(std::vector<GCBasePlayerWeapon*> value);
    GCBasePlayerWeapon GetActiveWeapon() const;
    void SetActiveWeapon(GCBasePlayerWeapon* value);
    GCBasePlayerWeapon GetLastWeapon() const;
    void SetLastWeapon(GCBasePlayerWeapon* value);
    std::vector<uint16_t> GetAmmo() const;
    void SetAmmo(std::vector<uint16_t> value);
    bool GetPreventWeaponPickup() const;
    void SetPreventWeaponPickup(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCAttributeManager__cached_attribute_float_t
{
private:
    void *m_ptr;

public:
    GCAttributeManager__cached_attribute_float_t(std::string ptr);
    GCAttributeManager__cached_attribute_float_t(void *ptr);

    float GetIn() const;
    void SetIn(float value);
    CUtlSymbolLarge GetAttribHook() const;
    void SetAttribHook(CUtlSymbolLarge value);
    float GetOut() const;
    void SetOut(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCTeam
{
private:
    void *m_ptr;

public:
    GCTeam(std::string ptr);
    GCTeam(void *ptr);

    std::vector<GCBasePlayerController*> GetPlayerControllers() const;
    void SetPlayerControllers(std::vector<GCBasePlayerController*> value);
    std::vector<GCBasePlayerPawn*> GetPlayers() const;
    void SetPlayers(std::vector<GCBasePlayerPawn*> value);
    int32_t GetScore() const;
    void SetScore(int32_t value);
    std::string GetTeamname() const;
    void SetTeamname(std::string value);

    std::string ToPtr();
    bool IsValid();
};

class GCCSGameModeRules_Deathmatch
{
private:
    void *m_ptr;

public:
    GCCSGameModeRules_Deathmatch(std::string ptr);
    GCCSGameModeRules_Deathmatch(void *ptr);

    float GetDMBonusTimeLength() const;
    void SetDMBonusTimeLength(float value);
    CUtlString GetDMBonusWeapon() const;
    void SetDMBonusWeapon(CUtlString value);

    std::string ToPtr();
    bool IsValid();
};

class GCFuncNavObstruction
{
private:
    void *m_ptr;

public:
    GCFuncNavObstruction(std::string ptr);
    GCFuncNavObstruction(void *ptr);

    bool GetDisabled() const;
    void SetDisabled(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCTriggerImpact
{
private:
    void *m_ptr;

public:
    GCTriggerImpact(std::string ptr);
    GCTriggerImpact(void *ptr);

    float GetMagnitude() const;
    void SetMagnitude(float value);
    float GetNoise() const;
    void SetNoise(float value);
    float GetViewkick() const;
    void SetViewkick(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCSun
{
private:
    void *m_ptr;

public:
    GCSun(std::string ptr);
    GCSun(void *ptr);

    Vector GetDirection() const;
    void SetDirection(Vector value);
    Color GetOverlay() const;
    void SetOverlay(Color value);
    CUtlSymbolLarge GetEffectName() const;
    void SetEffectName(CUtlSymbolLarge value);
    CUtlSymbolLarge GetSSEffectName() const;
    void SetSSEffectName(CUtlSymbolLarge value);
    bool GetOn() const;
    void SetOn(bool value);
    bool GetBmaxColor() const;
    void SetBmaxColor(bool value);
    float GetSize() const;
    void SetSize(float value);
    float GetRotation() const;
    void SetRotation(float value);
    float GetHazeScale() const;
    void SetHazeScale(float value);
    float GetAlphaHaze() const;
    void SetAlphaHaze(float value);
    float GetAlphaHdr() const;
    void SetAlphaHdr(float value);
    float GetAlphaScale() const;
    void SetAlphaScale(float value);
    float GetHDRColorScale() const;
    void SetHDRColorScale(float value);
    float GetFarZScale() const;
    void SetFarZScale(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCTriggerDetectBulletFire
{
private:
    void *m_ptr;

public:
    GCTriggerDetectBulletFire(std::string ptr);
    GCTriggerDetectBulletFire(void *ptr);

    bool GetPlayerFireOnly() const;
    void SetPlayerFireOnly(bool value);
    GCEntityIOOutput GetOnDetectedBulletFire() const;
    void SetOnDetectedBulletFire(GCEntityIOOutput value);

    std::string ToPtr();
    bool IsValid();
};

class GCWorld
{
private:
    void *m_ptr;

public:
    GCWorld(std::string ptr);
    GCWorld(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCPointGiveAmmo
{
private:
    void *m_ptr;

public:
    GCPointGiveAmmo(std::string ptr);
    GCPointGiveAmmo(void *ptr);

    GCBaseEntity GetActivator() const;
    void SetActivator(GCBaseEntity* value);

    std::string ToPtr();
    bool IsValid();
};

class GCFuncMoveLinear
{
private:
    void *m_ptr;

public:
    GCFuncMoveLinear(std::string ptr);
    GCFuncMoveLinear(void *ptr);

    MoveLinearAuthoredPos_t GetAuthoredPosition() const;
    void SetAuthoredPosition(MoveLinearAuthoredPos_t value);
    QAngle GetMoveEntitySpace() const;
    void SetMoveEntitySpace(QAngle value);
    Vector GetMoveDirParentSpace() const;
    void SetMoveDirParentSpace(Vector value);
    CUtlSymbolLarge GetSoundStart() const;
    void SetSoundStart(CUtlSymbolLarge value);
    CUtlSymbolLarge GetSoundStop() const;
    void SetSoundStop(CUtlSymbolLarge value);
    CUtlSymbolLarge GetCurrentSound() const;
    void SetCurrentSound(CUtlSymbolLarge value);
    float GetBlockDamage() const;
    void SetBlockDamage(float value);
    float GetStartPosition() const;
    void SetStartPosition(float value);
    GCEntityIOOutput GetOnFullyOpen() const;
    void SetOnFullyOpen(GCEntityIOOutput value);
    GCEntityIOOutput GetOnFullyClosed() const;
    void SetOnFullyClosed(GCEntityIOOutput value);
    bool GetCreateMovableNavMesh() const;
    void SetCreateMovableNavMesh(bool value);
    bool GetCreateNavObstacle() const;
    void SetCreateNavObstacle(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCPathParticleRope
{
private:
    void *m_ptr;

public:
    GCPathParticleRope(std::string ptr);
    GCPathParticleRope(void *ptr);

    bool GetStartActive() const;
    void SetStartActive(bool value);
    float GetMaxSimulationTime() const;
    void SetMaxSimulationTime(float value);
    CUtlSymbolLarge GetEffectName() const;
    void SetEffectName(CUtlSymbolLarge value);
    std::vector<CUtlSymbolLarge> GetPathNodes_Name() const;
    void SetPathNodes_Name(std::vector<CUtlSymbolLarge> value);
    float GetParticleSpacing() const;
    void SetParticleSpacing(float value);
    float GetSlack() const;
    void SetSlack(float value);
    float GetRadius() const;
    void SetRadius(float value);
    Color GetColorTint() const;
    void SetColorTint(Color value);
    int32_t GetEffectState() const;
    void SetEffectState(int32_t value);
    std::vector<Vector> GetPathNodes_Position() const;
    void SetPathNodes_Position(std::vector<Vector> value);
    std::vector<Vector> GetPathNodes_TangentIn() const;
    void SetPathNodes_TangentIn(std::vector<Vector> value);
    std::vector<Vector> GetPathNodes_TangentOut() const;
    void SetPathNodes_TangentOut(std::vector<Vector> value);
    std::vector<Vector> GetPathNodes_Color() const;
    void SetPathNodes_Color(std::vector<Vector> value);
    std::vector<bool> GetPathNodes_PinEnabled() const;
    void SetPathNodes_PinEnabled(std::vector<bool> value);
    std::vector<float32> GetPathNodes_RadiusScale() const;
    void SetPathNodes_RadiusScale(std::vector<float32> value);

    std::string ToPtr();
    bool IsValid();
};

class GCPlayerVisibility
{
private:
    void *m_ptr;

public:
    GCPlayerVisibility(std::string ptr);
    GCPlayerVisibility(void *ptr);

    float GetVisibilityStrength() const;
    void SetVisibilityStrength(float value);
    float GetFogDistanceMultiplier() const;
    void SetFogDistanceMultiplier(float value);
    float GetFogMaxDensityMultiplier() const;
    void SetFogMaxDensityMultiplier(float value);
    float GetFadeTime() const;
    void SetFadeTime(float value);
    bool GetStartDisabled() const;
    void SetStartDisabled(bool value);
    bool GetIsEnabled() const;
    void SetIsEnabled(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCPointTeleport
{
private:
    void *m_ptr;

public:
    GCPointTeleport(std::string ptr);
    GCPointTeleport(void *ptr);

    Vector GetSaveOrigin() const;
    void SetSaveOrigin(Vector value);
    QAngle GetSaveAngles() const;
    void SetSaveAngles(QAngle value);
    bool GetTeleportParentedEntities() const;
    void SetTeleportParentedEntities(bool value);
    bool GetTeleportUseCurrentAngle() const;
    void SetTeleportUseCurrentAngle(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCAK47
{
private:
    void *m_ptr;

public:
    GCAK47(std::string ptr);
    GCAK47(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCTriggerTeleport
{
private:
    void *m_ptr;

public:
    GCTriggerTeleport(std::string ptr);
    GCTriggerTeleport(void *ptr);

    CUtlSymbolLarge GetLandmark() const;
    void SetLandmark(CUtlSymbolLarge value);
    bool GetUseLandmarkAngles() const;
    void SetUseLandmarkAngles(bool value);
    bool GetMirrorPlayer() const;
    void SetMirrorPlayer(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCCSObserver_CameraServices
{
private:
    void *m_ptr;

public:
    GCCSObserver_CameraServices(std::string ptr);
    GCCSObserver_CameraServices(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCCSGO_TeamIntroTerroristPosition
{
private:
    void *m_ptr;

public:
    GCCSGO_TeamIntroTerroristPosition(std::string ptr);
    GCCSGO_TeamIntroTerroristPosition(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCFuncMover
{
private:
    void *m_ptr;

public:
    GCFuncMover(std::string ptr);
    GCFuncMover(void *ptr);

    CUtlSymbolLarge GetPathName() const;
    void SetPathName(CUtlSymbolLarge value);
    GCPathMover GetPathMover() const;
    void SetPathMover(GCPathMover* value);
    CUtlSymbolLarge GetPathNodeStart() const;
    void SetPathNodeStart(CUtlSymbolLarge value);
    GCFuncMover GetMoveType() const;
    void SetMoveType(GCFuncMover value);
    bool GetIsReversing() const;
    void SetIsReversing(bool value);
    Vector GetTarget() const;
    void SetTarget(Vector value);
    float GetStartSpeed() const;
    void SetStartSpeed(float value);
    float GetPathLocation() const;
    void SetPathLocation(float value);
    float GetT() const;
    void SetT(float value);
    int32_t GetCurrentNodeIndex() const;
    void SetCurrentNodeIndex(int32_t value);
    int32_t GetPreviousNodeIndex() const;
    void SetPreviousNodeIndex(int32_t value);
    bool GetFixedOrientation() const;
    void SetFixedOrientation(bool value);
    bool GetFixedPitch() const;
    void SetFixedPitch(bool value);
    SolidType_t GetSolidType() const;
    void SetSolidType(SolidType_t value);
    bool GetIsMoving() const;
    void SetIsMoving(bool value);
    float GetTimeToReachMaxSpeed() const;
    void SetTimeToReachMaxSpeed(float value);
    float GetTimeToReachZeroSpeed() const;
    void SetTimeToReachZeroSpeed(float value);
    GCMoverPathNode GetStopAtNode() const;
    void SetStopAtNode(GCMoverPathNode* value);
    float GetPathLocationToBeginStop() const;
    void SetPathLocationToBeginStop(float value);
    bool GetMatchPathNodeUp() const;
    void SetMatchPathNodeUp(bool value);
    bool GetFacePlayer() const;
    void SetFacePlayer(bool value);
    Vector GetOriginalUp() const;
    void SetOriginalUp(Vector value);
    float GetTimeToRollToNewUp() const;
    void SetTimeToRollToNewUp(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCCSPlayer_CameraServices
{
private:
    void *m_ptr;

public:
    GCCSPlayer_CameraServices(std::string ptr);
    GCCSPlayer_CameraServices(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCHEGrenade
{
private:
    void *m_ptr;

public:
    GCHEGrenade(std::string ptr);
    GCHEGrenade(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCGameEnd
{
private:
    void *m_ptr;

public:
    GCGameEnd(std::string ptr);
    GCGameEnd(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCTriggerCallback
{
private:
    void *m_ptr;

public:
    GCTriggerCallback(std::string ptr);
    GCTriggerCallback(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCBubbling
{
private:
    void *m_ptr;

public:
    GCBubbling(std::string ptr);
    GCBubbling(void *ptr);

    int32_t GetDensity() const;
    void SetDensity(int32_t value);
    int32_t GetFrequency() const;
    void SetFrequency(int32_t value);
    int32_t GetState() const;
    void SetState(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCTeamplayRules
{
private:
    void *m_ptr;

public:
    GCTeamplayRules(std::string ptr);
    GCTeamplayRules(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCPhysicsPropOverride
{
private:
    void *m_ptr;

public:
    GCPhysicsPropOverride(std::string ptr);
    GCPhysicsPropOverride(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCAI_ChangeHintGroup
{
private:
    void *m_ptr;

public:
    GCAI_ChangeHintGroup(std::string ptr);
    GCAI_ChangeHintGroup(void *ptr);

    int32_t GetSearchType() const;
    void SetSearchType(int32_t value);
    CUtlSymbolLarge GetStrSearchName() const;
    void SetStrSearchName(CUtlSymbolLarge value);
    CUtlSymbolLarge GetStrNewHintGroup() const;
    void SetStrNewHintGroup(CUtlSymbolLarge value);
    float GetRadius() const;
    void SetRadius(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCColorCorrectionVolume
{
private:
    void *m_ptr;

public:
    GCColorCorrectionVolume(std::string ptr);
    GCColorCorrectionVolume(void *ptr);

    bool GetEnabled() const;
    void SetEnabled(bool value);
    float GetMaxWeight() const;
    void SetMaxWeight(float value);
    float GetFadeDuration() const;
    void SetFadeDuration(float value);
    bool GetStartDisabled() const;
    void SetStartDisabled(bool value);
    float GetWeight() const;
    void SetWeight(float value);
    std::string GetLookupFilename() const;
    void SetLookupFilename(std::string value);
    float GetLastEnterWeight() const;
    void SetLastEnterWeight(float value);
    float GetLastExitWeight() const;
    void SetLastExitWeight(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCFilterEnemy
{
private:
    void *m_ptr;

public:
    GCFilterEnemy(std::string ptr);
    GCFilterEnemy(void *ptr);

    CUtlSymbolLarge GetEnemyName() const;
    void SetEnemyName(CUtlSymbolLarge value);
    float GetRadius() const;
    void SetRadius(float value);
    float GetOuterRadius() const;
    void SetOuterRadius(float value);
    int32_t GetMaxSquadmatesPerEnemy() const;
    void SetMaxSquadmatesPerEnemy(int32_t value);
    CUtlSymbolLarge GetPlayerName() const;
    void SetPlayerName(CUtlSymbolLarge value);

    std::string ToPtr();
    bool IsValid();
};

class GCShower
{
private:
    void *m_ptr;

public:
    GCShower(std::string ptr);
    GCShower(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCEnvCubemapFog
{
private:
    void *m_ptr;

public:
    GCEnvCubemapFog(std::string ptr);
    GCEnvCubemapFog(void *ptr);

    float GetEndDistance() const;
    void SetEndDistance(float value);
    float GetStartDistance() const;
    void SetStartDistance(float value);
    float GetFogFalloffExponent() const;
    void SetFogFalloffExponent(float value);
    bool GetHeightFogEnabled() const;
    void SetHeightFogEnabled(bool value);
    float GetFogHeightWidth() const;
    void SetFogHeightWidth(float value);
    float GetFogHeightEnd() const;
    void SetFogHeightEnd(float value);
    float GetFogHeightStart() const;
    void SetFogHeightStart(float value);
    float GetFogHeightExponent() const;
    void SetFogHeightExponent(float value);
    float GetLODBias() const;
    void SetLODBias(float value);
    bool GetActive() const;
    void SetActive(bool value);
    bool GetStartDisabled() const;
    void SetStartDisabled(bool value);
    float GetFogMaxOpacity() const;
    void SetFogMaxOpacity(float value);
    int32_t GetCubemapSourceType() const;
    void SetCubemapSourceType(int32_t value);
    CUtlSymbolLarge GetSkyEntity() const;
    void SetSkyEntity(CUtlSymbolLarge value);
    bool GetHasHeightFogEnd() const;
    void SetHasHeightFogEnd(bool value);
    bool GetFirstTime() const;
    void SetFirstTime(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCBaseButton
{
private:
    void *m_ptr;

public:
    GCBaseButton(std::string ptr);
    GCBaseButton(void *ptr);

    QAngle GetMoveEntitySpace() const;
    void SetMoveEntitySpace(QAngle value);
    bool GetStayPushed() const;
    void SetStayPushed(bool value);
    bool GetRotating() const;
    void SetRotating(bool value);
    Glocksound_t GetLs() const;
    void SetLs(Glocksound_t value);
    CUtlSymbolLarge GetUseSound() const;
    void SetUseSound(CUtlSymbolLarge value);
    CUtlSymbolLarge GetLockedSound() const;
    void SetLockedSound(CUtlSymbolLarge value);
    CUtlSymbolLarge GetUnlockedSound() const;
    void SetUnlockedSound(CUtlSymbolLarge value);
    CUtlSymbolLarge GetOverrideAnticipationName() const;
    void SetOverrideAnticipationName(CUtlSymbolLarge value);
    bool GetLocked() const;
    void SetLocked(bool value);
    bool GetDisabled() const;
    void SetDisabled(bool value);
    bool GetSolidBsp() const;
    void SetSolidBsp(bool value);
    GCEntityIOOutput GetOnDamaged() const;
    void SetOnDamaged(GCEntityIOOutput value);
    GCEntityIOOutput GetOnPressed() const;
    void SetOnPressed(GCEntityIOOutput value);
    GCEntityIOOutput GetOnUseLocked() const;
    void SetOnUseLocked(GCEntityIOOutput value);
    GCEntityIOOutput GetOnIn() const;
    void SetOnIn(GCEntityIOOutput value);
    GCEntityIOOutput GetOnOut() const;
    void SetOnOut(GCEntityIOOutput value);
    int32_t GetState() const;
    void SetState(int32_t value);
    GCEntityInstance GetConstraint() const;
    void SetConstraint(GCEntityInstance* value);
    GCEntityInstance GetConstraintParent() const;
    void SetConstraintParent(GCEntityInstance* value);
    bool GetForceNpcExclude() const;
    void SetForceNpcExclude(bool value);
    CUtlSymbolLarge GetGlowEntity() const;
    void SetGlowEntity(CUtlSymbolLarge value);
    GCBaseModelEntity GetGlowEntity1() const;
    void SetGlowEntity1(GCBaseModelEntity* value);
    bool GetUsable() const;
    void SetUsable(bool value);
    CUtlSymbolLarge GetDisplayText() const;
    void SetDisplayText(CUtlSymbolLarge value);

    std::string ToPtr();
    bool IsValid();
};

class GCEnvExplosion
{
private:
    void *m_ptr;

public:
    GCEnvExplosion(std::string ptr);
    GCEnvExplosion(void *ptr);

    int32_t GetMagnitude() const;
    void SetMagnitude(int32_t value);
    float GetPlayerDamage() const;
    void SetPlayerDamage(float value);
    int32_t GetRadiusOverride() const;
    void SetRadiusOverride(int32_t value);
    float GetInnerRadius() const;
    void SetInnerRadius(float value);
    int32_t GetSpriteScale() const;
    void SetSpriteScale(int32_t value);
    float GetDamageForce() const;
    void SetDamageForce(float value);
    GCBaseEntity GetInflictor() const;
    void SetInflictor(GCBaseEntity* value);
    int32_t GetCustomDamageType() const;
    void SetCustomDamageType(int32_t value);
    CUtlSymbolLarge GetExplosionType() const;
    void SetExplosionType(CUtlSymbolLarge value);
    CUtlSymbolLarge GetCustomEffectName() const;
    void SetCustomEffectName(CUtlSymbolLarge value);
    CUtlSymbolLarge GetCustomSoundName() const;
    void SetCustomSoundName(CUtlSymbolLarge value);
    Class_T GetClassIgnore() const;
    void SetClassIgnore(Class_T value);
    Class_T GetClassIgnore2() const;
    void SetClassIgnore2(Class_T value);
    CUtlSymbolLarge GetEntityIgnoreName() const;
    void SetEntityIgnoreName(CUtlSymbolLarge value);
    GCBaseEntity GetEntityIgnore() const;
    void SetEntityIgnore(GCBaseEntity* value);

    std::string ToPtr();
    bool IsValid();
};

class GCSoundEventAABBEntity
{
private:
    void *m_ptr;

public:
    GCSoundEventAABBEntity(std::string ptr);
    GCSoundEventAABBEntity(void *ptr);

    Vector GetMins() const;
    void SetMins(Vector value);
    Vector GetMaxs() const;
    void SetMaxs(Vector value);

    std::string ToPtr();
    bool IsValid();
};

class GCTriggerLook
{
private:
    void *m_ptr;

public:
    GCTriggerLook(std::string ptr);
    GCTriggerLook(void *ptr);

    GCBaseEntity GetLookTarget() const;
    void SetLookTarget(GCBaseEntity* value);
    float GetFieldOfView() const;
    void SetFieldOfView(float value);
    float GetLookTime() const;
    void SetLookTime(float value);
    float GetLookTimeTotal() const;
    void SetLookTimeTotal(float value);
    float GetTimeoutDuration() const;
    void SetTimeoutDuration(float value);
    bool GetTimeoutFired() const;
    void SetTimeoutFired(bool value);
    bool GetIsLooking() const;
    void SetIsLooking(bool value);
    bool Get2DFOV() const;
    void Set2DFOV(bool value);
    bool GetUseVelocity() const;
    void SetUseVelocity(bool value);
    bool GetTestOcclusion() const;
    void SetTestOcclusion(bool value);
    GCEntityIOOutput GetOnTimeout() const;
    void SetOnTimeout(GCEntityIOOutput value);
    GCEntityIOOutput GetOnStartLook() const;
    void SetOnStartLook(GCEntityIOOutput value);
    GCEntityIOOutput GetOnEndLook() const;
    void SetOnEndLook(GCEntityIOOutput value);

    std::string ToPtr();
    bool IsValid();
};

class GCEntitySubclassVDataBase
{
private:
    void *m_ptr;

public:
    GCEntitySubclassVDataBase(std::string ptr);
    GCEntitySubclassVDataBase(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCLogicProximity
{
private:
    void *m_ptr;

public:
    GCLogicProximity(std::string ptr);
    GCLogicProximity(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCPointClientUIWorldPanel
{
private:
    void *m_ptr;

public:
    GCPointClientUIWorldPanel(std::string ptr);
    GCPointClientUIWorldPanel(void *ptr);

    bool GetIgnoreInput() const;
    void SetIgnoreInput(bool value);
    bool GetLit() const;
    void SetLit(bool value);
    bool GetFollowPlayerAcrossTeleport() const;
    void SetFollowPlayerAcrossTeleport(bool value);
    float GetWidth() const;
    void SetWidth(float value);
    float GetHeight() const;
    void SetHeight(float value);
    float GetDPI() const;
    void SetDPI(float value);
    float GetInteractDistance() const;
    void SetInteractDistance(float value);
    float GetDepthOffset() const;
    void SetDepthOffset(float value);
    uint32_t GetOwnerContext() const;
    void SetOwnerContext(uint32_t value);
    uint32_t GetHorizontalAlign() const;
    void SetHorizontalAlign(uint32_t value);
    uint32_t GetVerticalAlign() const;
    void SetVerticalAlign(uint32_t value);
    uint32_t GetOrientation() const;
    void SetOrientation(uint32_t value);
    bool GetAllowInteractionFromAllSceneWorlds() const;
    void SetAllowInteractionFromAllSceneWorlds(bool value);
    std::vector<CUtlSymbolLarge> GetCSSClasses() const;
    void SetCSSClasses(std::vector<CUtlSymbolLarge> value);
    bool GetOpaque() const;
    void SetOpaque(bool value);
    bool GetNoDepth() const;
    void SetNoDepth(bool value);
    bool GetRenderBackface() const;
    void SetRenderBackface(bool value);
    bool GetUseOffScreenIndicator() const;
    void SetUseOffScreenIndicator(bool value);
    bool GetExcludeFromSaveGames() const;
    void SetExcludeFromSaveGames(bool value);
    bool GetGrabbable() const;
    void SetGrabbable(bool value);
    bool GetOnlyRenderToTexture() const;
    void SetOnlyRenderToTexture(bool value);
    bool GetDisableMipGen() const;
    void SetDisableMipGen(bool value);
    int32_t GetExplicitImageLayout() const;
    void SetExplicitImageLayout(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCFilterContext
{
private:
    void *m_ptr;

public:
    GCFilterContext(std::string ptr);
    GCFilterContext(void *ptr);

    CUtlSymbolLarge GetFilterContext() const;
    void SetFilterContext(CUtlSymbolLarge value);

    std::string ToPtr();
    bool IsValid();
};

class GCPathParticleRopeAlias_path_particle_rope_clientside
{
private:
    void *m_ptr;

public:
    GCPathParticleRopeAlias_path_particle_rope_clientside(std::string ptr);
    GCPathParticleRopeAlias_path_particle_rope_clientside(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCTriggerBuoyancy
{
private:
    void *m_ptr;

public:
    GCTriggerBuoyancy(std::string ptr);
    GCTriggerBuoyancy(void *ptr);

    GCBuoyancyHelper GetBuoyancyHelper() const;
    void SetBuoyancyHelper(GCBuoyancyHelper value);
    float GetFluidDensity() const;
    void SetFluidDensity(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCFilterAttributeInt
{
private:
    void *m_ptr;

public:
    GCFilterAttributeInt(std::string ptr);
    GCFilterAttributeInt(void *ptr);

    CUtlStringToken GetAttributeName() const;
    void SetAttributeName(CUtlStringToken value);

    std::string ToPtr();
    bool IsValid();
};

class GCCSPlayer_ActionTrackingServices
{
private:
    void *m_ptr;

public:
    GCCSPlayer_ActionTrackingServices(std::string ptr);
    GCCSPlayer_ActionTrackingServices(void *ptr);

    GCBasePlayerWeapon GetLastWeaponBeforeC4AutoSwitch() const;
    void SetLastWeaponBeforeC4AutoSwitch(GCBasePlayerWeapon* value);
    bool GetIsRescuing() const;
    void SetIsRescuing(bool value);
    GWeaponPurchaseTracker_t GetWeaponPurchasesThisMatch() const;
    void SetWeaponPurchasesThisMatch(GWeaponPurchaseTracker_t value);
    GWeaponPurchaseTracker_t GetWeaponPurchasesThisRound() const;
    void SetWeaponPurchasesThisRound(GWeaponPurchaseTracker_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCAISound
{
private:
    void *m_ptr;

public:
    GCAISound(std::string ptr);
    GCAISound(void *ptr);

    SoundTypes_t GetSoundType() const;
    void SetSoundType(SoundTypes_t value);
    SoundFlags_t GetSoundFlags() const;
    void SetSoundFlags(SoundFlags_t value);
    int32_t GetVolume() const;
    void SetVolume(int32_t value);
    int32_t GetSoundIndex() const;
    void SetSoundIndex(int32_t value);
    float GetDuration() const;
    void SetDuration(float value);
    CUtlSymbolLarge GetProxyEntityName() const;
    void SetProxyEntityName(CUtlSymbolLarge value);

    std::string ToPtr();
    bool IsValid();
};

class GCPointEntityFinder
{
private:
    void *m_ptr;

public:
    GCPointEntityFinder(std::string ptr);
    GCPointEntityFinder(void *ptr);

    GCBaseEntity GetEntity() const;
    void SetEntity(GCBaseEntity* value);
    CUtlSymbolLarge GetFilterName() const;
    void SetFilterName(CUtlSymbolLarge value);
    GCBaseFilter GetFilter() const;
    void SetFilter(GCBaseFilter* value);
    CUtlSymbolLarge GetRefName() const;
    void SetRefName(CUtlSymbolLarge value);
    GCBaseEntity GetReference() const;
    void SetReference(GCBaseEntity* value);
    EntFinderMethod_t GetFindMethod() const;
    void SetFindMethod(EntFinderMethod_t value);
    GCEntityIOOutput GetOnFoundEntity() const;
    void SetOnFoundEntity(GCEntityIOOutput value);

    std::string ToPtr();
    bool IsValid();
};

class Gshard_model_desc_t
{
private:
    void *m_ptr;

public:
    Gshard_model_desc_t(std::string ptr);
    Gshard_model_desc_t(void *ptr);

    int32_t GetModelID() const;
    void SetModelID(int32_t value);
    ShardSolid_t GetSolid() const;
    void SetSolid(ShardSolid_t value);
    ShatterPanelMode GetShatterPanelMode() const;
    void SetShatterPanelMode(ShatterPanelMode value);
    Vector2D GetPanelSize() const;
    void SetPanelSize(Vector2D value);
    Vector2D GetStressPositionA() const;
    void SetStressPositionA(Vector2D value);
    Vector2D GetStressPositionB() const;
    void SetStressPositionB(Vector2D value);
    std::vector<Vector2D> GetPanelVertices() const;
    void SetPanelVertices(std::vector<Vector2D> value);
    float GetGlassHalfThickness() const;
    void SetGlassHalfThickness(float value);
    bool GetHasParent() const;
    void SetHasParent(bool value);
    bool GetParentFrozen() const;
    void SetParentFrozen(bool value);
    CUtlStringToken GetSurfacePropStringToken() const;
    void SetSurfacePropStringToken(CUtlStringToken value);

    std::string ToPtr();
    bool IsValid();
};

class GCPhysicsPropRespawnable
{
private:
    void *m_ptr;

public:
    GCPhysicsPropRespawnable(std::string ptr);
    GCPhysicsPropRespawnable(void *ptr);

    Vector GetOriginalSpawnOrigin() const;
    void SetOriginalSpawnOrigin(Vector value);
    QAngle GetOriginalSpawnAngles() const;
    void SetOriginalSpawnAngles(QAngle value);
    Vector GetOriginalMins() const;
    void SetOriginalMins(Vector value);
    Vector GetOriginalMaxs() const;
    void SetOriginalMaxs(Vector value);
    float GetRespawnDuration() const;
    void SetRespawnDuration(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCEnvSky
{
private:
    void *m_ptr;

public:
    GCEnvSky(std::string ptr);
    GCEnvSky(void *ptr);

    bool GetStartDisabled() const;
    void SetStartDisabled(bool value);
    Color GetTintColor() const;
    void SetTintColor(Color value);
    Color GetTintColorLightingOnly() const;
    void SetTintColorLightingOnly(Color value);
    float GetBrightnessScale() const;
    void SetBrightnessScale(float value);
    int32_t GetFogType() const;
    void SetFogType(int32_t value);
    float GetFogMinStart() const;
    void SetFogMinStart(float value);
    float GetFogMinEnd() const;
    void SetFogMinEnd(float value);
    float GetFogMaxStart() const;
    void SetFogMaxStart(float value);
    float GetFogMaxEnd() const;
    void SetFogMaxEnd(float value);
    bool GetEnabled() const;
    void SetEnabled(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCPointVelocitySensor
{
private:
    void *m_ptr;

public:
    GCPointVelocitySensor(std::string ptr);
    GCPointVelocitySensor(void *ptr);

    GCBaseEntity GetTargetEntity() const;
    void SetTargetEntity(GCBaseEntity* value);
    Vector GetAxis() const;
    void SetAxis(Vector value);
    bool GetEnabled() const;
    void SetEnabled(bool value);
    float GetPrevVelocity() const;
    void SetPrevVelocity(float value);
    float GetAvgInterval() const;
    void SetAvgInterval(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCFilterMassGreater
{
private:
    void *m_ptr;

public:
    GCFilterMassGreater(std::string ptr);
    GCFilterMassGreater(void *ptr);

    float GetFilterMass() const;
    void SetFilterMass(float value);

    std::string ToPtr();
    bool IsValid();
};

class GFilterTeam
{
private:
    void *m_ptr;

public:
    GFilterTeam(std::string ptr);
    GFilterTeam(void *ptr);

    int32_t GetFilterTeam() const;
    void SetFilterTeam(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCFuncTankTrain
{
private:
    void *m_ptr;

public:
    GCFuncTankTrain(std::string ptr);
    GCFuncTankTrain(void *ptr);

    GCEntityIOOutput GetOnDeath() const;
    void SetOnDeath(GCEntityIOOutput value);

    std::string ToPtr();
    bool IsValid();
};

class GCNullEntity
{
private:
    void *m_ptr;

public:
    GCNullEntity(std::string ptr);
    GCNullEntity(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCCSPointScriptExtensions_observer
{
private:
    void *m_ptr;

public:
    GCCSPointScriptExtensions_observer(std::string ptr);
    GCCSPointScriptExtensions_observer(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCMarkupVolumeTagged
{
private:
    void *m_ptr;

public:
    GCMarkupVolumeTagged(std::string ptr);
    GCMarkupVolumeTagged(void *ptr);

    bool GetIsGroup() const;
    void SetIsGroup(bool value);
    bool GetGroupByPrefab() const;
    void SetGroupByPrefab(bool value);
    bool GetGroupByVolume() const;
    void SetGroupByVolume(bool value);
    bool GetGroupOtherGroups() const;
    void SetGroupOtherGroups(bool value);
    bool GetIsInGroup() const;
    void SetIsInGroup(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCBuyZone
{
private:
    void *m_ptr;

public:
    GCBuyZone(std::string ptr);
    GCBuyZone(void *ptr);

    int32_t GetLegacyTeamNum() const;
    void SetLegacyTeamNum(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCPointTemplate
{
private:
    void *m_ptr;

public:
    GCPointTemplate(std::string ptr);
    GCPointTemplate(void *ptr);

    CUtlSymbolLarge GetWorldName() const;
    void SetWorldName(CUtlSymbolLarge value);
    CUtlSymbolLarge GetSource2EntityLumpName() const;
    void SetSource2EntityLumpName(CUtlSymbolLarge value);
    CUtlSymbolLarge GetEntityFilterName() const;
    void SetEntityFilterName(CUtlSymbolLarge value);
    float GetTimeoutInterval() const;
    void SetTimeoutInterval(float value);
    bool GetAsynchronouslySpawnEntities() const;
    void SetAsynchronouslySpawnEntities(bool value);
    GCEntityIOOutput GetOutputOnSpawned() const;
    void SetOutputOnSpawned(GCEntityIOOutput value);
    PointTemplateClientOnlyEntityBehavior_t GetClientOnlyEntityBehavior() const;
    void SetClientOnlyEntityBehavior(PointTemplateClientOnlyEntityBehavior_t value);
    PointTemplateOwnerSpawnGroupType_t GetOwnerSpawnGroupType() const;
    void SetOwnerSpawnGroupType(PointTemplateOwnerSpawnGroupType_t value);
    std::vector<uint32> GetCreatedSpawnGroupHandles() const;
    void SetCreatedSpawnGroupHandles(std::vector<uint32> value);
    std::vector<GCEntityInstance*> GetSpawnedEntityHandles() const;
    void SetSpawnedEntityHandles(std::vector<GCEntityInstance*> value);

    std::string ToPtr();
    bool IsValid();
};

class GCTripWireFire
{
private:
    void *m_ptr;

public:
    GCTripWireFire(std::string ptr);
    GCTripWireFire(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCPhysForce
{
private:
    void *m_ptr;

public:
    GCPhysForce(std::string ptr);
    GCPhysForce(void *ptr);

    CUtlSymbolLarge GetNameAttach() const;
    void SetNameAttach(CUtlSymbolLarge value);
    float GetForce() const;
    void SetForce(float value);
    float GetForceTime() const;
    void SetForceTime(float value);
    GCBaseEntity GetAttachedObject() const;
    void SetAttachedObject(GCBaseEntity* value);
    bool GetWasRestored() const;
    void SetWasRestored(bool value);
    GCConstantForceController GetIntegrator() const;
    void SetIntegrator(GCConstantForceController value);

    std::string ToPtr();
    bool IsValid();
};

class GCLogicDistanceAutosave
{
private:
    void *m_ptr;

public:
    GCLogicDistanceAutosave(std::string ptr);
    GCLogicDistanceAutosave(void *ptr);

    CUtlSymbolLarge GetTargetEntity() const;
    void SetTargetEntity(CUtlSymbolLarge value);
    float GetDistanceToPlayer() const;
    void SetDistanceToPlayer(float value);
    bool GetForceNewLevelUnit() const;
    void SetForceNewLevelUnit(bool value);
    bool GetCheckCough() const;
    void SetCheckCough(bool value);
    bool GetThinkDangerous() const;
    void SetThinkDangerous(bool value);
    float GetDangerousTime() const;
    void SetDangerousTime(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCInfoDynamicShadowHint
{
private:
    void *m_ptr;

public:
    GCInfoDynamicShadowHint(std::string ptr);
    GCInfoDynamicShadowHint(void *ptr);

    bool GetDisabled() const;
    void SetDisabled(bool value);
    float GetRange() const;
    void SetRange(float value);
    int32_t GetImportance() const;
    void SetImportance(int32_t value);
    int32_t GetLightChoice() const;
    void SetLightChoice(int32_t value);
    GCBaseEntity GetLight() const;
    void SetLight(GCBaseEntity* value);

    std::string ToPtr();
    bool IsValid();
};

class GCSoundOpvarSetOBBEntity
{
private:
    void *m_ptr;

public:
    GCSoundOpvarSetOBBEntity(std::string ptr);
    GCSoundOpvarSetOBBEntity(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCEnvWindShared__WindVariationEvent_t
{
private:
    void *m_ptr;

public:
    GCEnvWindShared__WindVariationEvent_t(std::string ptr);
    GCEnvWindShared__WindVariationEvent_t(void *ptr);

    float GetWindAngleVariation() const;
    void SetWindAngleVariation(float value);
    float GetWindSpeedVariation() const;
    void SetWindSpeedVariation(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCTakeDamageInfoAPI
{
private:
    void *m_ptr;

public:
    GCTakeDamageInfoAPI(std::string ptr);
    GCTakeDamageInfoAPI(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCScriptTriggerOnce
{
private:
    void *m_ptr;

public:
    GCScriptTriggerOnce(std::string ptr);
    GCScriptTriggerOnce(void *ptr);

    Vector GetExtent() const;
    void SetExtent(Vector value);

    std::string ToPtr();
    bool IsValid();
};

class GCNavWalkable
{
private:
    void *m_ptr;

public:
    GCNavWalkable(std::string ptr);
    GCNavWalkable(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCFuncMonitor
{
private:
    void *m_ptr;

public:
    GCFuncMonitor(std::string ptr);
    GCFuncMonitor(void *ptr);

    CUtlString GetTargetCamera() const;
    void SetTargetCamera(CUtlString value);
    int32_t GetResolutionEnum() const;
    void SetResolutionEnum(int32_t value);
    bool GetRenderShadows() const;
    void SetRenderShadows(bool value);
    bool GetUseUniqueColorTarget() const;
    void SetUseUniqueColorTarget(bool value);
    CUtlString GetBrushModelName() const;
    void SetBrushModelName(CUtlString value);
    GCBaseEntity GetTargetCamera1() const;
    void SetTargetCamera1(GCBaseEntity* value);
    bool GetEnabled() const;
    void SetEnabled(bool value);
    bool GetDraw3DSkybox() const;
    void SetDraw3DSkybox(bool value);
    bool GetStartEnabled() const;
    void SetStartEnabled(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCFlashbangProjectile
{
private:
    void *m_ptr;

public:
    GCFlashbangProjectile(std::string ptr);
    GCFlashbangProjectile(void *ptr);

    float GetTimeToDetonate() const;
    void SetTimeToDetonate(float value);
    uint8_t GetNumOpponentsHit() const;
    void SetNumOpponentsHit(uint8_t value);
    uint8_t GetNumTeammatesHit() const;
    void SetNumTeammatesHit(uint8_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCPointClientUIWorldTextPanel
{
private:
    void *m_ptr;

public:
    GCPointClientUIWorldTextPanel(std::string ptr);
    GCPointClientUIWorldTextPanel(void *ptr);

    std::string GetMessageText() const;
    void SetMessageText(std::string value);

    std::string ToPtr();
    bool IsValid();
};

class GCInfoInstructorHintTarget
{
private:
    void *m_ptr;

public:
    GCInfoInstructorHintTarget(std::string ptr);
    GCInfoInstructorHintTarget(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCCSPlayer_HostageServices
{
private:
    void *m_ptr;

public:
    GCCSPlayer_HostageServices(std::string ptr);
    GCCSPlayer_HostageServices(void *ptr);

    GCBaseEntity GetCarriedHostage() const;
    void SetCarriedHostage(GCBaseEntity* value);
    GCBaseEntity GetCarriedHostageProp() const;
    void SetCarriedHostageProp(GCBaseEntity* value);

    std::string ToPtr();
    bool IsValid();
};

class GCWeaponSSG08
{
private:
    void *m_ptr;

public:
    GCWeaponSSG08(std::string ptr);
    GCWeaponSSG08(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCBreachCharge
{
private:
    void *m_ptr;

public:
    GCBreachCharge(std::string ptr);
    GCBreachCharge(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCLogicBranch
{
private:
    void *m_ptr;

public:
    GCLogicBranch(std::string ptr);
    GCLogicBranch(void *ptr);

    bool GetInValue() const;
    void SetInValue(bool value);
    GCEntityIOOutput GetOnTrue() const;
    void SetOnTrue(GCEntityIOOutput value);
    GCEntityIOOutput GetOnFalse() const;
    void SetOnFalse(GCEntityIOOutput value);

    std::string ToPtr();
    bool IsValid();
};

class GCWeaponUMP45
{
private:
    void *m_ptr;

public:
    GCWeaponUMP45(std::string ptr);
    GCWeaponUMP45(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCSpriteAlias_env_glow
{
private:
    void *m_ptr;

public:
    GCSpriteAlias_env_glow(std::string ptr);
    GCSpriteAlias_env_glow(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCPhysicalButton
{
private:
    void *m_ptr;

public:
    GCPhysicalButton(std::string ptr);
    GCPhysicalButton(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCPhysLength
{
private:
    void *m_ptr;

public:
    GCPhysLength(std::string ptr);
    GCPhysLength(void *ptr);

    std::vector<Vector> GetOffset() const;
    void SetOffset(std::vector<Vector> value);
    Vector GetAttach() const;
    void SetAttach(Vector value);
    float GetAddLength() const;
    void SetAddLength(float value);
    float GetMinLength() const;
    void SetMinLength(float value);
    float GetTotalLength() const;
    void SetTotalLength(float value);
    bool GetEnableCollision() const;
    void SetEnableCollision(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCLogicNPCCounterOBB
{
private:
    void *m_ptr;

public:
    GCLogicNPCCounterOBB(std::string ptr);
    GCLogicNPCCounterOBB(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCCSGOViewModel
{
private:
    void *m_ptr;

public:
    GCCSGOViewModel(std::string ptr);
    GCCSGOViewModel(void *ptr);

    bool GetShouldIgnoreOffsetAndAccuracy() const;
    void SetShouldIgnoreOffsetAndAccuracy(bool value);
    uint32_t GetWeaponParity() const;
    void SetWeaponParity(uint32_t value);
    uint32_t GetOldWeaponParity() const;
    void SetOldWeaponParity(uint32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCWeaponShield
{
private:
    void *m_ptr;

public:
    GCWeaponShield(std::string ptr);
    GCWeaponShield(void *ptr);

    float GetBulletDamageAbsorbed() const;
    void SetBulletDamageAbsorbed(float value);
    float GetDisplayHealth() const;
    void SetDisplayHealth(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCBlood
{
private:
    void *m_ptr;

public:
    GCBlood(std::string ptr);
    GCBlood(void *ptr);

    QAngle GetSprayAngles() const;
    void SetSprayAngles(QAngle value);
    Vector GetSprayDir() const;
    void SetSprayDir(Vector value);
    float GetAmount() const;
    void SetAmount(float value);
    BloodType GetColor() const;
    void SetColor(BloodType value);

    std::string ToPtr();
    bool IsValid();
};

class GCEnvFade
{
private:
    void *m_ptr;

public:
    GCEnvFade(std::string ptr);
    GCEnvFade(void *ptr);

    Color GetFadeColor() const;
    void SetFadeColor(Color value);
    float GetDuration() const;
    void SetDuration(float value);
    float GetHoldDuration() const;
    void SetHoldDuration(float value);
    GCEntityIOOutput GetOnBeginFade() const;
    void SetOnBeginFade(GCEntityIOOutput value);

    std::string ToPtr();
    bool IsValid();
};

class GCDynamicPropAlias_cable_dynamic
{
private:
    void *m_ptr;

public:
    GCDynamicPropAlias_cable_dynamic(std::string ptr);
    GCDynamicPropAlias_cable_dynamic(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCCSPlayer_BuyServices
{
private:
    void *m_ptr;

public:
    GCCSPlayer_BuyServices(std::string ptr);
    GCCSPlayer_BuyServices(void *ptr);

    std::vector<GSellbackPurchaseEntry_t> GetSellbackPurchaseEntries() const;
    void SetSellbackPurchaseEntries(std::vector<GSellbackPurchaseEntry_t> value);

    std::string ToPtr();
    bool IsValid();
};

class GCHostageExpresserShim
{
private:
    void *m_ptr;

public:
    GCHostageExpresserShim(std::string ptr);
    GCHostageExpresserShim(void *ptr);

    GCAI_Expresser GetExpresser() const;
    void SetExpresser(GCAI_Expresser* value);

    std::string ToPtr();
    bool IsValid();
};

class GCInferno
{
private:
    void *m_ptr;

public:
    GCInferno(std::string ptr);
    GCInferno(void *ptr);

    std::vector<Vector> GetFirePositions() const;
    void SetFirePositions(std::vector<Vector> value);
    std::vector<Vector> GetFireParentPositions() const;
    void SetFireParentPositions(std::vector<Vector> value);
    std::vector<bool> GetFireIsBurning() const;
    void SetFireIsBurning(std::vector<bool> value);
    std::vector<Vector> GetBurnNormal() const;
    void SetBurnNormal(std::vector<Vector> value);
    int32_t GetFireCount() const;
    void SetFireCount(int32_t value);
    int32_t GetInfernoType() const;
    void SetInfernoType(int32_t value);
    int32_t GetFireEffectTickBegin() const;
    void SetFireEffectTickBegin(int32_t value);
    float GetFireLifetime() const;
    void SetFireLifetime(float value);
    bool GetInPostEffectTime() const;
    void SetInPostEffectTime(bool value);
    int32_t GetFiresExtinguishCount() const;
    void SetFiresExtinguishCount(int32_t value);
    bool GetWasCreatedInSmoke() const;
    void SetWasCreatedInSmoke(bool value);
    GExtent GetExtent() const;
    void SetExtent(GExtent value);
    GCountdownTimer GetDamageTimer() const;
    void SetDamageTimer(GCountdownTimer value);
    GCountdownTimer GetDamageRampTimer() const;
    void SetDamageRampTimer(GCountdownTimer value);
    Vector GetSplashVelocity() const;
    void SetSplashVelocity(Vector value);
    Vector GetInitialSplashVelocity() const;
    void SetInitialSplashVelocity(Vector value);
    Vector GetStartPos() const;
    void SetStartPos(Vector value);
    Vector GetOriginalSpawnLocation() const;
    void SetOriginalSpawnLocation(Vector value);
    GIntervalTimer GetActiveTimer() const;
    void SetActiveTimer(GIntervalTimer value);
    int32_t GetFireSpawnOffset() const;
    void SetFireSpawnOffset(int32_t value);
    int32_t GetMaxFlames() const;
    void SetMaxFlames(int32_t value);
    int32_t GetSpreadCount() const;
    void SetSpreadCount(int32_t value);
    GCountdownTimer GetBookkeepingTimer() const;
    void SetBookkeepingTimer(GCountdownTimer value);
    GCountdownTimer GetNextSpreadTimer() const;
    void SetNextSpreadTimer(GCountdownTimer value);
    uint16_t GetSourceItemDefIndex() const;
    void SetSourceItemDefIndex(uint16_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCEnvGlobal
{
private:
    void *m_ptr;

public:
    GCEnvGlobal(std::string ptr);
    GCEnvGlobal(void *ptr);

    CUtlSymbolLarge GetGlobalstate() const;
    void SetGlobalstate(CUtlSymbolLarge value);
    int32_t GetTriggermode() const;
    void SetTriggermode(int32_t value);
    int32_t GetInitialstate() const;
    void SetInitialstate(int32_t value);
    int32_t GetCounter() const;
    void SetCounter(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCFilterName
{
private:
    void *m_ptr;

public:
    GCFilterName(std::string ptr);
    GCFilterName(void *ptr);

    CUtlSymbolLarge GetFilterName() const;
    void SetFilterName(CUtlSymbolLarge value);

    std::string ToPtr();
    bool IsValid();
};

class GCCSTeam
{
private:
    void *m_ptr;

public:
    GCCSTeam(std::string ptr);
    GCCSTeam(void *ptr);

    int32_t GetLastRecievedShorthandedRoundBonus() const;
    void SetLastRecievedShorthandedRoundBonus(int32_t value);
    int32_t GetShorthandedRoundBonusStartRound() const;
    void SetShorthandedRoundBonusStartRound(int32_t value);
    bool GetSurrendered() const;
    void SetSurrendered(bool value);
    std::string GetTeamMatchStat() const;
    void SetTeamMatchStat(std::string value);
    int32_t GetNumMapVictories() const;
    void SetNumMapVictories(int32_t value);
    int32_t GetScoreFirstHalf() const;
    void SetScoreFirstHalf(int32_t value);
    int32_t GetScoreSecondHalf() const;
    void SetScoreSecondHalf(int32_t value);
    int32_t GetScoreOvertime() const;
    void SetScoreOvertime(int32_t value);
    std::string GetClanTeamname() const;
    void SetClanTeamname(std::string value);
    uint32_t GetClanID() const;
    void SetClanID(uint32_t value);
    std::string GetTeamFlagImage() const;
    void SetTeamFlagImage(std::string value);
    std::string GetTeamLogoImage() const;
    void SetTeamLogoImage(std::string value);
    float GetNextResourceTime() const;
    void SetNextResourceTime(float value);
    int32_t GetLastUpdateSentAt() const;
    void SetLastUpdateSentAt(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCWeaponUSPSilencer
{
private:
    void *m_ptr;

public:
    GCWeaponUSPSilencer(std::string ptr);
    GCWeaponUSPSilencer(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCSpriteOriented
{
private:
    void *m_ptr;

public:
    GCSpriteOriented(std::string ptr);
    GCSpriteOriented(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCTriggerGravity
{
private:
    void *m_ptr;

public:
    GCTriggerGravity(std::string ptr);
    GCTriggerGravity(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCServerRagdollTrigger
{
private:
    void *m_ptr;

public:
    GCServerRagdollTrigger(std::string ptr);
    GCServerRagdollTrigger(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCInfoDynamicShadowHintBox
{
private:
    void *m_ptr;

public:
    GCInfoDynamicShadowHintBox(std::string ptr);
    GCInfoDynamicShadowHintBox(void *ptr);

    Vector GetBoxMins() const;
    void SetBoxMins(Vector value);
    Vector GetBoxMaxs() const;
    void SetBoxMaxs(Vector value);

    std::string ToPtr();
    bool IsValid();
};

class GCPathMover
{
private:
    void *m_ptr;

public:
    GCPathMover(std::string ptr);
    GCPathMover(void *ptr);

    float GetPathLength() const;
    void SetPathLength(float value);
    bool GetClosedLoop() const;
    void SetClosedLoop(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCFlashbang
{
private:
    void *m_ptr;

public:
    GCFlashbang(std::string ptr);
    GCFlashbang(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCWeaponAug
{
private:
    void *m_ptr;

public:
    GCWeaponAug(std::string ptr);
    GCWeaponAug(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCIncendiaryGrenade
{
private:
    void *m_ptr;

public:
    GCIncendiaryGrenade(std::string ptr);
    GCIncendiaryGrenade(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCChangeLevel
{
private:
    void *m_ptr;

public:
    GCChangeLevel(std::string ptr);
    GCChangeLevel(void *ptr);

    CUtlString GetMapName() const;
    void SetMapName(CUtlString value);
    CUtlString GetLandmarkName() const;
    void SetLandmarkName(CUtlString value);
    GCEntityIOOutput GetOnChangeLevel() const;
    void SetOnChangeLevel(GCEntityIOOutput value);
    bool GetTouched() const;
    void SetTouched(bool value);
    bool GetNoTouch() const;
    void SetNoTouch(bool value);
    bool GetNewChapter() const;
    void SetNewChapter(bool value);
    bool GetOnChangeLevelFired() const;
    void SetOnChangeLevelFired(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCTriggerLerpObject
{
private:
    void *m_ptr;

public:
    GCTriggerLerpObject(std::string ptr);
    GCTriggerLerpObject(void *ptr);

    CUtlSymbolLarge GetLerpTarget() const;
    void SetLerpTarget(CUtlSymbolLarge value);
    GCBaseEntity GetLerpTarget1() const;
    void SetLerpTarget1(GCBaseEntity* value);
    CUtlSymbolLarge GetLerpTargetAttachment() const;
    void SetLerpTargetAttachment(CUtlSymbolLarge value);
    float GetLerpDuration() const;
    void SetLerpDuration(float value);
    bool GetLerpRestoreMoveType() const;
    void SetLerpRestoreMoveType(bool value);
    bool GetSingleLerpObject() const;
    void SetSingleLerpObject(bool value);
    std::vector<Glerpdata_t> GetLerpingObjects() const;
    void SetLerpingObjects(std::vector<Glerpdata_t> value);
    CUtlSymbolLarge GetLerpEffect() const;
    void SetLerpEffect(CUtlSymbolLarge value);
    CUtlSymbolLarge GetLerpSound() const;
    void SetLerpSound(CUtlSymbolLarge value);
    bool GetAttachTouchingObject() const;
    void SetAttachTouchingObject(bool value);
    GCBaseEntity GetEntityToWaitForDisconnect() const;
    void SetEntityToWaitForDisconnect(GCBaseEntity* value);
    GCEntityIOOutput GetOnLerpStarted() const;
    void SetOnLerpStarted(GCEntityIOOutput value);
    GCEntityIOOutput GetOnLerpFinished() const;
    void SetOnLerpFinished(GCEntityIOOutput value);

    std::string ToPtr();
    bool IsValid();
};

class GCTriggerSoundscape
{
private:
    void *m_ptr;

public:
    GCTriggerSoundscape(std::string ptr);
    GCTriggerSoundscape(void *ptr);

    GCEnvSoundscapeTriggerable GetSoundscape() const;
    void SetSoundscape(GCEnvSoundscapeTriggerable* value);
    CUtlSymbolLarge GetSoundscapeName() const;
    void SetSoundscapeName(CUtlSymbolLarge value);

    std::string ToPtr();
    bool IsValid();
};

class GCLogicScript
{
private:
    void *m_ptr;

public:
    GCLogicScript(std::string ptr);
    GCLogicScript(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCWeaponFiveSeven
{
private:
    void *m_ptr;

public:
    GCWeaponFiveSeven(std::string ptr);
    GCWeaponFiveSeven(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCTriggerBrush
{
private:
    void *m_ptr;

public:
    GCTriggerBrush(std::string ptr);
    GCTriggerBrush(void *ptr);

    GCEntityIOOutput GetOnStartTouch() const;
    void SetOnStartTouch(GCEntityIOOutput value);
    GCEntityIOOutput GetOnEndTouch() const;
    void SetOnEndTouch(GCEntityIOOutput value);
    GCEntityIOOutput GetOnUse() const;
    void SetOnUse(GCEntityIOOutput value);
    int32_t GetInputFilter() const;
    void SetInputFilter(int32_t value);
    int32_t GetDontMessageParent() const;
    void SetDontMessageParent(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCPhysicsEntitySolver
{
private:
    void *m_ptr;

public:
    GCPhysicsEntitySolver(std::string ptr);
    GCPhysicsEntitySolver(void *ptr);

    GCBaseEntity GetMovingEntity() const;
    void SetMovingEntity(GCBaseEntity* value);
    GCBaseEntity GetPhysicsBlocker() const;
    void SetPhysicsBlocker(GCBaseEntity* value);
    float GetSeparationDuration() const;
    void SetSeparationDuration(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCNetworkedSequenceOperation
{
private:
    void *m_ptr;

public:
    GCNetworkedSequenceOperation(std::string ptr);
    GCNetworkedSequenceOperation(void *ptr);

    float GetPrevCycle() const;
    void SetPrevCycle(float value);
    float GetCycle() const;
    void SetCycle(float value);
    float GetWeight() const;
    void SetWeight(float value);
    bool GetSequenceChangeNetworked() const;
    void SetSequenceChangeNetworked(bool value);
    bool GetDiscontinuity() const;
    void SetDiscontinuity(bool value);
    float GetPrevCycleFromDiscontinuity() const;
    void SetPrevCycleFromDiscontinuity(float value);
    float GetPrevCycleForAnimEventDetection() const;
    void SetPrevCycleForAnimEventDetection(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCPointWorldText
{
private:
    void *m_ptr;

public:
    GCPointWorldText(std::string ptr);
    GCPointWorldText(void *ptr);

    std::string GetMessageText() const;
    void SetMessageText(std::string value);
    std::string GetFontName() const;
    void SetFontName(std::string value);
    bool GetEnabled() const;
    void SetEnabled(bool value);
    bool GetFullbright() const;
    void SetFullbright(bool value);
    float GetWorldUnitsPerPx() const;
    void SetWorldUnitsPerPx(float value);
    float GetFontSize() const;
    void SetFontSize(float value);
    float GetDepthOffset() const;
    void SetDepthOffset(float value);
    Color GetColor() const;
    void SetColor(Color value);
    PointWorldTextJustifyHorizontal_t GetJustifyHorizontal() const;
    void SetJustifyHorizontal(PointWorldTextJustifyHorizontal_t value);
    PointWorldTextJustifyVertical_t GetJustifyVertical() const;
    void SetJustifyVertical(PointWorldTextJustifyVertical_t value);
    PointWorldTextReorientMode_t GetReorientMode() const;
    void SetReorientMode(PointWorldTextReorientMode_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCSoundAreaEntityOrientedBox
{
private:
    void *m_ptr;

public:
    GCSoundAreaEntityOrientedBox(std::string ptr);
    GCSoundAreaEntityOrientedBox(void *ptr);

    Vector GetMin() const;
    void SetMin(Vector value);
    Vector GetMax() const;
    void SetMax(Vector value);

    std::string ToPtr();
    bool IsValid();
};

class GCTriggerPhysics
{
private:
    void *m_ptr;

public:
    GCTriggerPhysics(std::string ptr);
    GCTriggerPhysics(void *ptr);

    float GetGravityScale() const;
    void SetGravityScale(float value);
    float GetLinearLimit() const;
    void SetLinearLimit(float value);
    float GetLinearDamping() const;
    void SetLinearDamping(float value);
    float GetAngularLimit() const;
    void SetAngularLimit(float value);
    float GetAngularDamping() const;
    void SetAngularDamping(float value);
    float GetLinearForce() const;
    void SetLinearForce(float value);
    float GetFrequency() const;
    void SetFrequency(float value);
    float GetDampingRatio() const;
    void SetDampingRatio(float value);
    Vector GetLinearForcePointAt() const;
    void SetLinearForcePointAt(Vector value);
    bool GetCollapseToForcePoint() const;
    void SetCollapseToForcePoint(bool value);
    Vector GetLinearForcePointAtWorld() const;
    void SetLinearForcePointAtWorld(Vector value);
    Vector GetLinearForceDirection() const;
    void SetLinearForceDirection(Vector value);
    bool GetConvertToDebrisWhenPossible() const;
    void SetConvertToDebrisWhenPossible(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GEntityRenderAttribute_t
{
private:
    void *m_ptr;

public:
    GEntityRenderAttribute_t(std::string ptr);
    GEntityRenderAttribute_t(void *ptr);

    CUtlStringToken GetID() const;
    void SetID(CUtlStringToken value);
    Vector4D GetValues() const;
    void SetValues(Vector4D value);

    std::string ToPtr();
    bool IsValid();
};

class GCPointBroadcastClientCommand
{
private:
    void *m_ptr;

public:
    GCPointBroadcastClientCommand(std::string ptr);
    GCPointBroadcastClientCommand(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCFuncShatterglass
{
private:
    void *m_ptr;

public:
    GCFuncShatterglass(std::string ptr);
    GCFuncShatterglass(void *ptr);

    matrix3x4_t GetMatPanelTransform() const;
    void SetMatPanelTransform(matrix3x4_t value);
    matrix3x4_t GetMatPanelTransformWsTemp() const;
    void SetMatPanelTransformWsTemp(matrix3x4_t value);
    std::vector<uint32> GetShatterGlassShards() const;
    void SetShatterGlassShards(std::vector<uint32> value);
    Vector2D GetPanelSize() const;
    void SetPanelSize(Vector2D value);
    Vector GetPanelNormalWs() const;
    void SetPanelNormalWs(Vector value);
    int32_t GetNumShardsEverCreated() const;
    void SetNumShardsEverCreated(int32_t value);
    float GetGlassThickness() const;
    void SetGlassThickness(float value);
    float GetSpawnInvulnerability() const;
    void SetSpawnInvulnerability(float value);
    bool GetBreakSilent() const;
    void SetBreakSilent(bool value);
    bool GetBreakShardless() const;
    void SetBreakShardless(bool value);
    bool GetBroken() const;
    void SetBroken(bool value);
    bool GetHasRateLimitedShards() const;
    void SetHasRateLimitedShards(bool value);
    bool GetGlassNavIgnore() const;
    void SetGlassNavIgnore(bool value);
    bool GetGlassInFrame() const;
    void SetGlassInFrame(bool value);
    bool GetStartBroken() const;
    void SetStartBroken(bool value);
    uint8_t GetInitialDamageType() const;
    void SetInitialDamageType(uint8_t value);
    CUtlSymbolLarge GetDamagePositioningEntityName01() const;
    void SetDamagePositioningEntityName01(CUtlSymbolLarge value);
    CUtlSymbolLarge GetDamagePositioningEntityName02() const;
    void SetDamagePositioningEntityName02(CUtlSymbolLarge value);
    CUtlSymbolLarge GetDamagePositioningEntityName03() const;
    void SetDamagePositioningEntityName03(CUtlSymbolLarge value);
    CUtlSymbolLarge GetDamagePositioningEntityName04() const;
    void SetDamagePositioningEntityName04(CUtlSymbolLarge value);
    std::vector<Vector> GetInitialDamagePositions() const;
    void SetInitialDamagePositions(std::vector<Vector> value);
    std::vector<Vector> GetExtraDamagePositions() const;
    void SetExtraDamagePositions(std::vector<Vector> value);
    GCEntityIOOutput GetOnBroken() const;
    void SetOnBroken(GCEntityIOOutput value);
    uint8_t GetSurfaceType() const;
    void SetSurfaceType(uint8_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCRotButton
{
private:
    void *m_ptr;

public:
    GCRotButton(std::string ptr);
    GCRotButton(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCSoundEventSphereEntity
{
private:
    void *m_ptr;

public:
    GCSoundEventSphereEntity(std::string ptr);
    GCSoundEventSphereEntity(void *ptr);

    float GetRadius() const;
    void SetRadius(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCWeaponHKP2000
{
private:
    void *m_ptr;

public:
    GCWeaponHKP2000(std::string ptr);
    GCWeaponHKP2000(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCPlantedC4
{
private:
    void *m_ptr;

public:
    GCPlantedC4(std::string ptr);
    GCPlantedC4(void *ptr);

    bool GetBombTicking() const;
    void SetBombTicking(bool value);
    int32_t GetBombSite() const;
    void SetBombSite(int32_t value);
    int32_t GetSourceSoundscapeHash() const;
    void SetSourceSoundscapeHash(int32_t value);
    GCEntityIOOutput GetOnBombDefused() const;
    void SetOnBombDefused(GCEntityIOOutput value);
    GCEntityIOOutput GetOnBombBeginDefuse() const;
    void SetOnBombBeginDefuse(GCEntityIOOutput value);
    GCEntityIOOutput GetOnBombDefuseAborted() const;
    void SetOnBombDefuseAborted(GCEntityIOOutput value);
    bool GetCannotBeDefused() const;
    void SetCannotBeDefused(bool value);
    GEntitySpottedState_t GetEntitySpottedState() const;
    void SetEntitySpottedState(GEntitySpottedState_t value);
    int32_t GetSpotRules() const;
    void SetSpotRules(int32_t value);
    bool GetTrainingPlacedByPlayer() const;
    void SetTrainingPlacedByPlayer(bool value);
    bool GetHasExploded() const;
    void SetHasExploded(bool value);
    float GetTimerLength() const;
    void SetTimerLength(float value);
    bool GetBeingDefused() const;
    void SetBeingDefused(bool value);
    float GetDefuseLength() const;
    void SetDefuseLength(float value);
    bool GetBombDefused() const;
    void SetBombDefused(bool value);
    GCCSPlayerPawn GetBombDefuser() const;
    void SetBombDefuser(GCCSPlayerPawn* value);
    GCBaseEntity GetControlPanel() const;
    void SetControlPanel(GCBaseEntity* value);
    int32_t GetProgressBarTime() const;
    void SetProgressBarTime(int32_t value);
    bool GetVoiceAlertFired() const;
    void SetVoiceAlertFired(bool value);
    std::vector<bool> GetVoiceAlertPlayed() const;
    void SetVoiceAlertPlayed(std::vector<bool> value);
    QAngle GetCatchUpToPlayerEye() const;
    void SetCatchUpToPlayerEye(QAngle value);

    std::string ToPtr();
    bool IsValid();
};

class GCPointClientUIDialog
{
private:
    void *m_ptr;

public:
    GCPointClientUIDialog(std::string ptr);
    GCPointClientUIDialog(void *ptr);

    GCBaseEntity GetActivator() const;
    void SetActivator(GCBaseEntity* value);
    bool GetStartEnabled() const;
    void SetStartEnabled(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCEnvSplash
{
private:
    void *m_ptr;

public:
    GCEnvSplash(std::string ptr);
    GCEnvSplash(void *ptr);

    float GetScale() const;
    void SetScale(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCSkyCamera
{
private:
    void *m_ptr;

public:
    GCSkyCamera(std::string ptr);
    GCSkyCamera(void *ptr);

    Gsky3dparams_t GetSkyboxData() const;
    void SetSkyboxData(Gsky3dparams_t value);
    CUtlStringToken GetSkyboxSlotToken() const;
    void SetSkyboxSlotToken(CUtlStringToken value);
    bool GetUseAngles() const;
    void SetUseAngles(bool value);
    GCSkyCamera GetNext() const;
    void SetNext(GCSkyCamera* value);

    std::string ToPtr();
    bool IsValid();
};

class GCWeaponNOVA
{
private:
    void *m_ptr;

public:
    GCWeaponNOVA(std::string ptr);
    GCWeaponNOVA(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCPointCameraVFOV
{
private:
    void *m_ptr;

public:
    GCPointCameraVFOV(std::string ptr);
    GCPointCameraVFOV(void *ptr);

    float GetVerticalFOV() const;
    void SetVerticalFOV(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCWeaponTaser
{
private:
    void *m_ptr;

public:
    GCWeaponTaser(std::string ptr);
    GCWeaponTaser(void *ptr);

    int32_t GetLastAttackTick() const;
    void SetLastAttackTick(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCWaterBullet
{
private:
    void *m_ptr;

public:
    GCWaterBullet(std::string ptr);
    GCWaterBullet(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCMarkupVolumeWithRef
{
private:
    void *m_ptr;

public:
    GCMarkupVolumeWithRef(std::string ptr);
    GCMarkupVolumeWithRef(void *ptr);

    bool GetUseRef() const;
    void SetUseRef(bool value);
    Vector GetRefPos() const;
    void SetRefPos(Vector value);
    float GetRefDot() const;
    void SetRefDot(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCMessage
{
private:
    void *m_ptr;

public:
    GCMessage(std::string ptr);
    GCMessage(void *ptr);

    CUtlSymbolLarge GetMessage() const;
    void SetMessage(CUtlSymbolLarge value);
    float GetMessageVolume() const;
    void SetMessageVolume(float value);
    int32_t GetMessageAttenuation() const;
    void SetMessageAttenuation(int32_t value);
    float GetRadius() const;
    void SetRadius(float value);
    CUtlSymbolLarge GetNoise() const;
    void SetNoise(CUtlSymbolLarge value);
    GCEntityIOOutput GetOnShowMessage() const;
    void SetOnShowMessage(GCEntityIOOutput value);

    std::string ToPtr();
    bool IsValid();
};

class GCLogicGameEventListener
{
private:
    void *m_ptr;

public:
    GCLogicGameEventListener(std::string ptr);
    GCLogicGameEventListener(void *ptr);

    GCEntityIOOutput GetOnEventFired() const;
    void SetOnEventFired(GCEntityIOOutput value);
    CUtlSymbolLarge GetGameEventName() const;
    void SetGameEventName(CUtlSymbolLarge value);
    CUtlSymbolLarge GetGameEventItem() const;
    void SetGameEventItem(CUtlSymbolLarge value);
    bool GetEnabled() const;
    void SetEnabled(bool value);
    bool GetStartDisabled() const;
    void SetStartDisabled(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCPushable
{
private:
    void *m_ptr;

public:
    GCPushable(std::string ptr);
    GCPushable(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCTriggerRemove
{
private:
    void *m_ptr;

public:
    GCTriggerRemove(std::string ptr);
    GCTriggerRemove(void *ptr);

    GCEntityIOOutput GetOnRemove() const;
    void SetOnRemove(GCEntityIOOutput value);

    std::string ToPtr();
    bool IsValid();
};

class GCInfoTarget
{
private:
    void *m_ptr;

public:
    GCInfoTarget(std::string ptr);
    GCInfoTarget(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCMomentaryRotButton
{
private:
    void *m_ptr;

public:
    GCMomentaryRotButton(std::string ptr);
    GCMomentaryRotButton(void *ptr);

    GCEntityIOOutput GetOnUnpressed() const;
    void SetOnUnpressed(GCEntityIOOutput value);
    GCEntityIOOutput GetOnFullyOpen() const;
    void SetOnFullyOpen(GCEntityIOOutput value);
    GCEntityIOOutput GetOnFullyClosed() const;
    void SetOnFullyClosed(GCEntityIOOutput value);
    GCEntityIOOutput GetOnReachedPosition() const;
    void SetOnReachedPosition(GCEntityIOOutput value);
    int32_t GetLastUsed() const;
    void SetLastUsed(int32_t value);
    QAngle GetStart() const;
    void SetStart(QAngle value);
    QAngle GetEnd() const;
    void SetEnd(QAngle value);
    float GetIdealYaw() const;
    void SetIdealYaw(float value);
    CUtlSymbolLarge GetNoise() const;
    void SetNoise(CUtlSymbolLarge value);
    bool GetUpdateTarget() const;
    void SetUpdateTarget(bool value);
    int32_t GetDirection() const;
    void SetDirection(int32_t value);
    float GetReturnSpeed() const;
    void SetReturnSpeed(float value);
    float GetStartPosition() const;
    void SetStartPosition(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCPropDoorRotating
{
private:
    void *m_ptr;

public:
    GCPropDoorRotating(std::string ptr);
    GCPropDoorRotating(void *ptr);

    Vector GetAxis() const;
    void SetAxis(Vector value);
    float GetDistance() const;
    void SetDistance(float value);
    PropDoorRotatingSpawnPos_t GetSpawnPosition() const;
    void SetSpawnPosition(PropDoorRotatingSpawnPos_t value);
    PropDoorRotatingOpenDirection_e GetOpenDirection() const;
    void SetOpenDirection(PropDoorRotatingOpenDirection_e value);
    PropDoorRotatingOpenDirection_e GetCurrentOpenDirection() const;
    void SetCurrentOpenDirection(PropDoorRotatingOpenDirection_e value);
    float GetAjarAngle() const;
    void SetAjarAngle(float value);
    QAngle GetRotationAjarDeprecated() const;
    void SetRotationAjarDeprecated(QAngle value);
    QAngle GetRotationClosed() const;
    void SetRotationClosed(QAngle value);
    QAngle GetRotationOpenForward() const;
    void SetRotationOpenForward(QAngle value);
    QAngle GetRotationOpenBack() const;
    void SetRotationOpenBack(QAngle value);
    QAngle GetGoal() const;
    void SetGoal(QAngle value);
    Vector GetForwardBoundsMin() const;
    void SetForwardBoundsMin(Vector value);
    Vector GetForwardBoundsMax() const;
    void SetForwardBoundsMax(Vector value);
    Vector GetBackBoundsMin() const;
    void SetBackBoundsMin(Vector value);
    Vector GetBackBoundsMax() const;
    void SetBackBoundsMax(Vector value);
    bool GetAjarDoorShouldntAlwaysOpen() const;
    void SetAjarDoorShouldntAlwaysOpen(bool value);
    GCEntityBlocker GetEntityBlocker() const;
    void SetEntityBlocker(GCEntityBlocker* value);

    std::string ToPtr();
    bool IsValid();
};

class Ghudtextparms_t
{
private:
    void *m_ptr;

public:
    Ghudtextparms_t(std::string ptr);
    Ghudtextparms_t(void *ptr);

    Color GetColor1() const;
    void SetColor1(Color value);
    Color GetColor2() const;
    void SetColor2(Color value);
    uint8_t GetEffect() const;
    void SetEffect(uint8_t value);
    uint8_t GetChannel() const;
    void SetChannel(uint8_t value);
    float GetX() const;
    void SetX(float value);
    float GetY() const;
    void SetY(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCWeaponMP5SD
{
private:
    void *m_ptr;

public:
    GCWeaponMP5SD(std::string ptr);
    GCWeaponMP5SD(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCTextureBasedAnimatable
{
private:
    void *m_ptr;

public:
    GCTextureBasedAnimatable(std::string ptr);
    GCTextureBasedAnimatable(void *ptr);

    bool GetLoop() const;
    void SetLoop(bool value);
    float GetFPS() const;
    void SetFPS(float value);
    Vector GetAnimationBoundsMin() const;
    void SetAnimationBoundsMin(Vector value);
    Vector GetAnimationBoundsMax() const;
    void SetAnimationBoundsMax(Vector value);
    float GetStartTime() const;
    void SetStartTime(float value);
    float GetStartFrame() const;
    void SetStartFrame(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCMarkupVolumeTagged_NavGame
{
private:
    void *m_ptr;

public:
    GCMarkupVolumeTagged_NavGame(std::string ptr);
    GCMarkupVolumeTagged_NavGame(void *ptr);

    bool GetFloodFillAttribute() const;
    void SetFloodFillAttribute(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCPhysThruster
{
private:
    void *m_ptr;

public:
    GCPhysThruster(std::string ptr);
    GCPhysThruster(void *ptr);

    Vector GetLocalOrigin() const;
    void SetLocalOrigin(Vector value);

    std::string ToPtr();
    bool IsValid();
};

class GCCSPointScriptExtensions_player
{
private:
    void *m_ptr;

public:
    GCCSPointScriptExtensions_player(std::string ptr);
    GCCSPointScriptExtensions_player(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCCitadelSoundOpvarSetOBB
{
private:
    void *m_ptr;

public:
    GCCitadelSoundOpvarSetOBB(std::string ptr);
    GCCitadelSoundOpvarSetOBB(void *ptr);

    CUtlSymbolLarge GetStackName() const;
    void SetStackName(CUtlSymbolLarge value);
    CUtlSymbolLarge GetOperatorName() const;
    void SetOperatorName(CUtlSymbolLarge value);
    CUtlSymbolLarge GetOpvarName() const;
    void SetOpvarName(CUtlSymbolLarge value);
    Vector GetDistanceInnerMins() const;
    void SetDistanceInnerMins(Vector value);
    Vector GetDistanceInnerMaxs() const;
    void SetDistanceInnerMaxs(Vector value);
    Vector GetDistanceOuterMins() const;
    void SetDistanceOuterMins(Vector value);
    Vector GetDistanceOuterMaxs() const;
    void SetDistanceOuterMaxs(Vector value);
    int32_t GetAABBDirection() const;
    void SetAABBDirection(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GSellbackPurchaseEntry_t
{
private:
    void *m_ptr;

public:
    GSellbackPurchaseEntry_t(std::string ptr);
    GSellbackPurchaseEntry_t(void *ptr);

    uint16_t GetDefIdx() const;
    void SetDefIdx(uint16_t value);
    int32_t GetCost() const;
    void SetCost(int32_t value);
    int32_t GetPrevArmor() const;
    void SetPrevArmor(int32_t value);
    bool GetPrevHelmet() const;
    void SetPrevHelmet(bool value);
    GCEntityInstance GetItem() const;
    void SetItem(GCEntityInstance* value);

    std::string ToPtr();
    bool IsValid();
};

class GCWeaponFamas
{
private:
    void *m_ptr;

public:
    GCWeaponFamas(std::string ptr);
    GCWeaponFamas(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCShatterGlassShardPhysics
{
private:
    void *m_ptr;

public:
    GCShatterGlassShardPhysics(std::string ptr);
    GCShatterGlassShardPhysics(void *ptr);

    bool GetDebris() const;
    void SetDebris(bool value);
    uint32_t GetParentShard() const;
    void SetParentShard(uint32_t value);
    Gshard_model_desc_t GetShardDesc() const;
    void SetShardDesc(Gshard_model_desc_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCFilterModel
{
private:
    void *m_ptr;

public:
    GCFilterModel(std::string ptr);
    GCFilterModel(void *ptr);

    CUtlSymbolLarge GetFilterModel() const;
    void SetFilterModel(CUtlSymbolLarge value);

    std::string ToPtr();
    bool IsValid();
};

class GCCSPlayerPawnBase
{
private:
    void *m_ptr;

public:
    GCCSPlayerPawnBase(std::string ptr);
    GCCSPlayerPawnBase(void *ptr);

    GCTouchExpansionComponent GetCTouchExpansionComponent() const;
    void SetCTouchExpansionComponent(GCTouchExpansionComponent value);
    GCCSPlayer_PingServices GetPingServices() const;
    void SetPingServices(GCCSPlayer_PingServices* value);
    GCPlayer_ViewModelServices GetViewModelServices() const;
    void SetViewModelServices(GCPlayer_ViewModelServices* value);
    CSPlayerState GetPlayerState() const;
    void SetPlayerState(CSPlayerState value);
    bool GetRespawning() const;
    void SetRespawning(bool value);
    bool GetGunGameImmunity() const;
    void SetGunGameImmunity(bool value);
    float GetMolotovDamageTime() const;
    void SetMolotovDamageTime(float value);
    bool GetHasMovedSinceSpawn() const;
    void SetHasMovedSinceSpawn(bool value);
    int32_t GetNumSpawns() const;
    void SetNumSpawns(int32_t value);
    float GetIdleTimeSinceLastAction() const;
    void SetIdleTimeSinceLastAction(float value);
    float GetNextRadarUpdateTime() const;
    void SetNextRadarUpdateTime(float value);
    float GetFlashDuration() const;
    void SetFlashDuration(float value);
    float GetFlashMaxAlpha() const;
    void SetFlashMaxAlpha(float value);
    float GetProgressBarStartTime() const;
    void SetProgressBarStartTime(float value);
    int32_t GetProgressBarDuration() const;
    void SetProgressBarDuration(int32_t value);
    QAngle GetEyeAngles() const;
    void SetEyeAngles(QAngle value);
    int32_t GetNumEnemiesAtRoundStart() const;
    void SetNumEnemiesAtRoundStart(int32_t value);
    bool GetWasNotKilledNaturally() const;
    void SetWasNotKilledNaturally(bool value);
    bool GetCommittingSuicideOnTeamChange() const;
    void SetCommittingSuicideOnTeamChange(bool value);
    GCCSPlayerController GetOriginalController() const;
    void SetOriginalController(GCCSPlayerController* value);

    std::string ToPtr();
    bool IsValid();
};

class GCPathTrack
{
private:
    void *m_ptr;

public:
    GCPathTrack(std::string ptr);
    GCPathTrack(void *ptr);

    GCPathTrack GetPnext() const;
    void SetPnext(GCPathTrack* value);
    GCPathTrack GetPprevious() const;
    void SetPprevious(GCPathTrack* value);
    GCPathTrack GetPaltpath() const;
    void SetPaltpath(GCPathTrack* value);
    float GetRadius() const;
    void SetRadius(float value);
    float GetLength() const;
    void SetLength(float value);
    CUtlSymbolLarge GetAltName() const;
    void SetAltName(CUtlSymbolLarge value);
    int32_t GetIterVal() const;
    void SetIterVal(int32_t value);
    TrackOrientationType_t GetOrientationType() const;
    void SetOrientationType(TrackOrientationType_t value);
    GCEntityIOOutput GetOnPass() const;
    void SetOnPass(GCEntityIOOutput value);

    std::string ToPtr();
    bool IsValid();
};

class GCLogicDistanceCheck
{
private:
    void *m_ptr;

public:
    GCLogicDistanceCheck(std::string ptr);
    GCLogicDistanceCheck(void *ptr);

    CUtlSymbolLarge GetEntityA() const;
    void SetEntityA(CUtlSymbolLarge value);
    CUtlSymbolLarge GetEntityB() const;
    void SetEntityB(CUtlSymbolLarge value);
    float GetZone1Distance() const;
    void SetZone1Distance(float value);
    float GetZone2Distance() const;
    void SetZone2Distance(float value);
    GCEntityIOOutput GetInZone1() const;
    void SetInZone1(GCEntityIOOutput value);
    GCEntityIOOutput GetInZone2() const;
    void SetInZone2(GCEntityIOOutput value);
    GCEntityIOOutput GetInZone3() const;
    void SetInZone3(GCEntityIOOutput value);

    std::string ToPtr();
    bool IsValid();
};

class GCOmniLight
{
private:
    void *m_ptr;

public:
    GCOmniLight(std::string ptr);
    GCOmniLight(void *ptr);

    float GetInnerAngle() const;
    void SetInnerAngle(float value);
    float GetOuterAngle() const;
    void SetOuterAngle(float value);
    bool GetShowLight() const;
    void SetShowLight(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCInfoOffscreenPanoramaTexture
{
private:
    void *m_ptr;

public:
    GCInfoOffscreenPanoramaTexture(std::string ptr);
    GCInfoOffscreenPanoramaTexture(void *ptr);

    bool GetDisabled() const;
    void SetDisabled(bool value);
    int32_t GetResolutionX() const;
    void SetResolutionX(int32_t value);
    int32_t GetResolutionY() const;
    void SetResolutionY(int32_t value);
    CUtlSymbolLarge GetLayoutFileName() const;
    void SetLayoutFileName(CUtlSymbolLarge value);
    CUtlSymbolLarge GetRenderAttrName() const;
    void SetRenderAttrName(CUtlSymbolLarge value);
    std::vector<GCBaseModelEntity*> GetTargetEntities() const;
    void SetTargetEntities(std::vector<GCBaseModelEntity*> value);
    int32_t GetTargetChangeCount() const;
    void SetTargetChangeCount(int32_t value);
    std::vector<CUtlSymbolLarge> GetCSSClasses() const;
    void SetCSSClasses(std::vector<CUtlSymbolLarge> value);
    CUtlSymbolLarge GetTargetsName() const;
    void SetTargetsName(CUtlSymbolLarge value);

    std::string ToPtr();
    bool IsValid();
};

class GCInfoVisibilityBox
{
private:
    void *m_ptr;

public:
    GCInfoVisibilityBox(std::string ptr);
    GCInfoVisibilityBox(void *ptr);

    int32_t GetMode() const;
    void SetMode(int32_t value);
    Vector GetBoxSize() const;
    void SetBoxSize(Vector value);
    bool GetEnabled() const;
    void SetEnabled(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCGamePlayerEquip
{
private:
    void *m_ptr;

public:
    GCGamePlayerEquip(std::string ptr);
    GCGamePlayerEquip(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCInfoTargetServerOnly
{
private:
    void *m_ptr;

public:
    GCInfoTargetServerOnly(std::string ptr);
    GCInfoTargetServerOnly(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCSoundOpvarSetPathCornerEntity
{
private:
    void *m_ptr;

public:
    GCSoundOpvarSetPathCornerEntity(std::string ptr);
    GCSoundOpvarSetPathCornerEntity(void *ptr);

    float GetDistMinSqr() const;
    void SetDistMinSqr(float value);
    float GetDistMaxSqr() const;
    void SetDistMaxSqr(float value);
    CUtlSymbolLarge GetPathCornerEntityName() const;
    void SetPathCornerEntityName(CUtlSymbolLarge value);

    std::string ToPtr();
    bool IsValid();
};

class GCCSPlayer_WeaponServices
{
private:
    void *m_ptr;

public:
    GCCSPlayer_WeaponServices(std::string ptr);
    GCCSPlayer_WeaponServices(void *ptr);

    bool GetIsLookingAtWeapon() const;
    void SetIsLookingAtWeapon(bool value);
    bool GetIsHoldingLookAtWeapon() const;
    void SetIsHoldingLookAtWeapon(bool value);
    GCBasePlayerWeapon GetSavedWeapon() const;
    void SetSavedWeapon(GCBasePlayerWeapon* value);
    int32_t GetTimeToMelee() const;
    void SetTimeToMelee(int32_t value);
    int32_t GetTimeToSecondary() const;
    void SetTimeToSecondary(int32_t value);
    int32_t GetTimeToPrimary() const;
    void SetTimeToPrimary(int32_t value);
    int32_t GetTimeToSniperRifle() const;
    void SetTimeToSniperRifle(int32_t value);
    bool GetIsBeingGivenItem() const;
    void SetIsBeingGivenItem(bool value);
    bool GetIsPickingUpItemWithUse() const;
    void SetIsPickingUpItemWithUse(bool value);
    bool GetPickedUpWeapon() const;
    void SetPickedUpWeapon(bool value);
    bool GetDisableAutoDeploy() const;
    void SetDisableAutoDeploy(bool value);
    bool GetIsPickingUpGroundWeapon() const;
    void SetIsPickingUpGroundWeapon(bool value);
    uint32_t GetOldShootPositionHistoryCount() const;
    void SetOldShootPositionHistoryCount(uint32_t value);
    uint32_t GetOldInputHistoryCount() const;
    void SetOldInputHistoryCount(uint32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCEntityFlame
{
private:
    void *m_ptr;

public:
    GCEntityFlame(std::string ptr);
    GCEntityFlame(void *ptr);

    GCBaseEntity GetEntAttached() const;
    void SetEntAttached(GCBaseEntity* value);
    bool GetCheapEffect() const;
    void SetCheapEffect(bool value);
    float GetSize() const;
    void SetSize(float value);
    bool GetUseHitboxes() const;
    void SetUseHitboxes(bool value);
    int32_t GetNumHitboxFires() const;
    void SetNumHitboxFires(int32_t value);
    float GetHitboxFireScale() const;
    void SetHitboxFireScale(float value);
    GCBaseEntity GetAttacker() const;
    void SetAttacker(GCBaseEntity* value);
    int32_t GetDangerSound() const;
    void SetDangerSound(int32_t value);
    float GetDirectDamagePerSecond() const;
    void SetDirectDamagePerSecond(float value);
    int32_t GetCustomDamageType() const;
    void SetCustomDamageType(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCWeaponMP9
{
private:
    void *m_ptr;

public:
    GCWeaponMP9(std::string ptr);
    GCWeaponMP9(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCCSBot
{
private:
    void *m_ptr;

public:
    GCCSBot(std::string ptr);
    GCCSBot(void *ptr);

    Vector GetEyePosition() const;
    void SetEyePosition(Vector value);
    std::string GetName() const;
    void SetName(std::string value);
    float GetCombatRange() const;
    void SetCombatRange(float value);
    bool GetIsRogue() const;
    void SetIsRogue(bool value);
    GCountdownTimer GetRogueTimer() const;
    void SetRogueTimer(GCountdownTimer value);
    bool GetDiedLastRound() const;
    void SetDiedLastRound(bool value);
    float GetSafeTime() const;
    void SetSafeTime(float value);
    bool GetWasSafe() const;
    void SetWasSafe(bool value);
    bool GetBlindFire() const;
    void SetBlindFire(bool value);
    GCountdownTimer GetSurpriseTimer() const;
    void SetSurpriseTimer(GCountdownTimer value);
    bool GetAllowActive() const;
    void SetAllowActive(bool value);
    bool GetIsFollowing() const;
    void SetIsFollowing(bool value);
    GCCSPlayerPawn GetLeader() const;
    void SetLeader(GCCSPlayerPawn* value);
    float GetFollowTimestamp() const;
    void SetFollowTimestamp(float value);
    float GetAllowAutoFollowTime() const;
    void SetAllowAutoFollowTime(float value);
    GCountdownTimer GetHurryTimer() const;
    void SetHurryTimer(GCountdownTimer value);
    GCountdownTimer GetAlertTimer() const;
    void SetAlertTimer(GCountdownTimer value);
    GCountdownTimer GetSneakTimer() const;
    void SetSneakTimer(GCountdownTimer value);
    GCountdownTimer GetPanicTimer() const;
    void SetPanicTimer(GCountdownTimer value);
    float GetStateTimestamp() const;
    void SetStateTimestamp(float value);
    bool GetIsAttacking() const;
    void SetIsAttacking(bool value);
    bool GetIsOpeningDoor() const;
    void SetIsOpeningDoor(bool value);
    GCBaseEntity GetTaskEntity() const;
    void SetTaskEntity(GCBaseEntity* value);
    Vector GetGoalPosition() const;
    void SetGoalPosition(Vector value);
    GCBaseEntity GetGoalEntity() const;
    void SetGoalEntity(GCBaseEntity* value);
    GCBaseEntity GetAvoid() const;
    void SetAvoid(GCBaseEntity* value);
    float GetAvoidTimestamp() const;
    void SetAvoidTimestamp(float value);
    bool GetIsStopping() const;
    void SetIsStopping(bool value);
    bool GetHasVisitedEnemySpawn() const;
    void SetHasVisitedEnemySpawn(bool value);
    GIntervalTimer GetStillTimer() const;
    void SetStillTimer(GIntervalTimer value);
    bool GetEyeAnglesUnderPathFinderControl() const;
    void SetEyeAnglesUnderPathFinderControl(bool value);
    int32_t GetPathIndex() const;
    void SetPathIndex(int32_t value);
    GCountdownTimer GetRepathTimer() const;
    void SetRepathTimer(GCountdownTimer value);
    GCountdownTimer GetAvoidFriendTimer() const;
    void SetAvoidFriendTimer(GCountdownTimer value);
    bool GetIsFriendInTheWay() const;
    void SetIsFriendInTheWay(bool value);
    GCountdownTimer GetPoliteTimer() const;
    void SetPoliteTimer(GCountdownTimer value);
    bool GetIsWaitingBehindFriend() const;
    void SetIsWaitingBehindFriend(bool value);
    float GetPathLadderEnd() const;
    void SetPathLadderEnd(float value);
    GCountdownTimer GetMustRunTimer() const;
    void SetMustRunTimer(GCountdownTimer value);
    GCountdownTimer GetWaitTimer() const;
    void SetWaitTimer(GCountdownTimer value);
    GCountdownTimer GetUpdateTravelDistanceTimer() const;
    void SetUpdateTravelDistanceTimer(GCountdownTimer value);
    std::vector<float> GetPlayerTravelDistance() const;
    void SetPlayerTravelDistance(std::vector<float> value);
    uint8_t GetTravelDistancePhase() const;
    void SetTravelDistancePhase(uint8_t value);
    uint8_t GetHostageEscortCount() const;
    void SetHostageEscortCount(uint8_t value);
    float GetHostageEscortCountTimestamp() const;
    void SetHostageEscortCountTimestamp(float value);
    int32_t GetDesiredTeam() const;
    void SetDesiredTeam(int32_t value);
    bool GetHasJoined() const;
    void SetHasJoined(bool value);
    bool GetIsWaitingForHostage() const;
    void SetIsWaitingForHostage(bool value);
    GCountdownTimer GetInhibitWaitingForHostageTimer() const;
    void SetInhibitWaitingForHostageTimer(GCountdownTimer value);
    GCountdownTimer GetWaitForHostageTimer() const;
    void SetWaitForHostageTimer(GCountdownTimer value);
    Vector GetNoisePosition() const;
    void SetNoisePosition(Vector value);
    float GetNoiseTravelDistance() const;
    void SetNoiseTravelDistance(float value);
    float GetNoiseTimestamp() const;
    void SetNoiseTimestamp(float value);
    GCCSPlayerPawn GetNoiseSource() const;
    void SetNoiseSource(GCCSPlayerPawn* value);
    GCountdownTimer GetNoiseBendTimer() const;
    void SetNoiseBendTimer(GCountdownTimer value);
    Vector GetBentNoisePosition() const;
    void SetBentNoisePosition(Vector value);
    bool GetBendNoisePositionValid() const;
    void SetBendNoisePositionValid(bool value);
    float GetLookAroundStateTimestamp() const;
    void SetLookAroundStateTimestamp(float value);
    float GetLookAheadAngle() const;
    void SetLookAheadAngle(float value);
    float GetForwardAngle() const;
    void SetForwardAngle(float value);
    float GetInhibitLookAroundTimestamp() const;
    void SetInhibitLookAroundTimestamp(float value);
    Vector GetLookAtSpot() const;
    void SetLookAtSpot(Vector value);
    float GetLookAtSpotDuration() const;
    void SetLookAtSpotDuration(float value);
    float GetLookAtSpotTimestamp() const;
    void SetLookAtSpotTimestamp(float value);
    float GetLookAtSpotAngleTolerance() const;
    void SetLookAtSpotAngleTolerance(float value);
    bool GetLookAtSpotClearIfClose() const;
    void SetLookAtSpotClearIfClose(bool value);
    bool GetLookAtSpotAttack() const;
    void SetLookAtSpotAttack(bool value);
    std::string GetLookAtDesc() const;
    void SetLookAtDesc(std::string value);
    float GetPeripheralTimestamp() const;
    void SetPeripheralTimestamp(float value);
    uint8_t GetApproachPointCount() const;
    void SetApproachPointCount(uint8_t value);
    Vector GetApproachPointViewPosition() const;
    void SetApproachPointViewPosition(Vector value);
    GIntervalTimer GetViewSteadyTimer() const;
    void SetViewSteadyTimer(GIntervalTimer value);
    GCountdownTimer GetTossGrenadeTimer() const;
    void SetTossGrenadeTimer(GCountdownTimer value);
    GCountdownTimer GetIsAvoidingGrenade() const;
    void SetIsAvoidingGrenade(GCountdownTimer value);
    float GetSpotCheckTimestamp() const;
    void SetSpotCheckTimestamp(float value);
    int32_t GetCheckedHidingSpotCount() const;
    void SetCheckedHidingSpotCount(int32_t value);
    float GetLookPitch() const;
    void SetLookPitch(float value);
    float GetLookPitchVel() const;
    void SetLookPitchVel(float value);
    float GetLookYaw() const;
    void SetLookYaw(float value);
    float GetLookYawVel() const;
    void SetLookYawVel(float value);
    Vector GetTargetSpot() const;
    void SetTargetSpot(Vector value);
    Vector GetTargetSpotVelocity() const;
    void SetTargetSpotVelocity(Vector value);
    Vector GetTargetSpotPredicted() const;
    void SetTargetSpotPredicted(Vector value);
    QAngle GetAimError() const;
    void SetAimError(QAngle value);
    QAngle GetAimGoal() const;
    void SetAimGoal(QAngle value);
    float GetAimFocus() const;
    void SetAimFocus(float value);
    float GetAimFocusInterval() const;
    void SetAimFocusInterval(float value);
    GCountdownTimer GetIgnoreEnemiesTimer() const;
    void SetIgnoreEnemiesTimer(GCountdownTimer value);
    GCCSPlayerPawn GetEnemy() const;
    void SetEnemy(GCCSPlayerPawn* value);
    bool GetIsEnemyVisible() const;
    void SetIsEnemyVisible(bool value);
    uint8_t GetVisibleEnemyParts() const;
    void SetVisibleEnemyParts(uint8_t value);
    Vector GetLastEnemyPosition() const;
    void SetLastEnemyPosition(Vector value);
    float GetLastSawEnemyTimestamp() const;
    void SetLastSawEnemyTimestamp(float value);
    float GetFirstSawEnemyTimestamp() const;
    void SetFirstSawEnemyTimestamp(float value);
    float GetCurrentEnemyAcquireTimestamp() const;
    void SetCurrentEnemyAcquireTimestamp(float value);
    float GetEnemyDeathTimestamp() const;
    void SetEnemyDeathTimestamp(float value);
    float GetFriendDeathTimestamp() const;
    void SetFriendDeathTimestamp(float value);
    bool GetIsLastEnemyDead() const;
    void SetIsLastEnemyDead(bool value);
    int32_t GetNearbyEnemyCount() const;
    void SetNearbyEnemyCount(int32_t value);
    GCCSPlayerPawn GetBomber() const;
    void SetBomber(GCCSPlayerPawn* value);
    int32_t GetNearbyFriendCount() const;
    void SetNearbyFriendCount(int32_t value);
    GCCSPlayerPawn GetClosestVisibleFriend() const;
    void SetClosestVisibleFriend(GCCSPlayerPawn* value);
    GCCSPlayerPawn GetClosestVisibleHumanFriend() const;
    void SetClosestVisibleHumanFriend(GCCSPlayerPawn* value);
    GIntervalTimer GetAttentionInterval() const;
    void SetAttentionInterval(GIntervalTimer value);
    GCCSPlayerPawn GetAttacker() const;
    void SetAttacker(GCCSPlayerPawn* value);
    float GetAttackedTimestamp() const;
    void SetAttackedTimestamp(float value);
    GIntervalTimer GetBurnedByFlamesTimer() const;
    void SetBurnedByFlamesTimer(GIntervalTimer value);
    int32_t GetLastVictimID() const;
    void SetLastVictimID(int32_t value);
    bool GetIsAimingAtEnemy() const;
    void SetIsAimingAtEnemy(bool value);
    bool GetIsRapidFiring() const;
    void SetIsRapidFiring(bool value);
    GIntervalTimer GetEquipTimer() const;
    void SetEquipTimer(GIntervalTimer value);
    GCountdownTimer GetZoomTimer() const;
    void SetZoomTimer(GCountdownTimer value);
    GCountdownTimer GetLookForWeaponsOnGroundTimer() const;
    void SetLookForWeaponsOnGroundTimer(GCountdownTimer value);
    bool GetIsSleeping() const;
    void SetIsSleeping(bool value);
    bool GetIsEnemySniperVisible() const;
    void SetIsEnemySniperVisible(bool value);
    GCountdownTimer GetSawEnemySniperTimer() const;
    void SetSawEnemySniperTimer(GCountdownTimer value);
    uint8_t GetEnemyQueueIndex() const;
    void SetEnemyQueueIndex(uint8_t value);
    uint8_t GetEnemyQueueCount() const;
    void SetEnemyQueueCount(uint8_t value);
    uint8_t GetEnemyQueueAttendIndex() const;
    void SetEnemyQueueAttendIndex(uint8_t value);
    bool GetIsStuck() const;
    void SetIsStuck(bool value);
    Vector GetStuckSpot() const;
    void SetStuckSpot(Vector value);
    GCountdownTimer GetWiggleTimer() const;
    void SetWiggleTimer(GCountdownTimer value);
    GCountdownTimer GetStuckJumpTimer() const;
    void SetStuckJumpTimer(GCountdownTimer value);
    std::vector<float> GetAvgVel() const;
    void SetAvgVel(std::vector<float> value);
    int32_t GetAvgVelIndex() const;
    void SetAvgVelIndex(int32_t value);
    int32_t GetAvgVelCount() const;
    void SetAvgVelCount(int32_t value);
    Vector GetLastOrigin() const;
    void SetLastOrigin(Vector value);
    float GetLastRadioRecievedTimestamp() const;
    void SetLastRadioRecievedTimestamp(float value);
    float GetLastRadioSentTimestamp() const;
    void SetLastRadioSentTimestamp(float value);
    GCCSPlayerPawn GetRadioSubject() const;
    void SetRadioSubject(GCCSPlayerPawn* value);
    Vector GetRadioPosition() const;
    void SetRadioPosition(Vector value);
    float GetVoiceEndTimestamp() const;
    void SetVoiceEndTimestamp(float value);
    int32_t GetLastValidReactionQueueFrame() const;
    void SetLastValidReactionQueueFrame(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCEntityIdentity
{
private:
    void *m_ptr;

public:
    GCEntityIdentity(std::string ptr);
    GCEntityIdentity(void *ptr);

    int32_t GetNameStringableIndex() const;
    void SetNameStringableIndex(int32_t value);
    CUtlSymbolLarge GetName() const;
    void SetName(CUtlSymbolLarge value);
    CUtlSymbolLarge GetDesignerName() const;
    void SetDesignerName(CUtlSymbolLarge value);
    uint32_t GetFlags() const;
    void SetFlags(uint32_t value);
    WorldGroupId_t GetWorldGroupId() const;
    void SetWorldGroupId(WorldGroupId_t value);
    uint32_t GetDataObjectTypes() const;
    void SetDataObjectTypes(uint32_t value);
    GChangeAccessorFieldPathIndex_t GetPathIndex() const;
    void SetPathIndex(GChangeAccessorFieldPathIndex_t value);
    GCEntityIdentity GetPrev() const;
    void SetPrev(GCEntityIdentity* value);
    GCEntityIdentity GetNext() const;
    void SetNext(GCEntityIdentity* value);
    GCEntityIdentity GetPrevByClass() const;
    void SetPrevByClass(GCEntityIdentity* value);
    GCEntityIdentity GetNextByClass() const;
    void SetNextByClass(GCEntityIdentity* value);

    std::string ToPtr();
    bool IsValid();
};

class GCGunTarget
{
private:
    void *m_ptr;

public:
    GCGunTarget(std::string ptr);
    GCGunTarget(void *ptr);

    bool GetOn() const;
    void SetOn(bool value);
    GCBaseEntity GetTargetEnt() const;
    void SetTargetEnt(GCBaseEntity* value);
    GCEntityIOOutput GetOnDeath() const;
    void SetOnDeath(GCEntityIOOutput value);

    std::string ToPtr();
    bool IsValid();
};

class GCSoundEventParameter
{
private:
    void *m_ptr;

public:
    GCSoundEventParameter(std::string ptr);
    GCSoundEventParameter(void *ptr);

    CUtlSymbolLarge GetParamName() const;
    void SetParamName(CUtlSymbolLarge value);
    float GetFloatValue() const;
    void SetFloatValue(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCSimpleMarkupVolumeTagged
{
private:
    void *m_ptr;

public:
    GCSimpleMarkupVolumeTagged(std::string ptr);
    GCSimpleMarkupVolumeTagged(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCTestEffect
{
private:
    void *m_ptr;

public:
    GCTestEffect(std::string ptr);
    GCTestEffect(void *ptr);

    int32_t GetLoop() const;
    void SetLoop(int32_t value);
    int32_t GetBeam() const;
    void SetBeam(int32_t value);
    std::vector<GCBeam*> GetBeam1() const;
    void SetBeam1(std::vector<GCBeam*> value);

    std::string ToPtr();
    bool IsValid();
};

class GCWeaponM4A1Silencer
{
private:
    void *m_ptr;

public:
    GCWeaponM4A1Silencer(std::string ptr);
    GCWeaponM4A1Silencer(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCScriptNavBlocker
{
private:
    void *m_ptr;

public:
    GCScriptNavBlocker(std::string ptr);
    GCScriptNavBlocker(void *ptr);

    Vector GetExtent() const;
    void SetExtent(Vector value);

    std::string ToPtr();
    bool IsValid();
};

class GCConstraintAnchor
{
private:
    void *m_ptr;

public:
    GCConstraintAnchor(std::string ptr);
    GCConstraintAnchor(void *ptr);

    float GetMassScale() const;
    void SetMassScale(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCWeaponTec9
{
private:
    void *m_ptr;

public:
    GCWeaponTec9(std::string ptr);
    GCWeaponTec9(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCMarkupVolumeTagged_Nav
{
private:
    void *m_ptr;

public:
    GCMarkupVolumeTagged_Nav(std::string ptr);
    GCMarkupVolumeTagged_Nav(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCInstancedSceneEntity
{
private:
    void *m_ptr;

public:
    GCInstancedSceneEntity(std::string ptr);
    GCInstancedSceneEntity(void *ptr);

    GCBaseEntity GetOwner() const;
    void SetOwner(GCBaseEntity* value);
    bool GetHadOwner() const;
    void SetHadOwner(bool value);
    float GetPostSpeakDelay() const;
    void SetPostSpeakDelay(float value);
    float GetPreDelay() const;
    void SetPreDelay(float value);
    bool GetIsBackground() const;
    void SetIsBackground(bool value);
    bool GetRemoveOnCompletion() const;
    void SetRemoveOnCompletion(bool value);
    GCBaseEntity GetTarget() const;
    void SetTarget(GCBaseEntity* value);

    std::string ToPtr();
    bool IsValid();
};

class GCLightEnvironmentEntity
{
private:
    void *m_ptr;

public:
    GCLightEnvironmentEntity(std::string ptr);
    GCLightEnvironmentEntity(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCLogicActiveAutosave
{
private:
    void *m_ptr;

public:
    GCLogicActiveAutosave(std::string ptr);
    GCLogicActiveAutosave(void *ptr);

    int32_t GetTriggerHitPoints() const;
    void SetTriggerHitPoints(int32_t value);
    float GetTimeToTrigger() const;
    void SetTimeToTrigger(float value);
    float GetDangerousTime() const;
    void SetDangerousTime(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCEnvBeverage
{
private:
    void *m_ptr;

public:
    GCEnvBeverage(std::string ptr);
    GCEnvBeverage(void *ptr);

    bool GetCanInDispenser() const;
    void SetCanInDispenser(bool value);
    int32_t GetBeverageType() const;
    void SetBeverageType(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCWeaponCZ75a
{
private:
    void *m_ptr;

public:
    GCWeaponCZ75a(std::string ptr);
    GCWeaponCZ75a(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCWeaponP250
{
private:
    void *m_ptr;

public:
    GCWeaponP250(std::string ptr);
    GCWeaponP250(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCHostage
{
private:
    void *m_ptr;

public:
    GCHostage(std::string ptr);
    GCHostage(void *ptr);

    GCEntityIOOutput GetOnHostageBeginGrab() const;
    void SetOnHostageBeginGrab(GCEntityIOOutput value);
    GCEntityIOOutput GetOnFirstPickedUp() const;
    void SetOnFirstPickedUp(GCEntityIOOutput value);
    GCEntityIOOutput GetOnDroppedNotRescued() const;
    void SetOnDroppedNotRescued(GCEntityIOOutput value);
    GCEntityIOOutput GetOnRescued() const;
    void SetOnRescued(GCEntityIOOutput value);
    GEntitySpottedState_t GetEntitySpottedState() const;
    void SetEntitySpottedState(GEntitySpottedState_t value);
    int32_t GetSpotRules() const;
    void SetSpotRules(int32_t value);
    uint32_t GetUiHostageSpawnExclusionGroupMask() const;
    void SetUiHostageSpawnExclusionGroupMask(uint32_t value);
    uint32_t GetHostageSpawnRandomFactor() const;
    void SetHostageSpawnRandomFactor(uint32_t value);
    bool GetRemove() const;
    void SetRemove(bool value);
    Vector GetVel() const;
    void SetVel(Vector value);
    bool GetIsRescued() const;
    void SetIsRescued(bool value);
    bool GetJumpedThisFrame() const;
    void SetJumpedThisFrame(bool value);
    int32_t GetHostageState() const;
    void SetHostageState(int32_t value);
    GCBaseEntity GetLeader() const;
    void SetLeader(GCBaseEntity* value);
    GCCSPlayerPawnBase GetLastLeader() const;
    void SetLastLeader(GCCSPlayerPawnBase* value);
    GCountdownTimer GetReuseTimer() const;
    void SetReuseTimer(GCountdownTimer value);
    bool GetHasBeenUsed() const;
    void SetHasBeenUsed(bool value);
    Vector GetAccel() const;
    void SetAccel(Vector value);
    bool GetIsRunning() const;
    void SetIsRunning(bool value);
    bool GetIsCrouching() const;
    void SetIsCrouching(bool value);
    GCountdownTimer GetJumpTimer() const;
    void SetJumpTimer(GCountdownTimer value);
    bool GetIsWaitingForLeader() const;
    void SetIsWaitingForLeader(bool value);
    GCountdownTimer GetRepathTimer() const;
    void SetRepathTimer(GCountdownTimer value);
    GCountdownTimer GetInhibitDoorTimer() const;
    void SetInhibitDoorTimer(GCountdownTimer value);
    GCountdownTimer GetInhibitObstacleAvoidanceTimer() const;
    void SetInhibitObstacleAvoidanceTimer(GCountdownTimer value);
    GCountdownTimer GetWiggleTimer() const;
    void SetWiggleTimer(GCountdownTimer value);
    bool GetIsAdjusted() const;
    void SetIsAdjusted(bool value);
    bool GetHandsHaveBeenCut() const;
    void SetHandsHaveBeenCut(bool value);
    GCCSPlayerPawn GetHostageGrabber() const;
    void SetHostageGrabber(GCCSPlayerPawn* value);
    Vector GetPositionWhenStartedDroppingToGround() const;
    void SetPositionWhenStartedDroppingToGround(Vector value);
    Vector GetGrabbedPos() const;
    void SetGrabbedPos(Vector value);
    int32_t GetApproachRewardPayouts() const;
    void SetApproachRewardPayouts(int32_t value);
    int32_t GetPickupEventCount() const;
    void SetPickupEventCount(int32_t value);
    Vector GetSpawnGroundPos() const;
    void SetSpawnGroundPos(Vector value);
    Vector GetHostageResetPosition() const;
    void SetHostageResetPosition(Vector value);

    std::string ToPtr();
    bool IsValid();
};

class GCScriptTriggerHurt
{
private:
    void *m_ptr;

public:
    GCScriptTriggerHurt(std::string ptr);
    GCScriptTriggerHurt(void *ptr);

    Vector GetExtent() const;
    void SetExtent(Vector value);

    std::string ToPtr();
    bool IsValid();
};

class GCBasePlayerWeaponVData
{
private:
    void *m_ptr;

public:
    GCBasePlayerWeaponVData(std::string ptr);
    GCBasePlayerWeaponVData(void *ptr);

    bool GetBuiltRightHanded() const;
    void SetBuiltRightHanded(bool value);
    bool GetAllowFlipping() const;
    void SetAllowFlipping(bool value);
    CUtlString GetMuzzleAttachment() const;
    void SetMuzzleAttachment(CUtlString value);
    ItemFlagTypes_t GetFlags() const;
    void SetFlags(ItemFlagTypes_t value);
    uint8_t GetPrimaryAmmoType() const;
    void SetPrimaryAmmoType(uint8_t value);
    uint8_t GetSecondaryAmmoType() const;
    void SetSecondaryAmmoType(uint8_t value);
    int32_t GetMaxClip1() const;
    void SetMaxClip1(int32_t value);
    int32_t GetMaxClip2() const;
    void SetMaxClip2(int32_t value);
    int32_t GetDefaultClip1() const;
    void SetDefaultClip1(int32_t value);
    int32_t GetDefaultClip2() const;
    void SetDefaultClip2(int32_t value);
    int32_t GetWeight() const;
    void SetWeight(int32_t value);
    bool GetAutoSwitchTo() const;
    void SetAutoSwitchTo(bool value);
    bool GetAutoSwitchFrom() const;
    void SetAutoSwitchFrom(bool value);
    RumbleEffect_t GetRumbleEffect() const;
    void SetRumbleEffect(RumbleEffect_t value);
    bool GetLinkedCooldowns() const;
    void SetLinkedCooldowns(bool value);
    int32_t GetSlot() const;
    void SetSlot(int32_t value);
    int32_t GetPosition() const;
    void SetPosition(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCMathColorBlend
{
private:
    void *m_ptr;

public:
    GCMathColorBlend(std::string ptr);
    GCMathColorBlend(void *ptr);

    float GetInMin() const;
    void SetInMin(float value);
    float GetInMax() const;
    void SetInMax(float value);
    Color GetOutColor1() const;
    void SetOutColor1(Color value);
    Color GetOutColor2() const;
    void SetOutColor2(Color value);

    std::string ToPtr();
    bool IsValid();
};

class GCEnvScreenOverlay
{
private:
    void *m_ptr;

public:
    GCEnvScreenOverlay(std::string ptr);
    GCEnvScreenOverlay(void *ptr);

    std::vector<CUtlSymbolLarge> GetOverlayNames() const;
    void SetOverlayNames(std::vector<CUtlSymbolLarge> value);
    std::vector<float> GetOverlayTimes() const;
    void SetOverlayTimes(std::vector<float> value);
    int32_t GetDesiredOverlay() const;
    void SetDesiredOverlay(int32_t value);
    bool GetIsActive() const;
    void SetIsActive(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCCSPlayerPawn
{
private:
    void *m_ptr;

public:
    GCCSPlayerPawn(std::string ptr);
    GCCSPlayerPawn(void *ptr);

    GCCSPlayer_BulletServices GetBulletServices() const;
    void SetBulletServices(GCCSPlayer_BulletServices* value);
    GCCSPlayer_HostageServices GetHostageServices() const;
    void SetHostageServices(GCCSPlayer_HostageServices* value);
    GCCSPlayer_BuyServices GetBuyServices() const;
    void SetBuyServices(GCCSPlayer_BuyServices* value);
    GCCSPlayer_ActionTrackingServices GetActionTrackingServices() const;
    void SetActionTrackingServices(GCCSPlayer_ActionTrackingServices* value);
    GCCSPlayer_RadioServices GetRadioServices() const;
    void SetRadioServices(GCCSPlayer_RadioServices* value);
    GCCSPlayer_DamageReactServices GetDamageReactServices() const;
    void SetDamageReactServices(GCCSPlayer_DamageReactServices* value);
    uint16_t GetCharacterDefIndex() const;
    void SetCharacterDefIndex(uint16_t value);
    bool GetHasFemaleVoice() const;
    void SetHasFemaleVoice(bool value);
    CUtlString GetStrVOPrefix() const;
    void SetStrVOPrefix(CUtlString value);
    std::string GetLastPlaceName() const;
    void SetLastPlaceName(std::string value);
    bool GetInHostageResetZone() const;
    void SetInHostageResetZone(bool value);
    bool GetInBuyZone() const;
    void SetInBuyZone(bool value);
    bool GetWasInBuyZone() const;
    void SetWasInBuyZone(bool value);
    bool GetInHostageRescueZone() const;
    void SetInHostageRescueZone(bool value);
    bool GetInBombZone() const;
    void SetInBombZone(bool value);
    bool GetWasInHostageRescueZone() const;
    void SetWasInHostageRescueZone(bool value);
    int32_t GetRetakesOffering() const;
    void SetRetakesOffering(int32_t value);
    int32_t GetRetakesOfferingCard() const;
    void SetRetakesOfferingCard(int32_t value);
    bool GetRetakesHasDefuseKit() const;
    void SetRetakesHasDefuseKit(bool value);
    bool GetRetakesMVPLastRound() const;
    void SetRetakesMVPLastRound(bool value);
    int32_t GetRetakesMVPBoostItem() const;
    void SetRetakesMVPBoostItem(int32_t value);
    loadout_slot_t GetRetakesMVPBoostExtraUtility() const;
    void SetRetakesMVPBoostExtraUtility(loadout_slot_t value);
    float GetLandingTimeSeconds() const;
    void SetLandingTimeSeconds(float value);
    QAngle GetAimPunchAngle() const;
    void SetAimPunchAngle(QAngle value);
    QAngle GetAimPunchAngleVel() const;
    void SetAimPunchAngleVel(QAngle value);
    int32_t GetAimPunchTickBase() const;
    void SetAimPunchTickBase(int32_t value);
    float GetAimPunchTickFraction() const;
    void SetAimPunchTickFraction(float value);
    std::vector<QAngle> GetAimPunchCache() const;
    void SetAimPunchCache(std::vector<QAngle> value);
    bool GetIsBuyMenuOpen() const;
    void SetIsBuyMenuOpen(bool value);
    bool GetLastHeadBoneTransformIsValid() const;
    void SetLastHeadBoneTransformIsValid(bool value);
    bool GetOnGroundLastTick() const;
    void SetOnGroundLastTick(bool value);
    int32_t GetPlayerLocked() const;
    void SetPlayerLocked(int32_t value);
    bool GetNextSprayDecalTimeExpedited() const;
    void SetNextSprayDecalTimeExpedited(bool value);
    int32_t GetRagdollDamageBone() const;
    void SetRagdollDamageBone(int32_t value);
    Vector GetRagdollDamageForce() const;
    void SetRagdollDamageForce(Vector value);
    Vector GetRagdollDamagePosition() const;
    void SetRagdollDamagePosition(Vector value);
    std::string GetRagdollDamageWeaponName() const;
    void SetRagdollDamageWeaponName(std::string value);
    bool GetRagdollDamageHeadshot() const;
    void SetRagdollDamageHeadshot(bool value);
    Vector GetRagdollServerOrigin() const;
    void SetRagdollServerOrigin(Vector value);
    GCEconItemView GetEconGloves() const;
    void SetEconGloves(GCEconItemView value);
    uint8_t GetEconGlovesChanged() const;
    void SetEconGlovesChanged(uint8_t value);
    QAngle GetDeathEyeAngles() const;
    void SetDeathEyeAngles(QAngle value);
    bool GetSkipOneHeadConstraintUpdate() const;
    void SetSkipOneHeadConstraintUpdate(bool value);
    bool GetLeftHanded() const;
    void SetLeftHanded(bool value);
    float GetViewmodelOffsetX() const;
    void SetViewmodelOffsetX(float value);
    float GetViewmodelOffsetY() const;
    void SetViewmodelOffsetY(float value);
    float GetViewmodelOffsetZ() const;
    void SetViewmodelOffsetZ(float value);
    float GetViewmodelFOV() const;
    void SetViewmodelFOV(float value);
    bool GetIsWalking() const;
    void SetIsWalking(bool value);
    float GetLastGivenDefuserTime() const;
    void SetLastGivenDefuserTime(float value);
    float GetLastGivenBombTime() const;
    void SetLastGivenBombTime(float value);
    float GetDealtDamageToEnemyMostRecentTimestamp() const;
    void SetDealtDamageToEnemyMostRecentTimestamp(float value);
    uint32_t GetDisplayHistoryBits() const;
    void SetDisplayHistoryBits(uint32_t value);
    float GetLastAttackedTeammate() const;
    void SetLastAttackedTeammate(float value);
    bool GetResetArmorNextSpawn() const;
    void SetResetArmorNextSpawn(bool value);
    CEntityIndex GetLastKillerIndex() const;
    void SetLastKillerIndex(CEntityIndex value);
    GEntitySpottedState_t GetEntitySpottedState() const;
    void SetEntitySpottedState(GEntitySpottedState_t value);
    int32_t GetSpotRules() const;
    void SetSpotRules(int32_t value);
    bool GetIsScoped() const;
    void SetIsScoped(bool value);
    bool GetResumeZoom() const;
    void SetResumeZoom(bool value);
    bool GetIsDefusing() const;
    void SetIsDefusing(bool value);
    bool GetIsGrabbingHostage() const;
    void SetIsGrabbingHostage(bool value);
    CSPlayerBlockingUseAction_t GetBlockingUseActionInProgress() const;
    void SetBlockingUseActionInProgress(CSPlayerBlockingUseAction_t value);
    bool GetInNoDefuseArea() const;
    void SetInNoDefuseArea(bool value);
    CEntityIndex GetBombSiteIndex() const;
    void SetBombSiteIndex(CEntityIndex value);
    int32_t GetWhichBombZone() const;
    void SetWhichBombZone(int32_t value);
    bool GetInBombZoneTrigger() const;
    void SetInBombZoneTrigger(bool value);
    bool GetWasInBombZoneTrigger() const;
    void SetWasInBombZoneTrigger(bool value);
    int32_t GetShotsFired() const;
    void SetShotsFired(int32_t value);
    float GetFlinchStack() const;
    void SetFlinchStack(float value);
    float GetVelocityModifier() const;
    void SetVelocityModifier(float value);
    float GetHitHeading() const;
    void SetHitHeading(float value);
    int32_t GetHitBodyPart() const;
    void SetHitBodyPart(int32_t value);
    Vector GetTotalBulletForce() const;
    void SetTotalBulletForce(Vector value);
    bool GetWaitForNoAttack() const;
    void SetWaitForNoAttack(bool value);
    float GetIgnoreLadderJumpTime() const;
    void SetIgnoreLadderJumpTime(float value);
    bool GetKilledByHeadshot() const;
    void SetKilledByHeadshot(bool value);
    int32_t GetLastHitBox() const;
    void SetLastHitBox(int32_t value);
    int32_t GetLastHealth() const;
    void SetLastHealth(int32_t value);
    GCCSBot GetBot() const;
    void SetBot(GCCSBot* value);
    bool GetBotAllowActive() const;
    void SetBotAllowActive(bool value);
    QAngle GetThirdPersonHeading() const;
    void SetThirdPersonHeading(QAngle value);
    float GetSlopeDropOffset() const;
    void SetSlopeDropOffset(float value);
    float GetSlopeDropHeight() const;
    void SetSlopeDropHeight(float value);
    Vector GetHeadConstraintOffset() const;
    void SetHeadConstraintOffset(Vector value);
    int32_t GetLastPickupPriority() const;
    void SetLastPickupPriority(int32_t value);
    float GetLastPickupPriorityTime() const;
    void SetLastPickupPriorityTime(float value);
    int32_t GetArmorValue() const;
    void SetArmorValue(int32_t value);
    uint16_t GetCurrentEquipmentValue() const;
    void SetCurrentEquipmentValue(uint16_t value);
    uint16_t GetRoundStartEquipmentValue() const;
    void SetRoundStartEquipmentValue(uint16_t value);
    uint16_t GetFreezetimeEndEquipmentValue() const;
    void SetFreezetimeEndEquipmentValue(uint16_t value);
    int32_t GetLastWeaponFireUsercmd() const;
    void SetLastWeaponFireUsercmd(int32_t value);
    float GetLastFriendlyFireDamageReductionRatio() const;
    void SetLastFriendlyFireDamageReductionRatio(float value);
    bool GetIsSpawning() const;
    void SetIsSpawning(bool value);
    int32_t GetDeathFlags() const;
    void SetDeathFlags(int32_t value);
    bool GetHasDeathInfo() const;
    void SetHasDeathInfo(bool value);
    float GetDeathInfoTime() const;
    void SetDeathInfoTime(float value);
    Vector GetDeathInfoOrigin() const;
    void SetDeathInfoOrigin(Vector value);
    std::vector<uint32_t> GetPlayerPatchEconIndices() const;
    void SetPlayerPatchEconIndices(std::vector<uint32_t> value);
    Color GetGunGameImmunityColor() const;
    void SetGunGameImmunityColor(Color value);
    bool GetGrenadeParametersStashed() const;
    void SetGrenadeParametersStashed(bool value);
    QAngle GetStashedShootAngles() const;
    void SetStashedShootAngles(QAngle value);
    Vector GetStashedGrenadeThrowPosition() const;
    void SetStashedGrenadeThrowPosition(Vector value);
    Vector GetStashedVelocity() const;
    void SetStashedVelocity(Vector value);
    std::vector<QAngle> GetShootAngleHistory() const;
    void SetShootAngleHistory(std::vector<QAngle> value);
    std::vector<Vector> GetThrowPositionHistory() const;
    void SetThrowPositionHistory(std::vector<Vector> value);
    std::vector<Vector> GetVelocityHistory() const;
    void SetVelocityHistory(std::vector<Vector> value);

    std::string ToPtr();
    bool IsValid();
};

class GCBumpMineProjectile
{
private:
    void *m_ptr;

public:
    GCBumpMineProjectile(std::string ptr);
    GCBumpMineProjectile(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCCSPlayerController
{
private:
    void *m_ptr;

public:
    GCCSPlayerController(std::string ptr);
    GCCSPlayerController(void *ptr);

    GCCSPlayerController_InGameMoneyServices GetInGameMoneyServices() const;
    void SetInGameMoneyServices(GCCSPlayerController_InGameMoneyServices* value);
    GCCSPlayerController_InventoryServices GetInventoryServices() const;
    void SetInventoryServices(GCCSPlayerController_InventoryServices* value);
    GCCSPlayerController_ActionTrackingServices GetActionTrackingServices() const;
    void SetActionTrackingServices(GCCSPlayerController_ActionTrackingServices* value);
    GCCSPlayerController_DamageServices GetDamageServices() const;
    void SetDamageServices(GCCSPlayerController_DamageServices* value);
    uint32_t GetPing() const;
    void SetPing(uint32_t value);
    bool GetHasCommunicationAbuseMute() const;
    void SetHasCommunicationAbuseMute(bool value);
    CUtlSymbolLarge GetCrosshairCodes() const;
    void SetCrosshairCodes(CUtlSymbolLarge value);
    uint8_t GetPendingTeamNum() const;
    void SetPendingTeamNum(uint8_t value);
    int32_t GetCompTeammateColor() const;
    void SetCompTeammateColor(int32_t value);
    bool GetEverPlayedOnTeam() const;
    void SetEverPlayedOnTeam(bool value);
    bool GetAttemptedToGetColor() const;
    void SetAttemptedToGetColor(bool value);
    int32_t GetTeammatePreferredColor() const;
    void SetTeammatePreferredColor(int32_t value);
    bool GetTeamChanged() const;
    void SetTeamChanged(bool value);
    bool GetInSwitchTeam() const;
    void SetInSwitchTeam(bool value);
    bool GetHasSeenJoinGame() const;
    void SetHasSeenJoinGame(bool value);
    bool GetJustBecameSpectator() const;
    void SetJustBecameSpectator(bool value);
    bool GetSwitchTeamsOnNextRoundReset() const;
    void SetSwitchTeamsOnNextRoundReset(bool value);
    bool GetRemoveAllItemsOnNextRoundReset() const;
    void SetRemoveAllItemsOnNextRoundReset(bool value);
    CUtlSymbolLarge GetClan() const;
    void SetClan(CUtlSymbolLarge value);
    std::string GetClanName() const;
    void SetClanName(std::string value);
    int32_t GetCoachingTeam() const;
    void SetCoachingTeam(int32_t value);
    uint64_t GetPlayerDominated() const;
    void SetPlayerDominated(uint64_t value);
    uint64_t GetPlayerDominatingMe() const;
    void SetPlayerDominatingMe(uint64_t value);
    int32_t GetCompetitiveRanking() const;
    void SetCompetitiveRanking(int32_t value);
    int32_t GetCompetitiveWins() const;
    void SetCompetitiveWins(int32_t value);
    int8_t GetCompetitiveRankType() const;
    void SetCompetitiveRankType(int8_t value);
    int32_t GetCompetitiveRankingPredicted_Win() const;
    void SetCompetitiveRankingPredicted_Win(int32_t value);
    int32_t GetCompetitiveRankingPredicted_Loss() const;
    void SetCompetitiveRankingPredicted_Loss(int32_t value);
    int32_t GetCompetitiveRankingPredicted_Tie() const;
    void SetCompetitiveRankingPredicted_Tie(int32_t value);
    int32_t GetEndMatchNextMapVote() const;
    void SetEndMatchNextMapVote(int32_t value);
    uint16_t GetActiveQuestId() const;
    void SetActiveQuestId(uint16_t value);
    GQuestProgress GetQuestProgressReason() const;
    void SetQuestProgressReason(GQuestProgress value);
    uint32_t GetPlayerTvControlFlags() const;
    void SetPlayerTvControlFlags(uint32_t value);
    int32_t GetDraftIndex() const;
    void SetDraftIndex(int32_t value);
    uint32_t GetMsQueuedModeDisconnectionTimestamp() const;
    void SetMsQueuedModeDisconnectionTimestamp(uint32_t value);
    uint32_t GetUiAbandonRecordedReason() const;
    void SetUiAbandonRecordedReason(uint32_t value);
    bool GetCannotBeKicked() const;
    void SetCannotBeKicked(bool value);
    bool GetEverFullyConnected() const;
    void SetEverFullyConnected(bool value);
    bool GetAbandonAllowsSurrender() const;
    void SetAbandonAllowsSurrender(bool value);
    bool GetAbandonOffersInstantSurrender() const;
    void SetAbandonOffersInstantSurrender(bool value);
    bool GetDisconnection1MinWarningPrinted() const;
    void SetDisconnection1MinWarningPrinted(bool value);
    bool GetScoreReported() const;
    void SetScoreReported(bool value);
    int32_t GetDisconnectionTick() const;
    void SetDisconnectionTick(int32_t value);
    bool GetControllingBot() const;
    void SetControllingBot(bool value);
    bool GetHasControlledBotThisRound() const;
    void SetHasControlledBotThisRound(bool value);
    bool GetHasBeenControlledByPlayerThisRound() const;
    void SetHasBeenControlledByPlayerThisRound(bool value);
    int32_t GetBotsControlledThisRound() const;
    void SetBotsControlledThisRound(int32_t value);
    bool GetCanControlObservedBot() const;
    void SetCanControlObservedBot(bool value);
    GCCSPlayerPawn GetPlayerPawn() const;
    void SetPlayerPawn(GCCSPlayerPawn* value);
    GCCSObserverPawn GetObserverPawn() const;
    void SetObserverPawn(GCCSObserverPawn* value);
    int32_t GetDesiredObserverMode() const;
    void SetDesiredObserverMode(int32_t value);
    GCEntityInstance GetDesiredObserverTarget() const;
    void SetDesiredObserverTarget(GCEntityInstance* value);
    bool GetPawnIsAlive() const;
    void SetPawnIsAlive(bool value);
    uint32_t GetPawnHealth() const;
    void SetPawnHealth(uint32_t value);
    int32_t GetPawnArmor() const;
    void SetPawnArmor(int32_t value);
    bool GetPawnHasDefuser() const;
    void SetPawnHasDefuser(bool value);
    bool GetPawnHasHelmet() const;
    void SetPawnHasHelmet(bool value);
    uint16_t GetPawnCharacterDefIndex() const;
    void SetPawnCharacterDefIndex(uint16_t value);
    int32_t GetPawnLifetimeStart() const;
    void SetPawnLifetimeStart(int32_t value);
    int32_t GetPawnLifetimeEnd() const;
    void SetPawnLifetimeEnd(int32_t value);
    int32_t GetPawnBotDifficulty() const;
    void SetPawnBotDifficulty(int32_t value);
    GCCSPlayerController GetOriginalControllerOfCurrentPawn() const;
    void SetOriginalControllerOfCurrentPawn(GCCSPlayerController* value);
    int32_t GetScore() const;
    void SetScore(int32_t value);
    int32_t GetRoundScore() const;
    void SetRoundScore(int32_t value);
    int32_t GetRoundsWon() const;
    void SetRoundsWon(int32_t value);
    std::vector<EKillTypes_t> GetKills() const;
    void SetKills(std::vector<EKillTypes_t> value);
    bool GetMvpNoMusic() const;
    void SetMvpNoMusic(bool value);
    int32_t GetMvpReason() const;
    void SetMvpReason(int32_t value);
    int32_t GetMusicKitID() const;
    void SetMusicKitID(int32_t value);
    int32_t GetMusicKitMVPs() const;
    void SetMusicKitMVPs(int32_t value);
    int32_t GetMVPs() const;
    void SetMVPs(int32_t value);
    int32_t GetUpdateCounter() const;
    void SetUpdateCounter(int32_t value);
    float GetSmoothedPing() const;
    void SetSmoothedPing(float value);
    GIntervalTimer GetLastHeldVoteTimer() const;
    void SetLastHeldVoteTimer(GIntervalTimer value);
    bool GetShowHints() const;
    void SetShowHints(bool value);
    int32_t GetNextTimeCheck() const;
    void SetNextTimeCheck(int32_t value);
    bool GetJustDidTeamKill() const;
    void SetJustDidTeamKill(bool value);
    bool GetPunishForTeamKill() const;
    void SetPunishForTeamKill(bool value);
    bool GetGaveTeamDamageWarning() const;
    void SetGaveTeamDamageWarning(bool value);
    bool GetGaveTeamDamageWarningThisRound() const;
    void SetGaveTeamDamageWarningThisRound(bool value);
    double GetDblLastReceivedPacketPlatFloatTime() const;
    void SetDblLastReceivedPacketPlatFloatTime(double value);
    uint32_t GetSuspiciousHitCount() const;
    void SetSuspiciousHitCount(uint32_t value);
    uint32_t GetNonSuspiciousHitStreak() const;
    void SetNonSuspiciousHitStreak(uint32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCChicken
{
private:
    void *m_ptr;

public:
    GCChicken(std::string ptr);
    GCChicken(void *ptr);

    GCAttributeContainer GetAttributeManager() const;
    void SetAttributeManager(GCAttributeContainer value);
    CUtlStringToken GetActivityFinishedTag() const;
    void SetActivityFinishedTag(CUtlStringToken value);
    GCountdownTimer GetUpdateTimer() const;
    void SetUpdateTimer(GCountdownTimer value);
    Vector GetStuckAnchor() const;
    void SetStuckAnchor(Vector value);
    GCountdownTimer GetStuckTimer() const;
    void SetStuckTimer(GCountdownTimer value);
    GCountdownTimer GetCollisionStuckTimer() const;
    void SetCollisionStuckTimer(GCountdownTimer value);
    bool GetIsOnGround() const;
    void SetIsOnGround(bool value);
    Vector GetFallVelocity() const;
    void SetFallVelocity(Vector value);
    ChickenActivity GetDesiredActivity() const;
    void SetDesiredActivity(ChickenActivity value);
    ChickenActivity GetCurrentActivity() const;
    void SetCurrentActivity(ChickenActivity value);
    GCountdownTimer GetActivityTimer() const;
    void SetActivityTimer(GCountdownTimer value);
    float GetTurnRate() const;
    void SetTurnRate(float value);
    GCBaseEntity GetFleeFrom() const;
    void SetFleeFrom(GCBaseEntity* value);
    GCountdownTimer GetMoveRateThrottleTimer() const;
    void SetMoveRateThrottleTimer(GCountdownTimer value);
    GCountdownTimer GetStartleTimer() const;
    void SetStartleTimer(GCountdownTimer value);
    GCountdownTimer GetVocalizeTimer() const;
    void SetVocalizeTimer(GCountdownTimer value);
    bool GetJumpedThisFrame() const;
    void SetJumpedThisFrame(bool value);
    GCCSPlayerPawn GetLeader() const;
    void SetLeader(GCCSPlayerPawn* value);
    GCountdownTimer GetReuseTimer() const;
    void SetReuseTimer(GCountdownTimer value);
    bool GetHasBeenUsed() const;
    void SetHasBeenUsed(bool value);
    GCountdownTimer GetJumpTimer() const;
    void SetJumpTimer(GCountdownTimer value);
    float GetLastJumpTime() const;
    void SetLastJumpTime(float value);
    bool GetInJump() const;
    void SetInJump(bool value);
    bool GetIsWaitingForLeader() const;
    void SetIsWaitingForLeader(bool value);
    GCountdownTimer GetRepathTimer() const;
    void SetRepathTimer(GCountdownTimer value);
    GCountdownTimer GetInhibitDoorTimer() const;
    void SetInhibitDoorTimer(GCountdownTimer value);
    GCountdownTimer GetInhibitObstacleAvoidanceTimer() const;
    void SetInhibitObstacleAvoidanceTimer(GCountdownTimer value);
    Vector GetPathGoal() const;
    void SetPathGoal(Vector value);
    GCountdownTimer GetFollowMinuteTimer() const;
    void SetFollowMinuteTimer(GCountdownTimer value);
    Vector GetLastEggPoopPosition() const;
    void SetLastEggPoopPosition(Vector value);
    GCountdownTimer GetBlockDirectionTimer() const;
    void SetBlockDirectionTimer(GCountdownTimer value);

    std::string ToPtr();
    bool IsValid();
};

class GCInfoInstructorHintBombTargetA
{
private:
    void *m_ptr;

public:
    GCInfoInstructorHintBombTargetA(std::string ptr);
    GCInfoInstructorHintBombTargetA(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCWeaponAWP
{
private:
    void *m_ptr;

public:
    GCWeaponAWP(std::string ptr);
    GCWeaponAWP(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCCSObserverPawn
{
private:
    void *m_ptr;

public:
    GCCSObserverPawn(std::string ptr);
    GCCSObserverPawn(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCPostProcessingVolume
{
private:
    void *m_ptr;

public:
    GCPostProcessingVolume(std::string ptr);
    GCPostProcessingVolume(void *ptr);

    float GetFadeDuration() const;
    void SetFadeDuration(float value);
    float GetMinLogExposure() const;
    void SetMinLogExposure(float value);
    float GetMaxLogExposure() const;
    void SetMaxLogExposure(float value);
    float GetMinExposure() const;
    void SetMinExposure(float value);
    float GetMaxExposure() const;
    void SetMaxExposure(float value);
    float GetExposureCompensation() const;
    void SetExposureCompensation(float value);
    float GetExposureFadeSpeedUp() const;
    void SetExposureFadeSpeedUp(float value);
    float GetExposureFadeSpeedDown() const;
    void SetExposureFadeSpeedDown(float value);
    float GetTonemapEVSmoothingRange() const;
    void SetTonemapEVSmoothingRange(float value);
    bool GetMaster() const;
    void SetMaster(bool value);
    bool GetExposureControl() const;
    void SetExposureControl(bool value);
    float GetRate() const;
    void SetRate(float value);
    float GetTonemapPercentTarget() const;
    void SetTonemapPercentTarget(float value);
    float GetTonemapPercentBrightPixels() const;
    void SetTonemapPercentBrightPixels(float value);
    float GetTonemapMinAvgLum() const;
    void SetTonemapMinAvgLum(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCSpotlightEnd
{
private:
    void *m_ptr;

public:
    GCSpotlightEnd(std::string ptr);
    GCSpotlightEnd(void *ptr);

    float GetLightScale() const;
    void SetLightScale(float value);
    float GetRadius() const;
    void SetRadius(float value);
    Vector GetSpotlightDir() const;
    void SetSpotlightDir(Vector value);
    Vector GetSpotlightOrg() const;
    void SetSpotlightOrg(Vector value);

    std::string ToPtr();
    bool IsValid();
};

class GCGamePlayerZone
{
private:
    void *m_ptr;

public:
    GCGamePlayerZone(std::string ptr);
    GCGamePlayerZone(void *ptr);

    GCEntityIOOutput GetOnPlayerInZone() const;
    void SetOnPlayerInZone(GCEntityIOOutput value);
    GCEntityIOOutput GetOnPlayerOutZone() const;
    void SetOnPlayerOutZone(GCEntityIOOutput value);

    std::string ToPtr();
    bool IsValid();
};

class GCSensorGrenade
{
private:
    void *m_ptr;

public:
    GCSensorGrenade(std::string ptr);
    GCSensorGrenade(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCCSGO_WingmanIntroTerroristPosition
{
private:
    void *m_ptr;

public:
    GCCSGO_WingmanIntroTerroristPosition(std::string ptr);
    GCCSGO_WingmanIntroTerroristPosition(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCTriggerDetectExplosion
{
private:
    void *m_ptr;

public:
    GCTriggerDetectExplosion(std::string ptr);
    GCTriggerDetectExplosion(void *ptr);

    GCEntityIOOutput GetOnDetectedExplosion() const;
    void SetOnDetectedExplosion(GCEntityIOOutput value);

    std::string ToPtr();
    bool IsValid();
};

class GCSoundStackSave
{
private:
    void *m_ptr;

public:
    GCSoundStackSave(std::string ptr);
    GCSoundStackSave(void *ptr);

    CUtlSymbolLarge GetStackName() const;
    void SetStackName(CUtlSymbolLarge value);

    std::string ToPtr();
    bool IsValid();
};

class GConstraintSoundInfo
{
private:
    void *m_ptr;

public:
    GConstraintSoundInfo(std::string ptr);
    GConstraintSoundInfo(void *ptr);

    GVelocitySampler GetSampler() const;
    void SetSampler(GVelocitySampler value);
    GSimpleConstraintSoundProfile GetSoundProfile() const;
    void SetSoundProfile(GSimpleConstraintSoundProfile value);
    Vector GetForwardAxis() const;
    void SetForwardAxis(Vector value);
    CUtlSymbolLarge GetTravelSoundFwd() const;
    void SetTravelSoundFwd(CUtlSymbolLarge value);
    CUtlSymbolLarge GetTravelSoundBack() const;
    void SetTravelSoundBack(CUtlSymbolLarge value);
    std::vector<CUtlSymbolLarge> GetReversalSounds() const;
    void SetReversalSounds(std::vector<CUtlSymbolLarge> value);
    bool GetPlayTravelSound() const;
    void SetPlayTravelSound(bool value);
    bool GetPlayReversalSound() const;
    void SetPlayReversalSound(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCSingleplayRules
{
private:
    void *m_ptr;

public:
    GCSingleplayRules(std::string ptr);
    GCSingleplayRules(void *ptr);

    bool GetSinglePlayerGameEnding() const;
    void SetSinglePlayerGameEnding(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCFilterProximity
{
private:
    void *m_ptr;

public:
    GCFilterProximity(std::string ptr);
    GCFilterProximity(void *ptr);

    float GetRadius() const;
    void SetRadius(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCEconWearable
{
private:
    void *m_ptr;

public:
    GCEconWearable(std::string ptr);
    GCEconWearable(void *ptr);

    int32_t GetForceSkin() const;
    void SetForceSkin(int32_t value);
    bool GetAlwaysAllow() const;
    void SetAlwaysAllow(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCCSPlayer_ItemServices
{
private:
    void *m_ptr;

public:
    GCCSPlayer_ItemServices(std::string ptr);
    GCCSPlayer_ItemServices(void *ptr);

    bool GetHasDefuser() const;
    void SetHasDefuser(bool value);
    bool GetHasHelmet() const;
    void SetHasHelmet(bool value);
    bool GetHasHeavyArmor() const;
    void SetHasHeavyArmor(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCFuncConveyor
{
private:
    void *m_ptr;

public:
    GCFuncConveyor(std::string ptr);
    GCFuncConveyor(void *ptr);

    CUtlSymbolLarge GetConveyorModels() const;
    void SetConveyorModels(CUtlSymbolLarge value);
    float GetTransitionDurationSeconds() const;
    void SetTransitionDurationSeconds(float value);
    QAngle GetMoveEntitySpace() const;
    void SetMoveEntitySpace(QAngle value);
    Vector GetMoveDirEntitySpace() const;
    void SetMoveDirEntitySpace(Vector value);
    float GetTargetSpeed() const;
    void SetTargetSpeed(float value);
    int32_t GetTransitionDurationTicks() const;
    void SetTransitionDurationTicks(int32_t value);
    float GetTransitionStartSpeed() const;
    void SetTransitionStartSpeed(float value);
    std::vector<GCBaseEntity*> GetConveyorModels1() const;
    void SetConveyorModels1(std::vector<GCBaseEntity*> value);

    std::string ToPtr();
    bool IsValid();
};

class GCWeaponMag7
{
private:
    void *m_ptr;

public:
    GCWeaponMag7(std::string ptr);
    GCWeaponMag7(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCMathCounter
{
private:
    void *m_ptr;

public:
    GCMathCounter(std::string ptr);
    GCMathCounter(void *ptr);

    float GetMin() const;
    void SetMin(float value);
    float GetMax() const;
    void SetMax(float value);
    bool GetHitMin() const;
    void SetHitMin(bool value);
    bool GetHitMax() const;
    void SetHitMax(bool value);
    bool GetDisabled() const;
    void SetDisabled(bool value);
    GCEntityIOOutput GetOnHitMin() const;
    void SetOnHitMin(GCEntityIOOutput value);
    GCEntityIOOutput GetOnHitMax() const;
    void SetOnHitMax(GCEntityIOOutput value);
    GCEntityIOOutput GetOnChangedFromMin() const;
    void SetOnChangedFromMin(GCEntityIOOutput value);
    GCEntityIOOutput GetOnChangedFromMax() const;
    void SetOnChangedFromMax(GCEntityIOOutput value);

    std::string ToPtr();
    bool IsValid();
};

class GCInfoWorldLayer
{
private:
    void *m_ptr;

public:
    GCInfoWorldLayer(std::string ptr);
    GCInfoWorldLayer(void *ptr);

    GCEntityIOOutput GetOutputOnEntitiesSpawned() const;
    void SetOutputOnEntitiesSpawned(GCEntityIOOutput value);
    CUtlSymbolLarge GetWorldName() const;
    void SetWorldName(CUtlSymbolLarge value);
    CUtlSymbolLarge GetLayerName() const;
    void SetLayerName(CUtlSymbolLarge value);
    bool GetWorldLayerVisible() const;
    void SetWorldLayerVisible(bool value);
    bool GetEntitiesSpawned() const;
    void SetEntitiesSpawned(bool value);
    bool GetCreateAsChildSpawnGroup() const;
    void SetCreateAsChildSpawnGroup(bool value);
    uint32_t GetLayerSpawnGroup() const;
    void SetLayerSpawnGroup(uint32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCRectLight
{
private:
    void *m_ptr;

public:
    GCRectLight(std::string ptr);
    GCRectLight(void *ptr);

    bool GetShowLight() const;
    void SetShowLight(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCCSGO_TeamSelectCharacterPosition
{
private:
    void *m_ptr;

public:
    GCCSGO_TeamSelectCharacterPosition(std::string ptr);
    GCCSGO_TeamSelectCharacterPosition(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCBaseDoor
{
private:
    void *m_ptr;

public:
    GCBaseDoor(std::string ptr);
    GCBaseDoor(void *ptr);

    QAngle GetMoveEntitySpace() const;
    void SetMoveEntitySpace(QAngle value);
    Vector GetMoveDirParentSpace() const;
    void SetMoveDirParentSpace(Vector value);
    Glocksound_t GetLs() const;
    void SetLs(Glocksound_t value);
    bool GetForceClosed() const;
    void SetForceClosed(bool value);
    bool GetDoorGroup() const;
    void SetDoorGroup(bool value);
    bool GetLocked() const;
    void SetLocked(bool value);
    bool GetIgnoreDebris() const;
    void SetIgnoreDebris(bool value);
    FuncDoorSpawnPos_t GetSpawnPosition() const;
    void SetSpawnPosition(FuncDoorSpawnPos_t value);
    float GetBlockDamage() const;
    void SetBlockDamage(float value);
    CUtlSymbolLarge GetNoiseMoving() const;
    void SetNoiseMoving(CUtlSymbolLarge value);
    CUtlSymbolLarge GetNoiseArrived() const;
    void SetNoiseArrived(CUtlSymbolLarge value);
    CUtlSymbolLarge GetNoiseMovingClosed() const;
    void SetNoiseMovingClosed(CUtlSymbolLarge value);
    CUtlSymbolLarge GetNoiseArrivedClosed() const;
    void SetNoiseArrivedClosed(CUtlSymbolLarge value);
    CUtlSymbolLarge GetChainTarget() const;
    void SetChainTarget(CUtlSymbolLarge value);
    GCEntityIOOutput GetOnBlockedClosing() const;
    void SetOnBlockedClosing(GCEntityIOOutput value);
    GCEntityIOOutput GetOnBlockedOpening() const;
    void SetOnBlockedOpening(GCEntityIOOutput value);
    GCEntityIOOutput GetOnUnblockedClosing() const;
    void SetOnUnblockedClosing(GCEntityIOOutput value);
    GCEntityIOOutput GetOnUnblockedOpening() const;
    void SetOnUnblockedOpening(GCEntityIOOutput value);
    GCEntityIOOutput GetOnFullyClosed() const;
    void SetOnFullyClosed(GCEntityIOOutput value);
    GCEntityIOOutput GetOnFullyOpen() const;
    void SetOnFullyOpen(GCEntityIOOutput value);
    GCEntityIOOutput GetOnClose() const;
    void SetOnClose(GCEntityIOOutput value);
    GCEntityIOOutput GetOnOpen() const;
    void SetOnOpen(GCEntityIOOutput value);
    GCEntityIOOutput GetOnLockedUse() const;
    void SetOnLockedUse(GCEntityIOOutput value);
    bool GetLoopMoveSound() const;
    void SetLoopMoveSound(bool value);
    bool GetCreateNavObstacle() const;
    void SetCreateNavObstacle(bool value);
    bool GetIsChaining() const;
    void SetIsChaining(bool value);
    bool GetIsUsable() const;
    void SetIsUsable(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCLogicLineToEntity
{
private:
    void *m_ptr;

public:
    GCLogicLineToEntity(std::string ptr);
    GCLogicLineToEntity(void *ptr);

    CUtlSymbolLarge GetSourceName() const;
    void SetSourceName(CUtlSymbolLarge value);
    GCBaseEntity GetStartEntity() const;
    void SetStartEntity(GCBaseEntity* value);
    GCBaseEntity GetEndEntity() const;
    void SetEndEntity(GCBaseEntity* value);

    std::string ToPtr();
    bool IsValid();
};

class GCRetakeGameRules
{
private:
    void *m_ptr;

public:
    GCRetakeGameRules(std::string ptr);
    GCRetakeGameRules(void *ptr);

    int32_t GetMatchSeed() const;
    void SetMatchSeed(int32_t value);
    bool GetBlockersPresent() const;
    void SetBlockersPresent(bool value);
    bool GetRoundInProgress() const;
    void SetRoundInProgress(bool value);
    int32_t GetFirstSecondHalfRound() const;
    void SetFirstSecondHalfRound(int32_t value);
    int32_t GetBombSite() const;
    void SetBombSite(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCCSGameRulesProxy
{
private:
    void *m_ptr;

public:
    GCCSGameRulesProxy(std::string ptr);
    GCCSGameRulesProxy(void *ptr);

    GCCSGameRules GetGameRules() const;
    void SetGameRules(GCCSGameRules* value);

    std::string ToPtr();
    bool IsValid();
};

class GCEnvCubemapBox
{
private:
    void *m_ptr;

public:
    GCEnvCubemapBox(std::string ptr);
    GCEnvCubemapBox(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCCSPlayer_DamageReactServices
{
private:
    void *m_ptr;

public:
    GCCSPlayer_DamageReactServices(std::string ptr);
    GCCSPlayer_DamageReactServices(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GServerAuthoritativeWeaponSlot_t
{
private:
    void *m_ptr;

public:
    GServerAuthoritativeWeaponSlot_t(std::string ptr);
    GServerAuthoritativeWeaponSlot_t(void *ptr);

    uint16_t GetClass() const;
    void SetClass(uint16_t value);
    uint16_t GetSlot() const;
    void SetSlot(uint16_t value);
    uint16_t GetItemDefIdx() const;
    void SetItemDefIdx(uint16_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCCSGameRules
{
private:
    void *m_ptr;

public:
    GCCSGameRules(std::string ptr);
    GCCSGameRules(void *ptr);

    bool GetFreezePeriod() const;
    void SetFreezePeriod(bool value);
    bool GetWarmupPeriod() const;
    void SetWarmupPeriod(bool value);
    bool GetServerPaused() const;
    void SetServerPaused(bool value);
    bool GetTerroristTimeOutActive() const;
    void SetTerroristTimeOutActive(bool value);
    bool GetCTTimeOutActive() const;
    void SetCTTimeOutActive(bool value);
    float GetTerroristTimeOutRemaining() const;
    void SetTerroristTimeOutRemaining(float value);
    float GetCTTimeOutRemaining() const;
    void SetCTTimeOutRemaining(float value);
    int32_t GetTerroristTimeOuts() const;
    void SetTerroristTimeOuts(int32_t value);
    int32_t GetCTTimeOuts() const;
    void SetCTTimeOuts(int32_t value);
    bool GetTechnicalTimeOut() const;
    void SetTechnicalTimeOut(bool value);
    bool GetMatchWaitingForResume() const;
    void SetMatchWaitingForResume(bool value);
    int32_t GetRoundTime() const;
    void SetRoundTime(int32_t value);
    float GetMatchStartTime() const;
    void SetMatchStartTime(float value);
    bool GetGameRestart() const;
    void SetGameRestart(bool value);
    float GetGameStartTime() const;
    void SetGameStartTime(float value);
    float GetTimeUntilNextPhaseStarts() const;
    void SetTimeUntilNextPhaseStarts(float value);
    int32_t GetGamePhase() const;
    void SetGamePhase(int32_t value);
    int32_t GetTotalRoundsPlayed() const;
    void SetTotalRoundsPlayed(int32_t value);
    int32_t GetRoundsPlayedThisPhase() const;
    void SetRoundsPlayedThisPhase(int32_t value);
    int32_t GetOvertimePlaying() const;
    void SetOvertimePlaying(int32_t value);
    int32_t GetHostagesRemaining() const;
    void SetHostagesRemaining(int32_t value);
    bool GetAnyHostageReached() const;
    void SetAnyHostageReached(bool value);
    bool GetMapHasBombTarget() const;
    void SetMapHasBombTarget(bool value);
    bool GetMapHasRescueZone() const;
    void SetMapHasRescueZone(bool value);
    bool GetMapHasBuyZone() const;
    void SetMapHasBuyZone(bool value);
    bool GetIsQueuedMatchmaking() const;
    void SetIsQueuedMatchmaking(bool value);
    int32_t GetQueuedMatchmakingMode() const;
    void SetQueuedMatchmakingMode(int32_t value);
    bool GetIsValveDS() const;
    void SetIsValveDS(bool value);
    bool GetLogoMap() const;
    void SetLogoMap(bool value);
    bool GetPlayAllStepSoundsOnServer() const;
    void SetPlayAllStepSoundsOnServer(bool value);
    int32_t GetSpectatorSlotCount() const;
    void SetSpectatorSlotCount(int32_t value);
    int32_t GetMatchDevice() const;
    void SetMatchDevice(int32_t value);
    bool GetHasMatchStarted() const;
    void SetHasMatchStarted(bool value);
    int32_t GetNextMapInMapgroup() const;
    void SetNextMapInMapgroup(int32_t value);
    std::string GetTournamentEventName() const;
    void SetTournamentEventName(std::string value);
    std::string GetTournamentEventStage() const;
    void SetTournamentEventStage(std::string value);
    std::string GetMatchStatTxt() const;
    void SetMatchStatTxt(std::string value);
    std::string GetTournamentPredictionsTxt() const;
    void SetTournamentPredictionsTxt(std::string value);
    int32_t GetTournamentPredictionsPct() const;
    void SetTournamentPredictionsPct(int32_t value);
    bool GetIsDroppingItems() const;
    void SetIsDroppingItems(bool value);
    bool GetIsQuestEligible() const;
    void SetIsQuestEligible(bool value);
    bool GetIsHltvActive() const;
    void SetIsHltvActive(bool value);
    std::vector<uint16_t> GetProhibitedItemIndices() const;
    void SetProhibitedItemIndices(std::vector<uint16_t> value);
    std::vector<uint32_t> GetTournamentActiveCasterAccounts() const;
    void SetTournamentActiveCasterAccounts(std::vector<uint32_t> value);
    int32_t GetNumBestOfMaps() const;
    void SetNumBestOfMaps(int32_t value);
    int32_t GetHalloweenMaskListSeed() const;
    void SetHalloweenMaskListSeed(int32_t value);
    bool GetBombDropped() const;
    void SetBombDropped(bool value);
    bool GetBombPlanted() const;
    void SetBombPlanted(bool value);
    int32_t GetRoundWinStatus() const;
    void SetRoundWinStatus(int32_t value);
    int32_t GetRoundWinReason() const;
    void SetRoundWinReason(int32_t value);
    bool GetTCantBuy() const;
    void SetTCantBuy(bool value);
    bool GetCTCantBuy() const;
    void SetCTCantBuy(bool value);
    std::vector<int32_t> GetMatchStats_RoundResults() const;
    void SetMatchStats_RoundResults(std::vector<int32_t> value);
    std::vector<int32_t> GetMatchStats_PlayersAlive_CT() const;
    void SetMatchStats_PlayersAlive_CT(std::vector<int32_t> value);
    std::vector<int32_t> GetMatchStats_PlayersAlive_T() const;
    void SetMatchStats_PlayersAlive_T(std::vector<int32_t> value);
    std::vector<float> GetTeamRespawnWaveTimes() const;
    void SetTeamRespawnWaveTimes(std::vector<float> value);
    int32_t GetServerQuestID() const;
    void SetServerQuestID(int32_t value);
    Vector GetMinimapMins() const;
    void SetMinimapMins(Vector value);
    Vector GetMinimapMaxs() const;
    void SetMinimapMaxs(Vector value);
    std::vector<float> GetMinimapVerticalSectionHeights() const;
    void SetMinimapVerticalSectionHeights(std::vector<float> value);
    bool GetSpawnedTerrorHuntHeavy() const;
    void SetSpawnedTerrorHuntHeavy(bool value);
    std::vector<int32_t> GetEndMatchMapGroupVoteTypes() const;
    void SetEndMatchMapGroupVoteTypes(std::vector<int32_t> value);
    std::vector<int32_t> GetEndMatchMapGroupVoteOptions() const;
    void SetEndMatchMapGroupVoteOptions(std::vector<int32_t> value);
    int32_t GetEndMatchMapVoteWinner() const;
    void SetEndMatchMapVoteWinner(int32_t value);
    int32_t GetNumConsecutiveCTLoses() const;
    void SetNumConsecutiveCTLoses(int32_t value);
    int32_t GetNumConsecutiveTerroristLoses() const;
    void SetNumConsecutiveTerroristLoses(int32_t value);
    bool GetHasHostageBeenTouched() const;
    void SetHasHostageBeenTouched(bool value);
    bool GetLevelInitialized() const;
    void SetLevelInitialized(bool value);
    int32_t GetTotalRoundsPlayed1() const;
    void SetTotalRoundsPlayed1(int32_t value);
    int32_t GetUnBalancedRounds() const;
    void SetUnBalancedRounds(int32_t value);
    bool GetEndMatchOnRoundReset() const;
    void SetEndMatchOnRoundReset(bool value);
    bool GetEndMatchOnThink() const;
    void SetEndMatchOnThink(bool value);
    int32_t GetFreezeTime() const;
    void SetFreezeTime(int32_t value);
    int32_t GetNumTerrorist() const;
    void SetNumTerrorist(int32_t value);
    int32_t GetNumCT() const;
    void SetNumCT(int32_t value);
    int32_t GetNumSpawnableTerrorist() const;
    void SetNumSpawnableTerrorist(int32_t value);
    int32_t GetNumSpawnableCT() const;
    void SetNumSpawnableCT(int32_t value);
    std::vector<int32> GetSelectedHostageSpawnIndices() const;
    void SetSelectedHostageSpawnIndices(std::vector<int32> value);
    int32_t GetSpawnPointsRandomSeed() const;
    void SetSpawnPointsRandomSeed(int32_t value);
    bool GetFirstConnected() const;
    void SetFirstConnected(bool value);
    bool GetCompleteReset() const;
    void SetCompleteReset(bool value);
    bool GetPickNewTeamsOnReset() const;
    void SetPickNewTeamsOnReset(bool value);
    bool GetScrambleTeamsOnRestart() const;
    void SetScrambleTeamsOnRestart(bool value);
    bool GetSwapTeamsOnRestart() const;
    void SetSwapTeamsOnRestart(bool value);
    std::vector<int32> GetEndMatchTiedVotes() const;
    void SetEndMatchTiedVotes(std::vector<int32> value);
    bool GetNeedToAskPlayersForContinueVote() const;
    void SetNeedToAskPlayersForContinueVote(bool value);
    uint32_t GetNumQueuedMatchmakingAccounts() const;
    void SetNumQueuedMatchmakingAccounts(uint32_t value);
    float GetAvgPlayerRank() const;
    void SetAvgPlayerRank(float value);
    std::string GetQueuedMatchmakingReservationString() const;
    void SetQueuedMatchmakingReservationString(std::string value);
    uint32_t GetNumTotalTournamentDrops() const;
    void SetNumTotalTournamentDrops(uint32_t value);
    uint32_t GetNumSpectatorsCountMax() const;
    void SetNumSpectatorsCountMax(uint32_t value);
    uint32_t GetNumSpectatorsCountMaxTV() const;
    void SetNumSpectatorsCountMaxTV(uint32_t value);
    uint32_t GetNumSpectatorsCountMaxLnk() const;
    void SetNumSpectatorsCountMaxLnk(uint32_t value);
    bool GetForceTeamChangeSilent() const;
    void SetForceTeamChangeSilent(bool value);
    bool GetLoadingRoundBackupData() const;
    void SetLoadingRoundBackupData(bool value);
    int32_t GetMatchInfoShowType() const;
    void SetMatchInfoShowType(int32_t value);
    float GetMatchInfoDecidedTime() const;
    void SetMatchInfoDecidedTime(float value);
    int32_t GetMTeamDMLastWinningTeamNumber() const;
    void SetMTeamDMLastWinningTeamNumber(int32_t value);
    float GetMTeamDMLastThinkTime() const;
    void SetMTeamDMLastThinkTime(float value);
    float GetTeamDMLastAnnouncementTime() const;
    void SetTeamDMLastAnnouncementTime(float value);
    int32_t GetAccountTerrorist() const;
    void SetAccountTerrorist(int32_t value);
    int32_t GetAccountCT() const;
    void SetAccountCT(int32_t value);
    int32_t GetSpawnPointCount_Terrorist() const;
    void SetSpawnPointCount_Terrorist(int32_t value);
    int32_t GetSpawnPointCount_CT() const;
    void SetSpawnPointCount_CT(int32_t value);
    int32_t GetMaxNumTerrorists() const;
    void SetMaxNumTerrorists(int32_t value);
    int32_t GetMaxNumCTs() const;
    void SetMaxNumCTs(int32_t value);
    int32_t GetLoserBonusMostRecentTeam() const;
    void SetLoserBonusMostRecentTeam(int32_t value);
    float GetTmNextPeriodicThink() const;
    void SetTmNextPeriodicThink(float value);
    bool GetVoiceWonMatchBragFired() const;
    void SetVoiceWonMatchBragFired(bool value);
    float GetWarmupNextChatNoticeTime() const;
    void SetWarmupNextChatNoticeTime(float value);
    int32_t GetHostagesRescued() const;
    void SetHostagesRescued(int32_t value);
    int32_t GetHostagesTouched() const;
    void SetHostagesTouched(int32_t value);
    float GetNextHostageAnnouncement() const;
    void SetNextHostageAnnouncement(float value);
    bool GetNoTerroristsKilled() const;
    void SetNoTerroristsKilled(bool value);
    bool GetNoCTsKilled() const;
    void SetNoCTsKilled(bool value);
    bool GetNoEnemiesKilled() const;
    void SetNoEnemiesKilled(bool value);
    bool GetCanDonateWeapons() const;
    void SetCanDonateWeapons(bool value);
    float GetFirstKillTime() const;
    void SetFirstKillTime(float value);
    float GetFirstBloodTime() const;
    void SetFirstBloodTime(float value);
    bool GetHostageWasInjured() const;
    void SetHostageWasInjured(bool value);
    bool GetHostageWasKilled() const;
    void SetHostageWasKilled(bool value);
    bool GetVoteCalled() const;
    void SetVoteCalled(bool value);
    bool GetServerVoteOnReset() const;
    void SetServerVoteOnReset(bool value);
    float GetVoteCheckThrottle() const;
    void SetVoteCheckThrottle(float value);
    bool GetBuyTimeEnded() const;
    void SetBuyTimeEnded(bool value);
    int32_t GetLastFreezeEndBeep() const;
    void SetLastFreezeEndBeep(int32_t value);
    bool GetTargetBombed() const;
    void SetTargetBombed(bool value);
    bool GetBombDefused() const;
    void SetBombDefused(bool value);
    bool GetMapHasBombZone() const;
    void SetMapHasBombZone(bool value);
    Vector GetMainCTSpawnPos() const;
    void SetMainCTSpawnPos(Vector value);
    std::vector<GSpawnPoint*> GetCTSpawnPointsMasterList() const;
    void SetCTSpawnPointsMasterList(std::vector<GSpawnPoint*> value);
    std::vector<GSpawnPoint*> GetTerroristSpawnPointsMasterList() const;
    void SetTerroristSpawnPointsMasterList(std::vector<GSpawnPoint*> value);
    bool GetRespawningAllRespawnablePlayers() const;
    void SetRespawningAllRespawnablePlayers(bool value);
    int32_t GetNextCTSpawnPoint() const;
    void SetNextCTSpawnPoint(int32_t value);
    float GetCTSpawnPointUsedTime() const;
    void SetCTSpawnPointUsedTime(float value);
    int32_t GetNextTerroristSpawnPoint() const;
    void SetNextTerroristSpawnPoint(int32_t value);
    float GetTerroristSpawnPointUsedTime() const;
    void SetTerroristSpawnPointUsedTime(float value);
    std::vector<GSpawnPoint*> GetCTSpawnPoints() const;
    void SetCTSpawnPoints(std::vector<GSpawnPoint*> value);
    std::vector<GSpawnPoint*> GetTerroristSpawnPoints() const;
    void SetTerroristSpawnPoints(std::vector<GSpawnPoint*> value);
    bool GetIsUnreservedGameServer() const;
    void SetIsUnreservedGameServer(bool value);
    float GetAutobalanceDisplayTime() const;
    void SetAutobalanceDisplayTime(float value);
    bool GetAllowWeaponSwitch() const;
    void SetAllowWeaponSwitch(bool value);
    bool GetRoundTimeWarningTriggered() const;
    void SetRoundTimeWarningTriggered(bool value);
    float GetNextUpdateTeamClanNamesTime() const;
    void SetNextUpdateTeamClanNamesTime(float value);
    float GetAccumulatedRoundOffDamage() const;
    void SetAccumulatedRoundOffDamage(float value);
    int32_t GetShorthandedBonusLastEvalRound() const;
    void SetShorthandedBonusLastEvalRound(int32_t value);
    int32_t GetMatchAbortedEarlyReason() const;
    void SetMatchAbortedEarlyReason(int32_t value);
    bool GetHasTriggeredRoundStartMusic() const;
    void SetHasTriggeredRoundStartMusic(bool value);
    bool GetSwitchingTeamsAtRoundReset() const;
    void SetSwitchingTeamsAtRoundReset(bool value);
    GCCSGameModeRules GetGameModeRules() const;
    void SetGameModeRules(GCCSGameModeRules* value);
    GCBaseEntity GetPlayerResource() const;
    void SetPlayerResource(GCBaseEntity* value);
    GCRetakeGameRules GetRetakeRules() const;
    void SetRetakeRules(GCRetakeGameRules value);
    std::vector<bool> GetTeamLastKillUsedUniqueWeaponMatch() const;
    void SetTeamLastKillUsedUniqueWeaponMatch(std::vector<bool> value);
    uint8_t GetMatchEndCount() const;
    void SetMatchEndCount(uint8_t value);
    int32_t GetTTeamIntroVariant() const;
    void SetTTeamIntroVariant(int32_t value);
    int32_t GetCTTeamIntroVariant() const;
    void SetCTTeamIntroVariant(int32_t value);
    bool GetTeamIntroPeriod() const;
    void SetTeamIntroPeriod(bool value);
    bool GetPlayedTeamIntroVO() const;
    void SetPlayedTeamIntroVO(bool value);
    int32_t GetRoundEndWinnerTeam() const;
    void SetRoundEndWinnerTeam(int32_t value);
    int32_t GetRoundEndReason() const;
    void SetRoundEndReason(int32_t value);
    bool GetRoundEndShowTimerDefend() const;
    void SetRoundEndShowTimerDefend(bool value);
    int32_t GetRoundEndTimerTime() const;
    void SetRoundEndTimerTime(int32_t value);
    CUtlString GetRoundEndFunFactToken() const;
    void SetRoundEndFunFactToken(CUtlString value);
    int32_t GetRoundEndFunFactPlayerSlot() const;
    void SetRoundEndFunFactPlayerSlot(int32_t value);
    int32_t GetRoundEndFunFactData1() const;
    void SetRoundEndFunFactData1(int32_t value);
    int32_t GetRoundEndFunFactData2() const;
    void SetRoundEndFunFactData2(int32_t value);
    int32_t GetRoundEndFunFactData3() const;
    void SetRoundEndFunFactData3(int32_t value);
    CUtlString GetRoundEndMessage() const;
    void SetRoundEndMessage(CUtlString value);
    int32_t GetRoundEndPlayerCount() const;
    void SetRoundEndPlayerCount(int32_t value);
    bool GetRoundEndNoMusic() const;
    void SetRoundEndNoMusic(bool value);
    int32_t GetRoundEndLegacy() const;
    void SetRoundEndLegacy(int32_t value);
    uint8_t GetRoundEndCount() const;
    void SetRoundEndCount(uint8_t value);
    int32_t GetRoundStartRoundNumber() const;
    void SetRoundStartRoundNumber(int32_t value);
    uint8_t GetRoundStartCount() const;
    void SetRoundStartCount(uint8_t value);
    double GetLastPerfSampleTime() const;
    void SetLastPerfSampleTime(double value);

    std::string ToPtr();
    bool IsValid();
};

class GCColorCorrection
{
private:
    void *m_ptr;

public:
    GCColorCorrection(std::string ptr);
    GCColorCorrection(void *ptr);

    float GetFadeInDuration() const;
    void SetFadeInDuration(float value);
    float GetFadeOutDuration() const;
    void SetFadeOutDuration(float value);
    float GetStartFadeInWeight() const;
    void SetStartFadeInWeight(float value);
    float GetStartFadeOutWeight() const;
    void SetStartFadeOutWeight(float value);
    float GetMaxWeight() const;
    void SetMaxWeight(float value);
    bool GetStartDisabled() const;
    void SetStartDisabled(bool value);
    bool GetEnabled() const;
    void SetEnabled(bool value);
    bool GetMaster() const;
    void SetMaster(bool value);
    bool GetClientSide() const;
    void SetClientSide(bool value);
    bool GetExclusive() const;
    void SetExclusive(bool value);
    float GetMinFalloff() const;
    void SetMinFalloff(float value);
    float GetMaxFalloff() const;
    void SetMaxFalloff(float value);
    float GetCurWeight() const;
    void SetCurWeight(float value);
    std::string GetNetlookupFilename() const;
    void SetNetlookupFilename(std::string value);
    CUtlSymbolLarge GetLookupFilename() const;
    void SetLookupFilename(CUtlSymbolLarge value);

    std::string ToPtr();
    bool IsValid();
};

class GCWeaponElite
{
private:
    void *m_ptr;

public:
    GCWeaponElite(std::string ptr);
    GCWeaponElite(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCSoundEventEntityAlias_snd_event_point
{
private:
    void *m_ptr;

public:
    GCSoundEventEntityAlias_snd_event_point(std::string ptr);
    GCSoundEventEntityAlias_snd_event_point(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCBaseEntityAPI
{
private:
    void *m_ptr;

public:
    GCBaseEntityAPI(std::string ptr);
    GCBaseEntityAPI(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCC4
{
private:
    void *m_ptr;

public:
    GCC4(std::string ptr);
    GCC4(void *ptr);

    Vector GetLastValidPlayerHeldPosition() const;
    void SetLastValidPlayerHeldPosition(Vector value);
    Vector GetLastValidDroppedPosition() const;
    void SetLastValidDroppedPosition(Vector value);
    bool GetDoValidDroppedPositionCheck() const;
    void SetDoValidDroppedPositionCheck(bool value);
    bool GetStartedArming() const;
    void SetStartedArming(bool value);
    bool GetBombPlacedAnimation() const;
    void SetBombPlacedAnimation(bool value);
    bool GetIsPlantingViaUse() const;
    void SetIsPlantingViaUse(bool value);
    GEntitySpottedState_t GetEntitySpottedState() const;
    void SetEntitySpottedState(GEntitySpottedState_t value);
    int32_t GetSpotRules() const;
    void SetSpotRules(int32_t value);
    std::vector<bool> GetPlayedArmingBeeps() const;
    void SetPlayedArmingBeeps(std::vector<bool> value);
    bool GetBombPlanted() const;
    void SetBombPlanted(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCHostageRescueZone
{
private:
    void *m_ptr;

public:
    GCHostageRescueZone(std::string ptr);
    GCHostageRescueZone(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCPointPrefab
{
private:
    void *m_ptr;

public:
    GCPointPrefab(std::string ptr);
    GCPointPrefab(void *ptr);

    CUtlSymbolLarge GetTargetMapName() const;
    void SetTargetMapName(CUtlSymbolLarge value);
    CUtlSymbolLarge GetForceWorldGroupID() const;
    void SetForceWorldGroupID(CUtlSymbolLarge value);
    CUtlSymbolLarge GetAssociatedRelayTargetName() const;
    void SetAssociatedRelayTargetName(CUtlSymbolLarge value);
    bool GetFixupNames() const;
    void SetFixupNames(bool value);
    bool GetLoadDynamic() const;
    void SetLoadDynamic(bool value);
    GCPointPrefab GetAssociatedRelayEntity() const;
    void SetAssociatedRelayEntity(GCPointPrefab* value);

    std::string ToPtr();
    bool IsValid();
};

class GCRotDoor
{
private:
    void *m_ptr;

public:
    GCRotDoor(std::string ptr);
    GCRotDoor(void *ptr);

    bool GetSolidBsp() const;
    void SetSolidBsp(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCSkeletonAnimationController
{
private:
    void *m_ptr;

public:
    GCSkeletonAnimationController(std::string ptr);
    GCSkeletonAnimationController(void *ptr);

    GCSkeletonInstance GetSkeletonInstance() const;
    void SetSkeletonInstance(GCSkeletonInstance* value);

    std::string ToPtr();
    bool IsValid();
};

class GCTablet
{
private:
    void *m_ptr;

public:
    GCTablet(std::string ptr);
    GCTablet(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCTankTrainAI
{
private:
    void *m_ptr;

public:
    GCTankTrainAI(std::string ptr);
    GCTankTrainAI(void *ptr);

    GCFuncTrackTrain GetTrain() const;
    void SetTrain(GCFuncTrackTrain* value);
    GCBaseEntity GetTargetEntity() const;
    void SetTargetEntity(GCBaseEntity* value);
    int32_t GetSoundPlaying() const;
    void SetSoundPlaying(int32_t value);
    CUtlSymbolLarge GetStartSoundName() const;
    void SetStartSoundName(CUtlSymbolLarge value);
    CUtlSymbolLarge GetEngineSoundName() const;
    void SetEngineSoundName(CUtlSymbolLarge value);
    CUtlSymbolLarge GetMovementSoundName() const;
    void SetMovementSoundName(CUtlSymbolLarge value);
    CUtlSymbolLarge GetTargetEntityName() const;
    void SetTargetEntityName(CUtlSymbolLarge value);

    std::string ToPtr();
    bool IsValid();
};

class GCGameGibManager
{
private:
    void *m_ptr;

public:
    GCGameGibManager(std::string ptr);
    GCGameGibManager(void *ptr);

    bool GetAllowNewGibs() const;
    void SetAllowNewGibs(bool value);
    int32_t GetCurrentMaxPieces() const;
    void SetCurrentMaxPieces(int32_t value);
    int32_t GetMaxPieces() const;
    void SetMaxPieces(int32_t value);
    int32_t GetLastFrame() const;
    void SetLastFrame(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCCSPointScript
{
private:
    void *m_ptr;

public:
    GCCSPointScript(std::string ptr);
    GCCSPointScript(void *ptr);

    GCCSPointScriptEntity GetParent() const;
    void SetParent(GCCSPointScriptEntity* value);

    std::string ToPtr();
    bool IsValid();
};

class GCRagdollPropAlias_physics_prop_ragdoll
{
private:
    void *m_ptr;

public:
    GCRagdollPropAlias_physics_prop_ragdoll(std::string ptr);
    GCRagdollPropAlias_physics_prop_ragdoll(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCCSSprite
{
private:
    void *m_ptr;

public:
    GCCSSprite(std::string ptr);
    GCCSSprite(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCFuncPropRespawnZone
{
private:
    void *m_ptr;

public:
    GCFuncPropRespawnZone(std::string ptr);
    GCFuncPropRespawnZone(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCInfoDeathmatchSpawn
{
private:
    void *m_ptr;

public:
    GCInfoDeathmatchSpawn(std::string ptr);
    GCInfoDeathmatchSpawn(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCWeaponSCAR20
{
private:
    void *m_ptr;

public:
    GCWeaponSCAR20(std::string ptr);
    GCWeaponSCAR20(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCTripWireFireProjectile
{
private:
    void *m_ptr;

public:
    GCTripWireFireProjectile(std::string ptr);
    GCTripWireFireProjectile(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCFuncTrackAuto
{
private:
    void *m_ptr;

public:
    GCFuncTrackAuto(std::string ptr);
    GCFuncTrackAuto(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCEnvSpark
{
private:
    void *m_ptr;

public:
    GCEnvSpark(std::string ptr);
    GCEnvSpark(void *ptr);

    float GetDelay() const;
    void SetDelay(float value);
    int32_t GetMagnitude() const;
    void SetMagnitude(int32_t value);
    int32_t GetTrailLength() const;
    void SetTrailLength(int32_t value);
    int32_t GetType() const;
    void SetType(int32_t value);
    GCEntityIOOutput GetOnSpark() const;
    void SetOnSpark(GCEntityIOOutput value);

    std::string ToPtr();
    bool IsValid();
};

class GCCSObserver_ObserverServices
{
private:
    void *m_ptr;

public:
    GCCSObserver_ObserverServices(std::string ptr);
    GCCSObserver_ObserverServices(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCPlayer_AutoaimServices
{
private:
    void *m_ptr;

public:
    GCPlayer_AutoaimServices(std::string ptr);
    GCPlayer_AutoaimServices(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCFuncTrain
{
private:
    void *m_ptr;

public:
    GCFuncTrain(std::string ptr);
    GCFuncTrain(void *ptr);

    GCBaseEntity GetCurrentTarget() const;
    void SetCurrentTarget(GCBaseEntity* value);
    bool GetActivated() const;
    void SetActivated(bool value);
    GCBaseEntity GetEnemy() const;
    void SetEnemy(GCBaseEntity* value);
    float GetBlockDamage() const;
    void SetBlockDamage(float value);
    CUtlSymbolLarge GetLastTarget() const;
    void SetLastTarget(CUtlSymbolLarge value);

    std::string ToPtr();
    bool IsValid();
};

class GCHostageAlias_info_hostage_spawn
{
private:
    void *m_ptr;

public:
    GCHostageAlias_info_hostage_spawn(std::string ptr);
    GCHostageAlias_info_hostage_spawn(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCNavLinkAreaEntity
{
private:
    void *m_ptr;

public:
    GCNavLinkAreaEntity(std::string ptr);
    GCNavLinkAreaEntity(void *ptr);

    float GetWidth() const;
    void SetWidth(float value);
    Vector GetLocatorOffset() const;
    void SetLocatorOffset(Vector value);
    QAngle GetLocatorAnglesOffset() const;
    void SetLocatorAnglesOffset(QAngle value);
    CUtlSymbolLarge GetStrMovementForward() const;
    void SetStrMovementForward(CUtlSymbolLarge value);
    CUtlSymbolLarge GetStrMovementReverse() const;
    void SetStrMovementReverse(CUtlSymbolLarge value);
    int32_t GetNavLinkIdForward() const;
    void SetNavLinkIdForward(int32_t value);
    int32_t GetNavLinkIdReverse() const;
    void SetNavLinkIdReverse(int32_t value);
    bool GetEnabled() const;
    void SetEnabled(bool value);
    CUtlSymbolLarge GetStrFilterName() const;
    void SetStrFilterName(CUtlSymbolLarge value);
    GCBaseFilter GetFilter() const;
    void SetFilter(GCBaseFilter* value);
    GCEntityIOOutput GetOnNavLinkStart() const;
    void SetOnNavLinkStart(GCEntityIOOutput value);
    GCEntityIOOutput GetOnNavLinkFinish() const;
    void SetOnNavLinkFinish(GCEntityIOOutput value);
    bool GetIsTerminus() const;
    void SetIsTerminus(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCFuncMoveLinearAlias_momentary_door
{
private:
    void *m_ptr;

public:
    GCFuncMoveLinearAlias_momentary_door(std::string ptr);
    GCFuncMoveLinearAlias_momentary_door(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCCommentaryAuto
{
private:
    void *m_ptr;

public:
    GCCommentaryAuto(std::string ptr);
    GCCommentaryAuto(void *ptr);

    GCEntityIOOutput GetOnCommentaryNewGame() const;
    void SetOnCommentaryNewGame(GCEntityIOOutput value);
    GCEntityIOOutput GetOnCommentaryMidGame() const;
    void SetOnCommentaryMidGame(GCEntityIOOutput value);
    GCEntityIOOutput GetOnCommentaryMultiplayerSpawn() const;
    void SetOnCommentaryMultiplayerSpawn(GCEntityIOOutput value);

    std::string ToPtr();
    bool IsValid();
};

class GCMapInfo
{
private:
    void *m_ptr;

public:
    GCMapInfo(std::string ptr);
    GCMapInfo(void *ptr);

    int32_t GetBuyingStatus() const;
    void SetBuyingStatus(int32_t value);
    float GetBombRadius() const;
    void SetBombRadius(float value);
    int32_t GetPetPopulation() const;
    void SetPetPopulation(int32_t value);
    bool GetUseNormalSpawnsForDM() const;
    void SetUseNormalSpawnsForDM(bool value);
    bool GetDisableAutoGeneratedDMSpawns() const;
    void SetDisableAutoGeneratedDMSpawns(bool value);
    float GetBotMaxVisionDistance() const;
    void SetBotMaxVisionDistance(float value);
    int32_t GetHostageCount() const;
    void SetHostageCount(int32_t value);
    bool GetFadePlayerVisibilityFarZ() const;
    void SetFadePlayerVisibilityFarZ(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCTriggerBombReset
{
private:
    void *m_ptr;

public:
    GCTriggerBombReset(std::string ptr);
    GCTriggerBombReset(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCBaseDMStart
{
private:
    void *m_ptr;

public:
    GCBaseDMStart(std::string ptr);
    GCBaseDMStart(void *ptr);

    CUtlSymbolLarge GetMaster() const;
    void SetMaster(CUtlSymbolLarge value);

    std::string ToPtr();
    bool IsValid();
};

class GCLogicMeasureMovement
{
private:
    void *m_ptr;

public:
    GCLogicMeasureMovement(std::string ptr);
    GCLogicMeasureMovement(void *ptr);

    CUtlSymbolLarge GetStrMeasureTarget() const;
    void SetStrMeasureTarget(CUtlSymbolLarge value);
    CUtlSymbolLarge GetStrMeasureReference() const;
    void SetStrMeasureReference(CUtlSymbolLarge value);
    CUtlSymbolLarge GetStrTargetReference() const;
    void SetStrTargetReference(CUtlSymbolLarge value);
    GCBaseEntity GetMeasureTarget() const;
    void SetMeasureTarget(GCBaseEntity* value);
    GCBaseEntity GetMeasureReference() const;
    void SetMeasureReference(GCBaseEntity* value);
    GCBaseEntity GetTarget() const;
    void SetTarget(GCBaseEntity* value);
    GCBaseEntity GetTargetReference() const;
    void SetTargetReference(GCBaseEntity* value);
    float GetScale() const;
    void SetScale(float value);
    int32_t GetMeasureType() const;
    void SetMeasureType(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GViewAngleServerChange_t
{
private:
    void *m_ptr;

public:
    GViewAngleServerChange_t(std::string ptr);
    GViewAngleServerChange_t(void *ptr);

    FixAngleSet_t GetType() const;
    void SetType(FixAngleSet_t value);
    QAngle GetAngle() const;
    void SetAngle(QAngle value);
    uint32_t GetIndex() const;
    void SetIndex(uint32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GPhysicsRagdollPose_t
{
private:
    void *m_ptr;

public:
    GPhysicsRagdollPose_t(std::string ptr);
    GPhysicsRagdollPose_t(void *ptr);

    GCNetworkVarChainer Get__pChainEntity() const;
    void Set__pChainEntity(GCNetworkVarChainer value);
    GCBaseEntity GetOwner() const;
    void SetOwner(GCBaseEntity* value);

    std::string ToPtr();
    bool IsValid();
};

class GCBreachChargeProjectile
{
private:
    void *m_ptr;

public:
    GCBreachChargeProjectile(std::string ptr);
    GCBreachChargeProjectile(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCRangeFloat
{
private:
    void *m_ptr;

public:
    GCRangeFloat(std::string ptr);
    GCRangeFloat(void *ptr);

    std::vector<float> GetValue() const;
    void SetValue(std::vector<float> value);

    std::string ToPtr();
    bool IsValid();
};

class GCAnimEventListenerBase
{
private:
    void *m_ptr;

public:
    GCAnimEventListenerBase(std::string ptr);
    GCAnimEventListenerBase(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GRelationship_t
{
private:
    void *m_ptr;

public:
    GRelationship_t(std::string ptr);
    GRelationship_t(void *ptr);

    Disposition_t GetDisposition() const;
    void SetDisposition(Disposition_t value);
    int32_t GetPriority() const;
    void SetPriority(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCRemapFloat
{
private:
    void *m_ptr;

public:
    GCRemapFloat(std::string ptr);
    GCRemapFloat(void *ptr);

    std::vector<float> GetValue() const;
    void SetValue(std::vector<float> value);

    std::string ToPtr();
    bool IsValid();
};

class GIGapHost_GameEntity
{
private:
    void *m_ptr;

public:
    GIGapHost_GameEntity(std::string ptr);
    GIGapHost_GameEntity(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCFootstepTableHandle
{
private:
    void *m_ptr;

public:
    GCFootstepTableHandle(std::string ptr);
    GCFootstepTableHandle(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCCSPlayerController_InventoryServices
{
private:
    void *m_ptr;

public:
    GCCSPlayerController_InventoryServices(std::string ptr);
    GCCSPlayerController_InventoryServices(void *ptr);

    uint16_t GetMusicID() const;
    void SetMusicID(uint16_t value);
    std::vector<MedalRank_t> GetRank() const;
    void SetRank(std::vector<MedalRank_t> value);
    int32_t GetPersonaDataPublicLevel() const;
    void SetPersonaDataPublicLevel(int32_t value);
    int32_t GetPersonaDataPublicCommendsLeader() const;
    void SetPersonaDataPublicCommendsLeader(int32_t value);
    int32_t GetPersonaDataPublicCommendsTeacher() const;
    void SetPersonaDataPublicCommendsTeacher(int32_t value);
    int32_t GetPersonaDataPublicCommendsFriendly() const;
    void SetPersonaDataPublicCommendsFriendly(int32_t value);
    int32_t GetPersonaDataXpTrailLevel() const;
    void SetPersonaDataXpTrailLevel(int32_t value);
    std::vector<uint32_t> GetEquippedPlayerSprayIDs() const;
    void SetEquippedPlayerSprayIDs(std::vector<uint32_t> value);
    std::vector<GServerAuthoritativeWeaponSlot_t> GetServerAuthoritativeWeaponSlots() const;
    void SetServerAuthoritativeWeaponSlots(std::vector<GServerAuthoritativeWeaponSlot_t> value);

    std::string ToPtr();
    bool IsValid();
};

class GCResponseQueue
{
private:
    void *m_ptr;

public:
    GCResponseQueue(std::string ptr);
    GCResponseQueue(void *ptr);

    std::vector<GCAI_Expresser*> GetExpresserTargets() const;
    void SetExpresserTargets(std::vector<GCAI_Expresser*> value);

    std::string ToPtr();
    bool IsValid();
};

class GCScriptUniformRandomStream
{
private:
    void *m_ptr;

public:
    GCScriptUniformRandomStream(std::string ptr);
    GCScriptUniformRandomStream(void *ptr);

    int32_t GetInitialSeed() const;
    void SetInitialSeed(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GParticleIndex_t
{
private:
    void *m_ptr;

public:
    GParticleIndex_t(std::string ptr);
    GParticleIndex_t(void *ptr);

    int32_t GetValue() const;
    void SetValue(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCPhysHinge
{
private:
    void *m_ptr;

public:
    GCPhysHinge(std::string ptr);
    GCPhysHinge(void *ptr);

    GConstraintSoundInfo GetSoundInfo() const;
    void SetSoundInfo(GConstraintSoundInfo value);
    GCEntityIOOutput GetNotifyMinLimitReached() const;
    void SetNotifyMinLimitReached(GCEntityIOOutput value);
    GCEntityIOOutput GetNotifyMaxLimitReached() const;
    void SetNotifyMaxLimitReached(GCEntityIOOutput value);
    bool GetAtMinLimit() const;
    void SetAtMinLimit(bool value);
    bool GetAtMaxLimit() const;
    void SetAtMaxLimit(bool value);
    Gconstraint_hingeparams_t GetHinge() const;
    void SetHinge(Gconstraint_hingeparams_t value);
    float GetHingeFriction() const;
    void SetHingeFriction(float value);
    float GetSystemLoadScale() const;
    void SetSystemLoadScale(float value);
    bool GetIsAxisLocal() const;
    void SetIsAxisLocal(bool value);
    float GetMinRotation() const;
    void SetMinRotation(float value);
    float GetMaxRotation() const;
    void SetMaxRotation(float value);
    float GetInitialRotation() const;
    void SetInitialRotation(float value);
    float GetMotorFrequency() const;
    void SetMotorFrequency(float value);
    float GetMotorDampingRatio() const;
    void SetMotorDampingRatio(float value);
    float GetAngleSpeed() const;
    void SetAngleSpeed(float value);
    float GetAngleSpeedThreshold() const;
    void SetAngleSpeedThreshold(float value);
    GCEntityIOOutput GetOnStartMoving() const;
    void SetOnStartMoving(GCEntityIOOutput value);
    GCEntityIOOutput GetOnStopMoving() const;
    void SetOnStopMoving(GCEntityIOOutput value);

    std::string ToPtr();
    bool IsValid();
};

class GCSimpleSimTimer
{
private:
    void *m_ptr;

public:
    GCSimpleSimTimer(std::string ptr);
    GCSimpleSimTimer(void *ptr);

    WorldGroupId_t GetWorldGroupId() const;
    void SetWorldGroupId(WorldGroupId_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCSkillDamage
{
private:
    void *m_ptr;

public:
    GCSkillDamage(std::string ptr);
    GCSkillDamage(void *ptr);

    GCSkillFloat GetDamage() const;
    void SetDamage(GCSkillFloat value);
    float GetNPCDamageScalarVsNPC() const;
    void SetNPCDamageScalarVsNPC(float value);
    float GetPhysicsForceDamage() const;
    void SetPhysicsForceDamage(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCAnimEventQueueListener
{
private:
    void *m_ptr;

public:
    GCAnimEventQueueListener(std::string ptr);
    GCAnimEventQueueListener(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCEnvLaser
{
private:
    void *m_ptr;

public:
    GCEnvLaser(std::string ptr);
    GCEnvLaser(void *ptr);

    CUtlSymbolLarge GetLaserTarget() const;
    void SetLaserTarget(CUtlSymbolLarge value);
    GCSprite GetSprite() const;
    void SetSprite(GCSprite* value);
    CUtlSymbolLarge GetSpriteName() const;
    void SetSpriteName(CUtlSymbolLarge value);
    Vector GetFirePosition() const;
    void SetFirePosition(Vector value);
    float GetStartFrame() const;
    void SetStartFrame(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCFiringModeFloat
{
private:
    void *m_ptr;

public:
    GCFiringModeFloat(std::string ptr);
    GCFiringModeFloat(void *ptr);

    std::vector<float> GetValues() const;
    void SetValues(std::vector<float> value);

    std::string ToPtr();
    bool IsValid();
};

class GCRopeOverlapHit
{
private:
    void *m_ptr;

public:
    GCRopeOverlapHit(std::string ptr);
    GCRopeOverlapHit(void *ptr);

    GCBaseEntity GetEntity() const;
    void SetEntity(GCBaseEntity* value);
    std::vector<int32> GetOverlappingLinks() const;
    void SetOverlappingLinks(std::vector<int32> value);

    std::string ToPtr();
    bool IsValid();
};

class GResponseContext_t
{
private:
    void *m_ptr;

public:
    GResponseContext_t(std::string ptr);
    GResponseContext_t(void *ptr);

    CUtlSymbolLarge GetName() const;
    void SetName(CUtlSymbolLarge value);
    CUtlSymbolLarge GetValue() const;
    void SetValue(CUtlSymbolLarge value);

    std::string ToPtr();
    bool IsValid();
};

class GCNavVolume
{
private:
    void *m_ptr;

public:
    GCNavVolume(std::string ptr);
    GCNavVolume(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCCSObserver_MovementServices
{
private:
    void *m_ptr;

public:
    GCCSObserver_MovementServices(std::string ptr);
    GCCSObserver_MovementServices(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCCSGOPlayerAnimGraphState
{
private:
    void *m_ptr;

public:
    GCCSGOPlayerAnimGraphState(std::string ptr);
    GCCSGOPlayerAnimGraphState(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCGameScriptedMoveData
{
private:
    void *m_ptr;

public:
    GCGameScriptedMoveData(std::string ptr);
    GCGameScriptedMoveData(void *ptr);

    Vector GetAccumulatedRootMotion() const;
    void SetAccumulatedRootMotion(Vector value);
    Vector GetDest() const;
    void SetDest(Vector value);
    Vector GetSrc() const;
    void SetSrc(Vector value);
    QAngle GetSrc1() const;
    void SetSrc1(QAngle value);
    QAngle GetDst() const;
    void SetDst(QAngle value);
    QAngle GetCurrent() const;
    void SetCurrent(QAngle value);
    float GetAngRate() const;
    void SetAngRate(float value);
    float GetDuration() const;
    void SetDuration(float value);
    bool GetActive() const;
    void SetActive(bool value);
    bool GetTeleportOnEnd() const;
    void SetTeleportOnEnd(bool value);
    bool GetIgnoreRotation() const;
    void SetIgnoreRotation(bool value);
    ScriptedMoveType_t GetType() const;
    void SetType(ScriptedMoveType_t value);
    bool GetSuccess() const;
    void SetSuccess(bool value);
    ForcedCrouchState_t GetForcedCrouchState() const;
    void SetForcedCrouchState(ForcedCrouchState_t value);
    bool GetIgnoreCollisions() const;
    void SetIgnoreCollisions(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCBaseAnimGraphController
{
private:
    void *m_ptr;

public:
    GCBaseAnimGraphController(std::string ptr);
    GCBaseAnimGraphController(void *ptr);

    GCAnimGraphNetworkedVariables GetAnimGraphNetworkedVars() const;
    void SetAnimGraphNetworkedVars(GCAnimGraphNetworkedVariables value);
    bool GetSequenceFinished() const;
    void SetSequenceFinished(bool value);
    float GetSoundSyncTime() const;
    void SetSoundSyncTime(float value);
    uint32_t GetActiveIKChainMask() const;
    void SetActiveIKChainMask(uint32_t value);
    float GetSeqFixedCycle() const;
    void SetSeqFixedCycle(float value);
    AnimLoopMode_t GetAnimLoopMode() const;
    void SetAnimLoopMode(AnimLoopMode_t value);
    float GetPlaybackRate() const;
    void SetPlaybackRate(float value);
    SequenceFinishNotifyState_t GetNotifyState() const;
    void SetNotifyState(SequenceFinishNotifyState_t value);
    bool GetNetworkedAnimationInputsChanged() const;
    void SetNetworkedAnimationInputsChanged(bool value);
    bool GetNetworkedSequenceChanged() const;
    void SetNetworkedSequenceChanged(bool value);
    bool GetLastUpdateSkipped() const;
    void SetLastUpdateSkipped(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCNavVolumeSphere
{
private:
    void *m_ptr;

public:
    GCNavVolumeSphere(std::string ptr);
    GCNavVolumeSphere(void *ptr);

    Vector GetCenter() const;
    void SetCenter(Vector value);
    float GetRadius() const;
    void SetRadius(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCResponseCriteriaSet
{
private:
    void *m_ptr;

public:
    GCResponseCriteriaSet(std::string ptr);
    GCResponseCriteriaSet(void *ptr);

    int32_t GetNumPrefixedContexts() const;
    void SetNumPrefixedContexts(int32_t value);
    bool GetOverrideOnAppend() const;
    void SetOverrideOnAppend(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCAI_Expresser
{
private:
    void *m_ptr;

public:
    GCAI_Expresser(std::string ptr);
    GCAI_Expresser(void *ptr);

    int32_t GetVoicePitch() const;
    void SetVoicePitch(int32_t value);
    bool GetAllowSpeakingInterrupts() const;
    void SetAllowSpeakingInterrupts(bool value);
    bool GetConsiderSceneInvolvementAsSpeech() const;
    void SetConsiderSceneInvolvementAsSpeech(bool value);
    bool GetSceneEntityDisabled() const;
    void SetSceneEntityDisabled(bool value);
    int32_t GetLastSpokenPriority() const;
    void SetLastSpokenPriority(int32_t value);
    GCBaseFlex GetOuter() const;
    void SetOuter(GCBaseFlex* value);

    std::string ToPtr();
    bool IsValid();
};

class GIChoreoServices
{
private:
    void *m_ptr;

public:
    GIChoreoServices(std::string ptr);
    GIChoreoServices(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCStopwatchBase
{
private:
    void *m_ptr;

public:
    GCStopwatchBase(std::string ptr);
    GCStopwatchBase(void *ptr);

    bool GetIsRunning() const;
    void SetIsRunning(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GResponseParams
{
private:
    void *m_ptr;

public:
    GResponseParams(std::string ptr);
    GResponseParams(void *ptr);

    int16_t GetOdds() const;
    void SetOdds(int16_t value);
    int16_t GetFlags() const;
    void SetFlags(int16_t value);
    GResponseFollowup GetFollowup() const;
    void SetFollowup(GResponseFollowup* value);

    std::string ToPtr();
    bool IsValid();
};

class GCItem_Healthshot
{
private:
    void *m_ptr;

public:
    GCItem_Healthshot(std::string ptr);
    GCItem_Healthshot(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCPhysHingeAlias_phys_hinge_local
{
private:
    void *m_ptr;

public:
    GCPhysHingeAlias_phys_hinge_local(std::string ptr);
    GCPhysHingeAlias_phys_hinge_local(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GPointCameraSettings_t
{
private:
    void *m_ptr;

public:
    GPointCameraSettings_t(std::string ptr);
    GPointCameraSettings_t(void *ptr);

    float GetNearBlurryDistance() const;
    void SetNearBlurryDistance(float value);
    float GetNearCrispDistance() const;
    void SetNearCrispDistance(float value);
    float GetFarCrispDistance() const;
    void SetFarCrispDistance(float value);
    float GetFarBlurryDistance() const;
    void SetFarBlurryDistance(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCSoundEnvelope
{
private:
    void *m_ptr;

public:
    GCSoundEnvelope(std::string ptr);
    GCSoundEnvelope(void *ptr);

    float GetCurrent() const;
    void SetCurrent(float value);
    float GetTarget() const;
    void SetTarget(float value);
    float GetRate() const;
    void SetRate(float value);
    bool GetForceupdate() const;
    void SetForceupdate(bool value);

    std::string ToPtr();
    bool IsValid();
};

class Gdynpitchvol_t
{
private:
    void *m_ptr;

public:
    Gdynpitchvol_t(std::string ptr);
    Gdynpitchvol_t(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCStopwatch
{
private:
    void *m_ptr;

public:
    GCStopwatch(std::string ptr);
    GCStopwatch(void *ptr);

    float GetInterval() const;
    void SetInterval(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCNavVolumeVector
{
private:
    void *m_ptr;

public:
    GCNavVolumeVector(std::string ptr);
    GCNavVolumeVector(void *ptr);

    bool GetHasBeenPreFiltered() const;
    void SetHasBeenPreFiltered(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GNavGravity_t
{
private:
    void *m_ptr;

public:
    GNavGravity_t(std::string ptr);
    GNavGravity_t(void *ptr);

    Vector GetGravity() const;
    void SetGravity(Vector value);
    bool GetDefault() const;
    void SetDefault(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCEnvShake
{
private:
    void *m_ptr;

public:
    GCEnvShake(std::string ptr);
    GCEnvShake(void *ptr);

    CUtlSymbolLarge GetLimitToEntity() const;
    void SetLimitToEntity(CUtlSymbolLarge value);
    float GetAmplitude() const;
    void SetAmplitude(float value);
    float GetFrequency() const;
    void SetFrequency(float value);
    float GetDuration() const;
    void SetDuration(float value);
    float GetRadius() const;
    void SetRadius(float value);
    float GetCurrentAmp() const;
    void SetCurrentAmp(float value);
    Vector GetMaxForce() const;
    void SetMaxForce(Vector value);
    GCPhysicsShake GetShakeCallback() const;
    void SetShakeCallback(GCPhysicsShake value);

    std::string ToPtr();
    bool IsValid();
};

class GCPhysSlideConstraint
{
private:
    void *m_ptr;

public:
    GCPhysSlideConstraint(std::string ptr);
    GCPhysSlideConstraint(void *ptr);

    Vector GetAxisEnd() const;
    void SetAxisEnd(Vector value);
    float GetSlideFriction() const;
    void SetSlideFriction(float value);
    float GetSystemLoadScale() const;
    void SetSystemLoadScale(float value);
    float GetInitialOffset() const;
    void SetInitialOffset(float value);
    bool GetEnableLinearConstraint() const;
    void SetEnableLinearConstraint(bool value);
    bool GetEnableAngularConstraint() const;
    void SetEnableAngularConstraint(bool value);
    float GetMotorFrequency() const;
    void SetMotorFrequency(float value);
    float GetMotorDampingRatio() const;
    void SetMotorDampingRatio(float value);
    bool GetUseEntityPivot() const;
    void SetUseEntityPivot(bool value);
    GConstraintSoundInfo GetSoundInfo() const;
    void SetSoundInfo(GConstraintSoundInfo value);

    std::string ToPtr();
    bool IsValid();
};

class GCSound
{
private:
    void *m_ptr;

public:
    GCSound(std::string ptr);
    GCSound(void *ptr);

    GCBaseEntity GetOwner() const;
    void SetOwner(GCBaseEntity* value);
    GCBaseEntity GetTarget() const;
    void SetTarget(GCBaseEntity* value);
    int32_t GetVolume() const;
    void SetVolume(int32_t value);
    float GetOcclusionScale() const;
    void SetOcclusionScale(float value);
    int32_t GetNextAudible() const;
    void SetNextAudible(int32_t value);
    int16_t GetNext() const;
    void SetNext(int16_t value);
    bool GetNoExpirationTime() const;
    void SetNoExpirationTime(bool value);
    int32_t GetOwnerChannelIndex() const;
    void SetOwnerChannelIndex(int32_t value);
    Vector GetOrigin() const;
    void SetOrigin(Vector value);
    bool GetHasOwner() const;
    void SetHasOwner(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCTakeDamageResult
{
private:
    void *m_ptr;

public:
    GCTakeDamageResult(std::string ptr);
    GCTakeDamageResult(void *ptr);

    GCTakeDamageInfo GetOriginatingInfo() const;
    void SetOriginatingInfo(GCTakeDamageInfo* value);
    int32_t GetHealthLost() const;
    void SetHealthLost(int32_t value);
    int32_t GetDamageTaken() const;
    void SetDamageTaken(int32_t value);
    int32_t GetTotalledHealthLost() const;
    void SetTotalledHealthLost(int32_t value);
    int32_t GetTotalledDamageTaken() const;
    void SetTotalledDamageTaken(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCMolotovProjectile
{
private:
    void *m_ptr;

public:
    GCMolotovProjectile(std::string ptr);
    GCMolotovProjectile(void *ptr);

    bool GetIsIncGrenade() const;
    void SetIsIncGrenade(bool value);
    bool GetDetonated() const;
    void SetDetonated(bool value);
    GIntervalTimer GetStillTimer() const;
    void SetStillTimer(GIntervalTimer value);
    bool GetHasBouncedOffPlayer() const;
    void SetHasBouncedOffPlayer(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCCommentarySystem
{
private:
    void *m_ptr;

public:
    GCCommentarySystem(std::string ptr);
    GCCommentarySystem(void *ptr);

    bool GetCommentaryConvarsChanging() const;
    void SetCommentaryConvarsChanging(bool value);
    bool GetCommentaryEnabledMidGame() const;
    void SetCommentaryEnabledMidGame(bool value);
    int32_t GetTeleportStage() const;
    void SetTeleportStage(int32_t value);
    bool GetCheatState() const;
    void SetCheatState(bool value);
    bool GetIsFirstSpawnGroupToLoad() const;
    void SetIsFirstSpawnGroupToLoad(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GResponseFollowup
{
private:
    void *m_ptr;

public:
    GResponseFollowup(std::string ptr);
    GResponseFollowup(void *ptr);

    std::string GetFollowup_concept() const;
    void SetFollowup_concept(std::string value);
    std::string GetFollowup_contexts() const;
    void SetFollowup_contexts(std::string value);
    float GetFollowup_delay() const;
    void SetFollowup_delay(float value);
    std::string GetFollowup_target() const;
    void SetFollowup_target(std::string value);
    std::string GetFollowup_entityiotarget() const;
    void SetFollowup_entityiotarget(std::string value);
    std::string GetFollowup_entityioinput() const;
    void SetFollowup_entityioinput(std::string value);
    float GetFollowup_entityiodelay() const;
    void SetFollowup_entityiodelay(float value);
    bool GetFired() const;
    void SetFired(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCRangeInt
{
private:
    void *m_ptr;

public:
    GCRangeInt(std::string ptr);
    GCRangeInt(void *ptr);

    std::vector<int32_t> GetValue() const;
    void SetValue(std::vector<int32_t> value);

    std::string ToPtr();
    bool IsValid();
};

class GCNavLinkAnimgraphVar
{
private:
    void *m_ptr;

public:
    GCNavLinkAnimgraphVar(std::string ptr);
    GCNavLinkAnimgraphVar(void *ptr);

    uint32_t GetAlignmentDegrees() const;
    void SetAlignmentDegrees(uint32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCCSGO_TeamSelectCounterTerroristPosition
{
private:
    void *m_ptr;

public:
    GCCSGO_TeamSelectCounterTerroristPosition(std::string ptr);
    GCCSGO_TeamSelectCounterTerroristPosition(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCNavLinkMovementVData
{
private:
    void *m_ptr;

public:
    GCNavLinkMovementVData(std::string ptr);
    GCNavLinkMovementVData(void *ptr);

    bool GetIsInterpolated() const;
    void SetIsInterpolated(bool value);
    uint32_t GetRecommendedDistance() const;
    void SetRecommendedDistance(uint32_t value);
    std::vector<GCNavLinkAnimgraphVar> GetAnimgraphVars() const;
    void SetAnimgraphVars(std::vector<GCNavLinkAnimgraphVar> value);

    std::string ToPtr();
    bool IsValid();
};

class GCAnimGraphControllerBase
{
private:
    void *m_ptr;

public:
    GCAnimGraphControllerBase(std::string ptr);
    GCAnimGraphControllerBase(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GRagdollCreationParams_t
{
private:
    void *m_ptr;

public:
    GRagdollCreationParams_t(std::string ptr);
    GRagdollCreationParams_t(void *ptr);

    Vector GetForce() const;
    void SetForce(Vector value);
    int32_t GetForceBone() const;
    void SetForceBone(int32_t value);
    bool GetForceCurrentWorldTransform() const;
    void SetForceCurrentWorldTransform(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GAmmoTypeInfo_t
{
private:
    void *m_ptr;

public:
    GAmmoTypeInfo_t(std::string ptr);
    GAmmoTypeInfo_t(void *ptr);

    int32_t GetMaxCarry() const;
    void SetMaxCarry(int32_t value);
    GCRangeInt GetSplashSize() const;
    void SetSplashSize(GCRangeInt value);
    AmmoFlags_t GetFlags() const;
    void SetFlags(AmmoFlags_t value);
    float GetMass() const;
    void SetMass(float value);
    GCRangeFloat GetSpeed() const;
    void SetSpeed(GCRangeFloat value);

    std::string ToPtr();
    bool IsValid();
};

class GCRandStopwatch
{
private:
    void *m_ptr;

public:
    GCRandStopwatch(std::string ptr);
    GCRandStopwatch(void *ptr);

    float GetMinInterval() const;
    void SetMinInterval(float value);
    float GetMaxInterval() const;
    void SetMaxInterval(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCGameChoreoServices
{
private:
    void *m_ptr;

public:
    GCGameChoreoServices(std::string ptr);
    GCGameChoreoServices(void *ptr);

    GCBaseAnimGraph GetOwner() const;
    void SetOwner(GCBaseAnimGraph* value);
    GCScriptedSequence GetScriptedSequence() const;
    void SetScriptedSequence(GCScriptedSequence* value);
    GIChoreoServices GetScriptState() const;
    void SetScriptState(GIChoreoServices value);
    GIChoreoServices GetChoreoState() const;
    void SetChoreoState(GIChoreoServices value);

    std::string ToPtr();
    bool IsValid();
};

class GCSimpleStopwatch
{
private:
    void *m_ptr;

public:
    GCSimpleStopwatch(std::string ptr);
    GCSimpleStopwatch(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCShatterGlassShard
{
private:
    void *m_ptr;

public:
    GCShatterGlassShard(std::string ptr);
    GCShatterGlassShard(void *ptr);

    uint32_t GetShardHandle() const;
    void SetShardHandle(uint32_t value);
    std::vector<Vector2D> GetPanelVertices() const;
    void SetPanelVertices(std::vector<Vector2D> value);
    Vector2D GetLocalPanelSpaceOrigin() const;
    void SetLocalPanelSpaceOrigin(Vector2D value);
    GCShatterGlassShardPhysics GetPhysicsEntity() const;
    void SetPhysicsEntity(GCShatterGlassShardPhysics* value);
    GCFuncShatterglass GetParentPanel() const;
    void SetParentPanel(GCFuncShatterglass* value);
    uint32_t GetParentShard() const;
    void SetParentShard(uint32_t value);
    ShatterGlassStressType GetShatterStressType() const;
    void SetShatterStressType(ShatterGlassStressType value);
    Vector GetStressVelocity() const;
    void SetStressVelocity(Vector value);
    bool GetCreatedModel() const;
    void SetCreatedModel(bool value);
    float GetLongestEdge() const;
    void SetLongestEdge(float value);
    float GetShortestEdge() const;
    void SetShortestEdge(float value);
    float GetLongestAcross() const;
    void SetLongestAcross(float value);
    float GetShortestAcross() const;
    void SetShortestAcross(float value);
    float GetSumOfAllEdges() const;
    void SetSumOfAllEdges(float value);
    float GetArea() const;
    void SetArea(float value);
    OnFrame GetOnFrameEdge() const;
    void SetOnFrameEdge(OnFrame value);
    int32_t GetParentPanelsNthShard() const;
    void SetParentPanelsNthShard(int32_t value);
    int32_t GetSubShardGeneration() const;
    void SetSubShardGeneration(int32_t value);
    Vector2D GetAverageVertPosition() const;
    void SetAverageVertPosition(Vector2D value);
    bool GetAverageVertPositionIsValid() const;
    void SetAverageVertPositionIsValid(bool value);
    Vector2D GetPanelSpaceStressPositionA() const;
    void SetPanelSpaceStressPositionA(Vector2D value);
    Vector2D GetPanelSpaceStressPositionB() const;
    void SetPanelSpaceStressPositionB(Vector2D value);
    bool GetStressPositionAIsValid() const;
    void SetStressPositionAIsValid(bool value);
    bool GetStressPositionBIsValid() const;
    void SetStressPositionBIsValid(bool value);
    bool GetFlaggedForRemoval() const;
    void SetFlaggedForRemoval(bool value);
    bool GetShatterRateLimited() const;
    void SetShatterRateLimited(bool value);
    GCBaseEntity GetEntityHittingMe() const;
    void SetEntityHittingMe(GCBaseEntity* value);
    std::vector<uint32> GetNeighbors() const;
    void SetNeighbors(std::vector<uint32> value);

    std::string ToPtr();
    bool IsValid();
};

class GCommandToolCommand_t
{
private:
    void *m_ptr;

public:
    GCommandToolCommand_t(std::string ptr);
    GCommandToolCommand_t(void *ptr);

    bool GetEnabled() const;
    void SetEnabled(bool value);
    bool GetOpened() const;
    void SetOpened(bool value);
    uint32_t GetInternalId() const;
    void SetInternalId(uint32_t value);
    CUtlString GetShortName() const;
    void SetShortName(CUtlString value);
    CommandExecMode_t GetExecMode() const;
    void SetExecMode(CommandExecMode_t value);
    CUtlString GetSpawnGroup() const;
    void SetSpawnGroup(CUtlString value);
    float GetPeriodicExecDelay() const;
    void SetPeriodicExecDelay(float value);
    CommandEntitySpecType_t GetSpecType() const;
    void SetSpecType(CommandEntitySpecType_t value);
    CUtlString GetEntitySpec() const;
    void SetEntitySpec(CUtlString value);
    CUtlString GetCommands() const;
    void SetCommands(CUtlString value);
    DebugOverlayBits_t GetSetDebugBits() const;
    void SetSetDebugBits(DebugOverlayBits_t value);
    DebugOverlayBits_t GetClearDebugBits() const;
    void SetClearDebugBits(DebugOverlayBits_t value);

    std::string ToPtr();
    bool IsValid();
};

class Gragdollelement_t
{
private:
    void *m_ptr;

public:
    Gragdollelement_t(std::string ptr);
    Gragdollelement_t(void *ptr);

    Vector GetOriginParentSpace() const;
    void SetOriginParentSpace(Vector value);
    int32_t GetParentIndex() const;
    void SetParentIndex(int32_t value);
    float GetRadius() const;
    void SetRadius(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCBodyComponentBaseModelEntity
{
private:
    void *m_ptr;

public:
    GCBodyComponentBaseModelEntity(std::string ptr);
    GCBodyComponentBaseModelEntity(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCNetworkOriginQuantizedVector
{
private:
    void *m_ptr;

public:
    GCNetworkOriginQuantizedVector(std::string ptr);
    GCNetworkOriginQuantizedVector(void *ptr);

    float GetX() const;
    void SetX(float value);
    float GetY() const;
    void SetY(float value);
    float GetZ() const;
    void SetZ(float value);

    std::string ToPtr();
    bool IsValid();
};

class Gmagnetted_objects_t
{
private:
    void *m_ptr;

public:
    Gmagnetted_objects_t(std::string ptr);
    Gmagnetted_objects_t(void *ptr);

    GCBaseEntity GetEntity() const;
    void SetEntity(GCBaseEntity* value);

    std::string ToPtr();
    bool IsValid();
};

class GCHintMessageQueue
{
private:
    void *m_ptr;

public:
    GCHintMessageQueue(std::string ptr);
    GCHintMessageQueue(void *ptr);

    float GetTmMessageEnd() const;
    void SetTmMessageEnd(float value);
    GCBasePlayerController GetPlayerController() const;
    void SetPlayerController(GCBasePlayerController* value);

    std::string ToPtr();
    bool IsValid();
};

class GCSkillInt
{
private:
    void *m_ptr;

public:
    GCSkillInt(std::string ptr);
    GCSkillInt(void *ptr);

    std::vector<int32_t> GetValue() const;
    void SetValue(std::vector<int32_t> value);

    std::string ToPtr();
    bool IsValid();
};

class Gthinkfunc_t
{
private:
    void *m_ptr;

public:
    Gthinkfunc_t(std::string ptr);
    Gthinkfunc_t(void *ptr);

    CUtlStringToken GetContext() const;
    void SetContext(CUtlStringToken value);

    std::string ToPtr();
    bool IsValid();
};

class GCNavHullPresetVData
{
private:
    void *m_ptr;

public:
    GCNavHullPresetVData(std::string ptr);
    GCNavHullPresetVData(void *ptr);

    std::vector<CUtlString> GetNavHulls() const;
    void SetNavHulls(std::vector<CUtlString> value);

    std::string ToPtr();
    bool IsValid();
};

class GCBasePlayerVData
{
private:
    void *m_ptr;

public:
    GCBasePlayerVData(std::string ptr);
    GCBasePlayerVData(void *ptr);

    GCSkillFloat GetHeadDamageMultiplier() const;
    void SetHeadDamageMultiplier(GCSkillFloat value);
    GCSkillFloat GetChestDamageMultiplier() const;
    void SetChestDamageMultiplier(GCSkillFloat value);
    GCSkillFloat GetStomachDamageMultiplier() const;
    void SetStomachDamageMultiplier(GCSkillFloat value);
    GCSkillFloat GetArmDamageMultiplier() const;
    void SetArmDamageMultiplier(GCSkillFloat value);
    GCSkillFloat GetLegDamageMultiplier() const;
    void SetLegDamageMultiplier(GCSkillFloat value);
    float GetHoldBreathTime() const;
    void SetHoldBreathTime(float value);
    float GetDrowningDamageInterval() const;
    void SetDrowningDamageInterval(float value);
    int32_t GetDrowningDamageInitial() const;
    void SetDrowningDamageInitial(int32_t value);
    int32_t GetDrowningDamageMax() const;
    void SetDrowningDamageMax(int32_t value);
    int32_t GetWaterSpeed() const;
    void SetWaterSpeed(int32_t value);
    float GetUseRange() const;
    void SetUseRange(float value);
    float GetUseAngleTolerance() const;
    void SetUseAngleTolerance(float value);
    float GetCrouchTime() const;
    void SetCrouchTime(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCSceneEventInfo
{
private:
    void *m_ptr;

public:
    GCSceneEventInfo(std::string ptr);
    GCSceneEventInfo(void *ptr);

    int32_t GetLayer() const;
    void SetLayer(int32_t value);
    int32_t GetPriority() const;
    void SetPriority(int32_t value);
    float GetWeight() const;
    void SetWeight(float value);
    bool GetHasArrived() const;
    void SetHasArrived(bool value);
    int32_t GetType() const;
    void SetType(int32_t value);
    bool GetIsGesture() const;
    void SetIsGesture(bool value);
    bool GetShouldRemove() const;
    void SetShouldRemove(bool value);
    GCBaseEntity GetTarget() const;
    void SetTarget(GCBaseEntity* value);
    GSceneEventId_t GetSceneEventId() const;
    void SetSceneEventId(GSceneEventId_t value);
    bool GetClientSide() const;
    void SetClientSide(bool value);
    bool GetStarted() const;
    void SetStarted(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCCopyRecipientFilter
{
private:
    void *m_ptr;

public:
    GCCopyRecipientFilter(std::string ptr);
    GCCopyRecipientFilter(void *ptr);

    int32_t GetFlags() const;
    void SetFlags(int32_t value);
    std::vector<int32_t> GetRecipients() const;
    void SetRecipients(std::vector<int32_t> value);

    std::string ToPtr();
    bool IsValid();
};

class GCPropDoorRotatingBreakable
{
private:
    void *m_ptr;

public:
    GCPropDoorRotatingBreakable(std::string ptr);
    GCPropDoorRotatingBreakable(void *ptr);

    bool GetBreakable() const;
    void SetBreakable(bool value);
    bool GetIsAbleToCloseAreaPortals() const;
    void SetIsAbleToCloseAreaPortals(bool value);
    int32_t GetCurrentDamageState() const;
    void SetCurrentDamageState(int32_t value);
    std::vector<CUtlSymbolLarge> GetDamageStates() const;
    void SetDamageStates(std::vector<CUtlSymbolLarge> value);

    std::string ToPtr();
    bool IsValid();
};

class GCBtActionAim
{
private:
    void *m_ptr;

public:
    GCBtActionAim(std::string ptr);
    GCBtActionAim(void *ptr);

    CUtlString GetSensorInputKey() const;
    void SetSensorInputKey(CUtlString value);
    CUtlString GetAimReadyKey() const;
    void SetAimReadyKey(CUtlString value);
    float GetZoomCooldownTimestamp() const;
    void SetZoomCooldownTimestamp(float value);
    bool GetDoneAiming() const;
    void SetDoneAiming(bool value);
    float GetLerpStartTime() const;
    void SetLerpStartTime(float value);
    float GetNextLookTargetLerpTime() const;
    void SetNextLookTargetLerpTime(float value);
    float GetPenaltyReductionRatio() const;
    void SetPenaltyReductionRatio(float value);
    QAngle GetNextLookTarget() const;
    void SetNextLookTarget(QAngle value);
    GCountdownTimer GetAimTimer() const;
    void SetAimTimer(GCountdownTimer value);
    GCountdownTimer GetSniperHoldTimer() const;
    void SetSniperHoldTimer(GCountdownTimer value);
    GCountdownTimer GetFocusIntervalTimer() const;
    void SetFocusIntervalTimer(GCountdownTimer value);
    bool GetAcquired() const;
    void SetAcquired(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCFiringModeInt
{
private:
    void *m_ptr;

public:
    GCFiringModeInt(std::string ptr);
    GCFiringModeInt(void *ptr);

    std::vector<int32_t> GetValues() const;
    void SetValues(std::vector<int32_t> value);

    std::string ToPtr();
    bool IsValid();
};

class GCSoundPatch
{
private:
    void *m_ptr;

public:
    GCSoundPatch(std::string ptr);
    GCSoundPatch(void *ptr);

    GCSoundEnvelope GetPitch() const;
    void SetPitch(GCSoundEnvelope value);
    GCSoundEnvelope GetVolume() const;
    void SetVolume(GCSoundEnvelope value);
    float GetShutdownTime() const;
    void SetShutdownTime(float value);
    float GetLastTime() const;
    void SetLastTime(float value);
    CUtlSymbolLarge GetSoundScriptName() const;
    void SetSoundScriptName(CUtlSymbolLarge value);
    GCBaseEntity GetEnt() const;
    void SetEnt(GCBaseEntity* value);
    CEntityIndex GetSoundEntityIndex() const;
    void SetSoundEntityIndex(CEntityIndex value);
    Vector GetSoundOrigin() const;
    void SetSoundOrigin(Vector value);
    int32_t GetIsPlaying() const;
    void SetIsPlaying(int32_t value);
    GCCopyRecipientFilter GetFilter() const;
    void SetFilter(GCCopyRecipientFilter value);
    float GetCloseCaptionDuration() const;
    void SetCloseCaptionDuration(float value);
    bool GetUpdatedSoundOrigin() const;
    void SetUpdatedSoundOrigin(bool value);
    CUtlSymbolLarge GetClassName() const;
    void SetClassName(CUtlSymbolLarge value);

    std::string ToPtr();
    bool IsValid();
};

class GCSmoothFunc
{
private:
    void *m_ptr;

public:
    GCSmoothFunc(std::string ptr);
    GCSmoothFunc(void *ptr);

    float GetSmoothAmplitude() const;
    void SetSmoothAmplitude(float value);
    float GetSmoothBias() const;
    void SetSmoothBias(float value);
    float GetSmoothDuration() const;
    void SetSmoothDuration(float value);
    float GetSmoothRemainingTime() const;
    void SetSmoothRemainingTime(float value);
    int32_t GetSmoothDir() const;
    void SetSmoothDir(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GIHasAttributes
{
private:
    void *m_ptr;

public:
    GIHasAttributes(std::string ptr);
    GIHasAttributes(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCRagdollPropAttached
{
private:
    void *m_ptr;

public:
    GCRagdollPropAttached(std::string ptr);
    GCRagdollPropAttached(void *ptr);

    uint32_t GetBoneIndexAttached() const;
    void SetBoneIndexAttached(uint32_t value);
    uint32_t GetRagdollAttachedObjectIndex() const;
    void SetRagdollAttachedObjectIndex(uint32_t value);
    Vector GetAttachmentPointBoneSpace() const;
    void SetAttachmentPointBoneSpace(Vector value);
    Vector GetAttachmentPointRagdollSpace() const;
    void SetAttachmentPointRagdollSpace(Vector value);
    bool GetShouldDetach() const;
    void SetShouldDetach(bool value);
    bool GetShouldDeleteAttachedActivationRecord() const;
    void SetShouldDeleteAttachedActivationRecord(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GHullFlags_t
{
private:
    void *m_ptr;

public:
    GHullFlags_t(std::string ptr);
    GHullFlags_t(void *ptr);

    bool GetHull_Human() const;
    void SetHull_Human(bool value);
    bool GetHull_SmallCentered() const;
    void SetHull_SmallCentered(bool value);
    bool GetHull_WideHuman() const;
    void SetHull_WideHuman(bool value);
    bool GetHull_Tiny() const;
    void SetHull_Tiny(bool value);
    bool GetHull_Medium() const;
    void SetHull_Medium(bool value);
    bool GetHull_TinyCentered() const;
    void SetHull_TinyCentered(bool value);
    bool GetHull_Large() const;
    void SetHull_Large(bool value);
    bool GetHull_LargeCentered() const;
    void SetHull_LargeCentered(bool value);
    bool GetHull_MediumTall() const;
    void SetHull_MediumTall(bool value);
    bool GetHull_Small() const;
    void SetHull_Small(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCBodyComponentBaseAnimGraph
{
private:
    void *m_ptr;

public:
    GCBodyComponentBaseAnimGraph(std::string ptr);
    GCBodyComponentBaseAnimGraph(void *ptr);

    GCBaseAnimGraphController GetAnimationController() const;
    void SetAnimationController(GCBaseAnimGraphController value);

    std::string ToPtr();
    bool IsValid();
};

class GGameAmmoTypeInfo_t
{
private:
    void *m_ptr;

public:
    GGameAmmoTypeInfo_t(std::string ptr);
    GGameAmmoTypeInfo_t(void *ptr);

    int32_t GetBuySize() const;
    void SetBuySize(int32_t value);
    int32_t GetCost() const;
    void SetCost(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCPhysMotor
{
private:
    void *m_ptr;

public:
    GCPhysMotor(std::string ptr);
    GCPhysMotor(void *ptr);

    CUtlSymbolLarge GetNameAttach() const;
    void SetNameAttach(CUtlSymbolLarge value);
    GCBaseEntity GetAttachedObject() const;
    void SetAttachedObject(GCBaseEntity* value);
    float GetSpinUp() const;
    void SetSpinUp(float value);
    float GetAdditionalAcceleration() const;
    void SetAdditionalAcceleration(float value);
    float GetAngularAcceleration() const;
    void SetAngularAcceleration(float value);
    GCMotorController GetMotor() const;
    void SetMotor(GCMotorController value);

    std::string ToPtr();
    bool IsValid();
};

class GCSimTimer
{
private:
    void *m_ptr;

public:
    GCSimTimer(std::string ptr);
    GCSimTimer(void *ptr);

    float GetInterval() const;
    void SetInterval(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCBaseIssue
{
private:
    void *m_ptr;

public:
    GCBaseIssue(std::string ptr);
    GCBaseIssue(void *ptr);

    std::string GetTypeString() const;
    void SetTypeString(std::string value);
    std::string GetDetailsString() const;
    void SetDetailsString(std::string value);
    int32_t GetNumYesVotes() const;
    void SetNumYesVotes(int32_t value);
    int32_t GetNumNoVotes() const;
    void SetNumNoVotes(int32_t value);
    int32_t GetNumPotentialVotes() const;
    void SetNumPotentialVotes(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCTakeDamageInfo
{
private:
    void *m_ptr;

public:
    GCTakeDamageInfo(std::string ptr);
    GCTakeDamageInfo(void *ptr);

    Vector GetDamageForce() const;
    void SetDamageForce(Vector value);
    Vector GetDamagePosition() const;
    void SetDamagePosition(Vector value);
    Vector GetReportedPosition() const;
    void SetReportedPosition(Vector value);
    Vector GetDamageDirection() const;
    void SetDamageDirection(Vector value);
    GCBaseEntity GetInflictor() const;
    void SetInflictor(GCBaseEntity* value);
    GCBaseEntity GetAttacker() const;
    void SetAttacker(GCBaseEntity* value);
    GCBaseEntity GetAbility() const;
    void SetAbility(GCBaseEntity* value);
    float GetDamage() const;
    void SetDamage(float value);
    float GetTotalledDamage() const;
    void SetTotalledDamage(float value);
    int32_t GetBitsDamageType() const;
    void SetBitsDamageType(int32_t value);
    int32_t GetDamageCustom() const;
    void SetDamageCustom(int32_t value);
    uint8_t GetAmmoType() const;
    void SetAmmoType(uint8_t value);
    float GetOriginalDamage() const;
    void SetOriginalDamage(float value);
    bool GetShouldBleed() const;
    void SetShouldBleed(bool value);
    bool GetShouldSpark() const;
    void SetShouldSpark(bool value);
    TakeDamageFlags_t GetDamageFlags() const;
    void SetDamageFlags(TakeDamageFlags_t value);
    int32_t GetNumObjectsPenetrated() const;
    void SetNumObjectsPenetrated(int32_t value);
    bool GetInTakeDamageFlow() const;
    void SetInTakeDamageFlow(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GConceptHistory_t
{
private:
    void *m_ptr;

public:
    GConceptHistory_t(std::string ptr);
    GConceptHistory_t(void *ptr);

    float GetTimeSpoken() const;
    void SetTimeSpoken(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCPhysTorque
{
private:
    void *m_ptr;

public:
    GCPhysTorque(std::string ptr);
    GCPhysTorque(void *ptr);

    Vector GetAxis() const;
    void SetAxis(Vector value);

    std::string ToPtr();
    bool IsValid();
};

class GSummaryTakeDamageInfo_t
{
private:
    void *m_ptr;

public:
    GSummaryTakeDamageInfo_t(std::string ptr);
    GSummaryTakeDamageInfo_t(void *ptr);

    int32_t GetSummarisedCount() const;
    void SetSummarisedCount(int32_t value);
    GCTakeDamageInfo GetInfo() const;
    void SetInfo(GCTakeDamageInfo value);
    GCTakeDamageResult GetResult() const;
    void SetResult(GCTakeDamageResult value);
    GCBaseEntity GetTarget() const;
    void SetTarget(GCBaseEntity* value);

    std::string ToPtr();
    bool IsValid();
};

class GCRandSimTimer
{
private:
    void *m_ptr;

public:
    GCRandSimTimer(std::string ptr);
    GCRandSimTimer(void *ptr);

    float GetMinInterval() const;
    void SetMinInterval(float value);
    float GetMaxInterval() const;
    void SetMaxInterval(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCBtNodeComposite
{
private:
    void *m_ptr;

public:
    GCBtNodeComposite(std::string ptr);
    GCBtNodeComposite(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCFireCrackerBlast
{
private:
    void *m_ptr;

public:
    GCFireCrackerBlast(std::string ptr);
    GCFireCrackerBlast(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class Gsndopvarlatchdata_t
{
private:
    void *m_ptr;

public:
    Gsndopvarlatchdata_t(std::string ptr);
    Gsndopvarlatchdata_t(void *ptr);

    CUtlSymbolLarge GetStack() const;
    void SetStack(CUtlSymbolLarge value);
    CUtlSymbolLarge GetOperator() const;
    void SetOperator(CUtlSymbolLarge value);
    CUtlSymbolLarge GetOpvar() const;
    void SetOpvar(CUtlSymbolLarge value);
    float GetVal() const;
    void SetVal(float value);
    Vector GetPos() const;
    void SetPos(Vector value);

    std::string ToPtr();
    bool IsValid();
};

class GCCSGO_TeamSelectTerroristPosition
{
private:
    void *m_ptr;

public:
    GCCSGO_TeamSelectTerroristPosition(std::string ptr);
    GCCSGO_TeamSelectTerroristPosition(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCAI_ExpresserWithFollowup
{
private:
    void *m_ptr;

public:
    GCAI_ExpresserWithFollowup(std::string ptr);
    GCAI_ExpresserWithFollowup(void *ptr);

    GResponseFollowup GetPostponedFollowup() const;
    void SetPostponedFollowup(GResponseFollowup* value);

    std::string ToPtr();
    bool IsValid();
};

class GCNavVolumeMarkupVolume
{
private:
    void *m_ptr;

public:
    GCNavVolumeMarkupVolume(std::string ptr);
    GCNavVolumeMarkupVolume(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GQuestProgress
{
private:
    void *m_ptr;

public:
    GQuestProgress(std::string ptr);
    GQuestProgress(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class Glerpdata_t
{
private:
    void *m_ptr;

public:
    Glerpdata_t(std::string ptr);
    Glerpdata_t(void *ptr);

    GCBaseEntity GetEnt() const;
    void SetEnt(GCBaseEntity* value);
    MoveType_t GetMoveType() const;
    void SetMoveType(MoveType_t value);
    Vector GetStartOrigin() const;
    void SetStartOrigin(Vector value);
    Quaternion GetStartRot() const;
    void SetStartRot(Quaternion value);
    GParticleIndex_t GetFXIndex() const;
    void SetFXIndex(GParticleIndex_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCMultiplayer_Expresser
{
private:
    void *m_ptr;

public:
    GCMultiplayer_Expresser(std::string ptr);
    GCMultiplayer_Expresser(void *ptr);

    bool GetAllowMultipleScenes() const;
    void SetAllowMultipleScenes(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCTakeDamageSummaryScopeGuard
{
private:
    void *m_ptr;

public:
    GCTakeDamageSummaryScopeGuard(std::string ptr);
    GCTakeDamageSummaryScopeGuard(void *ptr);

    std::vector<GSummaryTakeDamageInfo_t*> GetSummaries() const;
    void SetSummaries(std::vector<GSummaryTakeDamageInfo_t*> value);

    std::string ToPtr();
    bool IsValid();
};

class GCWeaponSawedoff
{
private:
    void *m_ptr;

public:
    GCWeaponSawedoff(std::string ptr);
    GCWeaponSawedoff(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCCSPlayer_MovementServices
{
private:
    void *m_ptr;

public:
    GCCSPlayer_MovementServices(std::string ptr);
    GCCSPlayer_MovementServices(void *ptr);

    float GetMaxFallVelocity() const;
    void SetMaxFallVelocity(float value);
    Vector GetLadderNormal() const;
    void SetLadderNormal(Vector value);
    int32_t GetLadderSurfacePropIndex() const;
    void SetLadderSurfacePropIndex(int32_t value);
    float GetDuckAmount() const;
    void SetDuckAmount(float value);
    float GetDuckSpeed() const;
    void SetDuckSpeed(float value);
    bool GetDuckOverride() const;
    void SetDuckOverride(bool value);
    bool GetDesiresDuck() const;
    void SetDesiresDuck(bool value);
    float GetDuckOffset() const;
    void SetDuckOffset(float value);
    uint32_t GetDuckTimeMsecs() const;
    void SetDuckTimeMsecs(uint32_t value);
    uint32_t GetDuckJumpTimeMsecs() const;
    void SetDuckJumpTimeMsecs(uint32_t value);
    uint32_t GetJumpTimeMsecs() const;
    void SetJumpTimeMsecs(uint32_t value);
    float GetLastDuckTime() const;
    void SetLastDuckTime(float value);
    Vector2D GetLastPositionAtFullCrouchSpeed() const;
    void SetLastPositionAtFullCrouchSpeed(Vector2D value);
    bool GetDuckUntilOnGround() const;
    void SetDuckUntilOnGround(bool value);
    bool GetHasWalkMovedSinceLastJump() const;
    void SetHasWalkMovedSinceLastJump(bool value);
    bool GetInStuckTest() const;
    void SetInStuckTest(bool value);
    int32_t GetTraceCount() const;
    void SetTraceCount(int32_t value);
    int32_t GetStuckLast() const;
    void SetStuckLast(int32_t value);
    bool GetSpeedCropped() const;
    void SetSpeedCropped(bool value);
    int32_t GetOldWaterLevel() const;
    void SetOldWaterLevel(int32_t value);
    float GetWaterEntryTime() const;
    void SetWaterEntryTime(float value);
    Vector GetForward() const;
    void SetForward(Vector value);
    Vector GetLeft() const;
    void SetLeft(Vector value);
    Vector GetUp() const;
    void SetUp(Vector value);
    int32_t GetGameCodeHasMovedPlayerAfterCommand() const;
    void SetGameCodeHasMovedPlayerAfterCommand(int32_t value);
    bool GetMadeFootstepNoise() const;
    void SetMadeFootstepNoise(bool value);
    int32_t GetFootsteps() const;
    void SetFootsteps(int32_t value);
    bool GetOldJumpPressed() const;
    void SetOldJumpPressed(bool value);
    float GetJumpPressedTime() const;
    void SetJumpPressedTime(float value);
    float GetJumpUntil() const;
    void SetJumpUntil(float value);
    float GetJumpVel() const;
    void SetJumpVel(float value);
    uint64_t GetButtonDownMaskPrev() const;
    void SetButtonDownMaskPrev(uint64_t value);
    float GetOffsetTickCompleteTime() const;
    void SetOffsetTickCompleteTime(float value);
    float GetOffsetTickStashedSpeed() const;
    void SetOffsetTickStashedSpeed(float value);
    float GetStamina() const;
    void SetStamina(float value);
    float GetHeightAtJumpStart() const;
    void SetHeightAtJumpStart(float value);
    float GetMaxJumpHeightThisJump() const;
    void SetMaxJumpHeightThisJump(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCNavHullVData
{
private:
    void *m_ptr;

public:
    GCNavHullVData(std::string ptr);
    GCNavHullVData(void *ptr);

    bool GetAgentEnabled() const;
    void SetAgentEnabled(bool value);
    float GetAgentRadius() const;
    void SetAgentRadius(float value);
    float GetAgentHeight() const;
    void SetAgentHeight(float value);
    bool GetAgentShortHeightEnabled() const;
    void SetAgentShortHeightEnabled(bool value);
    float GetAgentShortHeight() const;
    void SetAgentShortHeight(float value);
    float GetAgentMaxClimb() const;
    void SetAgentMaxClimb(float value);
    int32_t GetAgentMaxSlope() const;
    void SetAgentMaxSlope(int32_t value);
    float GetAgentMaxJumpDownDist() const;
    void SetAgentMaxJumpDownDist(float value);
    float GetAgentMaxJumpHorizDistBase() const;
    void SetAgentMaxJumpHorizDistBase(float value);
    float GetAgentMaxJumpUpDist() const;
    void SetAgentMaxJumpUpDist(float value);
    int32_t GetAgentBorderErosion() const;
    void SetAgentBorderErosion(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GSoundOpvarTraceResult_t
{
private:
    void *m_ptr;

public:
    GSoundOpvarTraceResult_t(std::string ptr);
    GSoundOpvarTraceResult_t(void *ptr);

    Vector GetPos() const;
    void SetPos(Vector value);
    bool GetDidHit() const;
    void SetDidHit(bool value);
    float GetDistSqrToCenter() const;
    void SetDistSqrToCenter(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCAnimEventListener
{
private:
    void *m_ptr;

public:
    GCAnimEventListener(std::string ptr);
    GCAnimEventListener(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCNavVolumeCalculatedVector
{
private:
    void *m_ptr;

public:
    GCNavVolumeCalculatedVector(std::string ptr);
    GCNavVolumeCalculatedVector(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCCSWeaponBaseVData
{
private:
    void *m_ptr;

public:
    GCCSWeaponBaseVData(std::string ptr);
    GCCSWeaponBaseVData(void *ptr);

    CSWeaponType GetWeaponType() const;
    void SetWeaponType(CSWeaponType value);
    CSWeaponCategory GetWeaponCategory() const;
    void SetWeaponCategory(CSWeaponCategory value);
    gear_slot_t GetGearSlot() const;
    void SetGearSlot(gear_slot_t value);
    int32_t GetGearSlotPosition() const;
    void SetGearSlotPosition(int32_t value);
    loadout_slot_t GetDefaultLoadoutSlot() const;
    void SetDefaultLoadoutSlot(loadout_slot_t value);
    CUtlString GetWrongTeamMsg() const;
    void SetWrongTeamMsg(CUtlString value);
    int32_t GetPrice() const;
    void SetPrice(int32_t value);
    int32_t GetKillAward() const;
    void SetKillAward(int32_t value);
    int32_t GetPrimaryReserveAmmoMax() const;
    void SetPrimaryReserveAmmoMax(int32_t value);
    int32_t GetSecondaryReserveAmmoMax() const;
    void SetSecondaryReserveAmmoMax(int32_t value);
    bool GetMeleeWeapon() const;
    void SetMeleeWeapon(bool value);
    bool GetHasBurstMode() const;
    void SetHasBurstMode(bool value);
    bool GetIsRevolver() const;
    void SetIsRevolver(bool value);
    bool GetCannotShootUnderwater() const;
    void SetCannotShootUnderwater(bool value);
    CUtlString GetAnimExtension() const;
    void SetAnimExtension(CUtlString value);
    CSWeaponSilencerType GetSilencerType() const;
    void SetSilencerType(CSWeaponSilencerType value);
    int32_t GetCrosshairMinDistance() const;
    void SetCrosshairMinDistance(int32_t value);
    int32_t GetCrosshairDeltaDistance() const;
    void SetCrosshairDeltaDistance(int32_t value);
    bool GetIsFullAuto() const;
    void SetIsFullAuto(bool value);
    int32_t GetNumBullets() const;
    void SetNumBullets(int32_t value);
    GCFiringModeFloat GetCycleTime() const;
    void SetCycleTime(GCFiringModeFloat value);
    GCFiringModeFloat GetMaxSpeed() const;
    void SetMaxSpeed(GCFiringModeFloat value);
    GCFiringModeFloat GetSpread() const;
    void SetSpread(GCFiringModeFloat value);
    GCFiringModeFloat GetInaccuracyCrouch() const;
    void SetInaccuracyCrouch(GCFiringModeFloat value);
    GCFiringModeFloat GetInaccuracyStand() const;
    void SetInaccuracyStand(GCFiringModeFloat value);
    GCFiringModeFloat GetInaccuracyJump() const;
    void SetInaccuracyJump(GCFiringModeFloat value);
    GCFiringModeFloat GetInaccuracyLand() const;
    void SetInaccuracyLand(GCFiringModeFloat value);
    GCFiringModeFloat GetInaccuracyLadder() const;
    void SetInaccuracyLadder(GCFiringModeFloat value);
    GCFiringModeFloat GetInaccuracyFire() const;
    void SetInaccuracyFire(GCFiringModeFloat value);
    GCFiringModeFloat GetInaccuracyMove() const;
    void SetInaccuracyMove(GCFiringModeFloat value);
    GCFiringModeFloat GetRecoilAngle() const;
    void SetRecoilAngle(GCFiringModeFloat value);
    GCFiringModeFloat GetRecoilAngleVariance() const;
    void SetRecoilAngleVariance(GCFiringModeFloat value);
    GCFiringModeFloat GetRecoilMagnitude() const;
    void SetRecoilMagnitude(GCFiringModeFloat value);
    GCFiringModeFloat GetRecoilMagnitudeVariance() const;
    void SetRecoilMagnitudeVariance(GCFiringModeFloat value);
    GCFiringModeInt GetTracerFrequency() const;
    void SetTracerFrequency(GCFiringModeInt value);
    float GetInaccuracyJumpInitial() const;
    void SetInaccuracyJumpInitial(float value);
    float GetInaccuracyJumpApex() const;
    void SetInaccuracyJumpApex(float value);
    float GetInaccuracyReload() const;
    void SetInaccuracyReload(float value);
    int32_t GetRecoilSeed() const;
    void SetRecoilSeed(int32_t value);
    int32_t GetSpreadSeed() const;
    void SetSpreadSeed(int32_t value);
    float GetTimeToIdleAfterFire() const;
    void SetTimeToIdleAfterFire(float value);
    float GetIdleInterval() const;
    void SetIdleInterval(float value);
    float GetAttackMovespeedFactor() const;
    void SetAttackMovespeedFactor(float value);
    float GetHeatPerShot() const;
    void SetHeatPerShot(float value);
    float GetInaccuracyPitchShift() const;
    void SetInaccuracyPitchShift(float value);
    float GetInaccuracyAltSoundThreshold() const;
    void SetInaccuracyAltSoundThreshold(float value);
    float GetBotAudibleRange() const;
    void SetBotAudibleRange(float value);
    CUtlString GetUseRadioSubtitle() const;
    void SetUseRadioSubtitle(CUtlString value);
    bool GetUnzoomsAfterShot() const;
    void SetUnzoomsAfterShot(bool value);
    bool GetHideViewModelWhenZoomed() const;
    void SetHideViewModelWhenZoomed(bool value);
    int32_t GetZoomLevels() const;
    void SetZoomLevels(int32_t value);
    int32_t GetZoomFOV1() const;
    void SetZoomFOV1(int32_t value);
    int32_t GetZoomFOV2() const;
    void SetZoomFOV2(int32_t value);
    float GetZoomTime0() const;
    void SetZoomTime0(float value);
    float GetZoomTime1() const;
    void SetZoomTime1(float value);
    float GetZoomTime2() const;
    void SetZoomTime2(float value);
    float GetIronSightPullUpSpeed() const;
    void SetIronSightPullUpSpeed(float value);
    float GetIronSightPutDownSpeed() const;
    void SetIronSightPutDownSpeed(float value);
    float GetIronSightFOV() const;
    void SetIronSightFOV(float value);
    float GetIronSightPivotForward() const;
    void SetIronSightPivotForward(float value);
    float GetIronSightLooseness() const;
    void SetIronSightLooseness(float value);
    QAngle GetPivotAngle() const;
    void SetPivotAngle(QAngle value);
    Vector GetIronSightEyePos() const;
    void SetIronSightEyePos(Vector value);
    int32_t GetDamage() const;
    void SetDamage(int32_t value);
    float GetHeadshotMultiplier() const;
    void SetHeadshotMultiplier(float value);
    float GetArmorRatio() const;
    void SetArmorRatio(float value);
    float GetPenetration() const;
    void SetPenetration(float value);
    float GetRange() const;
    void SetRange(float value);
    float GetRangeModifier() const;
    void SetRangeModifier(float value);
    float GetFlinchVelocityModifierLarge() const;
    void SetFlinchVelocityModifierLarge(float value);
    float GetFlinchVelocityModifierSmall() const;
    void SetFlinchVelocityModifierSmall(float value);
    float GetRecoveryTimeCrouch() const;
    void SetRecoveryTimeCrouch(float value);
    float GetRecoveryTimeStand() const;
    void SetRecoveryTimeStand(float value);
    float GetRecoveryTimeCrouchFinal() const;
    void SetRecoveryTimeCrouchFinal(float value);
    float GetRecoveryTimeStandFinal() const;
    void SetRecoveryTimeStandFinal(float value);
    int32_t GetRecoveryTransitionStartBullet() const;
    void SetRecoveryTransitionStartBullet(int32_t value);
    int32_t GetRecoveryTransitionEndBullet() const;
    void SetRecoveryTransitionEndBullet(int32_t value);
    float GetThrowVelocity() const;
    void SetThrowVelocity(float value);
    Vector GetSmokeColor() const;
    void SetSmokeColor(Vector value);

    std::string ToPtr();
    bool IsValid();
};

class GCBtNodeConditionInactive
{
private:
    void *m_ptr;

public:
    GCBtNodeConditionInactive(std::string ptr);
    GCBtNodeConditionInactive(void *ptr);

    float GetRoundStartThresholdSeconds() const;
    void SetRoundStartThresholdSeconds(float value);
    float GetSensorInactivityThresholdSeconds() const;
    void SetSensorInactivityThresholdSeconds(float value);
    GCountdownTimer GetSensorInactivityTimer() const;
    void SetSensorInactivityTimer(GCountdownTimer value);

    std::string ToPtr();
    bool IsValid();
};

class GCSAdditionalPerRoundStats_t
{
private:
    void *m_ptr;

public:
    GCSAdditionalPerRoundStats_t(std::string ptr);
    GCSAdditionalPerRoundStats_t(void *ptr);

    int32_t GetNumChickensKilled() const;
    void SetNumChickensKilled(int32_t value);
    int32_t GetKillsWhileBlind() const;
    void SetKillsWhileBlind(int32_t value);
    int32_t GetBombCarrierkills() const;
    void SetBombCarrierkills(int32_t value);
    int32_t GetBurnDamageInflicted() const;
    void SetBurnDamageInflicted(int32_t value);
    int32_t GetBlastDamageInflicted() const;
    void SetBlastDamageInflicted(int32_t value);
    int32_t GetDinks() const;
    void SetDinks(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GActiveModelConfig_t
{
private:
    void *m_ptr;

public:
    GActiveModelConfig_t(std::string ptr);
    GActiveModelConfig_t(void *ptr);

    GModelConfigHandle_t GetHandle() const;
    void SetHandle(GModelConfigHandle_t value);
    CUtlSymbolLarge GetName() const;
    void SetName(CUtlSymbolLarge value);
    std::vector<GCBaseModelEntity*> GetAssociatedEntities() const;
    void SetAssociatedEntities(std::vector<GCBaseModelEntity*> value);
    std::vector<CUtlSymbolLarge> GetAssociatedEntityNames() const;
    void SetAssociatedEntityNames(std::vector<CUtlSymbolLarge> value);

    std::string ToPtr();
    bool IsValid();
};

class GCPrecipitationVData
{
private:
    void *m_ptr;

public:
    GCPrecipitationVData(std::string ptr);
    GCPrecipitationVData(void *ptr);

    float GetInnerDistance() const;
    void SetInnerDistance(float value);
    ParticleAttachment_t GetAttachType() const;
    void SetAttachType(ParticleAttachment_t value);
    bool GetBatchSameVolumeType() const;
    void SetBatchSameVolumeType(bool value);
    int32_t GetRTEnvCP() const;
    void SetRTEnvCP(int32_t value);
    int32_t GetRTEnvCPComponent() const;
    void SetRTEnvCPComponent(int32_t value);
    CUtlString GetModifier() const;
    void SetModifier(CUtlString value);

    std::string ToPtr();
    bool IsValid();
};

class GCBreakableStageHelper
{
private:
    void *m_ptr;

public:
    GCBreakableStageHelper(std::string ptr);
    GCBreakableStageHelper(void *ptr);

    int32_t GetCurrentStage() const;
    void SetCurrentStage(int32_t value);
    int32_t GetStageCount() const;
    void SetStageCount(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCNavVolumeBreadthFirstSearch
{
private:
    void *m_ptr;

public:
    GCNavVolumeBreadthFirstSearch(std::string ptr);
    GCNavVolumeBreadthFirstSearch(void *ptr);

    Vector GetStartPos() const;
    void SetStartPos(Vector value);
    float GetSearchDist() const;
    void SetSearchDist(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCAmbientGeneric
{
private:
    void *m_ptr;

public:
    GCAmbientGeneric(std::string ptr);
    GCAmbientGeneric(void *ptr);

    float GetRadius() const;
    void SetRadius(float value);
    float GetMaxRadius() const;
    void SetMaxRadius(float value);
    soundlevel_t GetSoundLevel() const;
    void SetSoundLevel(soundlevel_t value);
    Gdynpitchvol_t GetDpv() const;
    void SetDpv(Gdynpitchvol_t value);
    bool GetActive() const;
    void SetActive(bool value);
    bool GetLooping() const;
    void SetLooping(bool value);
    CUtlSymbolLarge GetSound() const;
    void SetSound(CUtlSymbolLarge value);
    CUtlSymbolLarge GetSourceEntName() const;
    void SetSourceEntName(CUtlSymbolLarge value);
    GCBaseEntity GetSoundSource() const;
    void SetSoundSource(GCBaseEntity* value);
    CEntityIndex GetSoundSourceEntIndex() const;
    void SetSoundSourceEntIndex(CEntityIndex value);

    std::string ToPtr();
    bool IsValid();
};

class GCSAdditionalMatchStats_t
{
private:
    void *m_ptr;

public:
    GCSAdditionalMatchStats_t(std::string ptr);
    GCSAdditionalMatchStats_t(void *ptr);

    int32_t GetNumRoundsSurvived() const;
    void SetNumRoundsSurvived(int32_t value);
    int32_t GetMaxNumRoundsSurvived() const;
    void SetMaxNumRoundsSurvived(int32_t value);
    int32_t GetNumRoundsSurvivedTotal() const;
    void SetNumRoundsSurvivedTotal(int32_t value);
    int32_t GetRoundsWonWithoutPurchase() const;
    void SetRoundsWonWithoutPurchase(int32_t value);
    int32_t GetRoundsWonWithoutPurchaseTotal() const;
    void SetRoundsWonWithoutPurchaseTotal(int32_t value);
    int32_t GetNumFirstKills() const;
    void SetNumFirstKills(int32_t value);
    int32_t GetNumClutchKills() const;
    void SetNumClutchKills(int32_t value);
    int32_t GetNumPistolKills() const;
    void SetNumPistolKills(int32_t value);
    int32_t GetNumSniperKills() const;
    void SetNumSniperKills(int32_t value);
    int32_t GetNumSuicides() const;
    void SetNumSuicides(int32_t value);
    int32_t GetNumTeamKills() const;
    void SetNumTeamKills(int32_t value);
    int32_t GetTeamDamage() const;
    void SetTeamDamage(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GIRagdoll
{
private:
    void *m_ptr;

public:
    GIRagdoll(std::string ptr);
    GIRagdoll(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCGameText
{
private:
    void *m_ptr;

public:
    GCGameText(std::string ptr);
    GCGameText(void *ptr);

    CUtlSymbolLarge GetMessage() const;
    void SetMessage(CUtlSymbolLarge value);
    Ghudtextparms_t GetTextParms() const;
    void SetTextParms(Ghudtextparms_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCInfoInstructorHintBombTargetB
{
private:
    void *m_ptr;

public:
    GCInfoInstructorHintBombTargetB(std::string ptr);
    GCInfoInstructorHintBombTargetB(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCNavVolumeAll
{
private:
    void *m_ptr;

public:
    GCNavVolumeAll(std::string ptr);
    GCNavVolumeAll(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCNavVolumeSphericalShell
{
private:
    void *m_ptr;

public:
    GCNavVolumeSphericalShell(std::string ptr);
    GCNavVolumeSphericalShell(void *ptr);

    float GetRadiusInner() const;
    void SetRadiusInner(float value);

    std::string ToPtr();
    bool IsValid();
};

class GRelationshipOverride_t
{
private:
    void *m_ptr;

public:
    GRelationshipOverride_t(std::string ptr);
    GRelationshipOverride_t(void *ptr);

    GCBaseEntity GetEntity() const;
    void SetEntity(GCBaseEntity* value);
    Class_T GetClassType() const;
    void SetClassType(Class_T value);

    std::string ToPtr();
    bool IsValid();
};

class GParticleAttributeIndex_t
{
private:
    void *m_ptr;

public:
    GParticleAttributeIndex_t(std::string ptr);
    GParticleAttributeIndex_t(void *ptr);

    int32_t GetValue() const;
    void SetValue(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCParticleInput
{
private:
    void *m_ptr;

public:
    GCParticleInput(std::string ptr);
    GCParticleInput(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCParticleFloatInput
{
private:
    void *m_ptr;

public:
    GCParticleFloatInput(std::string ptr);
    GCParticleFloatInput(void *ptr);

    ParticleFloatType_t GetType() const;
    void SetType(ParticleFloatType_t value);
    ParticleFloatMapType_t GetMapType() const;
    void SetMapType(ParticleFloatMapType_t value);
    float GetLiteralValue() const;
    void SetLiteralValue(float value);
    int32_t GetControlPoint() const;
    void SetControlPoint(int32_t value);
    GParticleAttributeIndex_t GetScalarAttribute() const;
    void SetScalarAttribute(GParticleAttributeIndex_t value);
    GParticleAttributeIndex_t GetVectorAttribute() const;
    void SetVectorAttribute(GParticleAttributeIndex_t value);
    int32_t GetVectorComponent() const;
    void SetVectorComponent(int32_t value);
    float GetRandomMin() const;
    void SetRandomMin(float value);
    float GetRandomMax() const;
    void SetRandomMax(float value);
    bool GetHasRandomSignFlip() const;
    void SetHasRandomSignFlip(bool value);
    int32_t GetRandomSeed() const;
    void SetRandomSeed(int32_t value);
    ParticleFloatRandomMode_t GetRandomMode() const;
    void SetRandomMode(ParticleFloatRandomMode_t value);
    float GetLOD0() const;
    void SetLOD0(float value);
    float GetLOD1() const;
    void SetLOD1(float value);
    float GetLOD2() const;
    void SetLOD2(float value);
    float GetLOD3() const;
    void SetLOD3(float value);
    GParticleAttributeIndex_t GetNoiseInputVectorAttribute() const;
    void SetNoiseInputVectorAttribute(GParticleAttributeIndex_t value);
    float GetNoiseOutputMin() const;
    void SetNoiseOutputMin(float value);
    float GetNoiseOutputMax() const;
    void SetNoiseOutputMax(float value);
    float GetNoiseScale() const;
    void SetNoiseScale(float value);
    Vector GetNoiseOffsetRate() const;
    void SetNoiseOffsetRate(Vector value);
    float GetNoiseOffset() const;
    void SetNoiseOffset(float value);
    int32_t GetNoiseOctaves() const;
    void SetNoiseOctaves(int32_t value);
    PFNoiseTurbulence_t GetNoiseTurbulence() const;
    void SetNoiseTurbulence(PFNoiseTurbulence_t value);
    PFNoiseType_t GetNoiseType() const;
    void SetNoiseType(PFNoiseType_t value);
    PFNoiseModifier_t GetNoiseModifier() const;
    void SetNoiseModifier(PFNoiseModifier_t value);
    float GetNoiseTurbulenceScale() const;
    void SetNoiseTurbulenceScale(float value);
    float GetNoiseTurbulenceMix() const;
    void SetNoiseTurbulenceMix(float value);
    float GetNoiseImgPreviewScale() const;
    void SetNoiseImgPreviewScale(float value);
    bool GetNoiseImgPreviewLive() const;
    void SetNoiseImgPreviewLive(bool value);
    float GetNoCameraFallback() const;
    void SetNoCameraFallback(float value);
    bool GetUseBoundsCenter() const;
    void SetUseBoundsCenter(bool value);
    ParticleFloatInputMode_t GetInputMode() const;
    void SetInputMode(ParticleFloatInputMode_t value);
    float GetMultFactor() const;
    void SetMultFactor(float value);
    float GetInput0() const;
    void SetInput0(float value);
    float GetInput1() const;
    void SetInput1(float value);
    float GetOutput0() const;
    void SetOutput0(float value);
    float GetOutput1() const;
    void SetOutput1(float value);
    float GetNotchedRangeMin() const;
    void SetNotchedRangeMin(float value);
    float GetNotchedRangeMax() const;
    void SetNotchedRangeMax(float value);
    float GetNotchedOutputOutside() const;
    void SetNotchedOutputOutside(float value);
    float GetNotchedOutputInside() const;
    void SetNotchedOutputInside(float value);
    ParticleFloatBiasType_t GetBiasType() const;
    void SetBiasType(ParticleFloatBiasType_t value);
    float GetBiasParameter() const;
    void SetBiasParameter(float value);

    std::string ToPtr();
    bool IsValid();
};

class GVoxelVisBlockOffset_t
{
private:
    void *m_ptr;

public:
    GVoxelVisBlockOffset_t(std::string ptr);
    GVoxelVisBlockOffset_t(void *ptr);

    uint32_t GetOffset() const;
    void SetOffset(uint32_t value);
    uint32_t GetElementCount() const;
    void SetElementCount(uint32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GAggregateLODSetup_t
{
private:
    void *m_ptr;

public:
    GAggregateLODSetup_t(std::string ptr);
    GAggregateLODSetup_t(void *ptr);

    Vector GetLODOrigin() const;
    void SetLODOrigin(Vector value);
    float GetMaxObjectScale() const;
    void SetMaxObjectScale(float value);
    std::vector<float32> GetSwitchDistances() const;
    void SetSwitchDistances(std::vector<float32> value);

    std::string ToPtr();
    bool IsValid();
};

class GCProductQuantizer
{
private:
    void *m_ptr;

public:
    GCProductQuantizer(std::string ptr);
    GCProductQuantizer(void *ptr);

    std::vector<GCVectorQuantizer> GetSubQuantizers() const;
    void SetSubQuantizers(std::vector<GCVectorQuantizer> value);
    int32_t GetDimensions() const;
    void SetDimensions(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCAnimUpdateNodeRef
{
private:
    void *m_ptr;

public:
    GCAnimUpdateNodeRef(std::string ptr);
    GCAnimUpdateNodeRef(void *ptr);

    int32_t GetNodeIndex() const;
    void SetNodeIndex(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCNmGraphNode
{
private:
    void *m_ptr;

public:
    GCNmGraphNode(std::string ptr);
    GCNmGraphNode(void *ptr);

    int16_t GetNodeIdx() const;
    void SetNodeIdx(int16_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCParticleCollectionFloatInput
{
private:
    void *m_ptr;

public:
    GCParticleCollectionFloatInput(std::string ptr);
    GCParticleCollectionFloatInput(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCParticleFunction
{
private:
    void *m_ptr;

public:
    GCParticleFunction(std::string ptr);
    GCParticleFunction(void *ptr);

    GCParticleCollectionFloatInput GetOpStrength() const;
    void SetOpStrength(GCParticleCollectionFloatInput value);
    ParticleEndcapMode_t GetOpEndCapState() const;
    void SetOpEndCapState(ParticleEndcapMode_t value);
    float GetOpStartFadeInTime() const;
    void SetOpStartFadeInTime(float value);
    float GetOpEndFadeInTime() const;
    void SetOpEndFadeInTime(float value);
    float GetOpStartFadeOutTime() const;
    void SetOpStartFadeOutTime(float value);
    float GetOpEndFadeOutTime() const;
    void SetOpEndFadeOutTime(float value);
    float GetOpFadeOscillatePeriod() const;
    void SetOpFadeOscillatePeriod(float value);
    bool GetNormalizeToStopTime() const;
    void SetNormalizeToStopTime(bool value);
    float GetOpTimeOffsetMin() const;
    void SetOpTimeOffsetMin(float value);
    float GetOpTimeOffsetMax() const;
    void SetOpTimeOffsetMax(float value);
    int32_t GetOpTimeOffsetSeed() const;
    void SetOpTimeOffsetSeed(int32_t value);
    int32_t GetOpTimeScaleSeed() const;
    void SetOpTimeScaleSeed(int32_t value);
    float GetOpTimeScaleMin() const;
    void SetOpTimeScaleMin(float value);
    float GetOpTimeScaleMax() const;
    void SetOpTimeScaleMax(float value);
    bool GetDisableOperator() const;
    void SetDisableOperator(bool value);
    CUtlString GetNotes() const;
    void SetNotes(CUtlString value);

    std::string ToPtr();
    bool IsValid();
};

class GCParticleFunctionOperator
{
private:
    void *m_ptr;

public:
    GCParticleFunctionOperator(std::string ptr);
    GCParticleFunctionOperator(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GPARTICLE_WORLD_HANDLE__
{
private:
    void *m_ptr;

public:
    GPARTICLE_WORLD_HANDLE__(std::string ptr);
    GPARTICLE_WORLD_HANDLE__(void *ptr);

    int32_t GetUnused() const;
    void SetUnused(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GVMixDynamicsCompressorDesc_t
{
private:
    void *m_ptr;

public:
    GVMixDynamicsCompressorDesc_t(std::string ptr);
    GVMixDynamicsCompressorDesc_t(void *ptr);

    float GetFldbOutputGain() const;
    void SetFldbOutputGain(float value);
    float GetFldbCompressionThreshold() const;
    void SetFldbCompressionThreshold(float value);
    float GetFldbKneeWidth() const;
    void SetFldbKneeWidth(float value);
    float GetCompressionRatio() const;
    void SetCompressionRatio(float value);
    float GetAttackTimeMS() const;
    void SetAttackTimeMS(float value);
    float GetReleaseTimeMS() const;
    void SetReleaseTimeMS(float value);
    float GetRMSTimeMS() const;
    void SetRMSTimeMS(float value);
    float GetWetMix() const;
    void SetWetMix(float value);
    bool GetPeakMode() const;
    void SetPeakMode(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GFootStepTrigger
{
private:
    void *m_ptr;

public:
    GFootStepTrigger(std::string ptr);
    GFootStepTrigger(void *ptr);

    std::vector<int32> GetTags() const;
    void SetTags(std::vector<int32> value);
    int32_t GetFootIndex() const;
    void SetFootIndex(int32_t value);
    StepPhase GetTriggerPhase() const;
    void SetTriggerPhase(StepPhase value);

    std::string ToPtr();
    bool IsValid();
};

class GParticleControlPointDriver_t
{
private:
    void *m_ptr;

public:
    GParticleControlPointDriver_t(std::string ptr);
    GParticleControlPointDriver_t(void *ptr);

    int32_t GetControlPoint() const;
    void SetControlPoint(int32_t value);
    ParticleAttachment_t GetAttachType() const;
    void SetAttachType(ParticleAttachment_t value);
    CUtlString GetAttachmentName() const;
    void SetAttachmentName(CUtlString value);
    Vector GetOffset() const;
    void SetOffset(Vector value);
    QAngle GetOffset1() const;
    void SetOffset1(QAngle value);
    CUtlString GetEntityName() const;
    void SetEntityName(CUtlString value);

    std::string ToPtr();
    bool IsValid();
};

class GFeSphereRigid_t
{
private:
    void *m_ptr;

public:
    GFeSphereRigid_t(std::string ptr);
    GFeSphereRigid_t(void *ptr);

    float GetSphere() const;
    void SetSphere(float value);
    uint16_t GetNode() const;
    void SetNode(uint16_t value);
    uint16_t GetCollisionMask() const;
    void SetCollisionMask(uint16_t value);
    uint16_t GetVertexMapIndex() const;
    void SetVertexMapIndex(uint16_t value);
    uint16_t GetFlags() const;
    void SetFlags(uint16_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCMotionMetricEvaluator
{
private:
    void *m_ptr;

public:
    GCMotionMetricEvaluator(std::string ptr);
    GCMotionMetricEvaluator(void *ptr);

    std::vector<float32> GetMeans() const;
    void SetMeans(std::vector<float32> value);
    std::vector<float32> GetStandardDeviations() const;
    void SetStandardDeviations(std::vector<float32> value);
    float GetWeight() const;
    void SetWeight(float value);
    int32_t GetDimensionStartIndex() const;
    void SetDimensionStartIndex(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCDrawCullingData
{
private:
    void *m_ptr;

public:
    GCDrawCullingData(std::string ptr);
    GCDrawCullingData(void *ptr);

    Vector GetConeApex() const;
    void SetConeApex(Vector value);
    std::vector<int8_t> GetConeAxis() const;
    void SetConeAxis(std::vector<int8_t> value);
    int8_t GetConeCutoff() const;
    void SetConeCutoff(int8_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCAnimUserDifference
{
private:
    void *m_ptr;

public:
    GCAnimUserDifference(std::string ptr);
    GCAnimUserDifference(void *ptr);

    CBufferString GetName() const;
    void SetName(CBufferString value);
    int32_t GetType() const;
    void SetType(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCSeqMultiFetchFlag
{
private:
    void *m_ptr;

public:
    GCSeqMultiFetchFlag(std::string ptr);
    GCSeqMultiFetchFlag(void *ptr);

    bool GetRealtime() const;
    void SetRealtime(bool value);
    bool GetCylepose() const;
    void SetCylepose(bool value);
    bool Get0D() const;
    void Set0D(bool value);
    bool Get1D() const;
    void Set1D(bool value);
    bool Get2D() const;
    void Set2D(bool value);
    bool Get2D_TRI() const;
    void Set2D_TRI(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCNmEvent
{
private:
    void *m_ptr;

public:
    GCNmEvent(std::string ptr);
    GCNmEvent(void *ptr);

    float GetStartTime() const;
    void SetStartTime(float value);
    float GetDuration() const;
    void SetDuration(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCAnimParamHandle
{
private:
    void *m_ptr;

public:
    GCAnimParamHandle(std::string ptr);
    GCAnimParamHandle(void *ptr);

    AnimParamType_t GetType() const;
    void SetType(AnimParamType_t value);
    uint8_t GetIndex() const;
    void SetIndex(uint8_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCFuseSymbolTable
{
private:
    void *m_ptr;

public:
    GCFuseSymbolTable(std::string ptr);
    GCFuseSymbolTable(void *ptr);

    std::vector<GConstantInfo_t> GetConstants() const;
    void SetConstants(std::vector<GConstantInfo_t> value);
    std::vector<GVariableInfo_t> GetVariables() const;
    void SetVariables(std::vector<GVariableInfo_t> value);
    std::vector<GFunctionInfo_t> GetFunctions() const;
    void SetFunctions(std::vector<GFunctionInfo_t> value);

    std::string ToPtr();
    bool IsValid();
};

class GGeneratedTextureHandle_t
{
private:
    void *m_ptr;

public:
    GGeneratedTextureHandle_t(std::string ptr);
    GGeneratedTextureHandle_t(void *ptr);

    CUtlString GetStrBitmapName() const;
    void SetStrBitmapName(CUtlString value);

    std::string ToPtr();
    bool IsValid();
};

class GSceneViewId_t
{
private:
    void *m_ptr;

public:
    GSceneViewId_t(std::string ptr);
    GSceneViewId_t(void *ptr);

    uint64_t GetViewId() const;
    void SetViewId(uint64_t value);
    uint64_t GetFrameCount() const;
    void SetFrameCount(uint64_t value);

    std::string ToPtr();
    bool IsValid();
};

class GPhysFeModelDesc_t
{
private:
    void *m_ptr;

public:
    GPhysFeModelDesc_t(std::string ptr);
    GPhysFeModelDesc_t(void *ptr);

    std::vector<uint32> GetCtrlHash() const;
    void SetCtrlHash(std::vector<uint32> value);
    std::vector<CUtlString> GetCtrlName() const;
    void SetCtrlName(std::vector<CUtlString> value);
    uint32_t GetStaticNodeFlags() const;
    void SetStaticNodeFlags(uint32_t value);
    uint32_t GetDynamicNodeFlags() const;
    void SetDynamicNodeFlags(uint32_t value);
    float GetLocalForce() const;
    void SetLocalForce(float value);
    float GetLocalRotation() const;
    void SetLocalRotation(float value);
    uint16_t GetNodeCount() const;
    void SetNodeCount(uint16_t value);
    uint16_t GetStaticNodes() const;
    void SetStaticNodes(uint16_t value);
    uint16_t GetRotLockStaticNodes() const;
    void SetRotLockStaticNodes(uint16_t value);
    uint16_t GetFirstPositionDrivenNode() const;
    void SetFirstPositionDrivenNode(uint16_t value);
    uint16_t GetSimdTriCount1() const;
    void SetSimdTriCount1(uint16_t value);
    uint16_t GetSimdTriCount2() const;
    void SetSimdTriCount2(uint16_t value);
    uint16_t GetSimdQuadCount1() const;
    void SetSimdQuadCount1(uint16_t value);
    uint16_t GetSimdQuadCount2() const;
    void SetSimdQuadCount2(uint16_t value);
    uint16_t GetQuadCount1() const;
    void SetQuadCount1(uint16_t value);
    uint16_t GetQuadCount2() const;
    void SetQuadCount2(uint16_t value);
    uint16_t GetTreeDepth() const;
    void SetTreeDepth(uint16_t value);
    uint16_t GetNodeBaseJiggleboneDependsCount() const;
    void SetNodeBaseJiggleboneDependsCount(uint16_t value);
    uint16_t GetRopeCount() const;
    void SetRopeCount(uint16_t value);
    std::vector<uint16> GetRopes() const;
    void SetRopes(std::vector<uint16> value);
    std::vector<GFeNodeBase_t> GetNodeBases() const;
    void SetNodeBases(std::vector<GFeNodeBase_t> value);
    std::vector<GFeSimdNodeBase_t> GetSimdNodeBases() const;
    void SetSimdNodeBases(std::vector<GFeSimdNodeBase_t> value);
    std::vector<GFeQuad_t> GetQuads() const;
    void SetQuads(std::vector<GFeQuad_t> value);
    std::vector<GFeSimdQuad_t> GetSimdQuads() const;
    void SetSimdQuads(std::vector<GFeSimdQuad_t> value);
    std::vector<GFeSimdTri_t> GetSimdTris() const;
    void SetSimdTris(std::vector<GFeSimdTri_t> value);
    std::vector<GFeSimdRodConstraint_t> GetSimdRods() const;
    void SetSimdRods(std::vector<GFeSimdRodConstraint_t> value);
    std::vector<GFeSimdRodConstraintAnim_t> GetSimdRodsAnim() const;
    void SetSimdRodsAnim(std::vector<GFeSimdRodConstraintAnim_t> value);
    std::vector<GFeRodConstraint_t> GetRods() const;
    void SetRods(std::vector<GFeRodConstraint_t> value);
    std::vector<GFeTwistConstraint_t> GetTwists() const;
    void SetTwists(std::vector<GFeTwistConstraint_t> value);
    std::vector<GFeAxialEdgeBend_t> GetAxialEdges() const;
    void SetAxialEdges(std::vector<GFeAxialEdgeBend_t> value);
    std::vector<float32> GetNodeInvMasses() const;
    void SetNodeInvMasses(std::vector<float32> value);
    std::vector<GFeCtrlOffset_t> GetCtrlOffsets() const;
    void SetCtrlOffsets(std::vector<GFeCtrlOffset_t> value);
    std::vector<GFeCtrlOsOffset_t> GetCtrlOsOffsets() const;
    void SetCtrlOsOffsets(std::vector<GFeCtrlOsOffset_t> value);
    std::vector<GFeFollowNode_t> GetFollowNodes() const;
    void SetFollowNodes(std::vector<GFeFollowNode_t> value);
    std::vector<GFeCollisionPlane_t> GetCollisionPlanes() const;
    void SetCollisionPlanes(std::vector<GFeCollisionPlane_t> value);
    std::vector<GFeNodeIntegrator_t> GetNodeIntegrator() const;
    void SetNodeIntegrator(std::vector<GFeNodeIntegrator_t> value);
    std::vector<GFeSpringIntegrator_t> GetSpringIntegrator() const;
    void SetSpringIntegrator(std::vector<GFeSpringIntegrator_t> value);
    std::vector<GFeSimdSpringIntegrator_t> GetSimdSpringIntegrator() const;
    void SetSimdSpringIntegrator(std::vector<GFeSimdSpringIntegrator_t> value);
    std::vector<GFeWorldCollisionParams_t> GetWorldCollisionParams() const;
    void SetWorldCollisionParams(std::vector<GFeWorldCollisionParams_t> value);
    std::vector<float32> GetLegacyStretchForce() const;
    void SetLegacyStretchForce(std::vector<float32> value);
    std::vector<float32> GetNodeCollisionRadii() const;
    void SetNodeCollisionRadii(std::vector<float32> value);
    std::vector<float32> GetDynNodeFriction() const;
    void SetDynNodeFriction(std::vector<float32> value);
    std::vector<float32> GetLocalRotation1() const;
    void SetLocalRotation1(std::vector<float32> value);
    std::vector<float32> GetLocalForce1() const;
    void SetLocalForce1(std::vector<float32> value);
    std::vector<GFeTaperedCapsuleStretch_t> GetTaperedCapsuleStretches() const;
    void SetTaperedCapsuleStretches(std::vector<GFeTaperedCapsuleStretch_t> value);
    std::vector<GFeTaperedCapsuleRigid_t> GetTaperedCapsuleRigids() const;
    void SetTaperedCapsuleRigids(std::vector<GFeTaperedCapsuleRigid_t> value);
    std::vector<GFeSphereRigid_t> GetSphereRigids() const;
    void SetSphereRigids(std::vector<GFeSphereRigid_t> value);
    std::vector<uint16> GetWorldCollisionNodes() const;
    void SetWorldCollisionNodes(std::vector<uint16> value);
    std::vector<uint16> GetTreeParents() const;
    void SetTreeParents(std::vector<uint16> value);
    std::vector<uint16> GetTreeCollisionMasks() const;
    void SetTreeCollisionMasks(std::vector<uint16> value);
    std::vector<GFeTreeChildren_t> GetTreeChildren() const;
    void SetTreeChildren(std::vector<GFeTreeChildren_t> value);
    std::vector<uint16> GetFreeNodes() const;
    void SetFreeNodes(std::vector<uint16> value);
    std::vector<GFeFitMatrix_t> GetFitMatrices() const;
    void SetFitMatrices(std::vector<GFeFitMatrix_t> value);
    std::vector<GFeFitWeight_t> GetFitWeights() const;
    void SetFitWeights(std::vector<GFeFitWeight_t> value);
    std::vector<GFeNodeReverseOffset_t> GetReverseOffsets() const;
    void SetReverseOffsets(std::vector<GFeNodeReverseOffset_t> value);
    std::vector<GFeAnimStrayRadius_t> GetAnimStrayRadii() const;
    void SetAnimStrayRadii(std::vector<GFeAnimStrayRadius_t> value);
    std::vector<GFeSimdAnimStrayRadius_t> GetSimdAnimStrayRadii() const;
    void SetSimdAnimStrayRadii(std::vector<GFeSimdAnimStrayRadius_t> value);
    std::vector<GFeKelagerBend2_t> GetKelagerBends() const;
    void SetKelagerBends(std::vector<GFeKelagerBend2_t> value);
    std::vector<GFeCtrlSoftOffset_t> GetCtrlSoftOffsets() const;
    void SetCtrlSoftOffsets(std::vector<GFeCtrlSoftOffset_t> value);
    std::vector<GCFeIndexedJiggleBone> GetJiggleBones() const;
    void SetJiggleBones(std::vector<GCFeIndexedJiggleBone> value);
    std::vector<uint16> GetSourceElems() const;
    void SetSourceElems(std::vector<uint16> value);
    std::vector<uint32> GetGoalDampedSpringIntegrators() const;
    void SetGoalDampedSpringIntegrators(std::vector<uint32> value);
    std::vector<GFeTri_t> GetTris() const;
    void SetTris(std::vector<GFeTri_t> value);
    uint16_t GetTriCount1() const;
    void SetTriCount1(uint16_t value);
    uint16_t GetTriCount2() const;
    void SetTriCount2(uint16_t value);
    uint8_t GetReservedUint8() const;
    void SetReservedUint8(uint8_t value);
    uint8_t GetExtraPressureIterations() const;
    void SetExtraPressureIterations(uint8_t value);
    uint8_t GetExtraGoalIterations() const;
    void SetExtraGoalIterations(uint8_t value);
    uint8_t GetExtraIterations() const;
    void SetExtraIterations(uint8_t value);
    std::vector<GFeBoxRigid_t> GetBoxRigids() const;
    void SetBoxRigids(std::vector<GFeBoxRigid_t> value);
    std::vector<uint8> GetDynNodeVertexSet() const;
    void SetDynNodeVertexSet(std::vector<uint8> value);
    std::vector<uint32> GetVertexSetNames() const;
    void SetVertexSetNames(std::vector<uint32> value);
    std::vector<GFeRigidColliderIndices_t> GetRigidColliderPriorities() const;
    void SetRigidColliderPriorities(std::vector<GFeRigidColliderIndices_t> value);
    std::vector<GFeMorphLayerDepr_t> GetMorphLayers() const;
    void SetMorphLayers(std::vector<GFeMorphLayerDepr_t> value);
    std::vector<uint8> GetMorphSetData() const;
    void SetMorphSetData(std::vector<uint8> value);
    std::vector<GFeVertexMapDesc_t> GetVertexMaps() const;
    void SetVertexMaps(std::vector<GFeVertexMapDesc_t> value);
    std::vector<uint8> GetVertexMapValues() const;
    void SetVertexMapValues(std::vector<uint8> value);
    std::vector<GFeEffectDesc_t> GetEffects() const;
    void SetEffects(std::vector<GFeEffectDesc_t> value);
    std::vector<GFeCtrlOffset_t> GetLockToParent() const;
    void SetLockToParent(std::vector<GFeCtrlOffset_t> value);
    std::vector<uint16> GetLockToGoal() const;
    void SetLockToGoal(std::vector<uint16> value);
    std::vector<int16> GetSkelParents() const;
    void SetSkelParents(std::vector<int16> value);
    std::vector<GFeNodeWindBase_t> GetDynNodeWindBases() const;
    void SetDynNodeWindBases(std::vector<GFeNodeWindBase_t> value);
    float GetInternalPressure() const;
    void SetInternalPressure(float value);
    float GetDefaultTimeDilation() const;
    void SetDefaultTimeDilation(float value);
    float GetWindage() const;
    void SetWindage(float value);
    float GetWindDrag() const;
    void SetWindDrag(float value);
    float GetDefaultSurfaceStretch() const;
    void SetDefaultSurfaceStretch(float value);
    float GetDefaultThreadStretch() const;
    void SetDefaultThreadStretch(float value);
    float GetDefaultGravityScale() const;
    void SetDefaultGravityScale(float value);
    float GetDefaultVelAirDrag() const;
    void SetDefaultVelAirDrag(float value);
    float GetDefaultExpAirDrag() const;
    void SetDefaultExpAirDrag(float value);
    float GetDefaultVelQuadAirDrag() const;
    void SetDefaultVelQuadAirDrag(float value);
    float GetDefaultExpQuadAirDrag() const;
    void SetDefaultExpQuadAirDrag(float value);
    float GetRodVelocitySmoothRate() const;
    void SetRodVelocitySmoothRate(float value);
    float GetQuadVelocitySmoothRate() const;
    void SetQuadVelocitySmoothRate(float value);
    float GetAddWorldCollisionRadius() const;
    void SetAddWorldCollisionRadius(float value);
    float GetDefaultVolumetricSolveAmount() const;
    void SetDefaultVolumetricSolveAmount(float value);
    float GetMotionSmoothCDT() const;
    void SetMotionSmoothCDT(float value);
    uint16_t GetRodVelocitySmoothIterations() const;
    void SetRodVelocitySmoothIterations(uint16_t value);
    uint16_t GetQuadVelocitySmoothIterations() const;
    void SetQuadVelocitySmoothIterations(uint16_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCCycleBase
{
private:
    void *m_ptr;

public:
    GCCycleBase(std::string ptr);
    GCCycleBase(void *ptr);

    float GetCycle() const;
    void SetCycle(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCPhysSurfacePropertiesSoundNames
{
private:
    void *m_ptr;

public:
    GCPhysSurfacePropertiesSoundNames(std::string ptr);
    GCPhysSurfacePropertiesSoundNames(void *ptr);

    CUtlString GetImpactSoft() const;
    void SetImpactSoft(CUtlString value);
    CUtlString GetImpactHard() const;
    void SetImpactHard(CUtlString value);
    CUtlString GetScrapeSmooth() const;
    void SetScrapeSmooth(CUtlString value);
    CUtlString GetScrapeRough() const;
    void SetScrapeRough(CUtlString value);
    CUtlString GetBulletImpact() const;
    void SetBulletImpact(CUtlString value);
    CUtlString GetRolling() const;
    void SetRolling(CUtlString value);
    CUtlString GetBreak() const;
    void SetBreak(CUtlString value);
    CUtlString GetStrain() const;
    void SetStrain(CUtlString value);
    CUtlString GetMeleeImpact() const;
    void SetMeleeImpact(CUtlString value);
    CUtlString GetPushOff() const;
    void SetPushOff(CUtlString value);
    CUtlString GetSkidStop() const;
    void SetSkidStop(CUtlString value);

    std::string ToPtr();
    bool IsValid();
};

class GDynamicMeshDeformParams_t
{
private:
    void *m_ptr;

public:
    GDynamicMeshDeformParams_t(std::string ptr);
    GDynamicMeshDeformParams_t(void *ptr);

    float GetTensionCompressScale() const;
    void SetTensionCompressScale(float value);
    float GetTensionStretchScale() const;
    void SetTensionStretchScale(float value);
    bool GetRecomputeSmoothNormalsAfterAnimation() const;
    void SetRecomputeSmoothNormalsAfterAnimation(bool value);
    bool GetComputeDynamicMeshTensionAfterAnimation() const;
    void SetComputeDynamicMeshTensionAfterAnimation(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCDistanceRemainingMetricEvaluator
{
private:
    void *m_ptr;

public:
    GCDistanceRemainingMetricEvaluator(std::string ptr);
    GCDistanceRemainingMetricEvaluator(void *ptr);

    float GetMaxDistance() const;
    void SetMaxDistance(float value);
    float GetMinDistance() const;
    void SetMinDistance(float value);
    float GetStartGoalFilterDistance() const;
    void SetStartGoalFilterDistance(float value);
    float GetMaxGoalOvershootScale() const;
    void SetMaxGoalOvershootScale(float value);
    bool GetFilterFixedMinDistance() const;
    void SetFilterFixedMinDistance(bool value);
    bool GetFilterGoalDistance() const;
    void SetFilterGoalDistance(bool value);
    bool GetFilterGoalOvershoot() const;
    void SetFilterGoalOvershoot(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GVMixDynamicsBand_t
{
private:
    void *m_ptr;

public:
    GVMixDynamicsBand_t(std::string ptr);
    GVMixDynamicsBand_t(void *ptr);

    float GetFldbGainInput() const;
    void SetFldbGainInput(float value);
    float GetFldbGainOutput() const;
    void SetFldbGainOutput(float value);
    float GetFldbThresholdBelow() const;
    void SetFldbThresholdBelow(float value);
    float GetFldbThresholdAbove() const;
    void SetFldbThresholdAbove(float value);
    float GetRatioBelow() const;
    void SetRatioBelow(float value);
    float GetRatioAbove() const;
    void SetRatioAbove(float value);
    float GetAttackTimeMS() const;
    void SetAttackTimeMS(float value);
    float GetReleaseTimeMS() const;
    void SetReleaseTimeMS(float value);
    bool GetEnable() const;
    void SetEnable(bool value);
    bool GetSolo() const;
    void SetSolo(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GRnCapsule_t
{
private:
    void *m_ptr;

public:
    GRnCapsule_t(std::string ptr);
    GRnCapsule_t(void *ptr);

    std::vector<Vector> GetCenter() const;
    void SetCenter(std::vector<Vector> value);
    float GetRadius() const;
    void SetRadius(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCAnimInputDamping
{
private:
    void *m_ptr;

public:
    GCAnimInputDamping(std::string ptr);
    GCAnimInputDamping(void *ptr);

    DampingSpeedFunction GetSpeedFunction() const;
    void SetSpeedFunction(DampingSpeedFunction value);
    float GetSpeedScale() const;
    void SetSpeedScale(float value);

    std::string ToPtr();
    bool IsValid();
};

class GAnimTagID
{
private:
    void *m_ptr;

public:
    GAnimTagID(std::string ptr);
    GAnimTagID(void *ptr);

    uint32_t GetId() const;
    void SetId(uint32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCParticleFunctionPreEmission
{
private:
    void *m_ptr;

public:
    GCParticleFunctionPreEmission(std::string ptr);
    GCParticleFunctionPreEmission(void *ptr);

    bool GetRunOnce() const;
    void SetRunOnce(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCPerParticleFloatInput
{
private:
    void *m_ptr;

public:
    GCPerParticleFloatInput(std::string ptr);
    GCPerParticleFloatInput(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCSosGroupActionSchema
{
private:
    void *m_ptr;

public:
    GCSosGroupActionSchema(std::string ptr);
    GCSosGroupActionSchema(void *ptr);

    CUtlString GetName() const;
    void SetName(CUtlString value);
    ActionType_t GetActionType() const;
    void SetActionType(ActionType_t value);
    ActionType_t GetActionInstanceType() const;
    void SetActionInstanceType(ActionType_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCFutureFacingMetricEvaluator
{
private:
    void *m_ptr;

public:
    GCFutureFacingMetricEvaluator(std::string ptr);
    GCFutureFacingMetricEvaluator(void *ptr);

    float GetDistance() const;
    void SetDistance(float value);
    float GetTime() const;
    void SetTime(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCSeqTransition
{
private:
    void *m_ptr;

public:
    GCSeqTransition(std::string ptr);
    GCSeqTransition(void *ptr);

    float GetFadeInTime() const;
    void SetFadeInTime(float value);
    float GetFadeOutTime() const;
    void SetFadeOutTime(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCAnimNodePath
{
private:
    void *m_ptr;

public:
    GCAnimNodePath(std::string ptr);
    GCAnimNodePath(void *ptr);

    std::vector<GAnimNodeID> GetPath() const;
    void SetPath(std::vector<GAnimNodeID> value);
    int32_t GetCount() const;
    void SetCount(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCParamSpanUpdater
{
private:
    void *m_ptr;

public:
    GCParamSpanUpdater(std::string ptr);
    GCParamSpanUpdater(void *ptr);

    std::vector<GParamSpan_t> GetSpans() const;
    void SetSpans(std::vector<GParamSpan_t> value);

    std::string ToPtr();
    bool IsValid();
};

class GAnimNodeID
{
private:
    void *m_ptr;

public:
    GAnimNodeID(std::string ptr);
    GAnimNodeID(void *ptr);

    uint32_t GetId() const;
    void SetId(uint32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCParticleFunctionInitializer
{
private:
    void *m_ptr;

public:
    GCParticleFunctionInitializer(std::string ptr);
    GCParticleFunctionInitializer(void *ptr);

    int32_t GetAssociatedEmitterIndex() const;
    void SetAssociatedEmitterIndex(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GRnFace_t
{
private:
    void *m_ptr;

public:
    GRnFace_t(std::string ptr);
    GRnFace_t(void *ptr);

    uint8_t GetEdge() const;
    void SetEdge(uint8_t value);

    std::string ToPtr();
    bool IsValid();
};

class GEngineLoopState_t
{
private:
    void *m_ptr;

public:
    GEngineLoopState_t(std::string ptr);
    GEngineLoopState_t(void *ptr);

    int32_t GetPlatWindowWidth() const;
    void SetPlatWindowWidth(int32_t value);
    int32_t GetPlatWindowHeight() const;
    void SetPlatWindowHeight(int32_t value);
    int32_t GetRenderWidth() const;
    void SetRenderWidth(int32_t value);
    int32_t GetRenderHeight() const;
    void SetRenderHeight(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCNmPoseNode
{
private:
    void *m_ptr;

public:
    GCNmPoseNode(std::string ptr);
    GCNmPoseNode(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCParticleFunctionConstraint
{
private:
    void *m_ptr;

public:
    GCParticleFunctionConstraint(std::string ptr);
    GCParticleFunctionConstraint(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCNmStateMachineNode__TransitionDefinition_t
{
private:
    void *m_ptr;

public:
    GCNmStateMachineNode__TransitionDefinition_t(std::string ptr);
    GCNmStateMachineNode__TransitionDefinition_t(void *ptr);

    int16_t GetTargetStateIdx() const;
    void SetTargetStateIdx(int16_t value);
    int16_t GetConditionNodeIdx() const;
    void SetConditionNodeIdx(int16_t value);
    int16_t GetTransitionNodeIdx() const;
    void SetTransitionNodeIdx(int16_t value);
    bool GetCanBeForced() const;
    void SetCanBeForced(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCAnimAttachment
{
private:
    void *m_ptr;

public:
    GCAnimAttachment(std::string ptr);
    GCAnimAttachment(void *ptr);

    std::vector<Quaternion> GetInfluenceRotations() const;
    void SetInfluenceRotations(std::vector<Quaternion> value);
    std::vector<Vector> GetInfluenceOffsets() const;
    void SetInfluenceOffsets(std::vector<Vector> value);
    std::vector<int32_t> GetInfluenceIndices() const;
    void SetInfluenceIndices(std::vector<int32_t> value);
    std::vector<float> GetInfluenceWeights() const;
    void SetInfluenceWeights(std::vector<float> value);
    uint8_t GetNumInfluences() const;
    void SetNumInfluences(uint8_t value);

    std::string ToPtr();
    bool IsValid();
};

class GEventSimulate_t
{
private:
    void *m_ptr;

public:
    GEventSimulate_t(std::string ptr);
    GEventSimulate_t(void *ptr);

    GEngineLoopState_t GetLoopState() const;
    void SetLoopState(GEngineLoopState_t value);
    bool GetFirstTick() const;
    void SetFirstTick(bool value);
    bool GetLastTick() const;
    void SetLastTick(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCParticleCollectionRendererFloatInput
{
private:
    void *m_ptr;

public:
    GCParticleCollectionRendererFloatInput(std::string ptr);
    GCParticleCollectionRendererFloatInput(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GModelSkeletonData_t
{
private:
    void *m_ptr;

public:
    GModelSkeletonData_t(std::string ptr);
    GModelSkeletonData_t(void *ptr);

    std::vector<CUtlString> GetBoneName() const;
    void SetBoneName(std::vector<CUtlString> value);
    std::vector<int16> GetParent() const;
    void SetParent(std::vector<int16> value);
    std::vector<float32> GetBoneSphere() const;
    void SetBoneSphere(std::vector<float32> value);
    std::vector<uint32> GetFlag() const;
    void SetFlag(std::vector<uint32> value);
    std::vector<Vector> GetBonePosParent() const;
    void SetBonePosParent(std::vector<Vector> value);
    std::vector<float32> GetBoneScaleParent() const;
    void SetBoneScaleParent(std::vector<float32> value);

    std::string ToPtr();
    bool IsValid();
};

class GEventModInitialized_t
{
private:
    void *m_ptr;

public:
    GEventModInitialized_t(std::string ptr);
    GEventModInitialized_t(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCParticleTransformInput
{
private:
    void *m_ptr;

public:
    GCParticleTransformInput(std::string ptr);
    GCParticleTransformInput(void *ptr);

    ParticleTransformType_t GetType() const;
    void SetType(ParticleTransformType_t value);
    bool GetFollowNamedValue() const;
    void SetFollowNamedValue(bool value);
    bool GetSupportsDisabled() const;
    void SetSupportsDisabled(bool value);
    bool GetUseOrientation() const;
    void SetUseOrientation(bool value);
    int32_t GetControlPoint() const;
    void SetControlPoint(int32_t value);
    int32_t GetControlPointRangeMax() const;
    void SetControlPointRangeMax(int32_t value);
    float GetEndCPGrowthTime() const;
    void SetEndCPGrowthTime(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCParticleVisibilityInputs
{
private:
    void *m_ptr;

public:
    GCParticleVisibilityInputs(std::string ptr);
    GCParticleVisibilityInputs(void *ptr);

    float GetCameraBias() const;
    void SetCameraBias(float value);
    int32_t GetCPin() const;
    void SetCPin(int32_t value);
    float GetProxyRadius() const;
    void SetProxyRadius(float value);
    float GetInputMin() const;
    void SetInputMin(float value);
    float GetInputMax() const;
    void SetInputMax(float value);
    float GetInputPixelVisFade() const;
    void SetInputPixelVisFade(float value);
    float GetNoPixelVisibilityFallback() const;
    void SetNoPixelVisibilityFallback(float value);
    float GetDistanceInputMin() const;
    void SetDistanceInputMin(float value);
    float GetDistanceInputMax() const;
    void SetDistanceInputMax(float value);
    float GetDotInputMin() const;
    void SetDotInputMin(float value);
    float GetDotInputMax() const;
    void SetDotInputMax(float value);
    bool GetDotCPAngles() const;
    void SetDotCPAngles(bool value);
    bool GetDotCameraAngles() const;
    void SetDotCameraAngles(bool value);
    float GetAlphaScaleMin() const;
    void SetAlphaScaleMin(float value);
    float GetAlphaScaleMax() const;
    void SetAlphaScaleMax(float value);
    float GetRadiusScaleMin() const;
    void SetRadiusScaleMin(float value);
    float GetRadiusScaleMax() const;
    void SetRadiusScaleMax(float value);
    float GetRadiusScaleFOVBase() const;
    void SetRadiusScaleFOVBase(float value);
    bool GetRightEye() const;
    void SetRightEye(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GMaterialGroup_t
{
private:
    void *m_ptr;

public:
    GMaterialGroup_t(std::string ptr);
    GMaterialGroup_t(void *ptr);

    CUtlString GetName() const;
    void SetName(CUtlString value);

    std::string ToPtr();
    bool IsValid();
};

class GCAnimUpdateNodeBase
{
private:
    void *m_ptr;

public:
    GCAnimUpdateNodeBase(std::string ptr);
    GCAnimUpdateNodeBase(void *ptr);

    GCAnimNodePath GetNodePath() const;
    void SetNodePath(GCAnimNodePath value);
    AnimNodeNetworkMode GetNetworkMode() const;
    void SetNetworkMode(AnimNodeNetworkMode value);
    CUtlString GetName() const;
    void SetName(CUtlString value);

    std::string ToPtr();
    bool IsValid();
};

class GCParticleFunctionRenderer
{
private:
    void *m_ptr;

public:
    GCParticleFunctionRenderer(std::string ptr);
    GCParticleFunctionRenderer(void *ptr);

    GCParticleVisibilityInputs GetVisibilityInputs() const;
    void SetVisibilityInputs(GCParticleVisibilityInputs value);
    bool GetCannotBeRefracted() const;
    void SetCannotBeRefracted(bool value);
    bool GetSkipRenderingOnMobile() const;
    void SetSkipRenderingOnMobile(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCParticleVecInput
{
private:
    void *m_ptr;

public:
    GCParticleVecInput(std::string ptr);
    GCParticleVecInput(void *ptr);

    ParticleVecType_t GetType() const;
    void SetType(ParticleVecType_t value);
    Vector GetLiteralValue() const;
    void SetLiteralValue(Vector value);
    Color GetLiteralColor() const;
    void SetLiteralColor(Color value);
    bool GetFollowNamedValue() const;
    void SetFollowNamedValue(bool value);
    GParticleAttributeIndex_t GetVectorAttribute() const;
    void SetVectorAttribute(GParticleAttributeIndex_t value);
    Vector GetVectorAttributeScale() const;
    void SetVectorAttributeScale(Vector value);
    int32_t GetControlPoint() const;
    void SetControlPoint(int32_t value);
    int32_t GetDeltaControlPoint() const;
    void SetDeltaControlPoint(int32_t value);
    Vector GetCPValueScale() const;
    void SetCPValueScale(Vector value);
    Vector GetCPRelativePosition() const;
    void SetCPRelativePosition(Vector value);
    Vector GetCPRelativeDir() const;
    void SetCPRelativeDir(Vector value);
    GCParticleFloatInput GetFloatComponentX() const;
    void SetFloatComponentX(GCParticleFloatInput value);
    GCParticleFloatInput GetFloatComponentY() const;
    void SetFloatComponentY(GCParticleFloatInput value);
    GCParticleFloatInput GetFloatComponentZ() const;
    void SetFloatComponentZ(GCParticleFloatInput value);
    GCParticleFloatInput GetFloatInterp() const;
    void SetFloatInterp(GCParticleFloatInput value);
    float GetInterpInput0() const;
    void SetInterpInput0(float value);
    float GetInterpInput1() const;
    void SetInterpInput1(float value);
    Vector GetInterpOutput0() const;
    void SetInterpOutput0(Vector value);
    Vector GetInterpOutput1() const;
    void SetInterpOutput1(Vector value);
    Vector GetRandomMin() const;
    void SetRandomMin(Vector value);
    Vector GetRandomMax() const;
    void SetRandomMax(Vector value);

    std::string ToPtr();
    bool IsValid();
};

class GVPhysXConstraintParams_t
{
private:
    void *m_ptr;

public:
    GVPhysXConstraintParams_t(std::string ptr);
    GVPhysXConstraintParams_t(void *ptr);

    int8_t GetType() const;
    void SetType(int8_t value);
    int8_t GetTranslateMotion() const;
    void SetTranslateMotion(int8_t value);
    int8_t GetRotateMotion() const;
    void SetRotateMotion(int8_t value);
    int8_t GetFlags() const;
    void SetFlags(int8_t value);
    std::vector<Vector> GetAnchor() const;
    void SetAnchor(std::vector<Vector> value);
    float GetMaxForce() const;
    void SetMaxForce(float value);
    float GetMaxTorque() const;
    void SetMaxTorque(float value);
    float GetLinearLimitValue() const;
    void SetLinearLimitValue(float value);
    float GetLinearLimitRestitution() const;
    void SetLinearLimitRestitution(float value);
    float GetLinearLimitSpring() const;
    void SetLinearLimitSpring(float value);
    float GetLinearLimitDamping() const;
    void SetLinearLimitDamping(float value);
    float GetTwistLowLimitValue() const;
    void SetTwistLowLimitValue(float value);
    float GetTwistLowLimitRestitution() const;
    void SetTwistLowLimitRestitution(float value);
    float GetTwistLowLimitSpring() const;
    void SetTwistLowLimitSpring(float value);
    float GetTwistLowLimitDamping() const;
    void SetTwistLowLimitDamping(float value);
    float GetTwistHighLimitValue() const;
    void SetTwistHighLimitValue(float value);
    float GetTwistHighLimitRestitution() const;
    void SetTwistHighLimitRestitution(float value);
    float GetTwistHighLimitSpring() const;
    void SetTwistHighLimitSpring(float value);
    float GetTwistHighLimitDamping() const;
    void SetTwistHighLimitDamping(float value);
    float GetSwing1LimitValue() const;
    void SetSwing1LimitValue(float value);
    float GetSwing1LimitRestitution() const;
    void SetSwing1LimitRestitution(float value);
    float GetSwing1LimitSpring() const;
    void SetSwing1LimitSpring(float value);
    float GetSwing1LimitDamping() const;
    void SetSwing1LimitDamping(float value);
    float GetSwing2LimitValue() const;
    void SetSwing2LimitValue(float value);
    float GetSwing2LimitRestitution() const;
    void SetSwing2LimitRestitution(float value);
    float GetSwing2LimitSpring() const;
    void SetSwing2LimitSpring(float value);
    float GetSwing2LimitDamping() const;
    void SetSwing2LimitDamping(float value);
    Vector GetGoalPosition() const;
    void SetGoalPosition(Vector value);
    Vector GetGoalAngularVelocity() const;
    void SetGoalAngularVelocity(Vector value);
    float GetDriveSpringX() const;
    void SetDriveSpringX(float value);
    float GetDriveSpringY() const;
    void SetDriveSpringY(float value);
    float GetDriveSpringZ() const;
    void SetDriveSpringZ(float value);
    float GetDriveDampingX() const;
    void SetDriveDampingX(float value);
    float GetDriveDampingY() const;
    void SetDriveDampingY(float value);
    float GetDriveDampingZ() const;
    void SetDriveDampingZ(float value);
    float GetDriveSpringTwist() const;
    void SetDriveSpringTwist(float value);
    float GetDriveSpringSwing() const;
    void SetDriveSpringSwing(float value);
    float GetDriveSpringSlerp() const;
    void SetDriveSpringSlerp(float value);
    float GetDriveDampingTwist() const;
    void SetDriveDampingTwist(float value);
    float GetDriveDampingSwing() const;
    void SetDriveDampingSwing(float value);
    float GetDriveDampingSlerp() const;
    void SetDriveDampingSlerp(float value);
    int32_t GetSolverIterationCount() const;
    void SetSolverIterationCount(int32_t value);
    float GetProjectionLinearTolerance() const;
    void SetProjectionLinearTolerance(float value);
    float GetProjectionAngularTolerance() const;
    void SetProjectionAngularTolerance(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCMorphRectData
{
private:
    void *m_ptr;

public:
    GCMorphRectData(std::string ptr);
    GCMorphRectData(void *ptr);

    int16_t GetXLeftDst() const;
    void SetXLeftDst(int16_t value);
    int16_t GetYTopDst() const;
    void SetYTopDst(int16_t value);
    float GetUWidthSrc() const;
    void SetUWidthSrc(float value);
    float GetVHeightSrc() const;
    void SetVHeightSrc(float value);
    std::vector<GCMorphBundleData> GetBundleDatas() const;
    void SetBundleDatas(std::vector<GCMorphBundleData> value);

    std::string ToPtr();
    bool IsValid();
};

class GEventServerPollNetworking_t
{
private:
    void *m_ptr;

public:
    GEventServerPollNetworking_t(std::string ptr);
    GEventServerPollNetworking_t(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCDspPresetModifierList
{
private:
    void *m_ptr;

public:
    GCDspPresetModifierList(std::string ptr);
    GCDspPresetModifierList(void *ptr);

    CUtlString GetDspName() const;
    void SetDspName(CUtlString value);
    std::vector<GCDSPMixgroupModifier> GetModifiers() const;
    void SetModifiers(std::vector<GCDSPMixgroupModifier> value);

    std::string ToPtr();
    bool IsValid();
};

class GSkeletonDemoDb_t
{
private:
    void *m_ptr;

public:
    GSkeletonDemoDb_t(std::string ptr);
    GSkeletonDemoDb_t(void *ptr);

    std::vector<GSkeletonAnimCapture_t*> GetAnimCaptures() const;
    void SetAnimCaptures(std::vector<GSkeletonAnimCapture_t*> value);
    std::vector<GSkeletonAnimCapture_t> GetCameraTrack() const;
    void SetCameraTrack(std::vector<GSkeletonAnimCapture_t> value);
    float GetRecordingTime() const;
    void SetRecordingTime(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCRenderGroom
{
private:
    void *m_ptr;

public:
    GCRenderGroom(std::string ptr);
    GCRenderGroom(void *ptr);

    std::vector<GRenderHairStrandInfo_t> GetHairs() const;
    void SetHairs(std::vector<GRenderHairStrandInfo_t> value);
    int32_t GetSegmentsPerHairStrand() const;
    void SetSegmentsPerHairStrand(int32_t value);
    int32_t GetGuideHairCount() const;
    void SetGuideHairCount(int32_t value);
    int32_t GetHairCount() const;
    void SetHairCount(int32_t value);
    int32_t GetGroomGroupID() const;
    void SetGroomGroupID(int32_t value);
    int32_t GetAttachBoneIdx() const;
    void SetAttachBoneIdx(int32_t value);
    int32_t GetAttachMeshIdx() const;
    void SetAttachMeshIdx(int32_t value);
    int32_t GetAttachMeshDrawCallIdx() const;
    void SetAttachMeshDrawCallIdx(int32_t value);
    float GetSumOfAllHairLengths() const;
    void SetSumOfAllHairLengths(float value);
    bool GetEnableSimulation() const;
    void SetEnableSimulation(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCUnaryUpdateNode
{
private:
    void *m_ptr;

public:
    GCUnaryUpdateNode(std::string ptr);
    GCUnaryUpdateNode(void *ptr);

    GCAnimUpdateNodeRef GetChildNode() const;
    void SetChildNode(GCAnimUpdateNodeRef value);

    std::string ToPtr();
    bool IsValid();
};

class GCBlendCurve
{
private:
    void *m_ptr;

public:
    GCBlendCurve(std::string ptr);
    GCBlendCurve(void *ptr);

    float GetControlPoint1() const;
    void SetControlPoint1(float value);
    float GetControlPoint2() const;
    void SetControlPoint2(float value);

    std::string ToPtr();
    bool IsValid();
};

class GChangeAccessorFieldPathIndex_t
{
private:
    void *m_ptr;

public:
    GChangeAccessorFieldPathIndex_t(std::string ptr);
    GChangeAccessorFieldPathIndex_t(void *ptr);

    int16_t GetValue() const;
    void SetValue(int16_t value);

    std::string ToPtr();
    bool IsValid();
};

class GFeKelagerBend2_t
{
private:
    void *m_ptr;

public:
    GFeKelagerBend2_t(std::string ptr);
    GFeKelagerBend2_t(void *ptr);

    std::vector<float> GetWeight() const;
    void SetWeight(std::vector<float> value);
    float GetHeight0() const;
    void SetHeight0(float value);
    std::vector<uint16_t> GetNode() const;
    void SetNode(std::vector<uint16_t> value);
    uint16_t GetReserved() const;
    void SetReserved(uint16_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCMorphSetData
{
private:
    void *m_ptr;

public:
    GCMorphSetData(std::string ptr);
    GCMorphSetData(void *ptr);

    int32_t GetWidth() const;
    void SetWidth(int32_t value);
    int32_t GetHeight() const;
    void SetHeight(int32_t value);
    std::vector<MorphBundleType_t> GetBundleTypes() const;
    void SetBundleTypes(std::vector<MorphBundleType_t> value);
    std::vector<GCMorphData> GetMorphDatas() const;
    void SetMorphDatas(std::vector<GCMorphData> value);
    std::vector<GCFlexDesc> GetFlexDesc() const;
    void SetFlexDesc(std::vector<GCFlexDesc> value);
    std::vector<GCFlexController> GetFlexControllers() const;
    void SetFlexControllers(std::vector<GCFlexController> value);
    std::vector<GCFlexRule> GetFlexRules() const;
    void SetFlexRules(std::vector<GCFlexRule> value);

    std::string ToPtr();
    bool IsValid();
};

class GCBinaryUpdateNode
{
private:
    void *m_ptr;

public:
    GCBinaryUpdateNode(std::string ptr);
    GCBinaryUpdateNode(void *ptr);

    GCAnimUpdateNodeRef GetChild1() const;
    void SetChild1(GCAnimUpdateNodeRef value);
    GCAnimUpdateNodeRef GetChild2() const;
    void SetChild2(GCAnimUpdateNodeRef value);
    BinaryNodeTiming GetTimingBehavior() const;
    void SetTimingBehavior(BinaryNodeTiming value);
    float GetTimingBlend() const;
    void SetTimingBlend(float value);
    bool GetResetChild1() const;
    void SetResetChild1(bool value);
    bool GetResetChild2() const;
    void SetResetChild2(bool value);

    std::string ToPtr();
    bool IsValid();
};

class Gconstraint_axislimit_t
{
private:
    void *m_ptr;

public:
    Gconstraint_axislimit_t(std::string ptr);
    Gconstraint_axislimit_t(void *ptr);

    float GetMinRotation() const;
    void SetMinRotation(float value);
    float GetMaxRotation() const;
    void SetMaxRotation(float value);
    float GetMotorTargetAngSpeed() const;
    void SetMotorTargetAngSpeed(float value);
    float GetMotorMaxTorque() const;
    void SetMotorMaxTorque(float value);

    std::string ToPtr();
    bool IsValid();
};

class GFuseFunctionIndex_t
{
private:
    void *m_ptr;

public:
    GFuseFunctionIndex_t(std::string ptr);
    GFuseFunctionIndex_t(void *ptr);

    uint16_t GetValue() const;
    void SetValue(uint16_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCGeneralSpin
{
private:
    void *m_ptr;

public:
    GCGeneralSpin(std::string ptr);
    GCGeneralSpin(void *ptr);

    int32_t GetSpinRateDegrees() const;
    void SetSpinRateDegrees(int32_t value);
    int32_t GetSpinRateMinDegrees() const;
    void SetSpinRateMinDegrees(int32_t value);
    float GetSpinRateStopTime() const;
    void SetSpinRateStopTime(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCFeJiggleBone
{
private:
    void *m_ptr;

public:
    GCFeJiggleBone(std::string ptr);
    GCFeJiggleBone(void *ptr);

    uint32_t GetFlags() const;
    void SetFlags(uint32_t value);
    float GetLength() const;
    void SetLength(float value);
    float GetTipMass() const;
    void SetTipMass(float value);
    float GetYawStiffness() const;
    void SetYawStiffness(float value);
    float GetYawDamping() const;
    void SetYawDamping(float value);
    float GetPitchStiffness() const;
    void SetPitchStiffness(float value);
    float GetPitchDamping() const;
    void SetPitchDamping(float value);
    float GetAlongStiffness() const;
    void SetAlongStiffness(float value);
    float GetAlongDamping() const;
    void SetAlongDamping(float value);
    float GetAngleLimit() const;
    void SetAngleLimit(float value);
    float GetMinYaw() const;
    void SetMinYaw(float value);
    float GetMaxYaw() const;
    void SetMaxYaw(float value);
    float GetYawFriction() const;
    void SetYawFriction(float value);
    float GetYawBounce() const;
    void SetYawBounce(float value);
    float GetMinPitch() const;
    void SetMinPitch(float value);
    float GetMaxPitch() const;
    void SetMaxPitch(float value);
    float GetPitchFriction() const;
    void SetPitchFriction(float value);
    float GetPitchBounce() const;
    void SetPitchBounce(float value);
    float GetBaseMass() const;
    void SetBaseMass(float value);
    float GetBaseStiffness() const;
    void SetBaseStiffness(float value);
    float GetBaseDamping() const;
    void SetBaseDamping(float value);
    float GetBaseMinLeft() const;
    void SetBaseMinLeft(float value);
    float GetBaseMaxLeft() const;
    void SetBaseMaxLeft(float value);
    float GetBaseLeftFriction() const;
    void SetBaseLeftFriction(float value);
    float GetBaseMinUp() const;
    void SetBaseMinUp(float value);
    float GetBaseMaxUp() const;
    void SetBaseMaxUp(float value);
    float GetBaseUpFriction() const;
    void SetBaseUpFriction(float value);
    float GetBaseMinForward() const;
    void SetBaseMinForward(float value);
    float GetBaseMaxForward() const;
    void SetBaseMaxForward(float value);
    float GetBaseForwardFriction() const;
    void SetBaseForwardFriction(float value);
    float GetRadius0() const;
    void SetRadius0(float value);
    float GetRadius1() const;
    void SetRadius1(float value);
    Vector GetPoint0() const;
    void SetPoint0(Vector value);
    Vector GetPoint1() const;
    void SetPoint1(Vector value);
    uint16_t GetCollisionMask() const;
    void SetCollisionMask(uint16_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCGlowOverlay
{
private:
    void *m_ptr;

public:
    GCGlowOverlay(std::string ptr);
    GCGlowOverlay(void *ptr);

    Vector GetPos() const;
    void SetPos(Vector value);
    bool GetDirectional() const;
    void SetDirectional(bool value);
    Vector GetDirection() const;
    void SetDirection(Vector value);
    bool GetInSky() const;
    void SetInSky(bool value);
    float GetSkyObstructionScale() const;
    void SetSkyObstructionScale(float value);
    std::vector<GCGlowSprite> GetSprites() const;
    void SetSprites(std::vector<GCGlowSprite> value);
    int32_t GetSprites1() const;
    void SetSprites1(int32_t value);
    float GetProxyRadius() const;
    void SetProxyRadius(float value);
    float GetHDRColorScale() const;
    void SetHDRColorScale(float value);
    float GetGlowObstructionScale() const;
    void SetGlowObstructionScale(float value);
    bool GetCacheGlowObstruction() const;
    void SetCacheGlowObstruction(bool value);
    bool GetCacheSkyObstruction() const;
    void SetCacheSkyObstruction(bool value);
    int16_t GetActivated() const;
    void SetActivated(int16_t value);
    uint16_t GetListIndex() const;
    void SetListIndex(uint16_t value);
    int32_t GetQueryHandle() const;
    void SetQueryHandle(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GTextureControls_t
{
private:
    void *m_ptr;

public:
    GTextureControls_t(std::string ptr);
    GTextureControls_t(void *ptr);

    GCParticleCollectionRendererFloatInput GetFinalTextureScaleU() const;
    void SetFinalTextureScaleU(GCParticleCollectionRendererFloatInput value);
    GCParticleCollectionRendererFloatInput GetFinalTextureScaleV() const;
    void SetFinalTextureScaleV(GCParticleCollectionRendererFloatInput value);
    GCParticleCollectionRendererFloatInput GetFinalTextureOffsetU() const;
    void SetFinalTextureOffsetU(GCParticleCollectionRendererFloatInput value);
    GCParticleCollectionRendererFloatInput GetFinalTextureOffsetV() const;
    void SetFinalTextureOffsetV(GCParticleCollectionRendererFloatInput value);
    GCParticleCollectionRendererFloatInput GetFinalTextureUVRotation() const;
    void SetFinalTextureUVRotation(GCParticleCollectionRendererFloatInput value);
    GCParticleCollectionRendererFloatInput GetZoomScale() const;
    void SetZoomScale(GCParticleCollectionRendererFloatInput value);
    GCParticleCollectionRendererFloatInput GetDistortion() const;
    void SetDistortion(GCParticleCollectionRendererFloatInput value);
    bool GetRandomizeOffsets() const;
    void SetRandomizeOffsets(bool value);
    bool GetClampUVs() const;
    void SetClampUVs(bool value);
    SpriteCardPerParticleScale_t GetPerParticleBlend() const;
    void SetPerParticleBlend(SpriteCardPerParticleScale_t value);
    SpriteCardPerParticleScale_t GetPerParticleScale() const;
    void SetPerParticleScale(SpriteCardPerParticleScale_t value);
    SpriteCardPerParticleScale_t GetPerParticleOffsetU() const;
    void SetPerParticleOffsetU(SpriteCardPerParticleScale_t value);
    SpriteCardPerParticleScale_t GetPerParticleOffsetV() const;
    void SetPerParticleOffsetV(SpriteCardPerParticleScale_t value);
    SpriteCardPerParticleScale_t GetPerParticleRotation() const;
    void SetPerParticleRotation(SpriteCardPerParticleScale_t value);
    SpriteCardPerParticleScale_t GetPerParticleZoom() const;
    void SetPerParticleZoom(SpriteCardPerParticleScale_t value);
    SpriteCardPerParticleScale_t GetPerParticleDistortion() const;
    void SetPerParticleDistortion(SpriteCardPerParticleScale_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCParticleModelInput
{
private:
    void *m_ptr;

public:
    GCParticleModelInput(std::string ptr);
    GCParticleModelInput(void *ptr);

    ParticleModelType_t GetType() const;
    void SetType(ParticleModelType_t value);
    int32_t GetControlPoint() const;
    void SetControlPoint(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCNmPassthroughNode
{
private:
    void *m_ptr;

public:
    GCNmPassthroughNode(std::string ptr);
    GCNmPassthroughNode(void *ptr);

    int16_t GetChildNodeIdx() const;
    void SetChildNodeIdx(int16_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCAnimDecoder
{
private:
    void *m_ptr;

public:
    GCAnimDecoder(std::string ptr);
    GCAnimDecoder(void *ptr);

    CBufferString GetName() const;
    void SetName(CBufferString value);
    int32_t GetVersion() const;
    void SetVersion(int32_t value);
    int32_t GetType() const;
    void SetType(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GNmPercent_t
{
private:
    void *m_ptr;

public:
    GNmPercent_t(std::string ptr);
    GNmPercent_t(void *ptr);

    float GetValue() const;
    void SetValue(float value);

    std::string ToPtr();
    bool IsValid();
};

class GEventProfileStorageAvailable_t
{
private:
    void *m_ptr;

public:
    GEventProfileStorageAvailable_t(std::string ptr);
    GEventProfileStorageAvailable_t(void *ptr);

    int32_t GetSplitScreenSlot() const;
    void SetSplitScreenSlot(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCVoiceContainerBase
{
private:
    void *m_ptr;

public:
    GCVoiceContainerBase(std::string ptr);
    GCVoiceContainerBase(void *ptr);

    bool GetHideAnalyzers() const;
    void SetHideAnalyzers(bool value);
    std::vector<GCVoiceContainerAnalysisBase*> GetAnalysisContainers() const;
    void SetAnalysisContainers(std::vector<GCVoiceContainerAnalysisBase*> value);

    std::string ToPtr();
    bool IsValid();
};

class GCPerParticleVecInput
{
private:
    void *m_ptr;

public:
    GCPerParticleVecInput(std::string ptr);
    GCPerParticleVecInput(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCBoneMaskUpdateNode
{
private:
    void *m_ptr;

public:
    GCBoneMaskUpdateNode(std::string ptr);
    GCBoneMaskUpdateNode(void *ptr);

    int32_t GetWeightListIndex() const;
    void SetWeightListIndex(int32_t value);
    float GetRootMotionBlend() const;
    void SetRootMotionBlend(float value);
    BoneMaskBlendSpace GetBlendSpace() const;
    void SetBlendSpace(BoneMaskBlendSpace value);
    BinaryNodeChildOption GetFootMotionTiming() const;
    void SetFootMotionTiming(BinaryNodeChildOption value);
    bool GetUseBlendScale() const;
    void SetUseBlendScale(bool value);
    AnimValueSource GetBlendValueSource() const;
    void SetBlendValueSource(AnimValueSource value);
    GCAnimParamHandle GetBlendParameter() const;
    void SetBlendParameter(GCAnimParamHandle value);

    std::string ToPtr();
    bool IsValid();
};

class GConfigIndex
{
private:
    void *m_ptr;

public:
    GConfigIndex(std::string ptr);
    GConfigIndex(void *ptr);

    uint16_t GetGroup() const;
    void SetGroup(uint16_t value);
    uint16_t GetConfig() const;
    void SetConfig(uint16_t value);

    std::string ToPtr();
    bool IsValid();
};

class GFeSimdRodConstraint_t
{
private:
    void *m_ptr;

public:
    GFeSimdRodConstraint_t(std::string ptr);
    GFeSimdRodConstraint_t(void *ptr);

    float Get4MaxDist() const;
    void Set4MaxDist(float value);
    float Get4MinDist() const;
    void Set4MinDist(float value);
    float Get4Weight0() const;
    void Set4Weight0(float value);
    float Get4RelaxationFactor() const;
    void Set4RelaxationFactor(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCSSDSMsg_EndFrame
{
private:
    void *m_ptr;

public:
    GCSSDSMsg_EndFrame(std::string ptr);
    GCSSDSMsg_EndFrame(void *ptr);

    std::vector<GCSSDSEndFrameViewInfo> GetViews() const;
    void SetViews(std::vector<GCSSDSEndFrameViewInfo> value);

    std::string ToPtr();
    bool IsValid();
};

class GSkeletonBoneBounds_t
{
private:
    void *m_ptr;

public:
    GSkeletonBoneBounds_t(std::string ptr);
    GSkeletonBoneBounds_t(void *ptr);

    Vector GetCenter() const;
    void SetCenter(Vector value);
    Vector GetSize() const;
    void SetSize(Vector value);

    std::string ToPtr();
    bool IsValid();
};

class GCDSPMixgroupModifier
{
private:
    void *m_ptr;

public:
    GCDSPMixgroupModifier(std::string ptr);
    GCDSPMixgroupModifier(void *ptr);

    CUtlString GetMixgroup() const;
    void SetMixgroup(CUtlString value);
    float GetModifier() const;
    void SetModifier(float value);
    float GetModifierMin() const;
    void SetModifierMin(float value);
    float GetSourceModifier() const;
    void SetSourceModifier(float value);
    float GetSourceModifierMin() const;
    void SetSourceModifierMin(float value);
    float GetListenerReverbModifierWhenSourceReverbIsActive() const;
    void SetListenerReverbModifierWhenSourceReverbIsActive(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCBoneConstraintBase
{
private:
    void *m_ptr;

public:
    GCBoneConstraintBase(std::string ptr);
    GCBoneConstraintBase(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GEventAdvanceTick_t
{
private:
    void *m_ptr;

public:
    GEventAdvanceTick_t(std::string ptr);
    GEventAdvanceTick_t(void *ptr);

    int32_t GetCurrentTick() const;
    void SetCurrentTick(int32_t value);
    int32_t GetCurrentTickThisFrame() const;
    void SetCurrentTickThisFrame(int32_t value);
    int32_t GetTotalTicksThisFrame() const;
    void SetTotalTicksThisFrame(int32_t value);
    int32_t GetTotalTicks() const;
    void SetTotalTicks(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GMotionIndex
{
private:
    void *m_ptr;

public:
    GMotionIndex(std::string ptr);
    GMotionIndex(void *ptr);

    uint16_t GetGroup() const;
    void SetGroup(uint16_t value);
    uint16_t GetMotion() const;
    void SetMotion(uint16_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCAnimBoneDifference
{
private:
    void *m_ptr;

public:
    GCAnimBoneDifference(std::string ptr);
    GCAnimBoneDifference(void *ptr);

    CBufferString GetName() const;
    void SetName(CBufferString value);
    CBufferString GetParent() const;
    void SetParent(CBufferString value);
    Vector GetPosError() const;
    void SetPosError(Vector value);
    bool GetHasRotation() const;
    void SetHasRotation(bool value);
    bool GetHasMovement() const;
    void SetHasMovement(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCFootDefinition
{
private:
    void *m_ptr;

public:
    GCFootDefinition(std::string ptr);
    GCFootDefinition(void *ptr);

    CUtlString GetName() const;
    void SetName(CUtlString value);
    CUtlString GetAnkleBoneName() const;
    void SetAnkleBoneName(CUtlString value);
    CUtlString GetToeBoneName() const;
    void SetToeBoneName(CUtlString value);
    Vector GetBallOffset() const;
    void SetBallOffset(Vector value);
    Vector GetHeelOffset() const;
    void SetHeelOffset(Vector value);
    float GetFootLength() const;
    void SetFootLength(float value);
    float GetBindPoseDirectionMS() const;
    void SetBindPoseDirectionMS(float value);
    float GetTraceHeight() const;
    void SetTraceHeight(float value);
    float GetTraceRadius() const;
    void SetTraceRadius(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCFootCycle
{
private:
    void *m_ptr;

public:
    GCFootCycle(std::string ptr);
    GCFootCycle(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCMotionDataSet
{
private:
    void *m_ptr;

public:
    GCMotionDataSet(std::string ptr);
    GCMotionDataSet(void *ptr);

    std::vector<GCMotionGraphGroup> GetGroups() const;
    void SetGroups(std::vector<GCMotionGraphGroup> value);
    int32_t GetDimensionCount() const;
    void SetDimensionCount(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCVPhysXSurfacePropertiesList
{
private:
    void *m_ptr;

public:
    GCVPhysXSurfacePropertiesList(std::string ptr);
    GCVPhysXSurfacePropertiesList(void *ptr);

    std::vector<GCPhysSurfaceProperties*> GetSurfacePropertiesList() const;
    void SetSurfacePropertiesList(std::vector<GCPhysSurfaceProperties*> value);

    std::string ToPtr();
    bool IsValid();
};

class GCParticleFunctionEmitter
{
private:
    void *m_ptr;

public:
    GCParticleFunctionEmitter(std::string ptr);
    GCParticleFunctionEmitter(void *ptr);

    int32_t GetEmitterIndex() const;
    void SetEmitterIndex(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GVMixFilterDesc_t
{
private:
    void *m_ptr;

public:
    GVMixFilterDesc_t(std::string ptr);
    GVMixFilterDesc_t(void *ptr);

    VMixFilterType_t GetFilterType() const;
    void SetFilterType(VMixFilterType_t value);
    VMixFilterSlope_t GetFilterSlope() const;
    void SetFilterSlope(VMixFilterSlope_t value);
    bool GetEnabled() const;
    void SetEnabled(bool value);
    float GetFldbGain() const;
    void SetFldbGain(float value);
    float GetCutoffFreq() const;
    void SetCutoffFreq(float value);
    float GetQ() const;
    void SetQ(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCBaseConstraint
{
private:
    void *m_ptr;

public:
    GCBaseConstraint(std::string ptr);
    GCBaseConstraint(void *ptr);

    CUtlString GetName() const;
    void SetName(CUtlString value);
    Vector GetUpVector() const;
    void SetUpVector(Vector value);
    std::vector<GCConstraintSlave> GetSlaves() const;
    void SetSlaves(std::vector<GCConstraintSlave> value);
    std::vector<GCConstraintTarget> GetTargets() const;
    void SetTargets(std::vector<GCConstraintTarget> value);

    std::string ToPtr();
    bool IsValid();
};

class GCParticleMassCalculationParameters
{
private:
    void *m_ptr;

public:
    GCParticleMassCalculationParameters(std::string ptr);
    GCParticleMassCalculationParameters(void *ptr);

    ParticleMassMode_t GetMassMode() const;
    void SetMassMode(ParticleMassMode_t value);
    GCPerParticleFloatInput GetRadius() const;
    void SetRadius(GCPerParticleFloatInput value);
    GCPerParticleFloatInput GetNominalRadius() const;
    void SetNominalRadius(GCPerParticleFloatInput value);
    GCPerParticleFloatInput GetScale() const;
    void SetScale(GCPerParticleFloatInput value);

    std::string ToPtr();
    bool IsValid();
};

class GAnimParamID
{
private:
    void *m_ptr;

public:
    GAnimParamID(std::string ptr);
    GAnimParamID(void *ptr);

    uint32_t GetId() const;
    void SetId(uint32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCTransitionUpdateData
{
private:
    void *m_ptr;

public:
    GCTransitionUpdateData(std::string ptr);
    GCTransitionUpdateData(void *ptr);

    uint8_t GetSrcStateIndex() const;
    void SetSrcStateIndex(uint8_t value);
    uint8_t GetDestStateIndex() const;
    void SetDestStateIndex(uint8_t value);

    std::string ToPtr();
    bool IsValid();
};

class GManifestTestResource_t
{
private:
    void *m_ptr;

public:
    GManifestTestResource_t(std::string ptr);
    GManifestTestResource_t(void *ptr);

    CUtlString GetName() const;
    void SetName(CUtlString value);

    std::string ToPtr();
    bool IsValid();
};

class GFootPinningPoseOpFixedData_t
{
private:
    void *m_ptr;

public:
    GFootPinningPoseOpFixedData_t(std::string ptr);
    GFootPinningPoseOpFixedData_t(void *ptr);

    std::vector<GFootFixedData_t> GetFootInfo() const;
    void SetFootInfo(std::vector<GFootFixedData_t> value);
    float GetBlendTime() const;
    void SetBlendTime(float value);
    float GetLockBreakDistance() const;
    void SetLockBreakDistance(float value);
    float GetMaxLegTwist() const;
    void SetMaxLegTwist(float value);
    int32_t GetHipBoneIndex() const;
    void SetHipBoneIndex(int32_t value);
    bool GetApplyLegTwistLimits() const;
    void SetApplyLegTwistLimits(bool value);
    bool GetApplyFootRotationLimits() const;
    void SetApplyFootRotationLimits(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCFootPinningUpdateNode
{
private:
    void *m_ptr;

public:
    GCFootPinningUpdateNode(std::string ptr);
    GCFootPinningUpdateNode(void *ptr);

    GFootPinningPoseOpFixedData_t GetPoseOpFixedData() const;
    void SetPoseOpFixedData(GFootPinningPoseOpFixedData_t value);
    FootPinningTimingSource GetTimingSource() const;
    void SetTimingSource(FootPinningTimingSource value);
    std::vector<GCAnimParamHandle> GetParams() const;
    void SetParams(std::vector<GCAnimParamHandle> value);
    bool GetResetChild() const;
    void SetResetChild(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCLeafUpdateNode
{
private:
    void *m_ptr;

public:
    GCLeafUpdateNode(std::string ptr);
    GCLeafUpdateNode(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCAnimMotorUpdaterBase
{
private:
    void *m_ptr;

public:
    GCAnimMotorUpdaterBase(std::string ptr);
    GCAnimMotorUpdaterBase(void *ptr);

    CUtlString GetName() const;
    void SetName(CUtlString value);
    bool GetDefault() const;
    void SetDefault(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GRnMesh_t
{
private:
    void *m_ptr;

public:
    GRnMesh_t(std::string ptr);
    GRnMesh_t(void *ptr);

    Vector GetMin() const;
    void SetMin(Vector value);
    Vector GetMax() const;
    void SetMax(Vector value);
    std::vector<GRnNode_t> GetNodes() const;
    void SetNodes(std::vector<GRnNode_t> value);
    std::vector<GRnTriangle_t> GetTriangles() const;
    void SetTriangles(std::vector<GRnTriangle_t> value);
    std::vector<GRnWing_t> GetWings() const;
    void SetWings(std::vector<GRnWing_t> value);
    std::vector<uint8> GetMaterials() const;
    void SetMaterials(std::vector<uint8> value);
    Vector GetOrthographicAreas() const;
    void SetOrthographicAreas(Vector value);
    uint32_t GetFlags() const;
    void SetFlags(uint32_t value);
    uint32_t GetDebugFlags() const;
    void SetDebugFlags(uint32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCModelConfigElement
{
private:
    void *m_ptr;

public:
    GCModelConfigElement(std::string ptr);
    GCModelConfigElement(void *ptr);

    CUtlString GetElementName() const;
    void SetElementName(CUtlString value);
    std::vector<GCModelConfigElement*> GetNestedElements() const;
    void SetNestedElements(std::vector<GCModelConfigElement*> value);

    std::string ToPtr();
    bool IsValid();
};

class GVPhysXAggregateData_t
{
private:
    void *m_ptr;

public:
    GVPhysXAggregateData_t(std::string ptr);
    GVPhysXAggregateData_t(void *ptr);

    uint16_t GetFlags() const;
    void SetFlags(uint16_t value);
    uint16_t GetRefCounter() const;
    void SetRefCounter(uint16_t value);
    std::vector<uint32> GetBonesHash() const;
    void SetBonesHash(std::vector<uint32> value);
    std::vector<CUtlString> GetBoneNames() const;
    void SetBoneNames(std::vector<CUtlString> value);
    std::vector<uint16> GetIndexNames() const;
    void SetIndexNames(std::vector<uint16> value);
    std::vector<uint16> GetIndexHash() const;
    void SetIndexHash(std::vector<uint16> value);
    std::vector<matrix3x4a_t> GetBindPose() const;
    void SetBindPose(std::vector<matrix3x4a_t> value);
    std::vector<GVPhysXBodyPart_t> GetParts() const;
    void SetParts(std::vector<GVPhysXBodyPart_t> value);
    std::vector<GVPhysXConstraint2_t> GetConstraints2() const;
    void SetConstraints2(std::vector<GVPhysXConstraint2_t> value);
    std::vector<GVPhysXJoint_t> GetJoints() const;
    void SetJoints(std::vector<GVPhysXJoint_t> value);
    GPhysFeModelDesc_t GetFeModel() const;
    void SetFeModel(GPhysFeModelDesc_t* value);
    std::vector<uint16> GetBoneParents() const;
    void SetBoneParents(std::vector<uint16> value);
    std::vector<uint32> GetSurfacePropertyHashes() const;
    void SetSurfacePropertyHashes(std::vector<uint32> value);
    std::vector<GVPhysXCollisionAttributes_t> GetCollisionAttributes() const;
    void SetCollisionAttributes(std::vector<GVPhysXCollisionAttributes_t> value);
    std::vector<CUtlString> GetDebugPartNames() const;
    void SetDebugPartNames(std::vector<CUtlString> value);
    CUtlString GetEmbeddedKeyvalues() const;
    void SetEmbeddedKeyvalues(CUtlString value);

    std::string ToPtr();
    bool IsValid();
};

class GCSequenceUpdateNode
{
private:
    void *m_ptr;

public:
    GCSequenceUpdateNode(std::string ptr);
    GCSequenceUpdateNode(void *ptr);

    GCParamSpanUpdater GetParamSpans() const;
    void SetParamSpans(GCParamSpanUpdater value);
    std::vector<GTagSpan_t> GetTags() const;
    void SetTags(std::vector<GTagSpan_t> value);
    float GetPlaybackSpeed() const;
    void SetPlaybackSpeed(float value);
    float GetDuration() const;
    void SetDuration(float value);
    bool GetLoop() const;
    void SetLoop(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCModelConfigElement_Command
{
private:
    void *m_ptr;

public:
    GCModelConfigElement_Command(std::string ptr);
    GCModelConfigElement_Command(void *ptr);

    CUtlString GetCommand() const;
    void SetCommand(CUtlString value);

    std::string ToPtr();
    bool IsValid();
};

class GCAnimParameterBase
{
private:
    void *m_ptr;

public:
    GCAnimParameterBase(std::string ptr);
    GCAnimParameterBase(void *ptr);

    CUtlString GetComment() const;
    void SetComment(CUtlString value);
    CUtlString GetGroup() const;
    void SetGroup(CUtlString value);
    GAnimParamID GetId() const;
    void SetId(GAnimParamID value);
    CUtlString GetComponentName() const;
    void SetComponentName(CUtlString value);
    bool GetNetworkingRequested() const;
    void SetNetworkingRequested(bool value);
    bool GetIsReferenced() const;
    void SetIsReferenced(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCompositeMaterialInputLooseVariable_t
{
private:
    void *m_ptr;

public:
    GCompositeMaterialInputLooseVariable_t(std::string ptr);
    GCompositeMaterialInputLooseVariable_t(void *ptr);

    CUtlString GetStrName() const;
    void SetStrName(CUtlString value);
    bool GetExposeExternally() const;
    void SetExposeExternally(bool value);
    CUtlString GetStrExposedFriendlyName() const;
    void SetStrExposedFriendlyName(CUtlString value);
    CUtlString GetStrExposedFriendlyGroupName() const;
    void SetStrExposedFriendlyGroupName(CUtlString value);
    bool GetExposedVariableIsFixedRange() const;
    void SetExposedVariableIsFixedRange(bool value);
    CUtlString GetStrExposedVisibleWhenTrue() const;
    void SetStrExposedVisibleWhenTrue(CUtlString value);
    CUtlString GetStrExposedHiddenWhenTrue() const;
    void SetStrExposedHiddenWhenTrue(CUtlString value);
    CompositeMaterialInputLooseVariableType_t GetVariableType() const;
    void SetVariableType(CompositeMaterialInputLooseVariableType_t value);
    bool GetValueBoolean() const;
    void SetValueBoolean(bool value);
    int32_t GetValueIntX() const;
    void SetValueIntX(int32_t value);
    int32_t GetValueIntY() const;
    void SetValueIntY(int32_t value);
    int32_t GetValueIntZ() const;
    void SetValueIntZ(int32_t value);
    int32_t GetValueIntW() const;
    void SetValueIntW(int32_t value);
    bool GetHasFloatBounds() const;
    void SetHasFloatBounds(bool value);
    float GetValueFloatX() const;
    void SetValueFloatX(float value);
    float GetValueFloatX_Min() const;
    void SetValueFloatX_Min(float value);
    float GetValueFloatX_Max() const;
    void SetValueFloatX_Max(float value);
    float GetValueFloatY() const;
    void SetValueFloatY(float value);
    float GetValueFloatY_Min() const;
    void SetValueFloatY_Min(float value);
    float GetValueFloatY_Max() const;
    void SetValueFloatY_Max(float value);
    float GetValueFloatZ() const;
    void SetValueFloatZ(float value);
    float GetValueFloatZ_Min() const;
    void SetValueFloatZ_Min(float value);
    float GetValueFloatZ_Max() const;
    void SetValueFloatZ_Max(float value);
    float GetValueFloatW() const;
    void SetValueFloatW(float value);
    float GetValueFloatW_Min() const;
    void SetValueFloatW_Min(float value);
    float GetValueFloatW_Max() const;
    void SetValueFloatW_Max(float value);
    Color GetCValueColor4() const;
    void SetCValueColor4(Color value);
    CompositeMaterialVarSystemVar_t GetValueSystemVar() const;
    void SetValueSystemVar(CompositeMaterialVarSystemVar_t value);
    CUtlString GetStrTextureContentAssetPath() const;
    void SetStrTextureContentAssetPath(CUtlString value);
    CUtlString GetStrTextureCompilationVtexTemplate() const;
    void SetStrTextureCompilationVtexTemplate(CUtlString value);
    CompositeMaterialInputTextureType_t GetTextureType() const;
    void SetTextureType(CompositeMaterialInputTextureType_t value);
    CUtlString GetStrString() const;
    void SetStrString(CUtlString value);
    CUtlString GetStrPanoramaPanelPath() const;
    void SetStrPanoramaPanelPath(CUtlString value);
    int32_t GetPanoramaRenderRes() const;
    void SetPanoramaRenderRes(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GVecInputMaterialVariable_t
{
private:
    void *m_ptr;

public:
    GVecInputMaterialVariable_t(std::string ptr);
    GVecInputMaterialVariable_t(void *ptr);

    CUtlString GetStrVariable() const;
    void SetStrVariable(CUtlString value);

    std::string ToPtr();
    bool IsValid();
};

class GCCachedPose
{
private:
    void *m_ptr;

public:
    GCCachedPose(std::string ptr);
    GCCachedPose(void *ptr);

    std::vector<float32> GetMorphWeights() const;
    void SetMorphWeights(std::vector<float32> value);
    float GetCycle() const;
    void SetCycle(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCAnimGraphSettingsGroup
{
private:
    void *m_ptr;

public:
    GCAnimGraphSettingsGroup(std::string ptr);
    GCAnimGraphSettingsGroup(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCModelConfig
{
private:
    void *m_ptr;

public:
    GCModelConfig(std::string ptr);
    GCModelConfig(void *ptr);

    CUtlString GetConfigName() const;
    void SetConfigName(CUtlString value);
    std::vector<GCModelConfigElement*> GetElements() const;
    void SetElements(std::vector<GCModelConfigElement*> value);
    bool GetTopLevel() const;
    void SetTopLevel(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GFootLockPoseOpFixedSettings
{
private:
    void *m_ptr;

public:
    GFootLockPoseOpFixedSettings(std::string ptr);
    GFootLockPoseOpFixedSettings(void *ptr);

    std::vector<GFootFixedData_t> GetFootInfo() const;
    void SetFootInfo(std::vector<GFootFixedData_t> value);
    GCAnimInputDamping GetHipDampingSettings() const;
    void SetHipDampingSettings(GCAnimInputDamping value);
    int32_t GetHipBoneIndex() const;
    void SetHipBoneIndex(int32_t value);
    IKSolverType GetIkSolverType() const;
    void SetIkSolverType(IKSolverType value);
    bool GetApplyTilt() const;
    void SetApplyTilt(bool value);
    bool GetApplyHipDrop() const;
    void SetApplyHipDrop(bool value);
    bool GetAlwaysUseFallbackHinge() const;
    void SetAlwaysUseFallbackHinge(bool value);
    bool GetApplyFootRotationLimits() const;
    void SetApplyFootRotationLimits(bool value);
    bool GetApplyLegTwistLimits() const;
    void SetApplyLegTwistLimits(bool value);
    float GetMaxFootHeight() const;
    void SetMaxFootHeight(float value);
    float GetExtensionScale() const;
    void SetExtensionScale(float value);
    float GetMaxLegTwist() const;
    void SetMaxLegTwist(float value);
    bool GetEnableLockBreaking() const;
    void SetEnableLockBreaking(bool value);
    float GetLockBreakTolerance() const;
    void SetLockBreakTolerance(float value);
    float GetLockBlendTime() const;
    void SetLockBlendTime(float value);
    bool GetEnableStretching() const;
    void SetEnableStretching(bool value);
    float GetMaxStretchAmount() const;
    void SetMaxStretchAmount(float value);
    float GetStretchExtensionScale() const;
    void SetStretchExtensionScale(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCFlexRule
{
private:
    void *m_ptr;

public:
    GCFlexRule(std::string ptr);
    GCFlexRule(void *ptr);

    int32_t GetFlex() const;
    void SetFlex(int32_t value);
    std::vector<GCFlexOp> GetFlexOps() const;
    void SetFlexOps(std::vector<GCFlexOp> value);

    std::string ToPtr();
    bool IsValid();
};

class GCSosGroupActionSetSoundeventParameterSchema
{
private:
    void *m_ptr;

public:
    GCSosGroupActionSetSoundeventParameterSchema(std::string ptr);
    GCSosGroupActionSetSoundeventParameterSchema(void *ptr);

    int32_t GetMaxCount() const;
    void SetMaxCount(int32_t value);
    float GetMinValue() const;
    void SetMinValue(float value);
    float GetMaxValue() const;
    void SetMaxValue(float value);
    CUtlString GetOpvarName() const;
    void SetOpvarName(CUtlString value);
    SosActionSortType_t GetSortType() const;
    void SetSortType(SosActionSortType_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCStepsRemainingMetricEvaluator
{
private:
    void *m_ptr;

public:
    GCStepsRemainingMetricEvaluator(std::string ptr);
    GCStepsRemainingMetricEvaluator(void *ptr);

    std::vector<int32> GetFootIndices() const;
    void SetFootIndices(std::vector<int32> value);
    float GetMinStepsRemaining() const;
    void SetMinStepsRemaining(float value);

    std::string ToPtr();
    bool IsValid();
};

class GNmCompressionSettings_t__QuantizationRange_t
{
private:
    void *m_ptr;

public:
    GNmCompressionSettings_t__QuantizationRange_t(std::string ptr);
    GNmCompressionSettings_t__QuantizationRange_t(void *ptr);

    float GetRangeStart() const;
    void SetRangeStart(float value);
    float GetRangeLength() const;
    void SetRangeLength(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCAnimParameterManagerUpdater
{
private:
    void *m_ptr;

public:
    GCAnimParameterManagerUpdater(std::string ptr);
    GCAnimParameterManagerUpdater(void *ptr);

    std::vector<GCAnimParamHandle> GetIndexToHandle() const;
    void SetIndexToHandle(std::vector<GCAnimParamHandle> value);

    std::string ToPtr();
    bool IsValid();
};

class GCModelConfigElement_RandomColor
{
private:
    void *m_ptr;

public:
    GCModelConfigElement_RandomColor(std::string ptr);
    GCModelConfigElement_RandomColor(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCMotionNode
{
private:
    void *m_ptr;

public:
    GCMotionNode(std::string ptr);
    GCMotionNode(void *ptr);

    CUtlString GetName() const;
    void SetName(CUtlString value);
    GAnimNodeID GetId() const;
    void SetId(GAnimNodeID value);

    std::string ToPtr();
    bool IsValid();
};

class GCAnimTagBase
{
private:
    void *m_ptr;

public:
    GCAnimTagBase(std::string ptr);
    GCAnimTagBase(void *ptr);

    CUtlString GetComment() const;
    void SetComment(CUtlString value);
    GAnimTagID GetTagID() const;
    void SetTagID(GAnimTagID value);
    bool GetIsReferenced() const;
    void SetIsReferenced(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GAnimComponentID
{
private:
    void *m_ptr;

public:
    GAnimComponentID(std::string ptr);
    GAnimComponentID(void *ptr);

    uint32_t GetId() const;
    void SetId(uint32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCAnimLocalHierarchy
{
private:
    void *m_ptr;

public:
    GCAnimLocalHierarchy(std::string ptr);
    GCAnimLocalHierarchy(void *ptr);

    CBufferString GetBone() const;
    void SetBone(CBufferString value);
    CBufferString GetNewParent() const;
    void SetNewParent(CBufferString value);
    int32_t GetStartFrame() const;
    void SetStartFrame(int32_t value);
    int32_t GetPeakFrame() const;
    void SetPeakFrame(int32_t value);
    int32_t GetTailFrame() const;
    void SetTailFrame(int32_t value);
    int32_t GetEndFrame() const;
    void SetEndFrame(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GRnShapeDesc_t
{
private:
    void *m_ptr;

public:
    GRnShapeDesc_t(std::string ptr);
    GRnShapeDesc_t(void *ptr);

    uint32_t GetCollisionAttributeIndex() const;
    void SetCollisionAttributeIndex(uint32_t value);
    uint32_t GetSurfacePropertyIndex() const;
    void SetSurfacePropertyIndex(uint32_t value);
    CUtlString GetUserFriendlyName() const;
    void SetUserFriendlyName(CUtlString value);

    std::string ToPtr();
    bool IsValid();
};

class GCBoneConstraintPoseSpaceBone__Input_t
{
private:
    void *m_ptr;

public:
    GCBoneConstraintPoseSpaceBone__Input_t(std::string ptr);
    GCBoneConstraintPoseSpaceBone__Input_t(void *ptr);

    Vector GetInputValue() const;
    void SetInputValue(Vector value);

    std::string ToPtr();
    bool IsValid();
};

class GCModelConfigElement_SetRenderColor
{
private:
    void *m_ptr;

public:
    GCModelConfigElement_SetRenderColor(std::string ptr);
    GCModelConfigElement_SetRenderColor(void *ptr);

    Color GetColor() const;
    void SetColor(Color value);

    std::string ToPtr();
    bool IsValid();
};

class GPhysSoftbodyDesc_t
{
private:
    void *m_ptr;

public:
    GPhysSoftbodyDesc_t(std::string ptr);
    GPhysSoftbodyDesc_t(void *ptr);

    std::vector<uint32> GetParticleBoneHash() const;
    void SetParticleBoneHash(std::vector<uint32> value);
    std::vector<GRnSoftbodyParticle_t> GetParticles() const;
    void SetParticles(std::vector<GRnSoftbodyParticle_t> value);
    std::vector<GRnSoftbodySpring_t> GetSprings() const;
    void SetSprings(std::vector<GRnSoftbodySpring_t> value);
    std::vector<GRnSoftbodyCapsule_t> GetCapsules() const;
    void SetCapsules(std::vector<GRnSoftbodyCapsule_t> value);
    std::vector<CUtlString> GetParticleBoneName() const;
    void SetParticleBoneName(std::vector<CUtlString> value);

    std::string ToPtr();
    bool IsValid();
};

class GVMapResourceData_t
{
private:
    void *m_ptr;

public:
    GVMapResourceData_t(std::string ptr);
    GVMapResourceData_t(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GFeCtrlSoftOffset_t
{
private:
    void *m_ptr;

public:
    GFeCtrlSoftOffset_t(std::string ptr);
    GFeCtrlSoftOffset_t(void *ptr);

    uint16_t GetCtrlParent() const;
    void SetCtrlParent(uint16_t value);
    uint16_t GetCtrlChild() const;
    void SetCtrlChild(uint16_t value);
    Vector GetOffset() const;
    void SetOffset(Vector value);
    float GetAlpha() const;
    void SetAlpha(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCMorphBundleData
{
private:
    void *m_ptr;

public:
    GCMorphBundleData(std::string ptr);
    GCMorphBundleData(void *ptr);

    float GetULeftSrc() const;
    void SetULeftSrc(float value);
    float GetVTopSrc() const;
    void SetVTopSrc(float value);
    std::vector<float32> GetOffsets() const;
    void SetOffsets(std::vector<float32> value);
    std::vector<float32> GetRanges() const;
    void SetRanges(std::vector<float32> value);

    std::string ToPtr();
    bool IsValid();
};

class GCNmBoneMask
{
private:
    void *m_ptr;

public:
    GCNmBoneMask(std::string ptr);
    GCNmBoneMask(void *ptr);

    GCNmBoneMask GetWeightInfo() const;
    void SetWeightInfo(GCNmBoneMask value);
    std::vector<float32> GetWeights() const;
    void SetWeights(std::vector<float32> value);

    std::string ToPtr();
    bool IsValid();
};

class GCAudioEmphasisSample
{
private:
    void *m_ptr;

public:
    GCAudioEmphasisSample(std::string ptr);
    GCAudioEmphasisSample(void *ptr);

    float GetTime() const;
    void SetTime(float value);
    float GetValue() const;
    void SetValue(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCNmFrameSnapEvent
{
private:
    void *m_ptr;

public:
    GCNmFrameSnapEvent(std::string ptr);
    GCNmFrameSnapEvent(void *ptr);

    NmFrameSnapEventMode_t GetFrameSnapMode() const;
    void SetFrameSnapMode(NmFrameSnapEventMode_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCJumpHelperUpdateNode
{
private:
    void *m_ptr;

public:
    GCJumpHelperUpdateNode(std::string ptr);
    GCJumpHelperUpdateNode(void *ptr);

    GCAnimParamHandle GetTargetParam() const;
    void SetTargetParam(GCAnimParamHandle value);
    Vector GetOriginalJumpMovement() const;
    void SetOriginalJumpMovement(Vector value);
    float GetOriginalJumpDuration() const;
    void SetOriginalJumpDuration(float value);
    float GetJumpStartCycle() const;
    void SetJumpStartCycle(float value);
    float GetJumpEndCycle() const;
    void SetJumpEndCycle(float value);
    JumpCorrectionMethod GetCorrectionMethod() const;
    void SetCorrectionMethod(JumpCorrectionMethod value);
    std::vector<bool> GetTranslationAxis() const;
    void SetTranslationAxis(std::vector<bool> value);
    bool GetScaleSpeed() const;
    void SetScaleSpeed(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GSolveIKChainPoseOpFixedSettings_t
{
private:
    void *m_ptr;

public:
    GSolveIKChainPoseOpFixedSettings_t(std::string ptr);
    GSolveIKChainPoseOpFixedSettings_t(void *ptr);

    std::vector<GChainToSolveData_t> GetChainsToSolveData() const;
    void SetChainsToSolveData(std::vector<GChainToSolveData_t> value);
    bool GetMatchTargetOrientation() const;
    void SetMatchTargetOrientation(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCMaterialAttributeAnimTag
{
private:
    void *m_ptr;

public:
    GCMaterialAttributeAnimTag(std::string ptr);
    GCMaterialAttributeAnimTag(void *ptr);

    CUtlString GetAttributeName() const;
    void SetAttributeName(CUtlString value);
    MatterialAttributeTagType_t GetAttributeType() const;
    void SetAttributeType(MatterialAttributeTagType_t value);
    float GetValue() const;
    void SetValue(float value);
    Color GetColor() const;
    void SetColor(Color value);

    std::string ToPtr();
    bool IsValid();
};

class GCAnimComponentUpdater
{
private:
    void *m_ptr;

public:
    GCAnimComponentUpdater(std::string ptr);
    GCAnimComponentUpdater(void *ptr);

    CUtlString GetName() const;
    void SetName(CUtlString value);
    GAnimComponentID GetId() const;
    void SetId(GAnimComponentID value);
    AnimNodeNetworkMode GetNetworkMode() const;
    void SetNetworkMode(AnimNodeNetworkMode value);
    bool GetStartEnabled() const;
    void SetStartEnabled(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCReplicationParameters
{
private:
    void *m_ptr;

public:
    GCReplicationParameters(std::string ptr);
    GCReplicationParameters(void *ptr);

    ParticleReplicationMode_t GetReplicationMode() const;
    void SetReplicationMode(ParticleReplicationMode_t value);
    bool GetScaleChildParticleRadii() const;
    void SetScaleChildParticleRadii(bool value);
    GCParticleCollectionFloatInput GetMinRandomRadiusScale() const;
    void SetMinRandomRadiusScale(GCParticleCollectionFloatInput value);
    GCParticleCollectionFloatInput GetMaxRandomRadiusScale() const;
    void SetMaxRandomRadiusScale(GCParticleCollectionFloatInput value);
    GCParticleCollectionFloatInput GetModellingScale() const;
    void SetModellingScale(GCParticleCollectionFloatInput value);

    std::string ToPtr();
    bool IsValid();
};

class GVMixEnvelopeDesc_t
{
private:
    void *m_ptr;

public:
    GVMixEnvelopeDesc_t(std::string ptr);
    GVMixEnvelopeDesc_t(void *ptr);

    float GetAttackTimeMS() const;
    void SetAttackTimeMS(float value);
    float GetHoldTimeMS() const;
    void SetHoldTimeMS(float value);
    float GetReleaseTimeMS() const;
    void SetReleaseTimeMS(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCNmValueNode
{
private:
    void *m_ptr;

public:
    GCNmValueNode(std::string ptr);
    GCNmValueNode(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCFollowPathUpdateNode
{
private:
    void *m_ptr;

public:
    GCFollowPathUpdateNode(std::string ptr);
    GCFollowPathUpdateNode(void *ptr);

    float GetBlendOutTime() const;
    void SetBlendOutTime(float value);
    bool GetBlockNonPathMovement() const;
    void SetBlockNonPathMovement(bool value);
    bool GetStopFeetAtGoal() const;
    void SetStopFeetAtGoal(bool value);
    bool GetScaleSpeed() const;
    void SetScaleSpeed(bool value);
    float GetScale() const;
    void SetScale(float value);
    float GetMinAngle() const;
    void SetMinAngle(float value);
    float GetMaxAngle() const;
    void SetMaxAngle(float value);
    float GetSpeedScaleBlending() const;
    void SetSpeedScaleBlending(float value);
    GCAnimInputDamping GetTurnDamping() const;
    void SetTurnDamping(GCAnimInputDamping value);
    AnimValueSource GetFacingTarget() const;
    void SetFacingTarget(AnimValueSource value);
    GCAnimParamHandle GetParam() const;
    void SetParam(GCAnimParamHandle value);
    float GetTurnToFaceOffset() const;
    void SetTurnToFaceOffset(float value);
    bool GetTurnToFace() const;
    void SetTurnToFace(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GEventClientPostSimulate_t
{
private:
    void *m_ptr;

public:
    GEventClientPostSimulate_t(std::string ptr);
    GEventClientPostSimulate_t(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GAABB_t
{
private:
    void *m_ptr;

public:
    GAABB_t(std::string ptr);
    GAABB_t(void *ptr);

    Vector GetMinBounds() const;
    void SetMinBounds(Vector value);
    Vector GetMaxBounds() const;
    void SetMaxBounds(Vector value);

    std::string ToPtr();
    bool IsValid();
};

class GFeNodeBase_t
{
private:
    void *m_ptr;

public:
    GFeNodeBase_t(std::string ptr);
    GFeNodeBase_t(void *ptr);

    uint16_t GetNode() const;
    void SetNode(uint16_t value);
    std::vector<uint16_t> GetDummy() const;
    void SetDummy(std::vector<uint16_t> value);
    uint16_t GetNodeX0() const;
    void SetNodeX0(uint16_t value);
    uint16_t GetNodeX1() const;
    void SetNodeX1(uint16_t value);
    uint16_t GetNodeY0() const;
    void SetNodeY0(uint16_t value);
    uint16_t GetNodeY1() const;
    void SetNodeY1(uint16_t value);

    std::string ToPtr();
    bool IsValid();
};

class GModelBoneFlexDriverControl_t
{
private:
    void *m_ptr;

public:
    GModelBoneFlexDriverControl_t(std::string ptr);
    GModelBoneFlexDriverControl_t(void *ptr);

    ModelBoneFlexComponent_t GetBoneComponent() const;
    void SetBoneComponent(ModelBoneFlexComponent_t value);
    CUtlString GetFlexController() const;
    void SetFlexController(CUtlString value);
    uint32_t GetFlexControllerToken() const;
    void SetFlexControllerToken(uint32_t value);
    float GetMin() const;
    void SetMin(float value);
    float GetMax() const;
    void SetMax(float value);

    std::string ToPtr();
    bool IsValid();
};

class GPostProcessingVignetteParameters_t
{
private:
    void *m_ptr;

public:
    GPostProcessingVignetteParameters_t(std::string ptr);
    GPostProcessingVignetteParameters_t(void *ptr);

    float GetVignetteStrength() const;
    void SetVignetteStrength(float value);
    Vector2D GetCenter() const;
    void SetCenter(Vector2D value);
    float GetRadius() const;
    void SetRadius(float value);
    float GetRoundness() const;
    void SetRoundness(float value);
    float GetFeather() const;
    void SetFeather(float value);
    Vector GetColorTint() const;
    void SetColorTint(Vector value);

    std::string ToPtr();
    bool IsValid();
};

class GConstantInfo_t
{
private:
    void *m_ptr;

public:
    GConstantInfo_t(std::string ptr);
    GConstantInfo_t(void *ptr);

    CUtlString GetName() const;
    void SetName(CUtlString value);
    CUtlStringToken GetNameToken() const;
    void SetNameToken(CUtlStringToken value);
    float GetValue() const;
    void SetValue(float value);

    std::string ToPtr();
    bool IsValid();
};

class GFuseVariableIndex_t
{
private:
    void *m_ptr;

public:
    GFuseVariableIndex_t(std::string ptr);
    GFuseVariableIndex_t(void *ptr);

    uint16_t GetValue() const;
    void SetValue(uint16_t value);

    std::string ToPtr();
    bool IsValid();
};

class GIParticleEffect
{
private:
    void *m_ptr;

public:
    GIParticleEffect(std::string ptr);
    GIParticleEffect(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCStopAtGoalUpdateNode
{
private:
    void *m_ptr;

public:
    GCStopAtGoalUpdateNode(std::string ptr);
    GCStopAtGoalUpdateNode(void *ptr);

    float GetOuterRadius() const;
    void SetOuterRadius(float value);
    float GetInnerRadius() const;
    void SetInnerRadius(float value);
    float GetMaxScale() const;
    void SetMaxScale(float value);
    float GetMinScale() const;
    void SetMinScale(float value);
    GCAnimInputDamping GetDamping() const;
    void SetDamping(GCAnimInputDamping value);

    std::string ToPtr();
    bool IsValid();
};

class GCSequenceGroupData
{
private:
    void *m_ptr;

public:
    GCSequenceGroupData(std::string ptr);
    GCSequenceGroupData(void *ptr);

    CBufferString GetName() const;
    void SetName(CBufferString value);
    uint32_t GetFlags() const;
    void SetFlags(uint32_t value);
    std::vector<CBufferString> GetLocalSequenceNameArray() const;
    void SetLocalSequenceNameArray(std::vector<CBufferString> value);
    std::vector<GCSeqS1SeqDesc> GetLocalS1SeqDescArray() const;
    void SetLocalS1SeqDescArray(std::vector<GCSeqS1SeqDesc> value);
    std::vector<GCSeqS1SeqDesc> GetLocalMultiSeqDescArray() const;
    void SetLocalMultiSeqDescArray(std::vector<GCSeqS1SeqDesc> value);
    std::vector<GCSeqSynthAnimDesc> GetLocalSynthAnimDescArray() const;
    void SetLocalSynthAnimDescArray(std::vector<GCSeqSynthAnimDesc> value);
    std::vector<GCSeqCmdSeqDesc> GetLocalCmdSeqDescArray() const;
    void SetLocalCmdSeqDescArray(std::vector<GCSeqCmdSeqDesc> value);
    std::vector<GCSeqBoneMaskList> GetLocalBoneMaskArray() const;
    void SetLocalBoneMaskArray(std::vector<GCSeqBoneMaskList> value);
    std::vector<GCSeqScaleSet> GetLocalScaleSetArray() const;
    void SetLocalScaleSetArray(std::vector<GCSeqScaleSet> value);
    std::vector<CBufferString> GetLocalBoneNameArray() const;
    void SetLocalBoneNameArray(std::vector<CBufferString> value);
    CBufferString GetLocalNodeName() const;
    void SetLocalNodeName(CBufferString value);
    std::vector<GCSeqPoseParamDesc> GetLocalPoseParamArray() const;
    void SetLocalPoseParamArray(std::vector<GCSeqPoseParamDesc> value);
    std::vector<GCSeqIKLock> GetLocalIKAutoplayLockArray() const;
    void SetLocalIKAutoplayLockArray(std::vector<GCSeqIKLock> value);

    std::string ToPtr();
    bool IsValid();
};

class GParticleNamedValueConfiguration_t
{
private:
    void *m_ptr;

public:
    GParticleNamedValueConfiguration_t(std::string ptr);
    GParticleNamedValueConfiguration_t(void *ptr);

    CUtlString GetConfigName() const;
    void SetConfigName(CUtlString value);
    ParticleAttachment_t GetAttachType() const;
    void SetAttachType(ParticleAttachment_t value);
    CUtlString GetBoundEntityPath() const;
    void SetBoundEntityPath(CUtlString value);
    CUtlString GetStrEntityScope() const;
    void SetStrEntityScope(CUtlString value);
    CUtlString GetStrAttachmentName() const;
    void SetStrAttachmentName(CUtlString value);

    std::string ToPtr();
    bool IsValid();
};

class GCAnimSkeleton
{
private:
    void *m_ptr;

public:
    GCAnimSkeleton(std::string ptr);
    GCAnimSkeleton(void *ptr);

    std::vector<CUtlString> GetBoneNames() const;
    void SetBoneNames(std::vector<CUtlString> value);
    std::vector<int32> GetParents() const;
    void SetParents(std::vector<int32> value);
    std::vector<GCAnimFoot> GetFeet() const;
    void SetFeet(std::vector<GCAnimFoot> value);
    std::vector<CUtlString> GetMorphNames() const;
    void SetMorphNames(std::vector<CUtlString> value);
    std::vector<int32> GetLodBoneCounts() const;
    void SetLodBoneCounts(std::vector<int32> value);

    std::string ToPtr();
    bool IsValid();
};

class GCAnimationGraphVisualizerPrimitiveBase
{
private:
    void *m_ptr;

public:
    GCAnimationGraphVisualizerPrimitiveBase(std::string ptr);
    GCAnimationGraphVisualizerPrimitiveBase(void *ptr);

    CAnimationGraphVisualizerPrimitiveType GetType() const;
    void SetType(CAnimationGraphVisualizerPrimitiveType value);
    std::vector<GAnimNodeID> GetOwningAnimNodePaths() const;
    void SetOwningAnimNodePaths(std::vector<GAnimNodeID> value);
    int32_t GetOwningAnimNodePathCount() const;
    void SetOwningAnimNodePathCount(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCBodyGroupAnimTag
{
private:
    void *m_ptr;

public:
    GCBodyGroupAnimTag(std::string ptr);
    GCBodyGroupAnimTag(void *ptr);

    int32_t GetPriority() const;
    void SetPriority(int32_t value);
    std::vector<GCBodyGroupSetting> GetBodyGroupSettings() const;
    void SetBodyGroupSettings(std::vector<GCBodyGroupSetting> value);

    std::string ToPtr();
    bool IsValid();
};

class GFeAxialEdgeBend_t
{
private:
    void *m_ptr;

public:
    GFeAxialEdgeBend_t(std::string ptr);
    GFeAxialEdgeBend_t(void *ptr);

    float GetTe() const;
    void SetTe(float value);
    float GetTv() const;
    void SetTv(float value);
    float GetDist() const;
    void SetDist(float value);
    std::vector<float> GetWeight() const;
    void SetWeight(std::vector<float> value);
    std::vector<uint16_t> GetNode() const;
    void SetNode(std::vector<uint16_t> value);

    std::string ToPtr();
    bool IsValid();
};

class GParamSpanSample_t
{
private:
    void *m_ptr;

public:
    GParamSpanSample_t(std::string ptr);
    GParamSpanSample_t(void *ptr);

    float GetCycle() const;
    void SetCycle(float value);

    std::string ToPtr();
    bool IsValid();
};

class GFunctionInfo_t
{
private:
    void *m_ptr;

public:
    GFunctionInfo_t(std::string ptr);
    GFunctionInfo_t(void *ptr);

    CUtlString GetName() const;
    void SetName(CUtlString value);
    CUtlStringToken GetNameToken() const;
    void SetNameToken(CUtlStringToken value);
    int32_t GetParamCount() const;
    void SetParamCount(int32_t value);
    GFuseFunctionIndex_t GetIndex() const;
    void SetIndex(GFuseFunctionIndex_t value);
    bool GetIsPure() const;
    void SetIsPure(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GFourQuaternions
{
private:
    void *m_ptr;

public:
    GFourQuaternions(std::string ptr);
    GFourQuaternions(void *ptr);

    float GetX() const;
    void SetX(float value);
    float GetY() const;
    void SetY(float value);
    float GetZ() const;
    void SetZ(float value);
    float GetW() const;
    void SetW(float value);

    std::string ToPtr();
    bool IsValid();
};

class GSkeletonAnimCapture_t__FrameStamp_t
{
private:
    void *m_ptr;

public:
    GSkeletonAnimCapture_t__FrameStamp_t(std::string ptr);
    GSkeletonAnimCapture_t__FrameStamp_t(void *ptr);

    float GetTime() const;
    void SetTime(float value);
    float GetEntitySimTime() const;
    void SetEntitySimTime(float value);
    bool GetTeleportTick() const;
    void SetTeleportTick(bool value);
    bool GetPredicted() const;
    void SetPredicted(bool value);
    float GetCurTime() const;
    void SetCurTime(float value);
    float GetRealTime() const;
    void SetRealTime(float value);
    int32_t GetFrameCount() const;
    void SetFrameCount(int32_t value);
    int32_t GetTickCount() const;
    void SetTickCount(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCSeqAutoLayerFlag
{
private:
    void *m_ptr;

public:
    GCSeqAutoLayerFlag(std::string ptr);
    GCSeqAutoLayerFlag(void *ptr);

    bool GetPost() const;
    void SetPost(bool value);
    bool GetSpline() const;
    void SetSpline(bool value);
    bool GetXFade() const;
    void SetXFade(bool value);
    bool GetNoBlend() const;
    void SetNoBlend(bool value);
    bool GetLocal() const;
    void SetLocal(bool value);
    bool GetPose() const;
    void SetPose(bool value);
    bool GetFetchFrame() const;
    void SetFetchFrame(bool value);
    bool GetSubtract() const;
    void SetSubtract(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GParamSpan_t
{
private:
    void *m_ptr;

public:
    GParamSpan_t(std::string ptr);
    GParamSpan_t(void *ptr);

    std::vector<GParamSpanSample_t> GetSamples() const;
    void SetSamples(std::vector<GParamSpanSample_t> value);
    GCAnimParamHandle GetParam() const;
    void SetParam(GCAnimParamHandle value);
    AnimParamType_t GetParamType() const;
    void SetParamType(AnimParamType_t value);
    float GetStartCycle() const;
    void SetStartCycle(float value);
    float GetEndCycle() const;
    void SetEndCycle(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCNmBoolValueNode
{
private:
    void *m_ptr;

public:
    GCNmBoolValueNode(std::string ptr);
    GCNmBoolValueNode(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GRenderInputLayoutField_t
{
private:
    void *m_ptr;

public:
    GRenderInputLayoutField_t(std::string ptr);
    GRenderInputLayoutField_t(void *ptr);

    std::vector<uint8_t> GetSemanticName() const;
    void SetSemanticName(std::vector<uint8_t> value);
    int32_t GetSemanticIndex() const;
    void SetSemanticIndex(int32_t value);
    uint32_t GetFormat() const;
    void SetFormat(uint32_t value);
    int32_t GetOffset() const;
    void SetOffset(int32_t value);
    int32_t GetSlot() const;
    void SetSlot(int32_t value);
    RenderSlotType_t GetSlotType() const;
    void SetSlotType(RenderSlotType_t value);
    int32_t GetInstanceStepRate() const;
    void SetInstanceStepRate(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCCPPScriptComponentUpdater
{
private:
    void *m_ptr;

public:
    GCCPPScriptComponentUpdater(std::string ptr);
    GCCPPScriptComponentUpdater(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCDampedValueComponentUpdater
{
private:
    void *m_ptr;

public:
    GCDampedValueComponentUpdater(std::string ptr);
    GCDampedValueComponentUpdater(void *ptr);

    std::vector<GCDampedValueUpdateItem> GetItems() const;
    void SetItems(std::vector<GCDampedValueUpdateItem> value);

    std::string ToPtr();
    bool IsValid();
};

class GCSeqPoseSetting
{
private:
    void *m_ptr;

public:
    GCSeqPoseSetting(std::string ptr);
    GCSeqPoseSetting(void *ptr);

    CBufferString GetPoseParameter() const;
    void SetPoseParameter(CBufferString value);
    CBufferString GetAttachment() const;
    void SetAttachment(CBufferString value);
    CBufferString GetReferenceSequence() const;
    void SetReferenceSequence(CBufferString value);
    float GetValue() const;
    void SetValue(float value);
    bool GetX() const;
    void SetX(bool value);
    bool GetY() const;
    void SetY(bool value);
    bool GetZ() const;
    void SetZ(bool value);
    int32_t GetType() const;
    void SetType(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GRenderHairStrandInfo_t
{
private:
    void *m_ptr;

public:
    GRenderHairStrandInfo_t(std::string ptr);
    GRenderHairStrandInfo_t(void *ptr);

    std::vector<uint32_t> GetGuideHairIndices_nSurfaceTriIndex() const;
    void SetGuideHairIndices_nSurfaceTriIndex(std::vector<uint32_t> value);
    std::vector<uint16_t> GetGuideBary_vBaseBary() const;
    void SetGuideBary_vBaseBary(std::vector<uint16_t> value);
    std::vector<uint16_t> GetRootOffset_flLengthScale() const;
    void SetRootOffset_flLengthScale(std::vector<uint16_t> value);
    std::vector<uint16_t> GetPackedBaseUv() const;
    void SetPackedBaseUv(std::vector<uint16_t> value);
    uint32_t GetPackedSurfaceNormalOs() const;
    void SetPackedSurfaceNormalOs(uint32_t value);
    uint32_t GetPackedSurfaceTangentOs() const;
    void SetPackedSurfaceTangentOs(uint32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCExampleSchemaVData_Monomorphic
{
private:
    void *m_ptr;

public:
    GCExampleSchemaVData_Monomorphic(std::string ptr);
    GCExampleSchemaVData_Monomorphic(void *ptr);

    int32_t GetExample1() const;
    void SetExample1(int32_t value);
    int32_t GetExample2() const;
    void SetExample2(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCPlayerSprayDecalRenderHelper
{
private:
    void *m_ptr;

public:
    GCPlayerSprayDecalRenderHelper(std::string ptr);
    GCPlayerSprayDecalRenderHelper(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GFeTaperedCapsuleRigid_t
{
private:
    void *m_ptr;

public:
    GFeTaperedCapsuleRigid_t(std::string ptr);
    GFeTaperedCapsuleRigid_t(void *ptr);

    std::vector<float> GetSphere() const;
    void SetSphere(std::vector<float> value);
    uint16_t GetNode() const;
    void SetNode(uint16_t value);
    uint16_t GetCollisionMask() const;
    void SetCollisionMask(uint16_t value);
    uint16_t GetVertexMapIndex() const;
    void SetVertexMapIndex(uint16_t value);
    uint16_t GetFlags() const;
    void SetFlags(uint16_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCChoiceUpdateNode
{
private:
    void *m_ptr;

public:
    GCChoiceUpdateNode(std::string ptr);
    GCChoiceUpdateNode(void *ptr);

    std::vector<GCAnimUpdateNodeRef> GetChildren() const;
    void SetChildren(std::vector<GCAnimUpdateNodeRef> value);
    std::vector<float32> GetWeights() const;
    void SetWeights(std::vector<float32> value);
    std::vector<float32> GetBlendTimes() const;
    void SetBlendTimes(std::vector<float32> value);
    ChoiceMethod GetChoiceMethod() const;
    void SetChoiceMethod(ChoiceMethod value);
    ChoiceChangeMethod GetChoiceChangeMethod() const;
    void SetChoiceChangeMethod(ChoiceChangeMethod value);
    ChoiceBlendMethod GetBlendMethod() const;
    void SetBlendMethod(ChoiceBlendMethod value);
    float GetBlendTime() const;
    void SetBlendTime(float value);
    bool GetCrossFade() const;
    void SetCrossFade(bool value);
    bool GetResetChosen() const;
    void SetResetChosen(bool value);
    bool GetDontResetSameSelection() const;
    void SetDontResetSameSelection(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GIKSolverSettings_t
{
private:
    void *m_ptr;

public:
    GIKSolverSettings_t(std::string ptr);
    GIKSolverSettings_t(void *ptr);

    IKSolverType GetSolverType() const;
    void SetSolverType(IKSolverType value);
    int32_t GetNumIterations() const;
    void SetNumIterations(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCNmLayerBlendNode
{
private:
    void *m_ptr;

public:
    GCNmLayerBlendNode(std::string ptr);
    GCNmLayerBlendNode(void *ptr);

    int16_t GetBaseNodeIdx() const;
    void SetBaseNodeIdx(int16_t value);
    bool GetOnlySampleBaseRootMotion() const;
    void SetOnlySampleBaseRootMotion(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCRandomNumberGeneratorParameters
{
private:
    void *m_ptr;

public:
    GCRandomNumberGeneratorParameters(std::string ptr);
    GCRandomNumberGeneratorParameters(void *ptr);

    bool GetDistributeEvenly() const;
    void SetDistributeEvenly(bool value);
    int32_t GetSeed() const;
    void SetSeed(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GAnimationDecodeDebugDumpElement_t
{
private:
    void *m_ptr;

public:
    GAnimationDecodeDebugDumpElement_t(std::string ptr);
    GAnimationDecodeDebugDumpElement_t(void *ptr);

    int32_t GetEntityIndex() const;
    void SetEntityIndex(int32_t value);
    CUtlString GetModelName() const;
    void SetModelName(CUtlString value);
    std::vector<CUtlString> GetPoseParams() const;
    void SetPoseParams(std::vector<CUtlString> value);
    std::vector<CUtlString> GetDecodeOps() const;
    void SetDecodeOps(std::vector<CUtlString> value);
    std::vector<CUtlString> GetInternalOps() const;
    void SetInternalOps(std::vector<CUtlString> value);
    std::vector<CUtlString> GetDecodedAnims() const;
    void SetDecodedAnims(std::vector<CUtlString> value);

    std::string ToPtr();
    bool IsValid();
};

class GCNmFloatValueNode
{
private:
    void *m_ptr;

public:
    GCNmFloatValueNode(std::string ptr);
    GCNmFloatValueNode(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCSSDSMsg_LayerBase
{
private:
    void *m_ptr;

public:
    GCSSDSMsg_LayerBase(std::string ptr);
    GCSSDSMsg_LayerBase(void *ptr);

    GSceneViewId_t GetViewId() const;
    void SetViewId(GSceneViewId_t value);
    CUtlString GetViewName() const;
    void SetViewName(CUtlString value);
    int32_t GetLayerIndex() const;
    void SetLayerIndex(int32_t value);
    uint64_t GetLayerId() const;
    void SetLayerId(uint64_t value);
    CUtlString GetLayerName() const;
    void SetLayerName(CUtlString value);
    CUtlString GetDisplayText() const;
    void SetDisplayText(CUtlString value);

    std::string ToPtr();
    bool IsValid();
};

class GCSosGroupActionSoundeventClusterSchema
{
private:
    void *m_ptr;

public:
    GCSosGroupActionSoundeventClusterSchema(std::string ptr);
    GCSosGroupActionSoundeventClusterSchema(void *ptr);

    int32_t GetMinNearby() const;
    void SetMinNearby(int32_t value);
    float GetClusterEpsilon() const;
    void SetClusterEpsilon(float value);
    CUtlString GetShouldPlayOpvar() const;
    void SetShouldPlayOpvar(CUtlString value);
    CUtlString GetShouldPlayClusterChild() const;
    void SetShouldPlayClusterChild(CUtlString value);
    CUtlString GetClusterSizeOpvar() const;
    void SetClusterSizeOpvar(CUtlString value);
    CUtlString GetGroupBoundingBoxMinsOpvar() const;
    void SetGroupBoundingBoxMinsOpvar(CUtlString value);
    CUtlString GetGroupBoundingBoxMaxsOpvar() const;
    void SetGroupBoundingBoxMaxsOpvar(CUtlString value);

    std::string ToPtr();
    bool IsValid();
};

class GCAnimationGraphVisualizerAxis
{
private:
    void *m_ptr;

public:
    GCAnimationGraphVisualizerAxis(std::string ptr);
    GCAnimationGraphVisualizerAxis(void *ptr);

    float GetAxisSize() const;
    void SetAxisSize(float value);

    std::string ToPtr();
    bool IsValid();
};

class GMaterialResourceData_t
{
private:
    void *m_ptr;

public:
    GMaterialResourceData_t(std::string ptr);
    GMaterialResourceData_t(void *ptr);

    CUtlString GetMaterialName() const;
    void SetMaterialName(CUtlString value);
    CUtlString GetShaderName() const;
    void SetShaderName(CUtlString value);
    std::vector<GMaterialParamInt_t> GetIntParams() const;
    void SetIntParams(std::vector<GMaterialParamInt_t> value);
    std::vector<GMaterialParamFloat_t> GetFloatParams() const;
    void SetFloatParams(std::vector<GMaterialParamFloat_t> value);
    std::vector<GMaterialParamVector_t> GetVectorParams() const;
    void SetVectorParams(std::vector<GMaterialParamVector_t> value);
    std::vector<GMaterialParamTexture_t> GetTextureParams() const;
    void SetTextureParams(std::vector<GMaterialParamTexture_t> value);
    std::vector<GMaterialParamBuffer_t> GetDynamicParams() const;
    void SetDynamicParams(std::vector<GMaterialParamBuffer_t> value);
    std::vector<GMaterialParamBuffer_t> GetDynamicTextureParams() const;
    void SetDynamicTextureParams(std::vector<GMaterialParamBuffer_t> value);
    std::vector<GMaterialParamInt_t> GetIntAttributes() const;
    void SetIntAttributes(std::vector<GMaterialParamInt_t> value);
    std::vector<GMaterialParamFloat_t> GetFloatAttributes() const;
    void SetFloatAttributes(std::vector<GMaterialParamFloat_t> value);
    std::vector<GMaterialParamVector_t> GetVectorAttributes() const;
    void SetVectorAttributes(std::vector<GMaterialParamVector_t> value);
    std::vector<GMaterialParamTexture_t> GetTextureAttributes() const;
    void SetTextureAttributes(std::vector<GMaterialParamTexture_t> value);
    std::vector<GMaterialParamString_t> GetStringAttributes() const;
    void SetStringAttributes(std::vector<GMaterialParamString_t> value);
    std::vector<CUtlString> GetRenderAttributesUsed() const;
    void SetRenderAttributesUsed(std::vector<CUtlString> value);

    std::string ToPtr();
    bool IsValid();
};

class GBlendItem_t
{
private:
    void *m_ptr;

public:
    GBlendItem_t(std::string ptr);
    GBlendItem_t(void *ptr);

    std::vector<GTagSpan_t> GetTags() const;
    void SetTags(std::vector<GTagSpan_t> value);
    GCAnimUpdateNodeRef GetChild() const;
    void SetChild(GCAnimUpdateNodeRef value);
    Vector2D GetPos() const;
    void SetPos(Vector2D value);
    float GetDuration() const;
    void SetDuration(float value);
    bool GetUseCustomDuration() const;
    void SetUseCustomDuration(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCVoiceContainerAnalysisBase
{
private:
    void *m_ptr;

public:
    GCVoiceContainerAnalysisBase(std::string ptr);
    GCVoiceContainerAnalysisBase(void *ptr);

    bool GetRegenerateCurveOnCompile() const;
    void SetRegenerateCurveOnCompile(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCSosGroupActionLimitSchema
{
private:
    void *m_ptr;

public:
    GCSosGroupActionLimitSchema(std::string ptr);
    GCSosGroupActionLimitSchema(void *ptr);

    int32_t GetMaxCount() const;
    void SetMaxCount(int32_t value);
    SosActionStopType_t GetStopType() const;
    void SetStopType(SosActionStopType_t value);
    SosActionSortType_t GetSortType() const;
    void SetSortType(SosActionSortType_t value);

    std::string ToPtr();
    bool IsValid();
};

class GFeWeightedNode_t
{
private:
    void *m_ptr;

public:
    GFeWeightedNode_t(std::string ptr);
    GFeWeightedNode_t(void *ptr);

    uint16_t GetNode() const;
    void SetNode(uint16_t value);
    uint16_t GetWeight() const;
    void SetWeight(uint16_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCLookComponentUpdater
{
private:
    void *m_ptr;

public:
    GCLookComponentUpdater(std::string ptr);
    GCLookComponentUpdater(void *ptr);

    GCAnimParamHandle GetLookHeading() const;
    void SetLookHeading(GCAnimParamHandle value);
    GCAnimParamHandle GetLookHeadingVelocity() const;
    void SetLookHeadingVelocity(GCAnimParamHandle value);
    GCAnimParamHandle GetLookPitch() const;
    void SetLookPitch(GCAnimParamHandle value);
    GCAnimParamHandle GetLookDistance() const;
    void SetLookDistance(GCAnimParamHandle value);
    GCAnimParamHandle GetLookDirection() const;
    void SetLookDirection(GCAnimParamHandle value);
    GCAnimParamHandle GetLookTarget() const;
    void SetLookTarget(GCAnimParamHandle value);
    GCAnimParamHandle GetLookTargetWorldSpace() const;
    void SetLookTargetWorldSpace(GCAnimParamHandle value);
    bool GetNetworkLookTarget() const;
    void SetNetworkLookTarget(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCCycleControlUpdateNode
{
private:
    void *m_ptr;

public:
    GCCycleControlUpdateNode(std::string ptr);
    GCCycleControlUpdateNode(void *ptr);

    AnimValueSource GetValueSource() const;
    void SetValueSource(AnimValueSource value);
    GCAnimParamHandle GetParamIndex() const;
    void SetParamIndex(GCAnimParamHandle value);

    std::string ToPtr();
    bool IsValid();
};

class GCNetworkVarChainer
{
private:
    void *m_ptr;

public:
    GCNetworkVarChainer(std::string ptr);
    GCNetworkVarChainer(void *ptr);

    GChangeAccessorFieldPathIndex_t GetPathIndex() const;
    void SetPathIndex(GChangeAccessorFieldPathIndex_t value);

    std::string ToPtr();
    bool IsValid();
};

class GRnTriangle_t
{
private:
    void *m_ptr;

public:
    GRnTriangle_t(std::string ptr);
    GRnTriangle_t(void *ptr);

    std::vector<int32_t> GetIndex() const;
    void SetIndex(std::vector<int32_t> value);

    std::string ToPtr();
    bool IsValid();
};

class GCNmVectorValueNode
{
private:
    void *m_ptr;

public:
    GCNmVectorValueNode(std::string ptr);
    GCNmVectorValueNode(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCSeqSeqDescFlag
{
private:
    void *m_ptr;

public:
    GCSeqSeqDescFlag(std::string ptr);
    GCSeqSeqDescFlag(void *ptr);

    bool GetLooping() const;
    void SetLooping(bool value);
    bool GetSnap() const;
    void SetSnap(bool value);
    bool GetAutoplay() const;
    void SetAutoplay(bool value);
    bool GetPost() const;
    void SetPost(bool value);
    bool GetHidden() const;
    void SetHidden(bool value);
    bool GetMulti() const;
    void SetMulti(bool value);
    bool GetLegacyDelta() const;
    void SetLegacyDelta(bool value);
    bool GetLegacyWorldspace() const;
    void SetLegacyWorldspace(bool value);
    bool GetLegacyCyclepose() const;
    void SetLegacyCyclepose(bool value);
    bool GetLegacyRealtime() const;
    void SetLegacyRealtime(bool value);
    bool GetModelDoc() const;
    void SetModelDoc(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GAimCameraOpFixedSettings_t
{
private:
    void *m_ptr;

public:
    GAimCameraOpFixedSettings_t(std::string ptr);
    GAimCameraOpFixedSettings_t(void *ptr);

    int32_t GetChainIndex() const;
    void SetChainIndex(int32_t value);
    int32_t GetCameraJointIndex() const;
    void SetCameraJointIndex(int32_t value);
    int32_t GetPelvisJointIndex() const;
    void SetPelvisJointIndex(int32_t value);
    int32_t GetClavicleLeftJointIndex() const;
    void SetClavicleLeftJointIndex(int32_t value);
    int32_t GetClavicleRightJointIndex() const;
    void SetClavicleRightJointIndex(int32_t value);
    int32_t GetDepenetrationJointIndex() const;
    void SetDepenetrationJointIndex(int32_t value);
    std::vector<int32> GetPropJoints() const;
    void SetPropJoints(std::vector<int32> value);

    std::string ToPtr();
    bool IsValid();
};

class GCParticleRemapFloatInput
{
private:
    void *m_ptr;

public:
    GCParticleRemapFloatInput(std::string ptr);
    GCParticleRemapFloatInput(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GBaseSceneObjectOverride_t
{
private:
    void *m_ptr;

public:
    GBaseSceneObjectOverride_t(std::string ptr);
    GBaseSceneObjectOverride_t(void *ptr);

    uint32_t GetSceneObjectIndex() const;
    void SetSceneObjectIndex(uint32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCConcreteAnimParameter
{
private:
    void *m_ptr;

public:
    GCConcreteAnimParameter(std::string ptr);
    GCConcreteAnimParameter(void *ptr);

    AnimParamButton_t GetPreviewButton() const;
    void SetPreviewButton(AnimParamButton_t value);
    AnimParamNetworkSetting GetNetworkSetting() const;
    void SetNetworkSetting(AnimParamNetworkSetting value);
    bool GetUseMostRecentValue() const;
    void SetUseMostRecentValue(bool value);
    bool GetAutoReset() const;
    void SetAutoReset(bool value);
    bool GetGameWritable() const;
    void SetGameWritable(bool value);
    bool GetGraphWritable() const;
    void SetGraphWritable(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GFeAnimStrayRadius_t
{
private:
    void *m_ptr;

public:
    GFeAnimStrayRadius_t(std::string ptr);
    GFeAnimStrayRadius_t(void *ptr);

    std::vector<uint16_t> GetNode() const;
    void SetNode(std::vector<uint16_t> value);
    float GetMaxDist() const;
    void SetMaxDist(float value);
    float GetRelaxationFactor() const;
    void SetRelaxationFactor(float value);

    std::string ToPtr();
    bool IsValid();
};

class GModelReference_t
{
private:
    void *m_ptr;

public:
    GModelReference_t(std::string ptr);
    GModelReference_t(void *ptr);

    float GetRelativeProbabilityOfSpawn() const;
    void SetRelativeProbabilityOfSpawn(float value);

    std::string ToPtr();
    bool IsValid();
};

class GRnCapsuleDesc_t
{
private:
    void *m_ptr;

public:
    GRnCapsuleDesc_t(std::string ptr);
    GRnCapsuleDesc_t(void *ptr);

    GRnCapsule_t GetCapsule() const;
    void SetCapsule(GRnCapsule_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCAnimGraphDebugReplay
{
private:
    void *m_ptr;

public:
    GCAnimGraphDebugReplay(std::string ptr);
    GCAnimGraphDebugReplay(void *ptr);

    CUtlString GetAnimGraphFileName() const;
    void SetAnimGraphFileName(CUtlString value);
    int32_t GetStartIndex() const;
    void SetStartIndex(int32_t value);
    int32_t GetWriteIndex() const;
    void SetWriteIndex(int32_t value);
    int32_t GetFrameCount() const;
    void SetFrameCount(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCVoiceContainerSwitch
{
private:
    void *m_ptr;

public:
    GCVoiceContainerSwitch(std::string ptr);
    GCVoiceContainerSwitch(void *ptr);

    std::vector<GCVoiceContainerBase*> GetSoundsToPlay() const;
    void SetSoundsToPlay(std::vector<GCVoiceContainerBase*> value);

    std::string ToPtr();
    bool IsValid();
};

class GLookAtBone_t
{
private:
    void *m_ptr;

public:
    GLookAtBone_t(std::string ptr);
    GLookAtBone_t(void *ptr);

    int32_t GetIndex() const;
    void SetIndex(int32_t value);
    float GetWeight() const;
    void SetWeight(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCNmBoneMaskValueNode
{
private:
    void *m_ptr;

public:
    GCNmBoneMaskValueNode(std::string ptr);
    GCNmBoneMaskValueNode(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCNmTransitionEvent
{
private:
    void *m_ptr;

public:
    GCNmTransitionEvent(std::string ptr);
    GCNmTransitionEvent(void *ptr);

    NmTransitionRule_t GetRule() const;
    void SetRule(NmTransitionRule_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCStringAnimTag
{
private:
    void *m_ptr;

public:
    GCStringAnimTag(std::string ptr);
    GCStringAnimTag(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GSkeletonAnimCapture_t__Bone_t
{
private:
    void *m_ptr;

public:
    GSkeletonAnimCapture_t__Bone_t(std::string ptr);
    GSkeletonAnimCapture_t__Bone_t(void *ptr);

    CUtlString GetName() const;
    void SetName(CUtlString value);
    int32_t GetParent() const;
    void SetParent(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCStaticPoseCache
{
private:
    void *m_ptr;

public:
    GCStaticPoseCache(std::string ptr);
    GCStaticPoseCache(void *ptr);

    std::vector<GCCachedPose> GetPoses() const;
    void SetPoses(std::vector<GCCachedPose> value);
    int32_t GetBoneCount() const;
    void SetBoneCount(int32_t value);
    int32_t GetMorphCount() const;
    void SetMorphCount(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GParticlePreviewBodyGroup_t
{
private:
    void *m_ptr;

public:
    GParticlePreviewBodyGroup_t(std::string ptr);
    GParticlePreviewBodyGroup_t(void *ptr);

    CUtlString GetBodyGroupName() const;
    void SetBodyGroupName(CUtlString value);
    int32_t GetValue() const;
    void SetValue(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GFeWorldCollisionParams_t
{
private:
    void *m_ptr;

public:
    GFeWorldCollisionParams_t(std::string ptr);
    GFeWorldCollisionParams_t(void *ptr);

    float GetWorldFriction() const;
    void SetWorldFriction(float value);
    float GetGroundFriction() const;
    void SetGroundFriction(float value);
    uint16_t GetListBegin() const;
    void SetListBegin(uint16_t value);
    uint16_t GetListEnd() const;
    void SetListEnd(uint16_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCPlayerInputAnimMotorUpdater
{
private:
    void *m_ptr;

public:
    GCPlayerInputAnimMotorUpdater(std::string ptr);
    GCPlayerInputAnimMotorUpdater(void *ptr);

    std::vector<float32> GetSampleTimes() const;
    void SetSampleTimes(std::vector<float32> value);
    float GetSpringConstant() const;
    void SetSpringConstant(float value);
    float GetAnticipationDistance() const;
    void SetAnticipationDistance(float value);
    GCAnimParamHandle GetAnticipationPosParam() const;
    void SetAnticipationPosParam(GCAnimParamHandle value);
    GCAnimParamHandle GetAnticipationHeadingParam() const;
    void SetAnticipationHeadingParam(GCAnimParamHandle value);
    bool GetUseAcceleration() const;
    void SetUseAcceleration(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCParticleCollectionRendererVecInput
{
private:
    void *m_ptr;

public:
    GCParticleCollectionRendererVecInput(std::string ptr);
    GCParticleCollectionRendererVecInput(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GFeBandBendLimit_t
{
private:
    void *m_ptr;

public:
    GFeBandBendLimit_t(std::string ptr);
    GFeBandBendLimit_t(void *ptr);

    float GetDistMin() const;
    void SetDistMin(float value);
    float GetDistMax() const;
    void SetDistMax(float value);
    std::vector<uint16_t> GetNode() const;
    void SetNode(std::vector<uint16_t> value);

    std::string ToPtr();
    bool IsValid();
};

class GCAnimFoot
{
private:
    void *m_ptr;

public:
    GCAnimFoot(std::string ptr);
    GCAnimFoot(void *ptr);

    CUtlString GetName() const;
    void SetName(CUtlString value);
    Vector GetBallOffset() const;
    void SetBallOffset(Vector value);
    Vector GetHeelOffset() const;
    void SetHeelOffset(Vector value);
    int32_t GetAnkleBoneIndex() const;
    void SetAnkleBoneIndex(int32_t value);
    int32_t GetToeBoneIndex() const;
    void SetToeBoneIndex(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GEventClientAdvanceTick_t
{
private:
    void *m_ptr;

public:
    GEventClientAdvanceTick_t(std::string ptr);
    GEventClientAdvanceTick_t(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GMaterialOverride_t
{
private:
    void *m_ptr;

public:
    GMaterialOverride_t(std::string ptr);
    GMaterialOverride_t(void *ptr);

    uint32_t GetSubSceneObject() const;
    void SetSubSceneObject(uint32_t value);
    uint32_t GetDrawCallIndex() const;
    void SetDrawCallIndex(uint32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCAnimDemoCaptureSettings
{
private:
    void *m_ptr;

public:
    GCAnimDemoCaptureSettings(std::string ptr);
    GCAnimDemoCaptureSettings(void *ptr);

    Vector2D GetErrorRangeSplineRotation() const;
    void SetErrorRangeSplineRotation(Vector2D value);
    Vector2D GetErrorRangeSplineTranslation() const;
    void SetErrorRangeSplineTranslation(Vector2D value);
    Vector2D GetErrorRangeSplineScale() const;
    void SetErrorRangeSplineScale(Vector2D value);
    float GetIkRotation_MaxSplineError() const;
    void SetIkRotation_MaxSplineError(float value);
    float GetIkTranslation_MaxSplineError() const;
    void SetIkTranslation_MaxSplineError(float value);
    Vector2D GetErrorRangeQuantizationRotation() const;
    void SetErrorRangeQuantizationRotation(Vector2D value);
    Vector2D GetErrorRangeQuantizationTranslation() const;
    void SetErrorRangeQuantizationTranslation(Vector2D value);
    Vector2D GetErrorRangeQuantizationScale() const;
    void SetErrorRangeQuantizationScale(Vector2D value);
    float GetIkRotation_MaxQuantizationError() const;
    void SetIkRotation_MaxQuantizationError(float value);
    float GetIkTranslation_MaxQuantizationError() const;
    void SetIkTranslation_MaxQuantizationError(float value);
    CUtlString GetBaseSequence() const;
    void SetBaseSequence(CUtlString value);
    int32_t GetBaseSequenceFrame() const;
    void SetBaseSequenceFrame(int32_t value);
    EDemoBoneSelectionMode GetBoneSelectionMode() const;
    void SetBoneSelectionMode(EDemoBoneSelectionMode value);
    std::vector<GBoneDemoCaptureSettings_t> GetBones() const;
    void SetBones(std::vector<GBoneDemoCaptureSettings_t> value);
    std::vector<GIKDemoCaptureSettings_t> GetIkChains() const;
    void SetIkChains(std::vector<GIKDemoCaptureSettings_t> value);

    std::string ToPtr();
    bool IsValid();
};

class GCNmIDEvent
{
private:
    void *m_ptr;

public:
    GCNmIDEvent(std::string ptr);
    GCNmIDEvent(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCPathMetricEvaluator
{
private:
    void *m_ptr;

public:
    GCPathMetricEvaluator(std::string ptr);
    GCPathMetricEvaluator(void *ptr);

    std::vector<float32> GetPathTimeSamples() const;
    void SetPathTimeSamples(std::vector<float32> value);
    float GetDistance() const;
    void SetDistance(float value);
    bool GetExtrapolateMovement() const;
    void SetExtrapolateMovement(bool value);
    float GetMinExtrapolationSpeed() const;
    void SetMinExtrapolationSpeed(float value);

    std::string ToPtr();
    bool IsValid();
};

class GMaterialParam_t
{
private:
    void *m_ptr;

public:
    GMaterialParam_t(std::string ptr);
    GMaterialParam_t(void *ptr);

    CUtlString GetName() const;
    void SetName(CUtlString value);

    std::string ToPtr();
    bool IsValid();
};

class GCSpeedScaleUpdateNode
{
private:
    void *m_ptr;

public:
    GCSpeedScaleUpdateNode(std::string ptr);
    GCSpeedScaleUpdateNode(void *ptr);

    GCAnimParamHandle GetParamIndex() const;
    void SetParamIndex(GCAnimParamHandle value);

    std::string ToPtr();
    bool IsValid();
};

class GVMixEQ8Desc_t
{
private:
    void *m_ptr;

public:
    GVMixEQ8Desc_t(std::string ptr);
    GVMixEQ8Desc_t(void *ptr);

    std::vector<GVMixFilterDesc_t> GetStages() const;
    void SetStages(std::vector<GVMixFilterDesc_t> value);

    std::string ToPtr();
    bool IsValid();
};

class GCModelConfigElement_SetMaterialGroupOnAttachedModels
{
private:
    void *m_ptr;

public:
    GCModelConfigElement_SetMaterialGroupOnAttachedModels(std::string ptr);
    GCModelConfigElement_SetMaterialGroupOnAttachedModels(void *ptr);

    CUtlString GetMaterialGroupName() const;
    void SetMaterialGroupName(CUtlString value);

    std::string ToPtr();
    bool IsValid();
};

class GTwoBoneIKSettings_t
{
private:
    void *m_ptr;

public:
    GTwoBoneIKSettings_t(std::string ptr);
    GTwoBoneIKSettings_t(void *ptr);

    IkEndEffectorType GetEndEffectorType() const;
    void SetEndEffectorType(IkEndEffectorType value);
    GCAnimAttachment GetEndEffectorAttachment() const;
    void SetEndEffectorAttachment(GCAnimAttachment value);
    IkTargetType GetTargetType() const;
    void SetTargetType(IkTargetType value);
    GCAnimAttachment GetTargetAttachment() const;
    void SetTargetAttachment(GCAnimAttachment value);
    int32_t GetTargetBoneIndex() const;
    void SetTargetBoneIndex(int32_t value);
    GCAnimParamHandle GetPositionParam() const;
    void SetPositionParam(GCAnimParamHandle value);
    GCAnimParamHandle GetRotationParam() const;
    void SetRotationParam(GCAnimParamHandle value);
    bool GetAlwaysUseFallbackHinge() const;
    void SetAlwaysUseFallbackHinge(bool value);
    Vector GetLsFallbackHingeAxis() const;
    void SetLsFallbackHingeAxis(Vector value);
    int32_t GetFixedBoneIndex() const;
    void SetFixedBoneIndex(int32_t value);
    int32_t GetMiddleBoneIndex() const;
    void SetMiddleBoneIndex(int32_t value);
    int32_t GetEndBoneIndex() const;
    void SetEndBoneIndex(int32_t value);
    bool GetMatchTargetOrientation() const;
    void SetMatchTargetOrientation(bool value);
    bool GetConstrainTwist() const;
    void SetConstrainTwist(bool value);
    float GetMaxTwist() const;
    void SetMaxTwist(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCompositeMaterialInputContainer_t
{
private:
    void *m_ptr;

public:
    GCompositeMaterialInputContainer_t(std::string ptr);
    GCompositeMaterialInputContainer_t(void *ptr);

    bool GetEnabled() const;
    void SetEnabled(bool value);
    CompositeMaterialInputContainerSourceType_t GetCompositeMaterialInputContainerSourceType() const;
    void SetCompositeMaterialInputContainerSourceType(CompositeMaterialInputContainerSourceType_t value);
    CUtlString GetStrAttrName() const;
    void SetStrAttrName(CUtlString value);
    CUtlString GetStrAlias() const;
    void SetStrAlias(CUtlString value);
    std::vector<GCompositeMaterialInputLooseVariable_t> GetLooseVariables() const;
    void SetLooseVariables(std::vector<GCompositeMaterialInputLooseVariable_t> value);
    CUtlString GetStrAttrNameForVar() const;
    void SetStrAttrNameForVar(CUtlString value);
    bool GetExposeExternally() const;
    void SetExposeExternally(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCStateNodeStateData
{
private:
    void *m_ptr;

public:
    GCStateNodeStateData(std::string ptr);
    GCStateNodeStateData(void *ptr);

    GCAnimUpdateNodeRef GetChild() const;
    void SetChild(GCAnimUpdateNodeRef value);

    std::string ToPtr();
    bool IsValid();
};

class GFeTwistConstraint_t
{
private:
    void *m_ptr;

public:
    GFeTwistConstraint_t(std::string ptr);
    GFeTwistConstraint_t(void *ptr);

    uint16_t GetNodeOrient() const;
    void SetNodeOrient(uint16_t value);
    uint16_t GetNodeEnd() const;
    void SetNodeEnd(uint16_t value);
    float GetTwistRelax() const;
    void SetTwistRelax(float value);
    float GetSwingRelax() const;
    void SetSwingRelax(float value);

    std::string ToPtr();
    bool IsValid();
};

class GFootFixedData_t
{
private:
    void *m_ptr;

public:
    GFootFixedData_t(std::string ptr);
    GFootFixedData_t(void *ptr);

    Vector GetToeOffset() const;
    void SetToeOffset(Vector value);
    Vector GetHeelOffset() const;
    void SetHeelOffset(Vector value);
    int32_t GetTargetBoneIndex() const;
    void SetTargetBoneIndex(int32_t value);
    int32_t GetAnkleBoneIndex() const;
    void SetAnkleBoneIndex(int32_t value);
    int32_t GetIKAnchorBoneIndex() const;
    void SetIKAnchorBoneIndex(int32_t value);
    int32_t GetIkChainIndex() const;
    void SetIkChainIndex(int32_t value);
    float GetMaxIKLength() const;
    void SetMaxIKLength(float value);
    int32_t GetFootIndex() const;
    void SetFootIndex(int32_t value);
    int32_t GetTagIndex() const;
    void SetTagIndex(int32_t value);
    float GetMaxRotationLeft() const;
    void SetMaxRotationLeft(float value);
    float GetMaxRotationRight() const;
    void SetMaxRotationRight(float value);

    std::string ToPtr();
    bool IsValid();
};

class GVMixDiffusorDesc_t
{
private:
    void *m_ptr;

public:
    GVMixDiffusorDesc_t(std::string ptr);
    GVMixDiffusorDesc_t(void *ptr);

    float GetSize() const;
    void SetSize(float value);
    float GetComplexity() const;
    void SetComplexity(float value);
    float GetFeedback() const;
    void SetFeedback(float value);
    float GetOutputGain() const;
    void SetOutputGain(float value);

    std::string ToPtr();
    bool IsValid();
};

class GFeProxyVertexMap_t
{
private:
    void *m_ptr;

public:
    GFeProxyVertexMap_t(std::string ptr);
    GFeProxyVertexMap_t(void *ptr);

    CUtlString GetName() const;
    void SetName(CUtlString value);
    float GetWeight() const;
    void SetWeight(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCDirectPlaybackUpdateNode
{
private:
    void *m_ptr;

public:
    GCDirectPlaybackUpdateNode(std::string ptr);
    GCDirectPlaybackUpdateNode(void *ptr);

    bool GetFinishEarly() const;
    void SetFinishEarly(bool value);
    bool GetResetOnFinish() const;
    void SetResetOnFinish(bool value);
    std::vector<GCDirectPlaybackTagData> GetAllTags() const;
    void SetAllTags(std::vector<GCDirectPlaybackTagData> value);

    std::string ToPtr();
    bool IsValid();
};

class GPostProcessingLocalContrastParameters_t
{
private:
    void *m_ptr;

public:
    GPostProcessingLocalContrastParameters_t(std::string ptr);
    GPostProcessingLocalContrastParameters_t(void *ptr);

    float GetLocalContrastStrength() const;
    void SetLocalContrastStrength(float value);
    float GetLocalContrastEdgeStrength() const;
    void SetLocalContrastEdgeStrength(float value);
    float GetLocalContrastVignetteStart() const;
    void SetLocalContrastVignetteStart(float value);
    float GetLocalContrastVignetteEnd() const;
    void SetLocalContrastVignetteEnd(float value);
    float GetLocalContrastVignetteBlur() const;
    void SetLocalContrastVignetteBlur(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCFootLockUpdateNode
{
private:
    void *m_ptr;

public:
    GCFootLockUpdateNode(std::string ptr);
    GCFootLockUpdateNode(void *ptr);

    GFootLockPoseOpFixedSettings GetOpFixedSettings() const;
    void SetOpFixedSettings(GFootLockPoseOpFixedSettings value);
    std::vector<GFootFixedSettings> GetFootSettings() const;
    void SetFootSettings(std::vector<GFootFixedSettings> value);
    GCAnimInputDamping GetHipShiftDamping() const;
    void SetHipShiftDamping(GCAnimInputDamping value);
    GCAnimInputDamping GetRootHeightDamping() const;
    void SetRootHeightDamping(GCAnimInputDamping value);
    float GetStrideCurveScale() const;
    void SetStrideCurveScale(float value);
    float GetStrideCurveLimitScale() const;
    void SetStrideCurveLimitScale(float value);
    float GetStepHeightIncreaseScale() const;
    void SetStepHeightIncreaseScale(float value);
    float GetStepHeightDecreaseScale() const;
    void SetStepHeightDecreaseScale(float value);
    float GetHipShiftScale() const;
    void SetHipShiftScale(float value);
    float GetBlendTime() const;
    void SetBlendTime(float value);
    float GetMaxRootHeightOffset() const;
    void SetMaxRootHeightOffset(float value);
    float GetMinRootHeightOffset() const;
    void SetMinRootHeightOffset(float value);
    float GetTiltPlanePitchSpringStrength() const;
    void SetTiltPlanePitchSpringStrength(float value);
    float GetTiltPlaneRollSpringStrength() const;
    void SetTiltPlaneRollSpringStrength(float value);
    bool GetApplyFootRotationLimits() const;
    void SetApplyFootRotationLimits(bool value);
    bool GetApplyHipShift() const;
    void SetApplyHipShift(bool value);
    bool GetModulateStepHeight() const;
    void SetModulateStepHeight(bool value);
    bool GetResetChild() const;
    void SetResetChild(bool value);
    bool GetEnableVerticalCurvedPaths() const;
    void SetEnableVerticalCurvedPaths(bool value);
    bool GetEnableRootHeightDamping() const;
    void SetEnableRootHeightDamping(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCParentConstraint
{
private:
    void *m_ptr;

public:
    GCParentConstraint(std::string ptr);
    GCParentConstraint(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GSkeletonAnimCapture_t__Frame_t
{
private:
    void *m_ptr;

public:
    GSkeletonAnimCapture_t__Frame_t(std::string ptr);
    GSkeletonAnimCapture_t__Frame_t(void *ptr);

    float GetTime() const;
    void SetTime(float value);
    GSkeletonAnimCapture_t GetStamp() const;
    void SetStamp(GSkeletonAnimCapture_t value);
    bool GetTeleport() const;
    void SetTeleport(bool value);
    std::vector<Vector> GetFeModelPos() const;
    void SetFeModelPos(std::vector<Vector> value);
    std::vector<float32> GetFlexControllerWeights() const;
    void SetFlexControllerWeights(std::vector<float32> value);

    std::string ToPtr();
    bool IsValid();
};

class GCPathParameters
{
private:
    void *m_ptr;

public:
    GCPathParameters(std::string ptr);
    GCPathParameters(void *ptr);

    int32_t GetStartControlPointNumber() const;
    void SetStartControlPointNumber(int32_t value);
    int32_t GetEndControlPointNumber() const;
    void SetEndControlPointNumber(int32_t value);
    int32_t GetBulgeControl() const;
    void SetBulgeControl(int32_t value);
    float GetBulge() const;
    void SetBulge(float value);
    float GetMidPoint() const;
    void SetMidPoint(float value);
    Vector GetStartPointOffset() const;
    void SetStartPointOffset(Vector value);
    Vector GetMidPointOffset() const;
    void SetMidPointOffset(Vector value);
    Vector GetEndOffset() const;
    void SetEndOffset(Vector value);

    std::string ToPtr();
    bool IsValid();
};

class GCSlowDownOnSlopesUpdateNode
{
private:
    void *m_ptr;

public:
    GCSlowDownOnSlopesUpdateNode(std::string ptr);
    GCSlowDownOnSlopesUpdateNode(void *ptr);

    float GetSlowDownStrength() const;
    void SetSlowDownStrength(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCAttachment
{
private:
    void *m_ptr;

public:
    GCAttachment(std::string ptr);
    GCAttachment(void *ptr);

    CUtlString GetName() const;
    void SetName(CUtlString value);
    std::vector<CUtlString> GetInfluenceNames() const;
    void SetInfluenceNames(std::vector<CUtlString> value);
    std::vector<Quaternion> GetInfluenceRotations() const;
    void SetInfluenceRotations(std::vector<Quaternion> value);
    std::vector<Vector> GetInfluenceOffsets() const;
    void SetInfluenceOffsets(std::vector<Vector> value);
    std::vector<float> GetInfluenceWeights() const;
    void SetInfluenceWeights(std::vector<float> value);
    std::vector<bool> GetInfluenceRootTransform() const;
    void SetInfluenceRootTransform(std::vector<bool> value);
    uint8_t GetInfluences() const;
    void SetInfluences(uint8_t value);
    bool GetIgnoreRotation() const;
    void SetIgnoreRotation(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCEmptyEntityInstance
{
private:
    void *m_ptr;

public:
    GCEmptyEntityInstance(std::string ptr);
    GCEmptyEntityInstance(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCCompositeMaterialEditorDoc
{
private:
    void *m_ptr;

public:
    GCCompositeMaterialEditorDoc(std::string ptr);
    GCCompositeMaterialEditorDoc(void *ptr);

    int32_t GetVersion() const;
    void SetVersion(int32_t value);
    std::vector<GCompositeMaterialEditorPoint_t> GetPoints() const;
    void SetPoints(std::vector<GCompositeMaterialEditorPoint_t> value);

    std::string ToPtr();
    bool IsValid();
};

class GCPhysSurfacePropertiesPhysics
{
private:
    void *m_ptr;

public:
    GCPhysSurfacePropertiesPhysics(std::string ptr);
    GCPhysSurfacePropertiesPhysics(void *ptr);

    float GetFriction() const;
    void SetFriction(float value);
    float GetElasticity() const;
    void SetElasticity(float value);
    float GetDensity() const;
    void SetDensity(float value);
    float GetThickness() const;
    void SetThickness(float value);
    float GetSoftContactFrequency() const;
    void SetSoftContactFrequency(float value);
    float GetSoftContactDampingRatio() const;
    void SetSoftContactDampingRatio(float value);
    float GetWheelDrag() const;
    void SetWheelDrag(float value);

    std::string ToPtr();
    bool IsValid();
};

class GEventClientPostOutput_t
{
private:
    void *m_ptr;

public:
    GEventClientPostOutput_t(std::string ptr);
    GEventClientPostOutput_t(void *ptr);

    GEngineLoopState_t GetLoopState() const;
    void SetLoopState(GEngineLoopState_t value);
    double GetRenderTime() const;
    void SetRenderTime(double value);
    float GetRenderFrameTime() const;
    void SetRenderFrameTime(float value);
    float GetRenderFrameTimeUnbounded() const;
    void SetRenderFrameTimeUnbounded(float value);
    bool GetRenderOnly() const;
    void SetRenderOnly(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GFeNodeIntegrator_t
{
private:
    void *m_ptr;

public:
    GFeNodeIntegrator_t(std::string ptr);
    GFeNodeIntegrator_t(void *ptr);

    float GetPointDamping() const;
    void SetPointDamping(float value);
    float GetAnimationForceAttraction() const;
    void SetAnimationForceAttraction(float value);
    float GetAnimationVertexAttraction() const;
    void SetAnimationVertexAttraction(float value);
    float GetGravity() const;
    void SetGravity(float value);

    std::string ToPtr();
    bool IsValid();
};

class GRnMeshDesc_t
{
private:
    void *m_ptr;

public:
    GRnMeshDesc_t(std::string ptr);
    GRnMeshDesc_t(void *ptr);

    GRnMesh_t GetMesh() const;
    void SetMesh(GRnMesh_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCAnimGraphNetworkSettings
{
private:
    void *m_ptr;

public:
    GCAnimGraphNetworkSettings(std::string ptr);
    GCAnimGraphNetworkSettings(void *ptr);

    bool GetNetworkingEnabled() const;
    void SetNetworkingEnabled(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCAimConstraint
{
private:
    void *m_ptr;

public:
    GCAimConstraint(std::string ptr);
    GCAimConstraint(void *ptr);

    Quaternion GetAimOffset() const;
    void SetAimOffset(Quaternion value);
    uint32_t GetUpType() const;
    void SetUpType(uint32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCAnimActionUpdater
{
private:
    void *m_ptr;

public:
    GCAnimActionUpdater(std::string ptr);
    GCAnimActionUpdater(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCParticleFunctionForce
{
private:
    void *m_ptr;

public:
    GCParticleFunctionForce(std::string ptr);
    GCParticleFunctionForce(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCSpinUpdateBase
{
private:
    void *m_ptr;

public:
    GCSpinUpdateBase(std::string ptr);
    GCSpinUpdateBase(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GControlPointReference_t
{
private:
    void *m_ptr;

public:
    GControlPointReference_t(std::string ptr);
    GControlPointReference_t(void *ptr);

    int32_t GetControlPointNameString() const;
    void SetControlPointNameString(int32_t value);
    Vector GetOffsetFromControlPoint() const;
    void SetOffsetFromControlPoint(Vector value);
    bool GetOffsetInLocalSpace() const;
    void SetOffsetInLocalSpace(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCVoiceContainerRandomSampler
{
private:
    void *m_ptr;

public:
    GCVoiceContainerRandomSampler(std::string ptr);
    GCVoiceContainerRandomSampler(void *ptr);

    float GetAmplitude() const;
    void SetAmplitude(float value);
    float GetAmplitudeJitter() const;
    void SetAmplitudeJitter(float value);
    float GetTimeJitter() const;
    void SetTimeJitter(float value);
    float GetMaxLength() const;
    void SetMaxLength(float value);
    int32_t GetNumDelayVariations() const;
    void SetNumDelayVariations(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GFeFollowNode_t
{
private:
    void *m_ptr;

public:
    GFeFollowNode_t(std::string ptr);
    GFeFollowNode_t(void *ptr);

    uint16_t GetParentNode() const;
    void SetParentNode(uint16_t value);
    uint16_t GetChildNode() const;
    void SetChildNode(uint16_t value);
    float GetWeight() const;
    void SetWeight(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCovMatrix3
{
private:
    void *m_ptr;

public:
    GCovMatrix3(std::string ptr);
    GCovMatrix3(void *ptr);

    Vector GetDiag() const;
    void SetDiag(Vector value);
    float GetXY() const;
    void SetXY(float value);
    float GetXZ() const;
    void SetXZ(float value);
    float GetYZ() const;
    void SetYZ(float value);

    std::string ToPtr();
    bool IsValid();
};

class GAnimStateID
{
private:
    void *m_ptr;

public:
    GAnimStateID(std::string ptr);
    GAnimStateID(void *ptr);

    uint32_t GetId() const;
    void SetId(uint32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCVoiceContainerStaticAdditiveSynth
{
private:
    void *m_ptr;

public:
    GCVoiceContainerStaticAdditiveSynth(std::string ptr);
    GCVoiceContainerStaticAdditiveSynth(void *ptr);

    float GetMinVolume() const;
    void SetMinVolume(float value);
    int32_t GetInstancesAtMinVolume() const;
    void SetInstancesAtMinVolume(int32_t value);
    float GetMaxVolume() const;
    void SetMaxVolume(float value);
    int32_t GetInstancesAtMaxVolume() const;
    void SetInstancesAtMaxVolume(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GRnSoftbodyCapsule_t
{
private:
    void *m_ptr;

public:
    GRnSoftbodyCapsule_t(std::string ptr);
    GRnSoftbodyCapsule_t(void *ptr);

    std::vector<Vector> GetCenter() const;
    void SetCenter(std::vector<Vector> value);
    float GetRadius() const;
    void SetRadius(float value);
    std::vector<uint16_t> GetParticle() const;
    void SetParticle(std::vector<uint16_t> value);

    std::string ToPtr();
    bool IsValid();
};

class GCModelConfigElement_RandomPick
{
private:
    void *m_ptr;

public:
    GCModelConfigElement_RandomPick(std::string ptr);
    GCModelConfigElement_RandomPick(void *ptr);

    std::vector<CUtlString> GetChoices() const;
    void SetChoices(std::vector<CUtlString> value);
    std::vector<float32> GetChoiceWeights() const;
    void SetChoiceWeights(std::vector<float32> value);

    std::string ToPtr();
    bool IsValid();
};

class GNmSyncTrackTime_t
{
private:
    void *m_ptr;

public:
    GNmSyncTrackTime_t(std::string ptr);
    GNmSyncTrackTime_t(void *ptr);

    int32_t GetEventIdx() const;
    void SetEventIdx(int32_t value);
    GNmPercent_t GetPercentageThrough() const;
    void SetPercentageThrough(GNmPercent_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCGeneralRandomRotation
{
private:
    void *m_ptr;

public:
    GCGeneralRandomRotation(std::string ptr);
    GCGeneralRandomRotation(void *ptr);

    GParticleAttributeIndex_t GetFieldOutput() const;
    void SetFieldOutput(GParticleAttributeIndex_t value);
    float GetDegrees() const;
    void SetDegrees(float value);
    float GetDegreesMin() const;
    void SetDegreesMin(float value);
    float GetDegreesMax() const;
    void SetDegreesMax(float value);
    float GetRotationRandExponent() const;
    void SetRotationRandExponent(float value);
    bool GetRandomlyFlipDirection() const;
    void SetRandomlyFlipDirection(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GRnPlane_t
{
private:
    void *m_ptr;

public:
    GRnPlane_t(std::string ptr);
    GRnPlane_t(void *ptr);

    Vector GetNormal() const;
    void SetNormal(Vector value);
    float GetOffset() const;
    void SetOffset(float value);

    std::string ToPtr();
    bool IsValid();
};

class GFeNodeWindBase_t
{
private:
    void *m_ptr;

public:
    GFeNodeWindBase_t(std::string ptr);
    GFeNodeWindBase_t(void *ptr);

    uint16_t GetNodeX0() const;
    void SetNodeX0(uint16_t value);
    uint16_t GetNodeX1() const;
    void SetNodeX1(uint16_t value);
    uint16_t GetNodeY0() const;
    void SetNodeY0(uint16_t value);
    uint16_t GetNodeY1() const;
    void SetNodeY1(uint16_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCQuaternionAnimParameter
{
private:
    void *m_ptr;

public:
    GCQuaternionAnimParameter(std::string ptr);
    GCQuaternionAnimParameter(void *ptr);

    Quaternion GetDefaultValue() const;
    void SetDefaultValue(Quaternion value);
    bool GetInterpolate() const;
    void SetInterpolate(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GSkeletonAnimCapture_t__Camera_t
{
private:
    void *m_ptr;

public:
    GSkeletonAnimCapture_t__Camera_t(std::string ptr);
    GSkeletonAnimCapture_t__Camera_t(void *ptr);

    float GetTime() const;
    void SetTime(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCAnimEncodeDifference
{
private:
    void *m_ptr;

public:
    GCAnimEncodeDifference(std::string ptr);
    GCAnimEncodeDifference(void *ptr);

    std::vector<GCAnimBoneDifference> GetBoneArray() const;
    void SetBoneArray(std::vector<GCAnimBoneDifference> value);
    std::vector<GCAnimMorphDifference> GetMorphArray() const;
    void SetMorphArray(std::vector<GCAnimMorphDifference> value);
    std::vector<GCAnimUserDifference> GetUserArray() const;
    void SetUserArray(std::vector<GCAnimUserDifference> value);
    std::vector<uint8> GetHasRotationBitArray() const;
    void SetHasRotationBitArray(std::vector<uint8> value);
    std::vector<uint8> GetHasMovementBitArray() const;
    void SetHasMovementBitArray(std::vector<uint8> value);
    std::vector<uint8> GetHasMorphBitArray() const;
    void SetHasMorphBitArray(std::vector<uint8> value);
    std::vector<uint8> GetHasUserBitArray() const;
    void SetHasUserBitArray(std::vector<uint8> value);

    std::string ToPtr();
    bool IsValid();
};

class GAggregateSceneObject_t
{
private:
    void *m_ptr;

public:
    GAggregateSceneObject_t(std::string ptr);
    GAggregateSceneObject_t(void *ptr);

    ObjectTypeFlags_t GetAllFlags() const;
    void SetAllFlags(ObjectTypeFlags_t value);
    ObjectTypeFlags_t GetAnyFlags() const;
    void SetAnyFlags(ObjectTypeFlags_t value);
    int16_t GetLayer() const;
    void SetLayer(int16_t value);
    std::vector<GAggregateMeshInfo_t> GetAggregateMeshes() const;
    void SetAggregateMeshes(std::vector<GAggregateMeshInfo_t> value);
    std::vector<GAggregateLODSetup_t> GetLodSetups() const;
    void SetLodSetups(std::vector<GAggregateLODSetup_t> value);
    std::vector<uint16> GetVisClusterMembership() const;
    void SetVisClusterMembership(std::vector<uint16> value);
    std::vector<matrix3x4_t> GetFragmentTransforms() const;
    void SetFragmentTransforms(std::vector<matrix3x4_t> value);

    std::string ToPtr();
    bool IsValid();
};

class GIKDemoCaptureSettings_t
{
private:
    void *m_ptr;

public:
    GIKDemoCaptureSettings_t(std::string ptr);
    GIKDemoCaptureSettings_t(void *ptr);

    CUtlString GetParentBoneName() const;
    void SetParentBoneName(CUtlString value);
    IKChannelMode GetMode() const;
    void SetMode(IKChannelMode value);
    CUtlString GetIkChainName() const;
    void SetIkChainName(CUtlString value);
    CUtlString GetOneBoneStart() const;
    void SetOneBoneStart(CUtlString value);
    CUtlString GetOneBoneEnd() const;
    void SetOneBoneEnd(CUtlString value);

    std::string ToPtr();
    bool IsValid();
};

class GCParticleCollectionBindingInstance
{
private:
    void *m_ptr;

public:
    GCParticleCollectionBindingInstance(std::string ptr);
    GCParticleCollectionBindingInstance(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCVoiceContainerDefault
{
private:
    void *m_ptr;

public:
    GCVoiceContainerDefault(std::string ptr);
    GCVoiceContainerDefault(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCSoundEventMetaData
{
private:
    void *m_ptr;

public:
    GCSoundEventMetaData(std::string ptr);
    GCSoundEventMetaData(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCMorphConstraint
{
private:
    void *m_ptr;

public:
    GCMorphConstraint(std::string ptr);
    GCMorphConstraint(void *ptr);

    CUtlString GetTargetMorph() const;
    void SetTargetMorph(CUtlString value);
    int32_t GetSlaveChannel() const;
    void SetSlaveChannel(int32_t value);
    float GetMin() const;
    void SetMin(float value);
    float GetMax() const;
    void SetMax(float value);

    std::string ToPtr();
    bool IsValid();
};

class GDop26_t
{
private:
    void *m_ptr;

public:
    GDop26_t(std::string ptr);
    GDop26_t(void *ptr);

    std::vector<float> GetSupport() const;
    void SetSupport(std::vector<float> value);

    std::string ToPtr();
    bool IsValid();
};

class GCAnimGraphModelBinding
{
private:
    void *m_ptr;

public:
    GCAnimGraphModelBinding(std::string ptr);
    GCAnimGraphModelBinding(void *ptr);

    CUtlString GetModelName() const;
    void SetModelName(CUtlString value);

    std::string ToPtr();
    bool IsValid();
};

class GFakeEntityDerivedA_tAPI
{
private:
    void *m_ptr;

public:
    GFakeEntityDerivedA_tAPI(std::string ptr);
    GFakeEntityDerivedA_tAPI(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCAnimParamHandleMap
{
private:
    void *m_ptr;

public:
    GCAnimParamHandleMap(std::string ptr);
    GCAnimParamHandleMap(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GFeMorphLayerDepr_t
{
private:
    void *m_ptr;

public:
    GFeMorphLayerDepr_t(std::string ptr);
    GFeMorphLayerDepr_t(void *ptr);

    CUtlString GetName() const;
    void SetName(CUtlString value);
    uint32_t GetNameHash() const;
    void SetNameHash(uint32_t value);
    std::vector<uint16> GetNodes() const;
    void SetNodes(std::vector<uint16> value);
    std::vector<Vector> GetInitPos() const;
    void SetInitPos(std::vector<Vector> value);
    std::vector<float32> GetGravity() const;
    void SetGravity(std::vector<float32> value);
    std::vector<float32> GetGoalStrength() const;
    void SetGoalStrength(std::vector<float32> value);
    std::vector<float32> GetGoalDamping() const;
    void SetGoalDamping(std::vector<float32> value);
    uint32_t GetFlags() const;
    void SetFlags(uint32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GFourCovMatrices3
{
private:
    void *m_ptr;

public:
    GFourCovMatrices3(std::string ptr);
    GFourCovMatrices3(void *ptr);

    float GetXY() const;
    void SetXY(float value);
    float GetXZ() const;
    void SetXZ(float value);
    float GetYZ() const;
    void SetYZ(float value);

    std::string ToPtr();
    bool IsValid();
};

class GFeFitMatrix_t
{
private:
    void *m_ptr;

public:
    GFeFitMatrix_t(std::string ptr);
    GFeFitMatrix_t(void *ptr);

    Vector GetCenter() const;
    void SetCenter(Vector value);
    uint16_t GetEnd() const;
    void SetEnd(uint16_t value);
    uint16_t GetNode() const;
    void SetNode(uint16_t value);
    uint16_t GetBeginDynamic() const;
    void SetBeginDynamic(uint16_t value);

    std::string ToPtr();
    bool IsValid();
};

class GRnVertex_t
{
private:
    void *m_ptr;

public:
    GRnVertex_t(std::string ptr);
    GRnVertex_t(void *ptr);

    uint8_t GetEdge() const;
    void SetEdge(uint8_t value);

    std::string ToPtr();
    bool IsValid();
};

class GTraceSettings_t
{
private:
    void *m_ptr;

public:
    GTraceSettings_t(std::string ptr);
    GTraceSettings_t(void *ptr);

    float GetTraceHeight() const;
    void SetTraceHeight(float value);
    float GetTraceRadius() const;
    void SetTraceRadius(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCConstraintTarget
{
private:
    void *m_ptr;

public:
    GCConstraintTarget(std::string ptr);
    GCConstraintTarget(void *ptr);

    Quaternion GetOffset() const;
    void SetOffset(Quaternion value);
    Vector GetOffset1() const;
    void SetOffset1(Vector value);
    uint32_t GetBoneHash() const;
    void SetBoneHash(uint32_t value);
    CUtlString GetName() const;
    void SetName(CUtlString value);
    float GetWeight() const;
    void SetWeight(float value);
    bool GetIsAttachment() const;
    void SetIsAttachment(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCompMatPropertyMutator_t
{
private:
    void *m_ptr;

public:
    GCompMatPropertyMutator_t(std::string ptr);
    GCompMatPropertyMutator_t(void *ptr);

    bool GetEnabled() const;
    void SetEnabled(bool value);
    CompMatPropertyMutatorType_t GetMutatorCommandType() const;
    void SetMutatorCommandType(CompMatPropertyMutatorType_t value);
    CUtlString GetStrInitWith_Container() const;
    void SetStrInitWith_Container(CUtlString value);
    CUtlString GetStrCopyProperty_InputContainerSrc() const;
    void SetStrCopyProperty_InputContainerSrc(CUtlString value);
    CUtlString GetStrCopyProperty_InputContainerProperty() const;
    void SetStrCopyProperty_InputContainerProperty(CUtlString value);
    CUtlString GetStrCopyProperty_TargetProperty() const;
    void SetStrCopyProperty_TargetProperty(CUtlString value);
    CUtlString GetStrRandomRollInputVars_SeedInputVar() const;
    void SetStrRandomRollInputVars_SeedInputVar(CUtlString value);
    std::vector<CUtlString> GetRandomRollInputVars_InputVarsToRoll() const;
    void SetRandomRollInputVars_InputVarsToRoll(std::vector<CUtlString> value);
    CUtlString GetStrCopyMatchingKeys_InputContainerSrc() const;
    void SetStrCopyMatchingKeys_InputContainerSrc(CUtlString value);
    CUtlString GetStrCopyKeysWithSuffix_InputContainerSrc() const;
    void SetStrCopyKeysWithSuffix_InputContainerSrc(CUtlString value);
    CUtlString GetStrCopyKeysWithSuffix_FindSuffix() const;
    void SetStrCopyKeysWithSuffix_FindSuffix(CUtlString value);
    CUtlString GetStrCopyKeysWithSuffix_ReplaceSuffix() const;
    void SetStrCopyKeysWithSuffix_ReplaceSuffix(CUtlString value);
    GCompositeMaterialInputLooseVariable_t GetSetValue_Value() const;
    void SetSetValue_Value(GCompositeMaterialInputLooseVariable_t value);
    CUtlString GetStrGenerateTexture_TargetParam() const;
    void SetStrGenerateTexture_TargetParam(CUtlString value);
    CUtlString GetStrGenerateTexture_InitialContainer() const;
    void SetStrGenerateTexture_InitialContainer(CUtlString value);
    int32_t GetResolution() const;
    void SetResolution(int32_t value);
    bool GetIsScratchTarget() const;
    void SetIsScratchTarget(bool value);
    bool GetSplatDebugInfo() const;
    void SetSplatDebugInfo(bool value);
    bool GetCaptureInRenderDoc() const;
    void SetCaptureInRenderDoc(bool value);
    std::vector<GCompMatPropertyMutator_t> GetTexGenInstructions() const;
    void SetTexGenInstructions(std::vector<GCompMatPropertyMutator_t> value);
    std::vector<GCompMatPropertyMutator_t> GetConditionalMutators() const;
    void SetConditionalMutators(std::vector<GCompMatPropertyMutator_t> value);
    CUtlString GetStrPopInputQueue_Container() const;
    void SetStrPopInputQueue_Container(CUtlString value);
    CUtlString GetStrDrawText_InputContainerSrc() const;
    void SetStrDrawText_InputContainerSrc(CUtlString value);
    CUtlString GetStrDrawText_InputContainerProperty() const;
    void SetStrDrawText_InputContainerProperty(CUtlString value);
    Vector2D GetDrawText_Position() const;
    void SetDrawText_Position(Vector2D value);
    Color GetColDrawText_Color() const;
    void SetColDrawText_Color(Color value);
    CUtlString GetStrDrawText_Font() const;
    void SetStrDrawText_Font(CUtlString value);
    std::vector<GCompMatMutatorCondition_t> GetConditions() const;
    void SetConditions(std::vector<GCompMatMutatorCondition_t> value);

    std::string ToPtr();
    bool IsValid();
};

class GIKBoneNameAndIndex_t
{
private:
    void *m_ptr;

public:
    GIKBoneNameAndIndex_t(std::string ptr);
    GIKBoneNameAndIndex_t(void *ptr);

    CUtlString GetName() const;
    void SetName(CUtlString value);

    std::string ToPtr();
    bool IsValid();
};

class GPermEntityLumpData_t
{
private:
    void *m_ptr;

public:
    GPermEntityLumpData_t(std::string ptr);
    GPermEntityLumpData_t(void *ptr);

    CUtlString GetName() const;
    void SetName(CUtlString value);

    std::string ToPtr();
    bool IsValid();
};

class GVMixDelayDesc_t
{
private:
    void *m_ptr;

public:
    GVMixDelayDesc_t(std::string ptr);
    GVMixDelayDesc_t(void *ptr);

    GVMixFilterDesc_t GetFeedbackFilter() const;
    void SetFeedbackFilter(GVMixFilterDesc_t value);
    bool GetEnableFilter() const;
    void SetEnableFilter(bool value);
    float GetDelay() const;
    void SetDelay(float value);
    float GetDirectGain() const;
    void SetDirectGain(float value);
    float GetDelayGain() const;
    void SetDelayGain(float value);
    float GetFeedbackGain() const;
    void SetFeedbackGain(float value);
    float GetWidth() const;
    void SetWidth(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCBoneConstraintDotToMorph
{
private:
    void *m_ptr;

public:
    GCBoneConstraintDotToMorph(std::string ptr);
    GCBoneConstraintDotToMorph(void *ptr);

    CUtlString GetBoneName() const;
    void SetBoneName(CUtlString value);
    CUtlString GetTargetBoneName() const;
    void SetTargetBoneName(CUtlString value);
    CUtlString GetMorphChannelName() const;
    void SetMorphChannelName(CUtlString value);
    std::vector<float> GetRemap() const;
    void SetRemap(std::vector<float> value);

    std::string ToPtr();
    bool IsValid();
};

class GPostProcessingBloomParameters_t
{
private:
    void *m_ptr;

public:
    GPostProcessingBloomParameters_t(std::string ptr);
    GPostProcessingBloomParameters_t(void *ptr);

    BloomBlendMode_t GetBlendMode() const;
    void SetBlendMode(BloomBlendMode_t value);
    float GetBloomStrength() const;
    void SetBloomStrength(float value);
    float GetScreenBloomStrength() const;
    void SetScreenBloomStrength(float value);
    float GetBlurBloomStrength() const;
    void SetBlurBloomStrength(float value);
    float GetBloomThreshold() const;
    void SetBloomThreshold(float value);
    float GetBloomThresholdWidth() const;
    void SetBloomThresholdWidth(float value);
    float GetSkyboxBloomStrength() const;
    void SetSkyboxBloomStrength(float value);
    float GetBloomStartValue() const;
    void SetBloomStartValue(float value);
    std::vector<float> GetBlurWeight() const;
    void SetBlurWeight(std::vector<float> value);
    std::vector<Vector> GetBlurTint() const;
    void SetBlurTint(std::vector<Vector> value);

    std::string ToPtr();
    bool IsValid();
};

class GEntOutput_t
{
private:
    void *m_ptr;

public:
    GEntOutput_t(std::string ptr);
    GEntOutput_t(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GFakeEntityDerivedB_tAPI
{
private:
    void *m_ptr;

public:
    GFakeEntityDerivedB_tAPI(std::string ptr);
    GFakeEntityDerivedB_tAPI(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCSlopeComponentUpdater
{
private:
    void *m_ptr;

public:
    GCSlopeComponentUpdater(std::string ptr);
    GCSlopeComponentUpdater(void *ptr);

    float GetTraceDistance() const;
    void SetTraceDistance(float value);
    GCAnimParamHandle GetSlopeAngle() const;
    void SetSlopeAngle(GCAnimParamHandle value);
    GCAnimParamHandle GetSlopeAngleFront() const;
    void SetSlopeAngleFront(GCAnimParamHandle value);
    GCAnimParamHandle GetSlopeAngleSide() const;
    void SetSlopeAngleSide(GCAnimParamHandle value);
    GCAnimParamHandle GetSlopeHeading() const;
    void SetSlopeHeading(GCAnimParamHandle value);
    GCAnimParamHandle GetSlopeNormal() const;
    void SetSlopeNormal(GCAnimParamHandle value);
    GCAnimParamHandle GetSlopeNormal_WorldSpace() const;
    void SetSlopeNormal_WorldSpace(GCAnimParamHandle value);

    std::string ToPtr();
    bool IsValid();
};

class GRnNode_t
{
private:
    void *m_ptr;

public:
    GRnNode_t(std::string ptr);
    GRnNode_t(void *ptr);

    Vector GetMin() const;
    void SetMin(Vector value);
    uint32_t GetChildren() const;
    void SetChildren(uint32_t value);
    Vector GetMax() const;
    void SetMax(Vector value);
    uint32_t GetTriangleOffset() const;
    void SetTriangleOffset(uint32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCSeqCmdSeqDesc
{
private:
    void *m_ptr;

public:
    GCSeqCmdSeqDesc(std::string ptr);
    GCSeqCmdSeqDesc(void *ptr);

    CBufferString GetName() const;
    void SetName(CBufferString value);
    GCSeqSeqDescFlag GetFlags() const;
    void SetFlags(GCSeqSeqDescFlag value);
    GCSeqTransition GetTransition() const;
    void SetTransition(GCSeqTransition value);
    int16_t GetFrameRangeSequence() const;
    void SetFrameRangeSequence(int16_t value);
    int16_t GetFrameCount() const;
    void SetFrameCount(int16_t value);
    float GetFPS() const;
    void SetFPS(float value);
    int16_t GetSubCycles() const;
    void SetSubCycles(int16_t value);
    int16_t GetNumLocalResults() const;
    void SetNumLocalResults(int16_t value);
    std::vector<GCSeqCmdLayer> GetCmdLayerArray() const;
    void SetCmdLayerArray(std::vector<GCSeqCmdLayer> value);
    std::vector<GCAnimEventDefinition> GetEventArray() const;
    void SetEventArray(std::vector<GCAnimEventDefinition> value);
    std::vector<GCAnimActivity> GetActivityArray() const;
    void SetActivityArray(std::vector<GCAnimActivity> value);
    std::vector<GCSeqPoseSetting> GetPoseSettingArray() const;
    void SetPoseSettingArray(std::vector<GCSeqPoseSetting> value);

    std::string ToPtr();
    bool IsValid();
};

class GCPathAnimMotorUpdaterBase
{
private:
    void *m_ptr;

public:
    GCPathAnimMotorUpdaterBase(std::string ptr);
    GCPathAnimMotorUpdaterBase(void *ptr);

    bool GetLockToPath() const;
    void SetLockToPath(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCVariantDefaultAllocator
{
private:
    void *m_ptr;

public:
    GCVariantDefaultAllocator(std::string ptr);
    GCVariantDefaultAllocator(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GVMixOscDesc_t
{
private:
    void *m_ptr;

public:
    GVMixOscDesc_t(std::string ptr);
    GVMixOscDesc_t(void *ptr);

    VMixLFOShape_t GetOscType() const;
    void SetOscType(VMixLFOShape_t value);
    float GetFreq() const;
    void SetFreq(float value);
    float GetPhase() const;
    void SetPhase(float value);

    std::string ToPtr();
    bool IsValid();
};

class GFeEdgeDesc_t
{
private:
    void *m_ptr;

public:
    GFeEdgeDesc_t(std::string ptr);
    GFeEdgeDesc_t(void *ptr);

    std::vector<uint16_t> GetEdge() const;
    void SetEdge(std::vector<uint16_t> value);
    std::vector<uint16_t> GetVirtElem() const;
    void SetVirtElem(std::vector<uint16_t> value);

    std::string ToPtr();
    bool IsValid();
};

class GCPathAnimMotorUpdater
{
private:
    void *m_ptr;

public:
    GCPathAnimMotorUpdater(std::string ptr);
    GCPathAnimMotorUpdater(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCWayPointHelperUpdateNode
{
private:
    void *m_ptr;

public:
    GCWayPointHelperUpdateNode(std::string ptr);
    GCWayPointHelperUpdateNode(void *ptr);

    float GetStartCycle() const;
    void SetStartCycle(float value);
    float GetEndCycle() const;
    void SetEndCycle(float value);
    bool GetOnlyGoals() const;
    void SetOnlyGoals(bool value);
    bool GetPreventOvershoot() const;
    void SetPreventOvershoot(bool value);
    bool GetPreventUndershoot() const;
    void SetPreventUndershoot(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GMaterialParamInt_t
{
private:
    void *m_ptr;

public:
    GMaterialParamInt_t(std::string ptr);
    GMaterialParamInt_t(void *ptr);

    int32_t GetValue() const;
    void SetValue(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GPermModelInfo_t
{
private:
    void *m_ptr;

public:
    GPermModelInfo_t(std::string ptr);
    GPermModelInfo_t(void *ptr);

    uint32_t GetFlags() const;
    void SetFlags(uint32_t value);
    Vector GetHullMin() const;
    void SetHullMin(Vector value);
    Vector GetHullMax() const;
    void SetHullMax(Vector value);
    Vector GetViewMin() const;
    void SetViewMin(Vector value);
    Vector GetViewMax() const;
    void SetViewMax(Vector value);
    float GetMass() const;
    void SetMass(float value);
    Vector GetEyePosition() const;
    void SetEyePosition(Vector value);
    float GetMaxEyeDeflection() const;
    void SetMaxEyeDeflection(float value);
    CUtlString GetSurfaceProperty() const;
    void SetSurfaceProperty(CUtlString value);
    CUtlString GetKeyValueText() const;
    void SetKeyValueText(CUtlString value);

    std::string ToPtr();
    bool IsValid();
};

class GAnimScriptHandle
{
private:
    void *m_ptr;

public:
    GAnimScriptHandle(std::string ptr);
    GAnimScriptHandle(void *ptr);

    uint32_t GetId() const;
    void SetId(uint32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GFeCtrlOffset_t
{
private:
    void *m_ptr;

public:
    GFeCtrlOffset_t(std::string ptr);
    GFeCtrlOffset_t(void *ptr);

    Vector GetOffset() const;
    void SetOffset(Vector value);
    uint16_t GetCtrlParent() const;
    void SetCtrlParent(uint16_t value);
    uint16_t GetCtrlChild() const;
    void SetCtrlChild(uint16_t value);

    std::string ToPtr();
    bool IsValid();
};

class GFeTri_t
{
private:
    void *m_ptr;

public:
    GFeTri_t(std::string ptr);
    GFeTri_t(void *ptr);

    std::vector<uint16_t> GetNode() const;
    void SetNode(std::vector<uint16_t> value);
    float GetW1() const;
    void SetW1(float value);
    float GetW2() const;
    void SetW2(float value);
    float Get1x() const;
    void Set1x(float value);
    Vector2D Get2() const;
    void Set2(Vector2D value);

    std::string ToPtr();
    bool IsValid();
};

class GCLeanMatrixUpdateNode
{
private:
    void *m_ptr;

public:
    GCLeanMatrixUpdateNode(std::string ptr);
    GCLeanMatrixUpdateNode(void *ptr);

    std::vector<GCPoseHandle> GetPoses() const;
    void SetPoses(std::vector<GCPoseHandle> value);
    GCAnimInputDamping GetDamping() const;
    void SetDamping(GCAnimInputDamping value);
    AnimVectorSource GetBlendSource() const;
    void SetBlendSource(AnimVectorSource value);
    GCAnimParamHandle GetParamIndex() const;
    void SetParamIndex(GCAnimParamHandle value);
    Vector GetVerticalAxis() const;
    void SetVerticalAxis(Vector value);
    Vector GetHorizontalAxis() const;
    void SetHorizontalAxis(Vector value);
    float GetMaxValue() const;
    void SetMaxValue(float value);
    int32_t GetSequenceMaxFrame() const;
    void SetSequenceMaxFrame(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCStanceScaleUpdateNode
{
private:
    void *m_ptr;

public:
    GCStanceScaleUpdateNode(std::string ptr);
    GCStanceScaleUpdateNode(void *ptr);

    GCAnimParamHandle GetParam() const;
    void SetParam(GCAnimParamHandle value);

    std::string ToPtr();
    bool IsValid();
};

class GIKTargetSettings_t
{
private:
    void *m_ptr;

public:
    GIKTargetSettings_t(std::string ptr);
    GIKTargetSettings_t(void *ptr);

    IKTargetSource GetTargetSource() const;
    void SetTargetSource(IKTargetSource value);
    GIKBoneNameAndIndex_t GetBone() const;
    void SetBone(GIKBoneNameAndIndex_t value);
    GAnimParamID GetAnimgraphParameterNamePosition() const;
    void SetAnimgraphParameterNamePosition(GAnimParamID value);
    GAnimParamID GetAnimgraphParameterNameOrientation() const;
    void SetAnimgraphParameterNameOrientation(GAnimParamID value);
    IKTargetCoordinateSystem GetTargetCoordSystem() const;
    void SetTargetCoordSystem(IKTargetCoordinateSystem value);

    std::string ToPtr();
    bool IsValid();
};

class GTestResource_t
{
private:
    void *m_ptr;

public:
    GTestResource_t(std::string ptr);
    GTestResource_t(void *ptr);

    CUtlString GetName() const;
    void SetName(CUtlString value);

    std::string ToPtr();
    bool IsValid();
};

class GCBaseRendererSource2
{
private:
    void *m_ptr;

public:
    GCBaseRendererSource2(std::string ptr);
    GCBaseRendererSource2(void *ptr);

    GCParticleCollectionRendererFloatInput GetRadiusScale() const;
    void SetRadiusScale(GCParticleCollectionRendererFloatInput value);
    GCParticleCollectionRendererFloatInput GetAlphaScale() const;
    void SetAlphaScale(GCParticleCollectionRendererFloatInput value);
    GCParticleCollectionRendererFloatInput GetRollScale() const;
    void SetRollScale(GCParticleCollectionRendererFloatInput value);
    GParticleAttributeIndex_t GetAlpha2Field() const;
    void SetAlpha2Field(GParticleAttributeIndex_t value);
    GCParticleCollectionRendererVecInput GetColorScale() const;
    void SetColorScale(GCParticleCollectionRendererVecInput value);
    ParticleColorBlendType_t GetColorBlendType() const;
    void SetColorBlendType(ParticleColorBlendType_t value);
    SpriteCardShaderType_t GetShaderType() const;
    void SetShaderType(SpriteCardShaderType_t value);
    CUtlString GetStrShaderOverride() const;
    void SetStrShaderOverride(CUtlString value);
    GCParticleCollectionRendererFloatInput GetCenterXOffset() const;
    void SetCenterXOffset(GCParticleCollectionRendererFloatInput value);
    GCParticleCollectionRendererFloatInput GetCenterYOffset() const;
    void SetCenterYOffset(GCParticleCollectionRendererFloatInput value);
    float GetBumpStrength() const;
    void SetBumpStrength(float value);
    ParticleSequenceCropOverride_t GetCropTextureOverride() const;
    void SetCropTextureOverride(ParticleSequenceCropOverride_t value);
    std::vector<GTextureGroup_t> GetTexturesInput() const;
    void SetTexturesInput(std::vector<GTextureGroup_t> value);
    float GetAnimationRate() const;
    void SetAnimationRate(float value);
    AnimationType_t GetAnimationType() const;
    void SetAnimationType(AnimationType_t value);
    bool GetAnimateInFPS() const;
    void SetAnimateInFPS(bool value);
    GCParticleCollectionRendererFloatInput GetSelfIllumAmount() const;
    void SetSelfIllumAmount(GCParticleCollectionRendererFloatInput value);
    GCParticleCollectionRendererFloatInput GetDiffuseAmount() const;
    void SetDiffuseAmount(GCParticleCollectionRendererFloatInput value);
    GCParticleCollectionRendererFloatInput GetDiffuseClamp() const;
    void SetDiffuseClamp(GCParticleCollectionRendererFloatInput value);
    int32_t GetLightingControlPoint() const;
    void SetLightingControlPoint(int32_t value);
    GParticleAttributeIndex_t GetSelfIllumPerParticle() const;
    void SetSelfIllumPerParticle(GParticleAttributeIndex_t value);
    ParticleOutputBlendMode_t GetOutputBlendMode() const;
    void SetOutputBlendMode(ParticleOutputBlendMode_t value);
    bool GetGammaCorrectVertexColors() const;
    void SetGammaCorrectVertexColors(bool value);
    bool GetSaturateColorPreAlphaBlend() const;
    void SetSaturateColorPreAlphaBlend(bool value);
    GCParticleCollectionRendererFloatInput GetAddSelfAmount() const;
    void SetAddSelfAmount(GCParticleCollectionRendererFloatInput value);
    GCParticleCollectionRendererFloatInput GetDesaturation() const;
    void SetDesaturation(GCParticleCollectionRendererFloatInput value);
    GCParticleCollectionRendererFloatInput GetOverbrightFactor() const;
    void SetOverbrightFactor(GCParticleCollectionRendererFloatInput value);
    int32_t GetHSVShiftControlPoint() const;
    void SetHSVShiftControlPoint(int32_t value);
    ParticleFogType_t GetFogType() const;
    void SetFogType(ParticleFogType_t value);
    GCParticleCollectionRendererFloatInput GetFogAmount() const;
    void SetFogAmount(GCParticleCollectionRendererFloatInput value);
    bool GetTintByFOW() const;
    void SetTintByFOW(bool value);
    bool GetTintByGlobalLight() const;
    void SetTintByGlobalLight(bool value);
    SpriteCardPerParticleScale_t GetPerParticleAlphaReference() const;
    void SetPerParticleAlphaReference(SpriteCardPerParticleScale_t value);
    SpriteCardPerParticleScale_t GetPerParticleAlphaRefWindow() const;
    void SetPerParticleAlphaRefWindow(SpriteCardPerParticleScale_t value);
    ParticleAlphaReferenceType_t GetAlphaReferenceType() const;
    void SetAlphaReferenceType(ParticleAlphaReferenceType_t value);
    GCParticleCollectionRendererFloatInput GetAlphaReferenceSoftness() const;
    void SetAlphaReferenceSoftness(GCParticleCollectionRendererFloatInput value);
    GCParticleCollectionRendererFloatInput GetSourceAlphaValueToMapToZero() const;
    void SetSourceAlphaValueToMapToZero(GCParticleCollectionRendererFloatInput value);
    GCParticleCollectionRendererFloatInput GetSourceAlphaValueToMapToOne() const;
    void SetSourceAlphaValueToMapToOne(GCParticleCollectionRendererFloatInput value);
    bool GetRefract() const;
    void SetRefract(bool value);
    bool GetRefractSolid() const;
    void SetRefractSolid(bool value);
    GCParticleCollectionRendererFloatInput GetRefractAmount() const;
    void SetRefractAmount(GCParticleCollectionRendererFloatInput value);
    int32_t GetRefractBlurRadius() const;
    void SetRefractBlurRadius(int32_t value);
    BlurFilterType_t GetRefractBlurType() const;
    void SetRefractBlurType(BlurFilterType_t value);
    bool GetOnlyRenderInEffectsBloomPass() const;
    void SetOnlyRenderInEffectsBloomPass(bool value);
    bool GetOnlyRenderInEffectsWaterPass() const;
    void SetOnlyRenderInEffectsWaterPass(bool value);
    bool GetUseMixedResolutionRendering() const;
    void SetUseMixedResolutionRendering(bool value);
    bool GetOnlyRenderInEffecsGameOverlay() const;
    void SetOnlyRenderInEffecsGameOverlay(bool value);
    std::string GetStencilTestID() const;
    void SetStencilTestID(std::string value);
    bool GetStencilTestExclude() const;
    void SetStencilTestExclude(bool value);
    std::string GetStencilWriteID() const;
    void SetStencilWriteID(std::string value);
    bool GetWriteStencilOnDepthPass() const;
    void SetWriteStencilOnDepthPass(bool value);
    bool GetWriteStencilOnDepthFail() const;
    void SetWriteStencilOnDepthFail(bool value);
    bool GetReverseZBuffering() const;
    void SetReverseZBuffering(bool value);
    bool GetDisableZBuffering() const;
    void SetDisableZBuffering(bool value);
    ParticleDepthFeatheringMode_t GetFeatheringMode() const;
    void SetFeatheringMode(ParticleDepthFeatheringMode_t value);
    GCParticleCollectionRendererFloatInput GetFeatheringMinDist() const;
    void SetFeatheringMinDist(GCParticleCollectionRendererFloatInput value);
    GCParticleCollectionRendererFloatInput GetFeatheringMaxDist() const;
    void SetFeatheringMaxDist(GCParticleCollectionRendererFloatInput value);
    GCParticleCollectionRendererFloatInput GetFeatheringFilter() const;
    void SetFeatheringFilter(GCParticleCollectionRendererFloatInput value);
    GCParticleCollectionRendererFloatInput GetDepthBias() const;
    void SetDepthBias(GCParticleCollectionRendererFloatInput value);
    ParticleSortingChoiceList_t GetSortMethod() const;
    void SetSortMethod(ParticleSortingChoiceList_t value);
    bool GetBlendFramesSeq0() const;
    void SetBlendFramesSeq0(bool value);
    bool GetMaxLuminanceBlendingSequence0() const;
    void SetMaxLuminanceBlendingSequence0(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCSSDSMsg_ViewRender
{
private:
    void *m_ptr;

public:
    GCSSDSMsg_ViewRender(std::string ptr);
    GCSSDSMsg_ViewRender(void *ptr);

    GSceneViewId_t GetViewId() const;
    void SetViewId(GSceneViewId_t value);
    CUtlString GetViewName() const;
    void SetViewName(CUtlString value);

    std::string ToPtr();
    bool IsValid();
};

class GCZeroPoseUpdateNode
{
private:
    void *m_ptr;

public:
    GCZeroPoseUpdateNode(std::string ptr);
    GCZeroPoseUpdateNode(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GFeFitWeight_t
{
private:
    void *m_ptr;

public:
    GFeFitWeight_t(std::string ptr);
    GFeFitWeight_t(void *ptr);

    float GetWeight() const;
    void SetWeight(float value);
    uint16_t GetNode() const;
    void SetNode(uint16_t value);
    uint16_t GetDummy() const;
    void SetDummy(uint16_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCFootCycleMetricEvaluator
{
private:
    void *m_ptr;

public:
    GCFootCycleMetricEvaluator(std::string ptr);
    GCFootCycleMetricEvaluator(void *ptr);

    std::vector<int32> GetFootIndices() const;
    void SetFootIndices(std::vector<int32> value);

    std::string ToPtr();
    bool IsValid();
};

class GCFootPositionMetricEvaluator
{
private:
    void *m_ptr;

public:
    GCFootPositionMetricEvaluator(std::string ptr);
    GCFootPositionMetricEvaluator(void *ptr);

    std::vector<int32> GetFootIndices() const;
    void SetFootIndices(std::vector<int32> value);
    bool GetIgnoreSlope() const;
    void SetIgnoreSlope(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCFlexOp
{
private:
    void *m_ptr;

public:
    GCFlexOp(std::string ptr);
    GCFlexOp(void *ptr);

    FlexOpCode_t GetOpCode() const;
    void SetOpCode(FlexOpCode_t value);
    int32_t GetData() const;
    void SetData(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCPointConstraint
{
private:
    void *m_ptr;

public:
    GCPointConstraint(std::string ptr);
    GCPointConstraint(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GMotionBlendItem
{
private:
    void *m_ptr;

public:
    GMotionBlendItem(std::string ptr);
    GMotionBlendItem(void *ptr);

    float GetKeyValue() const;
    void SetKeyValue(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCVectorQuantizer
{
private:
    void *m_ptr;

public:
    GCVectorQuantizer(std::string ptr);
    GCVectorQuantizer(void *ptr);

    std::vector<float32> GetCentroidVectors() const;
    void SetCentroidVectors(std::vector<float32> value);
    int32_t GetCentroids() const;
    void SetCentroids(int32_t value);
    int32_t GetDimensions() const;
    void SetDimensions(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GSignatureOutflow_Resume
{
private:
    void *m_ptr;

public:
    GSignatureOutflow_Resume(std::string ptr);
    GSignatureOutflow_Resume(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GFeBoxRigid_t
{
private:
    void *m_ptr;

public:
    GFeBoxRigid_t(std::string ptr);
    GFeBoxRigid_t(void *ptr);

    uint16_t GetNode() const;
    void SetNode(uint16_t value);
    uint16_t GetCollisionMask() const;
    void SetCollisionMask(uint16_t value);
    Vector GetSize() const;
    void SetSize(Vector value);
    uint16_t GetVertexMapIndex() const;
    void SetVertexMapIndex(uint16_t value);
    uint16_t GetFlags() const;
    void SetFlags(uint16_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCIntAnimParameter
{
private:
    void *m_ptr;

public:
    GCIntAnimParameter(std::string ptr);
    GCIntAnimParameter(void *ptr);

    int32_t GetDefaultValue() const;
    void SetDefaultValue(int32_t value);
    int32_t GetMinValue() const;
    void SetMinValue(int32_t value);
    int32_t GetMaxValue() const;
    void SetMaxValue(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCNmTargetValueNode
{
private:
    void *m_ptr;

public:
    GCNmTargetValueNode(std::string ptr);
    GCNmTargetValueNode(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GEventSimpleLoopFrameUpdate_t
{
private:
    void *m_ptr;

public:
    GEventSimpleLoopFrameUpdate_t(std::string ptr);
    GEventSimpleLoopFrameUpdate_t(void *ptr);

    GEngineLoopState_t GetLoopState() const;
    void SetLoopState(GEngineLoopState_t value);
    float GetRealTime() const;
    void SetRealTime(float value);
    float GetFrameTime() const;
    void SetFrameTime(float value);

    std::string ToPtr();
    bool IsValid();
};

class GEventServerAdvanceTick_t
{
private:
    void *m_ptr;

public:
    GEventServerAdvanceTick_t(std::string ptr);
    GEventServerAdvanceTick_t(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GTimedEvent
{
private:
    void *m_ptr;

public:
    GTimedEvent(std::string ptr);
    GTimedEvent(void *ptr);

    float GetTimeBetweenEvents() const;
    void SetTimeBetweenEvents(float value);
    float GetNextEvent() const;
    void SetNextEvent(float value);

    std::string ToPtr();
    bool IsValid();
};

class GTextureGroup_t
{
private:
    void *m_ptr;

public:
    GTextureGroup_t(std::string ptr);
    GTextureGroup_t(void *ptr);

    bool GetEnabled() const;
    void SetEnabled(bool value);
    bool GetReplaceTextureWithGradient() const;
    void SetReplaceTextureWithGradient(bool value);
    SpriteCardTextureType_t GetTextureType() const;
    void SetTextureType(SpriteCardTextureType_t value);
    SpriteCardTextureChannel_t GetTextureChannels() const;
    void SetTextureChannels(SpriteCardTextureChannel_t value);
    ParticleTextureLayerBlendType_t GetTextureBlendMode() const;
    void SetTextureBlendMode(ParticleTextureLayerBlendType_t value);
    GCParticleCollectionRendererFloatInput GetTextureBlend() const;
    void SetTextureBlend(GCParticleCollectionRendererFloatInput value);
    GTextureControls_t GetTextureControls() const;
    void SetTextureControls(GTextureControls_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCSosGroupActionSoundeventPrioritySchema
{
private:
    void *m_ptr;

public:
    GCSosGroupActionSoundeventPrioritySchema(std::string ptr);
    GCSosGroupActionSoundeventPrioritySchema(void *ptr);

    CUtlString GetPriorityValue() const;
    void SetPriorityValue(CUtlString value);
    CUtlString GetPriorityVolumeScalar() const;
    void SetPriorityVolumeScalar(CUtlString value);
    CUtlString GetPriorityContributeButDontRead() const;
    void SetPriorityContributeButDontRead(CUtlString value);
    CUtlString GetPriorityReadButDontContribute() const;
    void SetPriorityReadButDontContribute(CUtlString value);

    std::string ToPtr();
    bool IsValid();
};

class GCBonePositionMetricEvaluator
{
private:
    void *m_ptr;

public:
    GCBonePositionMetricEvaluator(std::string ptr);
    GCBonePositionMetricEvaluator(void *ptr);

    int32_t GetBoneIndex() const;
    void SetBoneIndex(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCPhysSurfacePropertiesAudio
{
private:
    void *m_ptr;

public:
    GCPhysSurfacePropertiesAudio(std::string ptr);
    GCPhysSurfacePropertiesAudio(void *ptr);

    float GetReflectivity() const;
    void SetReflectivity(float value);
    float GetHardnessFactor() const;
    void SetHardnessFactor(float value);
    float GetRoughnessFactor() const;
    void SetRoughnessFactor(float value);
    float GetRoughThreshold() const;
    void SetRoughThreshold(float value);
    float GetHardThreshold() const;
    void SetHardThreshold(float value);
    float GetHardVelocityThreshold() const;
    void SetHardVelocityThreshold(float value);
    float GetStaticImpactVolume() const;
    void SetStaticImpactVolume(float value);
    float GetOcclusionFactor() const;
    void SetOcclusionFactor(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCNmIDValueNode
{
private:
    void *m_ptr;

public:
    GCNmIDValueNode(std::string ptr);
    GCNmIDValueNode(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GFeSimdNodeBase_t
{
private:
    void *m_ptr;

public:
    GFeSimdNodeBase_t(std::string ptr);
    GFeSimdNodeBase_t(void *ptr);

    std::vector<uint16_t> GetNode() const;
    void SetNode(std::vector<uint16_t> value);
    std::vector<uint16_t> GetNodeX0() const;
    void SetNodeX0(std::vector<uint16_t> value);
    std::vector<uint16_t> GetNodeX1() const;
    void SetNodeX1(std::vector<uint16_t> value);
    std::vector<uint16_t> GetNodeY0() const;
    void SetNodeY0(std::vector<uint16_t> value);
    std::vector<uint16_t> GetNodeY1() const;
    void SetNodeY1(std::vector<uint16_t> value);
    std::vector<uint16_t> GetDummy() const;
    void SetDummy(std::vector<uint16_t> value);
    GFourQuaternions GetAdjust() const;
    void SetAdjust(GFourQuaternions value);

    std::string ToPtr();
    bool IsValid();
};

class GPermModelExtPart_t
{
private:
    void *m_ptr;

public:
    GPermModelExtPart_t(std::string ptr);
    GPermModelExtPart_t(void *ptr);

    CUtlString GetName() const;
    void SetName(CUtlString value);
    int32_t GetParent() const;
    void SetParent(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCCurrentRotationVelocityMetricEvaluator
{
private:
    void *m_ptr;

public:
    GCCurrentRotationVelocityMetricEvaluator(std::string ptr);
    GCCurrentRotationVelocityMetricEvaluator(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCAnimEventDefinition
{
private:
    void *m_ptr;

public:
    GCAnimEventDefinition(std::string ptr);
    GCAnimEventDefinition(void *ptr);

    int32_t GetFrame() const;
    void SetFrame(int32_t value);
    int32_t GetEndFrame() const;
    void SetEndFrame(int32_t value);
    float GetCycle() const;
    void SetCycle(float value);
    float GetDuration() const;
    void SetDuration(float value);
    CBufferString GetLegacyOptions() const;
    void SetLegacyOptions(CBufferString value);

    std::string ToPtr();
    bool IsValid();
};

class GCAnimEnum
{
private:
    void *m_ptr;

public:
    GCAnimEnum(std::string ptr);
    GCAnimEnum(void *ptr);

    uint8_t GetValue() const;
    void SetValue(uint8_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCAnimFrameBlockAnim
{
private:
    void *m_ptr;

public:
    GCAnimFrameBlockAnim(std::string ptr);
    GCAnimFrameBlockAnim(void *ptr);

    int32_t GetStartFrame() const;
    void SetStartFrame(int32_t value);
    int32_t GetEndFrame() const;
    void SetEndFrame(int32_t value);
    std::vector<int32> GetSegmentIndexArray() const;
    void SetSegmentIndexArray(std::vector<int32> value);

    std::string ToPtr();
    bool IsValid();
};

class GCNmVirtualParameterIDNode
{
private:
    void *m_ptr;

public:
    GCNmVirtualParameterIDNode(std::string ptr);
    GCNmVirtualParameterIDNode(void *ptr);

    int16_t GetChildNodeIdx() const;
    void SetChildNodeIdx(int16_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCFlashlightEffect
{
private:
    void *m_ptr;

public:
    GCFlashlightEffect(std::string ptr);
    GCFlashlightEffect(void *ptr);

    bool GetIsOn() const;
    void SetIsOn(bool value);
    bool GetMuzzleFlashEnabled() const;
    void SetMuzzleFlashEnabled(bool value);
    float GetMuzzleFlashBrightness() const;
    void SetMuzzleFlashBrightness(float value);
    Quaternion GetQuatMuzzleFlashOrientation() const;
    void SetQuatMuzzleFlashOrientation(Quaternion value);
    Vector GetMuzzleFlashOrigin() const;
    void SetMuzzleFlashOrigin(Vector value);
    float GetFov() const;
    void SetFov(float value);
    float GetFarZ() const;
    void SetFarZ(float value);
    float GetLinearAtten() const;
    void SetLinearAtten(float value);
    bool GetCastsShadows() const;
    void SetCastsShadows(bool value);
    float GetCurrentPullBackDist() const;
    void SetCurrentPullBackDist(float value);
    std::string GetTextureName() const;
    void SetTextureName(std::string value);

    std::string ToPtr();
    bool IsValid();
};

class GFeBuildSphereRigid_t
{
private:
    void *m_ptr;

public:
    GFeBuildSphereRigid_t(std::string ptr);
    GFeBuildSphereRigid_t(void *ptr);

    int32_t GetPriority() const;
    void SetPriority(int32_t value);
    uint32_t GetVertexMapHash() const;
    void SetVertexMapHash(uint32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCAnimEncodedFrames
{
private:
    void *m_ptr;

public:
    GCAnimEncodedFrames(std::string ptr);
    GCAnimEncodedFrames(void *ptr);

    CBufferString GetFileName() const;
    void SetFileName(CBufferString value);
    int32_t GetFrames() const;
    void SetFrames(int32_t value);
    int32_t GetFramesPerBlock() const;
    void SetFramesPerBlock(int32_t value);
    std::vector<GCAnimFrameBlockAnim> GetFrameblockArray() const;
    void SetFrameblockArray(std::vector<GCAnimFrameBlockAnim> value);
    GCAnimEncodeDifference GetUsageDifferences() const;
    void SetUsageDifferences(GCAnimEncodeDifference value);

    std::string ToPtr();
    bool IsValid();
};

class GEventSetTime_t
{
private:
    void *m_ptr;

public:
    GEventSetTime_t(std::string ptr);
    GEventSetTime_t(void *ptr);

    GEngineLoopState_t GetLoopState() const;
    void SetLoopState(GEngineLoopState_t value);
    int32_t GetClientOutputFrames() const;
    void SetClientOutputFrames(int32_t value);
    double GetRealTime() const;
    void SetRealTime(double value);
    double GetRenderTime() const;
    void SetRenderTime(double value);
    double GetRenderFrameTime() const;
    void SetRenderFrameTime(double value);
    double GetRenderFrameTimeUnbounded() const;
    void SetRenderFrameTimeUnbounded(double value);
    double GetRenderFrameTimeUnscaled() const;
    void SetRenderFrameTimeUnscaled(double value);
    double GetTickRemainder() const;
    void SetTickRemainder(double value);

    std::string ToPtr();
    bool IsValid();
};

class GOldFeEdge_t
{
private:
    void *m_ptr;

public:
    GOldFeEdge_t(std::string ptr);
    GOldFeEdge_t(void *ptr);

    std::vector<float> GetK() const;
    void SetK(std::vector<float> value);
    float GetInvA() const;
    void SetInvA(float value);
    float GetT() const;
    void SetT(float value);
    float GetThetaRelaxed() const;
    void SetThetaRelaxed(float value);
    float GetThetaFactor() const;
    void SetThetaFactor(float value);
    float GetC01() const;
    void SetC01(float value);
    float GetC02() const;
    void SetC02(float value);
    float GetC03() const;
    void SetC03(float value);
    float GetC04() const;
    void SetC04(float value);
    float GetAxialModelDist() const;
    void SetAxialModelDist(float value);
    std::vector<float> GetAxialModelWeights() const;
    void SetAxialModelWeights(std::vector<float> value);
    std::vector<uint16_t> GetNode() const;
    void SetNode(std::vector<uint16_t> value);

    std::string ToPtr();
    bool IsValid();
};

class GCStanceOverrideUpdateNode
{
private:
    void *m_ptr;

public:
    GCStanceOverrideUpdateNode(std::string ptr);
    GCStanceOverrideUpdateNode(void *ptr);

    std::vector<GStanceInfo_t> GetFootStanceInfo() const;
    void SetFootStanceInfo(std::vector<GStanceInfo_t> value);
    GCAnimUpdateNodeRef GetStanceSourceNode() const;
    void SetStanceSourceNode(GCAnimUpdateNodeRef value);
    GCAnimParamHandle GetParameter() const;
    void SetParameter(GCAnimParamHandle value);
    StanceOverrideMode GetMode() const;
    void SetMode(StanceOverrideMode value);

    std::string ToPtr();
    bool IsValid();
};

class Gconstraint_breakableparams_t
{
private:
    void *m_ptr;

public:
    Gconstraint_breakableparams_t(std::string ptr);
    Gconstraint_breakableparams_t(void *ptr);

    float GetStrength() const;
    void SetStrength(float value);
    float GetForceLimit() const;
    void SetForceLimit(float value);
    float GetTorqueLimit() const;
    void SetTorqueLimit(float value);
    std::vector<float> GetBodyMassScale() const;
    void SetBodyMassScale(std::vector<float> value);
    bool GetIsActive() const;
    void SetIsActive(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCStateNodeTransitionData
{
private:
    void *m_ptr;

public:
    GCStateNodeTransitionData(std::string ptr);
    GCStateNodeTransitionData(void *ptr);

    GCBlendCurve GetCurve() const;
    void SetCurve(GCBlendCurve value);

    std::string ToPtr();
    bool IsValid();
};

class GCMotionMatchingUpdateNode
{
private:
    void *m_ptr;

public:
    GCMotionMatchingUpdateNode(std::string ptr);
    GCMotionMatchingUpdateNode(void *ptr);

    GCMotionDataSet GetDataSet() const;
    void SetDataSet(GCMotionDataSet value);
    std::vector<float32> GetWeights() const;
    void SetWeights(std::vector<float32> value);
    bool GetSearchEveryTick() const;
    void SetSearchEveryTick(bool value);
    float GetSearchInterval() const;
    void SetSearchInterval(float value);
    bool GetSearchWhenClipEnds() const;
    void SetSearchWhenClipEnds(bool value);
    bool GetSearchWhenGoalChanges() const;
    void SetSearchWhenGoalChanges(bool value);
    GCBlendCurve GetBlendCurve() const;
    void SetBlendCurve(GCBlendCurve value);
    float GetSampleRate() const;
    void SetSampleRate(float value);
    float GetBlendTime() const;
    void SetBlendTime(float value);
    bool GetLockClipWhenWaning() const;
    void SetLockClipWhenWaning(bool value);
    float GetSelectionThreshold() const;
    void SetSelectionThreshold(float value);
    float GetReselectionTimeWindow() const;
    void SetReselectionTimeWindow(float value);
    bool GetEnableRotationCorrection() const;
    void SetEnableRotationCorrection(bool value);
    bool GetGoalAssist() const;
    void SetGoalAssist(bool value);
    float GetGoalAssistDistance() const;
    void SetGoalAssistDistance(float value);
    float GetGoalAssistTolerance() const;
    void SetGoalAssistTolerance(float value);
    GCAnimInputDamping GetDistanceScale_Damping() const;
    void SetDistanceScale_Damping(GCAnimInputDamping value);
    float GetDistanceScale_OuterRadius() const;
    void SetDistanceScale_OuterRadius(float value);
    float GetDistanceScale_InnerRadius() const;
    void SetDistanceScale_InnerRadius(float value);
    float GetDistanceScale_MaxScale() const;
    void SetDistanceScale_MaxScale(float value);
    float GetDistanceScale_MinScale() const;
    void SetDistanceScale_MinScale(float value);
    bool GetEnableDistanceScaling() const;
    void SetEnableDistanceScaling(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCNmSyncTrack__Event_t
{
private:
    void *m_ptr;

public:
    GCNmSyncTrack__Event_t(std::string ptr);
    GCNmSyncTrack__Event_t(void *ptr);

    GNmPercent_t GetStartTime() const;
    void SetStartTime(GNmPercent_t value);
    GNmPercent_t GetDuration() const;
    void SetDuration(GNmPercent_t value);

    std::string ToPtr();
    bool IsValid();
};

class GEventSplitScreenStateChanged_t
{
private:
    void *m_ptr;

public:
    GEventSplitScreenStateChanged_t(std::string ptr);
    GEventSplitScreenStateChanged_t(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GParticleNamedValueSource_t
{
private:
    void *m_ptr;

public:
    GParticleNamedValueSource_t(std::string ptr);
    GParticleNamedValueSource_t(void *ptr);

    CUtlString GetName() const;
    void SetName(CUtlString value);
    bool GetIsPublic() const;
    void SetIsPublic(bool value);
    PulseValueType_t GetValueType() const;
    void SetValueType(PulseValueType_t value);
    GParticleNamedValueConfiguration_t GetDefaultConfig() const;
    void SetDefaultConfig(GParticleNamedValueConfiguration_t value);
    std::vector<GParticleNamedValueConfiguration_t> GetNamedConfigs() const;
    void SetNamedConfigs(std::vector<GParticleNamedValueConfiguration_t> value);

    std::string ToPtr();
    bool IsValid();
};

class GMaterialParamBuffer_t
{
private:
    void *m_ptr;

public:
    GMaterialParamBuffer_t(std::string ptr);
    GMaterialParamBuffer_t(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GEventPostDataUpdate_t
{
private:
    void *m_ptr;

public:
    GEventPostDataUpdate_t(std::string ptr);
    GEventPostDataUpdate_t(void *ptr);

    int32_t GetCount() const;
    void SetCount(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GRenderProjectedMaterial_t
{
private:
    void *m_ptr;

public:
    GRenderProjectedMaterial_t(std::string ptr);
    GRenderProjectedMaterial_t(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCSSDSMsg_ViewTargetList
{
private:
    void *m_ptr;

public:
    GCSSDSMsg_ViewTargetList(std::string ptr);
    GCSSDSMsg_ViewTargetList(void *ptr);

    GSceneViewId_t GetViewId() const;
    void SetViewId(GSceneViewId_t value);
    CUtlString GetViewName() const;
    void SetViewName(CUtlString value);
    std::vector<GCSSDSMsg_ViewTarget> GetTargets() const;
    void SetTargets(std::vector<GCSSDSMsg_ViewTarget> value);

    std::string ToPtr();
    bool IsValid();
};

class GFeSimdAnimStrayRadius_t
{
private:
    void *m_ptr;

public:
    GFeSimdAnimStrayRadius_t(std::string ptr);
    GFeSimdAnimStrayRadius_t(void *ptr);

    float GetMaxDist() const;
    void SetMaxDist(float value);
    float GetRelaxationFactor() const;
    void SetRelaxationFactor(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCAnimUser
{
private:
    void *m_ptr;

public:
    GCAnimUser(std::string ptr);
    GCAnimUser(void *ptr);

    CBufferString GetName() const;
    void SetName(CBufferString value);
    int32_t GetType() const;
    void SetType(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GFeSpringIntegrator_t
{
private:
    void *m_ptr;

public:
    GFeSpringIntegrator_t(std::string ptr);
    GFeSpringIntegrator_t(void *ptr);

    std::vector<uint16_t> GetNode() const;
    void SetNode(std::vector<uint16_t> value);
    float GetSpringRestLength() const;
    void SetSpringRestLength(float value);
    float GetSpringConstant() const;
    void SetSpringConstant(float value);
    float GetSpringDamping() const;
    void SetSpringDamping(float value);
    float GetNodeWeight0() const;
    void SetNodeWeight0(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCModelConfigElement_UserPick
{
private:
    void *m_ptr;

public:
    GCModelConfigElement_UserPick(std::string ptr);
    GCModelConfigElement_UserPick(void *ptr);

    std::vector<CUtlString> GetChoices() const;
    void SetChoices(std::vector<CUtlString> value);

    std::string ToPtr();
    bool IsValid();
};

class GRenderSkeletonBone_t
{
private:
    void *m_ptr;

public:
    GRenderSkeletonBone_t(std::string ptr);
    GRenderSkeletonBone_t(void *ptr);

    CUtlString GetBoneName() const;
    void SetBoneName(CUtlString value);
    CUtlString GetParentName() const;
    void SetParentName(CUtlString value);
    matrix3x4_t GetInvBindPose() const;
    void SetInvBindPose(matrix3x4_t value);
    GSkeletonBoneBounds_t GetBbox() const;
    void SetBbox(GSkeletonBoneBounds_t value);
    float GetSphereRadius() const;
    void SetSphereRadius(float value);

    std::string ToPtr();
    bool IsValid();
};

class GAnimationDecodeDebugDump_t
{
private:
    void *m_ptr;

public:
    GAnimationDecodeDebugDump_t(std::string ptr);
    GAnimationDecodeDebugDump_t(void *ptr);

    AnimationProcessingType_t GetProcessingType() const;
    void SetProcessingType(AnimationProcessingType_t value);
    std::vector<GAnimationDecodeDebugDumpElement_t> GetElems() const;
    void SetElems(std::vector<GAnimationDecodeDebugDumpElement_t> value);

    std::string ToPtr();
    bool IsValid();
};

class GPARTICLE_EHANDLE__
{
private:
    void *m_ptr;

public:
    GPARTICLE_EHANDLE__(std::string ptr);
    GPARTICLE_EHANDLE__(void *ptr);

    int32_t GetUnused() const;
    void SetUnused(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GFeCollisionPlane_t
{
private:
    void *m_ptr;

public:
    GFeCollisionPlane_t(std::string ptr);
    GFeCollisionPlane_t(void *ptr);

    uint16_t GetCtrlParent() const;
    void SetCtrlParent(uint16_t value);
    uint16_t GetChildNode() const;
    void SetChildNode(uint16_t value);
    GRnPlane_t GetPlane() const;
    void SetPlane(GRnPlane_t value);
    float GetStrength() const;
    void SetStrength(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCAnimCycle
{
private:
    void *m_ptr;

public:
    GCAnimCycle(std::string ptr);
    GCAnimCycle(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCNmSyncTrack__EventMarker_t
{
private:
    void *m_ptr;

public:
    GCNmSyncTrack__EventMarker_t(std::string ptr);
    GCNmSyncTrack__EventMarker_t(void *ptr);

    GNmPercent_t GetStartTime() const;
    void SetStartTime(GNmPercent_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCAnimGraphSettingsManager
{
private:
    void *m_ptr;

public:
    GCAnimGraphSettingsManager(std::string ptr);
    GCAnimGraphSettingsManager(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCRagdollUpdateNode
{
private:
    void *m_ptr;

public:
    GCRagdollUpdateNode(std::string ptr);
    GCRagdollUpdateNode(void *ptr);

    int32_t GetWeightListIndex() const;
    void SetWeightListIndex(int32_t value);
    RagdollPoseControl GetPoseControlMethod() const;
    void SetPoseControlMethod(RagdollPoseControl value);

    std::string ToPtr();
    bool IsValid();
};

class GCEntityComponentHelper
{
private:
    void *m_ptr;

public:
    GCEntityComponentHelper(std::string ptr);
    GCEntityComponentHelper(void *ptr);

    uint32_t GetFlags() const;
    void SetFlags(uint32_t value);
    GEntComponentInfo_t GetInfo() const;
    void SetInfo(GEntComponentInfo_t* value);
    int32_t GetPriority() const;
    void SetPriority(int32_t value);
    GCEntityComponentHelper GetNext() const;
    void SetNext(GCEntityComponentHelper* value);

    std::string ToPtr();
    bool IsValid();
};

class GCompositeMaterial_t
{
private:
    void *m_ptr;

public:
    GCompositeMaterial_t(std::string ptr);
    GCompositeMaterial_t(void *ptr);

    std::vector<GGeneratedTextureHandle_t> GetGeneratedTextures() const;
    void SetGeneratedTextures(std::vector<GGeneratedTextureHandle_t> value);

    std::string ToPtr();
    bool IsValid();
};

class GSignatureOutflow_Continue
{
private:
    void *m_ptr;

public:
    GSignatureOutflow_Continue(std::string ptr);
    GSignatureOutflow_Continue(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GWeightList
{
private:
    void *m_ptr;

public:
    GWeightList(std::string ptr);
    GWeightList(void *ptr);

    CUtlString GetName() const;
    void SetName(CUtlString value);
    std::vector<float32> GetWeights() const;
    void SetWeights(std::vector<float32> value);

    std::string ToPtr();
    bool IsValid();
};

class GRnBodyDesc_t
{
private:
    void *m_ptr;

public:
    GRnBodyDesc_t(std::string ptr);
    GRnBodyDesc_t(void *ptr);

    CUtlString GetDebugName() const;
    void SetDebugName(CUtlString value);
    Vector GetPosition() const;
    void SetPosition(Vector value);
    Vector GetLinearVelocity() const;
    void SetLinearVelocity(Vector value);
    Vector GetAngularVelocity() const;
    void SetAngularVelocity(Vector value);
    Vector GetLocalMassCenter() const;
    void SetLocalMassCenter(Vector value);
    std::vector<Vector> GetLocalInertiaInv() const;
    void SetLocalInertiaInv(std::vector<Vector> value);
    float GetMassInv() const;
    void SetMassInv(float value);
    float GetGameMass() const;
    void SetGameMass(float value);
    float GetInertiaScaleInv() const;
    void SetInertiaScaleInv(float value);
    float GetLinearDamping() const;
    void SetLinearDamping(float value);
    float GetAngularDamping() const;
    void SetAngularDamping(float value);
    float GetLinearDrag() const;
    void SetLinearDrag(float value);
    float GetAngularDrag() const;
    void SetAngularDrag(float value);
    float GetLinearBuoyancyDrag() const;
    void SetLinearBuoyancyDrag(float value);
    float GetAngularBuoyancyDrag() const;
    void SetAngularBuoyancyDrag(float value);
    Vector GetLastAwakeForceAccum() const;
    void SetLastAwakeForceAccum(Vector value);
    Vector GetLastAwakeTorqueAccum() const;
    void SetLastAwakeTorqueAccum(Vector value);
    float GetBuoyancyFactor() const;
    void SetBuoyancyFactor(float value);
    float GetGravityScale() const;
    void SetGravityScale(float value);
    float GetTimeScale() const;
    void SetTimeScale(float value);
    int32_t GetBodyType() const;
    void SetBodyType(int32_t value);
    uint32_t GetGameIndex() const;
    void SetGameIndex(uint32_t value);
    uint32_t GetGameFlags() const;
    void SetGameFlags(uint32_t value);
    int8_t GetMinVelocityIterations() const;
    void SetMinVelocityIterations(int8_t value);
    int8_t GetMinPositionIterations() const;
    void SetMinPositionIterations(int8_t value);
    int8_t GetMassPriority() const;
    void SetMassPriority(int8_t value);
    bool GetEnabled() const;
    void SetEnabled(bool value);
    bool GetSleeping() const;
    void SetSleeping(bool value);
    bool GetIsContinuousEnabled() const;
    void SetIsContinuousEnabled(bool value);
    bool GetDragEnabled() const;
    void SetDragEnabled(bool value);
    bool GetBuoyancyDragEnabled() const;
    void SetBuoyancyDragEnabled(bool value);
    bool GetGravityDisabled() const;
    void SetGravityDisabled(bool value);
    bool GetSpeculativeEnabled() const;
    void SetSpeculativeEnabled(bool value);
    bool GetHasShadowController() const;
    void SetHasShadowController(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCFeMorphLayer
{
private:
    void *m_ptr;

public:
    GCFeMorphLayer(std::string ptr);
    GCFeMorphLayer(void *ptr);

    CUtlString GetName() const;
    void SetName(CUtlString value);
    uint32_t GetNameHash() const;
    void SetNameHash(uint32_t value);
    std::vector<uint16> GetNodes() const;
    void SetNodes(std::vector<uint16> value);
    std::vector<Vector> GetInitPos() const;
    void SetInitPos(std::vector<Vector> value);
    std::vector<float32> GetGravity() const;
    void SetGravity(std::vector<float32> value);
    std::vector<float32> GetGoalStrength() const;
    void SetGoalStrength(std::vector<float32> value);
    std::vector<float32> GetGoalDamping() const;
    void SetGoalDamping(std::vector<float32> value);

    std::string ToPtr();
    bool IsValid();
};

class GAnimNodeOutputID
{
private:
    void *m_ptr;

public:
    GAnimNodeOutputID(std::string ptr);
    GAnimNodeOutputID(void *ptr);

    uint32_t GetId() const;
    void SetId(uint32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GEventClientSceneSystemThreadStateChange_t
{
private:
    void *m_ptr;

public:
    GEventClientSceneSystemThreadStateChange_t(std::string ptr);
    GEventClientSceneSystemThreadStateChange_t(void *ptr);

    bool GetThreadsActive() const;
    void SetThreadsActive(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GEventClientPreSimulate_t
{
private:
    void *m_ptr;

public:
    GEventClientPreSimulate_t(std::string ptr);
    GEventClientPreSimulate_t(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GClutterSceneObject_t
{
private:
    void *m_ptr;

public:
    GClutterSceneObject_t(std::string ptr);
    GClutterSceneObject_t(void *ptr);

    GAABB_t GetBounds() const;
    void SetBounds(GAABB_t value);
    ObjectTypeFlags_t GetFlags() const;
    void SetFlags(ObjectTypeFlags_t value);
    int16_t GetLayer() const;
    void SetLayer(int16_t value);
    std::vector<Vector> GetInstancePositions() const;
    void SetInstancePositions(std::vector<Vector> value);
    std::vector<float32> GetInstanceScales() const;
    void SetInstanceScales(std::vector<float32> value);
    std::vector<Color> GetInstanceTintSrgb() const;
    void SetInstanceTintSrgb(std::vector<Color> value);
    std::vector<GClutterTile_t> GetTiles() const;
    void SetTiles(std::vector<GClutterTile_t> value);

    std::string ToPtr();
    bool IsValid();
};

class GCPoseHandle
{
private:
    void *m_ptr;

public:
    GCPoseHandle(std::string ptr);
    GCPoseHandle(void *ptr);

    uint16_t GetIndex() const;
    void SetIndex(uint16_t value);
    PoseType_t GetType() const;
    void SetType(PoseType_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCAnimScriptBase
{
private:
    void *m_ptr;

public:
    GCAnimScriptBase(std::string ptr);
    GCAnimScriptBase(void *ptr);

    bool GetIsValid() const;
    void SetIsValid(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCVoiceContainerBlender
{
private:
    void *m_ptr;

public:
    GCVoiceContainerBlender(std::string ptr);
    GCVoiceContainerBlender(void *ptr);

    float GetBlendFactor() const;
    void SetBlendFactor(float value);

    std::string ToPtr();
    bool IsValid();
};

class Gvphysics_save_cphysicsbody_t
{
private:
    void *m_ptr;

public:
    Gvphysics_save_cphysicsbody_t(std::string ptr);
    Gvphysics_save_cphysicsbody_t(void *ptr);

    uint64_t GetOldPointer() const;
    void SetOldPointer(uint64_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCRagdollAnimTag
{
private:
    void *m_ptr;

public:
    GCRagdollAnimTag(std::string ptr);
    GCRagdollAnimTag(void *ptr);

    AnimPoseControl GetPoseControl() const;
    void SetPoseControl(AnimPoseControl value);
    float GetFrequency() const;
    void SetFrequency(float value);
    float GetDampingRatio() const;
    void SetDampingRatio(float value);
    float GetDecayDuration() const;
    void SetDecayDuration(float value);
    float GetDecayBias() const;
    void SetDecayBias(float value);
    bool GetDestroy() const;
    void SetDestroy(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GIClientAlphaProperty
{
private:
    void *m_ptr;

public:
    GIClientAlphaProperty(std::string ptr);
    GIClientAlphaProperty(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GPermModelData_t
{
private:
    void *m_ptr;

public:
    GPermModelData_t(std::string ptr);
    GPermModelData_t(void *ptr);

    CUtlString GetName() const;
    void SetName(CUtlString value);
    GPermModelInfo_t GetModelInfo() const;
    void SetModelInfo(GPermModelInfo_t value);
    std::vector<GPermModelExtPart_t> GetExtParts() const;
    void SetExtParts(std::vector<GPermModelExtPart_t> value);
    std::vector<uint64> GetRefMeshGroupMasks() const;
    void SetRefMeshGroupMasks(std::vector<uint64> value);
    std::vector<uint64> GetRefPhysGroupMasks() const;
    void SetRefPhysGroupMasks(std::vector<uint64> value);
    std::vector<uint8> GetRefLODGroupMasks() const;
    void SetRefLODGroupMasks(std::vector<uint8> value);
    std::vector<float32> GetLodGroupSwitchDistances() const;
    void SetLodGroupSwitchDistances(std::vector<float32> value);
    std::vector<CUtlString> GetMeshGroups() const;
    void SetMeshGroups(std::vector<CUtlString> value);
    std::vector<GMaterialGroup_t> GetMaterialGroups() const;
    void SetMaterialGroups(std::vector<GMaterialGroup_t> value);
    uint64_t GetDefaultMeshGroupMask() const;
    void SetDefaultMeshGroupMask(uint64_t value);
    GModelSkeletonData_t GetModelSkeleton() const;
    void SetModelSkeleton(GModelSkeletonData_t value);
    std::vector<int16> GetRemappingTable() const;
    void SetRemappingTable(std::vector<int16> value);
    std::vector<uint16> GetRemappingTableStarts() const;
    void SetRemappingTableStarts(std::vector<uint16> value);
    std::vector<GModelBoneFlexDriver_t> GetBoneFlexDrivers() const;
    void SetBoneFlexDrivers(std::vector<GModelBoneFlexDriver_t> value);
    GCModelConfigList GetModelConfigList() const;
    void SetModelConfigList(GCModelConfigList* value);
    std::vector<CUtlString> GetBodyGroupsHiddenInTools() const;
    void SetBodyGroupsHiddenInTools(std::vector<CUtlString> value);
    std::vector<GPermModelDataAnimatedMaterialAttribute_t> GetAnimatedMaterialAttributes() const;
    void SetAnimatedMaterialAttributes(std::vector<GPermModelDataAnimatedMaterialAttribute_t> value);

    std::string ToPtr();
    bool IsValid();
};

class GFootFixedSettings
{
private:
    void *m_ptr;

public:
    GFootFixedSettings(std::string ptr);
    GFootFixedSettings(void *ptr);

    GTraceSettings_t GetTraceSettings() const;
    void SetTraceSettings(GTraceSettings_t value);
    Vector GetFootBaseBindPosePositionMS() const;
    void SetFootBaseBindPosePositionMS(Vector value);
    float GetFootBaseLength() const;
    void SetFootBaseLength(float value);
    float GetMaxRotationLeft() const;
    void SetMaxRotationLeft(float value);
    float GetMaxRotationRight() const;
    void SetMaxRotationRight(float value);
    int32_t GetFootstepLandedTagIndex() const;
    void SetFootstepLandedTagIndex(int32_t value);
    bool GetEnableTracing() const;
    void SetEnableTracing(bool value);
    float GetTraceAngleBlend() const;
    void SetTraceAngleBlend(float value);
    int32_t GetDisableTagIndex() const;
    void SetDisableTagIndex(int32_t value);
    int32_t GetFootIndex() const;
    void SetFootIndex(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCSolveIKTargetHandle_t
{
private:
    void *m_ptr;

public:
    GCSolveIKTargetHandle_t(std::string ptr);
    GCSolveIKTargetHandle_t(void *ptr);

    GCAnimParamHandle GetPositionHandle() const;
    void SetPositionHandle(GCAnimParamHandle value);
    GCAnimParamHandle GetOrientationHandle() const;
    void SetOrientationHandle(GCAnimParamHandle value);

    std::string ToPtr();
    bool IsValid();
};

class GCBlendUpdateNode
{
private:
    void *m_ptr;

public:
    GCBlendUpdateNode(std::string ptr);
    GCBlendUpdateNode(void *ptr);

    std::vector<GCAnimUpdateNodeRef> GetChildren() const;
    void SetChildren(std::vector<GCAnimUpdateNodeRef> value);
    std::vector<uint8> GetSortedOrder() const;
    void SetSortedOrder(std::vector<uint8> value);
    std::vector<float32> GetTargetValues() const;
    void SetTargetValues(std::vector<float32> value);
    AnimValueSource GetBlendValueSource() const;
    void SetBlendValueSource(AnimValueSource value);
    GCAnimParamHandle GetParamIndex() const;
    void SetParamIndex(GCAnimParamHandle value);
    GCAnimInputDamping GetDamping() const;
    void SetDamping(GCAnimInputDamping value);
    BlendKeyType GetBlendKeyType() const;
    void SetBlendKeyType(BlendKeyType value);
    bool GetLockBlendOnReset() const;
    void SetLockBlendOnReset(bool value);
    bool GetSyncCycles() const;
    void SetSyncCycles(bool value);
    bool GetLoop() const;
    void SetLoop(bool value);
    bool GetLockWhenWaning() const;
    void SetLockWhenWaning(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCAnimationGraphVisualizerSphere
{
private:
    void *m_ptr;

public:
    GCAnimationGraphVisualizerSphere(std::string ptr);
    GCAnimationGraphVisualizerSphere(void *ptr);

    Vector GetWsPosition() const;
    void SetWsPosition(Vector value);
    float GetRadius() const;
    void SetRadius(float value);
    Color GetColor() const;
    void SetColor(Color value);

    std::string ToPtr();
    bool IsValid();
};

class GMaterialParamFloat_t
{
private:
    void *m_ptr;

public:
    GMaterialParamFloat_t(std::string ptr);
    GMaterialParamFloat_t(void *ptr);

    float GetValue() const;
    void SetValue(float value);

    std::string ToPtr();
    bool IsValid();
};

class GEventServerSimulate_t
{
private:
    void *m_ptr;

public:
    GEventServerSimulate_t(std::string ptr);
    GEventServerSimulate_t(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCVoiceContainerEnvelopeAnalyzer
{
private:
    void *m_ptr;

public:
    GCVoiceContainerEnvelopeAnalyzer(std::string ptr);
    GCVoiceContainerEnvelopeAnalyzer(void *ptr);

    EMode_t GetMode() const;
    void SetMode(EMode_t value);
    int32_t GetSamples() const;
    void SetSamples(int32_t value);
    float GetThreshold() const;
    void SetThreshold(float value);

    std::string ToPtr();
    bool IsValid();
};

class GFollowAttachmentSettings_t
{
private:
    void *m_ptr;

public:
    GFollowAttachmentSettings_t(std::string ptr);
    GFollowAttachmentSettings_t(void *ptr);

    GCAnimAttachment GetAttachment() const;
    void SetAttachment(GCAnimAttachment value);
    int32_t GetBoneIndex() const;
    void SetBoneIndex(int32_t value);
    bool GetMatchTranslation() const;
    void SetMatchTranslation(bool value);
    bool GetMatchRotation() const;
    void SetMatchRotation(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GJiggleBoneSettings_t
{
private:
    void *m_ptr;

public:
    GJiggleBoneSettings_t(std::string ptr);
    GJiggleBoneSettings_t(void *ptr);

    int32_t GetBoneIndex() const;
    void SetBoneIndex(int32_t value);
    float GetSpringStrength() const;
    void SetSpringStrength(float value);
    float GetMaxTimeStep() const;
    void SetMaxTimeStep(float value);
    float GetDamping() const;
    void SetDamping(float value);
    Vector GetBoundsMaxLS() const;
    void SetBoundsMaxLS(Vector value);
    Vector GetBoundsMinLS() const;
    void SetBoundsMinLS(Vector value);
    JiggleBoneSimSpace GetSimSpace() const;
    void SetSimSpace(JiggleBoneSimSpace value);

    std::string ToPtr();
    bool IsValid();
};

class GCAnimStateMachineUpdater
{
private:
    void *m_ptr;

public:
    GCAnimStateMachineUpdater(std::string ptr);
    GCAnimStateMachineUpdater(void *ptr);

    std::vector<GCStateUpdateData> GetStates() const;
    void SetStates(std::vector<GCStateUpdateData> value);
    std::vector<GCTransitionUpdateData> GetTransitions() const;
    void SetTransitions(std::vector<GCTransitionUpdateData> value);
    int32_t GetStartStateIndex() const;
    void SetStartStateIndex(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCNmControlParameterFloatNode
{
private:
    void *m_ptr;

public:
    GCNmControlParameterFloatNode(std::string ptr);
    GCNmControlParameterFloatNode(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCSeqCmdLayer
{
private:
    void *m_ptr;

public:
    GCSeqCmdLayer(std::string ptr);
    GCSeqCmdLayer(void *ptr);

    int16_t GetCmd() const;
    void SetCmd(int16_t value);
    int16_t GetLocalReference() const;
    void SetLocalReference(int16_t value);
    int16_t GetLocalBonemask() const;
    void SetLocalBonemask(int16_t value);
    int16_t GetDstResult() const;
    void SetDstResult(int16_t value);
    int16_t GetSrcResult() const;
    void SetSrcResult(int16_t value);
    bool GetSpline() const;
    void SetSpline(bool value);
    float GetVar1() const;
    void SetVar1(float value);
    float GetVar2() const;
    void SetVar2(float value);
    int16_t GetLineNumber() const;
    void SetLineNumber(int16_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCAnimScriptComponentUpdater
{
private:
    void *m_ptr;

public:
    GCAnimScriptComponentUpdater(std::string ptr);
    GCAnimScriptComponentUpdater(void *ptr);

    GAnimScriptHandle GetScript() const;
    void SetScript(GAnimScriptHandle value);

    std::string ToPtr();
    bool IsValid();
};

class GFeRigidColliderIndices_t
{
private:
    void *m_ptr;

public:
    GFeRigidColliderIndices_t(std::string ptr);
    GFeRigidColliderIndices_t(void *ptr);

    uint16_t GetTaperedCapsuleRigidIndex() const;
    void SetTaperedCapsuleRigidIndex(uint16_t value);
    uint16_t GetSphereRigidIndex() const;
    void SetSphereRigidIndex(uint16_t value);
    uint16_t GetBoxRigidIndex() const;
    void SetBoxRigidIndex(uint16_t value);
    uint16_t GetCollisionPlaneIndex() const;
    void SetCollisionPlaneIndex(uint16_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCSeqAutoLayer
{
private:
    void *m_ptr;

public:
    GCSeqAutoLayer(std::string ptr);
    GCSeqAutoLayer(void *ptr);

    int16_t GetLocalReference() const;
    void SetLocalReference(int16_t value);
    int16_t GetLocalPose() const;
    void SetLocalPose(int16_t value);
    GCSeqAutoLayerFlag GetFlags() const;
    void SetFlags(GCSeqAutoLayerFlag value);
    float GetStart() const;
    void SetStart(float value);
    float GetPeak() const;
    void SetPeak(float value);
    float GetTail() const;
    void SetTail(float value);
    float GetEnd() const;
    void SetEnd(float value);

    std::string ToPtr();
    bool IsValid();
};

class GBakedLightingInfo_t
{
private:
    void *m_ptr;

public:
    GBakedLightingInfo_t(std::string ptr);
    GBakedLightingInfo_t(void *ptr);

    uint32_t GetLightmapVersionNumber() const;
    void SetLightmapVersionNumber(uint32_t value);
    uint32_t GetLightmapGameVersionNumber() const;
    void SetLightmapGameVersionNumber(uint32_t value);
    Vector2D GetLightmapUvScale() const;
    void SetLightmapUvScale(Vector2D value);
    bool GetHasLightmaps() const;
    void SetHasLightmaps(bool value);
    bool GetBakedShadowsGamma20() const;
    void SetBakedShadowsGamma20(bool value);
    bool GetCompressionEnabled() const;
    void SetCompressionEnabled(bool value);
    uint8_t GetChartPackIterations() const;
    void SetChartPackIterations(uint8_t value);
    uint8_t GetVradQuality() const;
    void SetVradQuality(uint8_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCExampleSchemaVData_PolymorphicBase
{
private:
    void *m_ptr;

public:
    GCExampleSchemaVData_PolymorphicBase(std::string ptr);
    GCExampleSchemaVData_PolymorphicBase(void *ptr);

    int32_t GetBase() const;
    void SetBase(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GFourVectors2D
{
private:
    void *m_ptr;

public:
    GFourVectors2D(std::string ptr);
    GFourVectors2D(void *ptr);

    float GetX() const;
    void SetX(float value);
    float GetY() const;
    void SetY(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCOrientConstraint
{
private:
    void *m_ptr;

public:
    GCOrientConstraint(std::string ptr);
    GCOrientConstraint(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GSequenceWeightedList_t
{
private:
    void *m_ptr;

public:
    GSequenceWeightedList_t(std::string ptr);
    GSequenceWeightedList_t(void *ptr);

    int32_t GetSequence() const;
    void SetSequence(int32_t value);
    float GetRelativeWeight() const;
    void SetRelativeWeight(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCSosGroupActionMemberCountEnvelopeSchema
{
private:
    void *m_ptr;

public:
    GCSosGroupActionMemberCountEnvelopeSchema(std::string ptr);
    GCSosGroupActionMemberCountEnvelopeSchema(void *ptr);

    int32_t GetBaseCount() const;
    void SetBaseCount(int32_t value);
    int32_t GetTargetCount() const;
    void SetTargetCount(int32_t value);
    float GetBaseValue() const;
    void SetBaseValue(float value);
    float GetTargetValue() const;
    void SetTargetValue(float value);
    float GetAttack() const;
    void SetAttack(float value);
    float GetDecay() const;
    void SetDecay(float value);
    CUtlString GetResultVarName() const;
    void SetResultVarName(CUtlString value);
    bool GetSaveToGroup() const;
    void SetSaveToGroup(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GFeRodConstraint_t
{
private:
    void *m_ptr;

public:
    GFeRodConstraint_t(std::string ptr);
    GFeRodConstraint_t(void *ptr);

    std::vector<uint16_t> GetNode() const;
    void SetNode(std::vector<uint16_t> value);
    float GetMaxDist() const;
    void SetMaxDist(float value);
    float GetMinDist() const;
    void SetMinDist(float value);
    float GetWeight0() const;
    void SetWeight0(float value);
    float GetRelaxationFactor() const;
    void SetRelaxationFactor(float value);

    std::string ToPtr();
    bool IsValid();
};

class GFollowTargetOpFixedSettings_t
{
private:
    void *m_ptr;

public:
    GFollowTargetOpFixedSettings_t(std::string ptr);
    GFollowTargetOpFixedSettings_t(void *ptr);

    int32_t GetBoneIndex() const;
    void SetBoneIndex(int32_t value);
    bool GetBoneTarget() const;
    void SetBoneTarget(bool value);
    int32_t GetBoneTargetIndex() const;
    void SetBoneTargetIndex(int32_t value);
    bool GetWorldCoodinateTarget() const;
    void SetWorldCoodinateTarget(bool value);
    bool GetMatchTargetOrientation() const;
    void SetMatchTargetOrientation(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCRenderSkeleton
{
private:
    void *m_ptr;

public:
    GCRenderSkeleton(std::string ptr);
    GCRenderSkeleton(void *ptr);

    std::vector<GRenderSkeletonBone_t> GetBones() const;
    void SetBones(std::vector<GRenderSkeletonBone_t> value);
    std::vector<int32> GetBoneParents() const;
    void SetBoneParents(std::vector<int32> value);
    int32_t GetBoneWeightCount() const;
    void SetBoneWeightCount(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GVMixConvolutionDesc_t
{
private:
    void *m_ptr;

public:
    GVMixConvolutionDesc_t(std::string ptr);
    GVMixConvolutionDesc_t(void *ptr);

    float GetFldbGain() const;
    void SetFldbGain(float value);
    float GetPreDelayMS() const;
    void SetPreDelayMS(float value);
    float GetWetMix() const;
    void SetWetMix(float value);
    float GetFldbLow() const;
    void SetFldbLow(float value);
    float GetFldbMid() const;
    void SetFldbMid(float value);
    float GetFldbHigh() const;
    void SetFldbHigh(float value);
    float GetLowCutoffFreq() const;
    void SetLowCutoffFreq(float value);
    float GetHighCutoffFreq() const;
    void SetHighCutoffFreq(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCSosGroupBranchPattern
{
private:
    void *m_ptr;

public:
    GCSosGroupBranchPattern(std::string ptr);
    GCSosGroupBranchPattern(void *ptr);

    bool GetMatchEventName() const;
    void SetMatchEventName(bool value);
    bool GetMatchEventSubString() const;
    void SetMatchEventSubString(bool value);
    bool GetMatchEntIndex() const;
    void SetMatchEntIndex(bool value);
    bool GetMatchOpvar() const;
    void SetMatchOpvar(bool value);
    bool GetMatchString() const;
    void SetMatchString(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCNmGraphDefinition__ExternalGraphSlot_t
{
private:
    void *m_ptr;

public:
    GCNmGraphDefinition__ExternalGraphSlot_t(std::string ptr);
    GCNmGraphDefinition__ExternalGraphSlot_t(void *ptr);

    int16_t GetNodeIdx() const;
    void SetNodeIdx(int16_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCNmStateMachineNode__StateDefinition_t
{
private:
    void *m_ptr;

public:
    GCNmStateMachineNode__StateDefinition_t(std::string ptr);
    GCNmStateMachineNode__StateDefinition_t(void *ptr);

    int16_t GetStateNodeIdx() const;
    void SetStateNodeIdx(int16_t value);
    int16_t GetEntryConditionNodeIdx() const;
    void SetEntryConditionNodeIdx(int16_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCModelConfigElement_SetBodygroupOnAttachedModels
{
private:
    void *m_ptr;

public:
    GCModelConfigElement_SetBodygroupOnAttachedModels(std::string ptr);
    GCModelConfigElement_SetBodygroupOnAttachedModels(void *ptr);

    CUtlString GetGroupName() const;
    void SetGroupName(CUtlString value);
    int32_t GetChoice() const;
    void SetChoice(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCNmFootEvent
{
private:
    void *m_ptr;

public:
    GCNmFootEvent(std::string ptr);
    GCNmFootEvent(void *ptr);

    NmFootPhase_t GetPhase() const;
    void SetPhase(NmFootPhase_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCHandshakeAnimTagBase
{
private:
    void *m_ptr;

public:
    GCHandshakeAnimTagBase(std::string ptr);
    GCHandshakeAnimTagBase(void *ptr);

    bool GetIsDisableTag() const;
    void SetIsDisableTag(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCBlend2DUpdateNode
{
private:
    void *m_ptr;

public:
    GCBlend2DUpdateNode(std::string ptr);
    GCBlend2DUpdateNode(void *ptr);

    std::vector<GBlendItem_t> GetItems() const;
    void SetItems(std::vector<GBlendItem_t> value);
    std::vector<GTagSpan_t> GetTags() const;
    void SetTags(std::vector<GTagSpan_t> value);
    GCParamSpanUpdater GetParamSpans() const;
    void SetParamSpans(GCParamSpanUpdater value);
    std::vector<int32> GetNodeItemIndices() const;
    void SetNodeItemIndices(std::vector<int32> value);
    GCAnimInputDamping GetDamping() const;
    void SetDamping(GCAnimInputDamping value);
    AnimValueSource GetBlendSourceX() const;
    void SetBlendSourceX(AnimValueSource value);
    GCAnimParamHandle GetParamX() const;
    void SetParamX(GCAnimParamHandle value);
    AnimValueSource GetBlendSourceY() const;
    void SetBlendSourceY(AnimValueSource value);
    GCAnimParamHandle GetParamY() const;
    void SetParamY(GCAnimParamHandle value);
    Blend2DMode GetBlendMode() const;
    void SetBlendMode(Blend2DMode value);
    float GetPlaybackSpeed() const;
    void SetPlaybackSpeed(float value);
    bool GetLoop() const;
    void SetLoop(bool value);
    bool GetLockBlendOnReset() const;
    void SetLockBlendOnReset(bool value);
    bool GetLockWhenWaning() const;
    void SetLockWhenWaning(bool value);
    bool GetAnimEventsAndTagsOnMostWeightedOnly() const;
    void SetAnimEventsAndTagsOnMostWeightedOnly(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GAnimationSnapshotBase_t
{
private:
    void *m_ptr;

public:
    GAnimationSnapshotBase_t(std::string ptr);
    GAnimationSnapshotBase_t(void *ptr);

    float GetRealTime() const;
    void SetRealTime(float value);
    matrix3x4a_t GetRootToWorld() const;
    void SetRootToWorld(matrix3x4a_t value);
    bool GetBonesInWorldSpace() const;
    void SetBonesInWorldSpace(bool value);
    std::vector<uint32> GetBoneSetupMask() const;
    void SetBoneSetupMask(std::vector<uint32> value);
    std::vector<matrix3x4a_t> GetBoneTransforms() const;
    void SetBoneTransforms(std::vector<matrix3x4a_t> value);
    std::vector<float32> GetFlexControllers() const;
    void SetFlexControllers(std::vector<float32> value);
    AnimationSnapshotType_t GetSnapshotType() const;
    void SetSnapshotType(AnimationSnapshotType_t value);
    bool GetHasDecodeDump() const;
    void SetHasDecodeDump(bool value);
    GAnimationDecodeDebugDumpElement_t GetDecodeDump() const;
    void SetDecodeDump(GAnimationDecodeDebugDumpElement_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCTiltTwistConstraint
{
private:
    void *m_ptr;

public:
    GCTiltTwistConstraint(std::string ptr);
    GCTiltTwistConstraint(void *ptr);

    int32_t GetTargetAxis() const;
    void SetTargetAxis(int32_t value);
    int32_t GetSlaveAxis() const;
    void SetSlaveAxis(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GMaterialParamTexture_t
{
private:
    void *m_ptr;

public:
    GMaterialParamTexture_t(std::string ptr);
    GMaterialParamTexture_t(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCGlobalLightBase
{
private:
    void *m_ptr;

public:
    GCGlobalLightBase(std::string ptr);
    GCGlobalLightBase(void *ptr);

    bool GetSpotLight() const;
    void SetSpotLight(bool value);
    Vector GetSpotLightOrigin() const;
    void SetSpotLightOrigin(Vector value);
    QAngle GetSpotLightAngles() const;
    void SetSpotLightAngles(QAngle value);
    Vector GetShadowDirection() const;
    void SetShadowDirection(Vector value);
    Vector GetAmbientDirection() const;
    void SetAmbientDirection(Vector value);
    Vector GetSpecularDirection() const;
    void SetSpecularDirection(Vector value);
    Vector GetInspectorSpecularDirection() const;
    void SetInspectorSpecularDirection(Vector value);
    float GetSpecularPower() const;
    void SetSpecularPower(float value);
    float GetSpecularIndependence() const;
    void SetSpecularIndependence(float value);
    Color GetSpecularColor() const;
    void SetSpecularColor(Color value);
    bool GetStartDisabled() const;
    void SetStartDisabled(bool value);
    bool GetEnabled() const;
    void SetEnabled(bool value);
    Color GetLightColor() const;
    void SetLightColor(Color value);
    Color GetAmbientColor1() const;
    void SetAmbientColor1(Color value);
    Color GetAmbientColor2() const;
    void SetAmbientColor2(Color value);
    Color GetAmbientColor3() const;
    void SetAmbientColor3(Color value);
    float GetSunDistance() const;
    void SetSunDistance(float value);
    float GetFOV() const;
    void SetFOV(float value);
    float GetNearZ() const;
    void SetNearZ(float value);
    float GetFarZ() const;
    void SetFarZ(float value);
    bool GetEnableShadows() const;
    void SetEnableShadows(bool value);
    bool GetOldEnableShadows() const;
    void SetOldEnableShadows(bool value);
    bool GetBackgroundClearNotRequired() const;
    void SetBackgroundClearNotRequired(bool value);
    float GetCloudScale() const;
    void SetCloudScale(float value);
    float GetCloud1Speed() const;
    void SetCloud1Speed(float value);
    float GetCloud1Direction() const;
    void SetCloud1Direction(float value);
    float GetCloud2Speed() const;
    void SetCloud2Speed(float value);
    float GetCloud2Direction() const;
    void SetCloud2Direction(float value);
    float GetAmbientScale1() const;
    void SetAmbientScale1(float value);
    float GetAmbientScale2() const;
    void SetAmbientScale2(float value);
    float GetGroundScale() const;
    void SetGroundScale(float value);
    float GetLightScale() const;
    void SetLightScale(float value);
    float GetFoWDarkness() const;
    void SetFoWDarkness(float value);
    bool GetEnableSeparateSkyboxFog() const;
    void SetEnableSeparateSkyboxFog(bool value);
    Vector GetFowColor() const;
    void SetFowColor(Vector value);
    Vector GetViewOrigin() const;
    void SetViewOrigin(Vector value);
    QAngle GetViewAngles() const;
    void SetViewAngles(QAngle value);
    float GetViewFoV() const;
    void SetViewFoV(float value);
    std::vector<Vector> GetWorldPoints() const;
    void SetWorldPoints(std::vector<Vector> value);
    Vector2D GetFogOffsetLayer0() const;
    void SetFogOffsetLayer0(Vector2D value);
    Vector2D GetFogOffsetLayer1() const;
    void SetFogOffsetLayer1(Vector2D value);

    std::string ToPtr();
    bool IsValid();
};

class GCModelConfigElement_SetBodygroup
{
private:
    void *m_ptr;

public:
    GCModelConfigElement_SetBodygroup(std::string ptr);
    GCModelConfigElement_SetBodygroup(void *ptr);

    CUtlString GetGroupName() const;
    void SetGroupName(CUtlString value);
    int32_t GetChoice() const;
    void SetChoice(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCModelConfigElement_AttachedModel
{
private:
    void *m_ptr;

public:
    GCModelConfigElement_AttachedModel(std::string ptr);
    GCModelConfigElement_AttachedModel(void *ptr);

    CUtlString GetInstanceName() const;
    void SetInstanceName(CUtlString value);
    CUtlString GetEntityClass() const;
    void SetEntityClass(CUtlString value);
    Vector GetOffset() const;
    void SetOffset(Vector value);
    QAngle GetAngOffset() const;
    void SetAngOffset(QAngle value);
    CUtlString GetAttachmentName() const;
    void SetAttachmentName(CUtlString value);
    CUtlString GetLocalAttachmentOffsetName() const;
    void SetLocalAttachmentOffsetName(CUtlString value);
    ModelConfigAttachmentType_t GetAttachmentType() const;
    void SetAttachmentType(ModelConfigAttachmentType_t value);
    bool GetBoneMergeFlex() const;
    void SetBoneMergeFlex(bool value);
    bool GetUserSpecifiedColor() const;
    void SetUserSpecifiedColor(bool value);
    bool GetUserSpecifiedMaterialGroup() const;
    void SetUserSpecifiedMaterialGroup(bool value);
    bool GetAcceptParentMaterialDrivenDecals() const;
    void SetAcceptParentMaterialDrivenDecals(bool value);
    CUtlString GetBodygroupOnOtherModels() const;
    void SetBodygroupOnOtherModels(CUtlString value);
    CUtlString GetMaterialGroupOnOtherModels() const;
    void SetMaterialGroupOnOtherModels(CUtlString value);

    std::string ToPtr();
    bool IsValid();
};

class GCFollowAttachmentUpdateNode
{
private:
    void *m_ptr;

public:
    GCFollowAttachmentUpdateNode(std::string ptr);
    GCFollowAttachmentUpdateNode(void *ptr);

    GFollowAttachmentSettings_t GetOpFixedData() const;
    void SetOpFixedData(GFollowAttachmentSettings_t value);

    std::string ToPtr();
    bool IsValid();
};

class GParticleChildrenInfo_t
{
private:
    void *m_ptr;

public:
    GParticleChildrenInfo_t(std::string ptr);
    GParticleChildrenInfo_t(void *ptr);

    float GetDelay() const;
    void SetDelay(float value);
    bool GetEndCap() const;
    void SetEndCap(bool value);
    bool GetDisableChild() const;
    void SetDisableChild(bool value);
    ParticleDetailLevel_t GetDetailLevel() const;
    void SetDetailLevel(ParticleDetailLevel_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCVoiceContainerNull
{
private:
    void *m_ptr;

public:
    GCVoiceContainerNull(std::string ptr);
    GCVoiceContainerNull(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GMoodAnimation_t
{
private:
    void *m_ptr;

public:
    GMoodAnimation_t(std::string ptr);
    GMoodAnimation_t(void *ptr);

    CUtlString GetName() const;
    void SetName(CUtlString value);
    float GetWeight() const;
    void SetWeight(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCClientAlphaProperty
{
private:
    void *m_ptr;

public:
    GCClientAlphaProperty(std::string ptr);
    GCClientAlphaProperty(void *ptr);

    uint8_t GetRenderFX() const;
    void SetRenderFX(uint8_t value);
    uint8_t GetRenderMode() const;
    void SetRenderMode(uint8_t value);
    uint8_t GetAlpha() const;
    void SetAlpha(uint8_t value);
    uint16_t GetDesyncOffset() const;
    void SetDesyncOffset(uint16_t value);
    uint16_t GetReserved2() const;
    void SetReserved2(uint16_t value);
    uint16_t GetDistFadeStart() const;
    void SetDistFadeStart(uint16_t value);
    uint16_t GetDistFadeEnd() const;
    void SetDistFadeEnd(uint16_t value);
    float GetFadeScale() const;
    void SetFadeScale(float value);
    float GetRenderFxDuration() const;
    void SetRenderFxDuration(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCTimeRemainingMetricEvaluator
{
private:
    void *m_ptr;

public:
    GCTimeRemainingMetricEvaluator(std::string ptr);
    GCTimeRemainingMetricEvaluator(void *ptr);

    bool GetMatchByTimeRemaining() const;
    void SetMatchByTimeRemaining(bool value);
    float GetMaxTimeRemaining() const;
    void SetMaxTimeRemaining(float value);
    bool GetFilterByTimeRemaining() const;
    void SetFilterByTimeRemaining(bool value);
    float GetMinTimeRemaining() const;
    void SetMinTimeRemaining(float value);

    std::string ToPtr();
    bool IsValid();
};

class GNmSyncTrackTimeRange_t
{
private:
    void *m_ptr;

public:
    GNmSyncTrackTimeRange_t(std::string ptr);
    GNmSyncTrackTimeRange_t(void *ptr);

    GNmSyncTrackTime_t GetStartTime() const;
    void SetStartTime(GNmSyncTrackTime_t value);
    GNmSyncTrackTime_t GetEndTime() const;
    void SetEndTime(GNmSyncTrackTime_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCAnimActivity
{
private:
    void *m_ptr;

public:
    GCAnimActivity(std::string ptr);
    GCAnimActivity(void *ptr);

    CBufferString GetName() const;
    void SetName(CBufferString value);
    int32_t GetActivity() const;
    void SetActivity(int32_t value);
    int32_t GetFlags() const;
    void SetFlags(int32_t value);
    int32_t GetWeight() const;
    void SetWeight(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCNmGraphDefinition
{
private:
    void *m_ptr;

public:
    GCNmGraphDefinition(std::string ptr);
    GCNmGraphDefinition(void *ptr);

    std::vector<int16> GetPersistentNodeIndices() const;
    void SetPersistentNodeIndices(std::vector<int16> value);
    int16_t GetRootNodeIdx() const;
    void SetRootNodeIdx(int16_t value);
    std::vector<int16> GetVirtualParameterNodeIndices() const;
    void SetVirtualParameterNodeIndices(std::vector<int16> value);
    std::vector<GCNmGraphDefinition> GetChildGraphSlots() const;
    void SetChildGraphSlots(std::vector<GCNmGraphDefinition> value);
    std::vector<GCNmGraphDefinition> GetExternalGraphSlots() const;
    void SetExternalGraphSlots(std::vector<GCNmGraphDefinition> value);

    std::string ToPtr();
    bool IsValid();
};

class GCSolveIKChainUpdateNode
{
private:
    void *m_ptr;

public:
    GCSolveIKChainUpdateNode(std::string ptr);
    GCSolveIKChainUpdateNode(void *ptr);

    std::vector<GCSolveIKTargetHandle_t> GetTargetHandles() const;
    void SetTargetHandles(std::vector<GCSolveIKTargetHandle_t> value);
    GSolveIKChainPoseOpFixedSettings_t GetOpFixedData() const;
    void SetOpFixedData(GSolveIKChainPoseOpFixedSettings_t value);

    std::string ToPtr();
    bool IsValid();
};

class GEventClientPollNetworking_t
{
private:
    void *m_ptr;

public:
    GEventClientPollNetworking_t(std::string ptr);
    GEventClientPollNetworking_t(void *ptr);

    int32_t GetTickCount() const;
    void SetTickCount(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCMeshletDescriptor
{
private:
    void *m_ptr;

public:
    GCMeshletDescriptor(std::string ptr);
    GCMeshletDescriptor(void *ptr);

    GCDrawCullingData GetCullingData() const;
    void SetCullingData(GCDrawCullingData value);

    std::string ToPtr();
    bool IsValid();
};

class GCNmLayerBlendNode__LayerDefinition_t
{
private:
    void *m_ptr;

public:
    GCNmLayerBlendNode__LayerDefinition_t(std::string ptr);
    GCNmLayerBlendNode__LayerDefinition_t(void *ptr);

    int16_t GetInputNodeIdx() const;
    void SetInputNodeIdx(int16_t value);
    int16_t GetWeightValueNodeIdx() const;
    void SetWeightValueNodeIdx(int16_t value);
    int16_t GetBoneMaskValueNodeIdx() const;
    void SetBoneMaskValueNodeIdx(int16_t value);
    int16_t GetRootMotionWeightValueNodeIdx() const;
    void SetRootMotionWeightValueNodeIdx(int16_t value);
    bool GetIsSynchronized() const;
    void SetIsSynchronized(bool value);
    bool GetIgnoreEvents() const;
    void SetIgnoreEvents(bool value);
    bool GetIsStateMachineLayer() const;
    void SetIsStateMachineLayer(bool value);
    NmPoseBlendMode_t GetBlendMode() const;
    void SetBlendMode(NmPoseBlendMode_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCAnimSequenceParams
{
private:
    void *m_ptr;

public:
    GCAnimSequenceParams(std::string ptr);
    GCAnimSequenceParams(void *ptr);

    float GetFadeInTime() const;
    void SetFadeInTime(float value);
    float GetFadeOutTime() const;
    void SetFadeOutTime(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCDemoSettingsComponentUpdater
{
private:
    void *m_ptr;

public:
    GCDemoSettingsComponentUpdater(std::string ptr);
    GCDemoSettingsComponentUpdater(void *ptr);

    GCAnimDemoCaptureSettings GetSettings() const;
    void SetSettings(GCAnimDemoCaptureSettings value);

    std::string ToPtr();
    bool IsValid();
};

class GCompositeMaterialAssemblyProcedure_t
{
private:
    void *m_ptr;

public:
    GCompositeMaterialAssemblyProcedure_t(std::string ptr);
    GCompositeMaterialAssemblyProcedure_t(void *ptr);

    std::vector<GCompositeMaterialMatchFilter_t> GetMatchFilters() const;
    void SetMatchFilters(std::vector<GCompositeMaterialMatchFilter_t> value);
    std::vector<GCompositeMaterialInputContainer_t> GetCompositeInputContainers() const;
    void SetCompositeInputContainers(std::vector<GCompositeMaterialInputContainer_t> value);
    std::vector<GCompMatPropertyMutator_t> GetPropertyMutators() const;
    void SetPropertyMutators(std::vector<GCompMatPropertyMutator_t> value);

    std::string ToPtr();
    bool IsValid();
};

class GCTaskHandshakeAnimTag
{
private:
    void *m_ptr;

public:
    GCTaskHandshakeAnimTag(std::string ptr);
    GCTaskHandshakeAnimTag(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GEventClientPauseSimulate_t
{
private:
    void *m_ptr;

public:
    GEventClientPauseSimulate_t(std::string ptr);
    GEventClientPauseSimulate_t(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCFireOverlay
{
private:
    void *m_ptr;

public:
    GCFireOverlay(std::string ptr);
    GCFireOverlay(void *ptr);

    std::vector<Vector> GetBaseColors() const;
    void SetBaseColors(std::vector<Vector> value);
    float GetScale() const;
    void SetScale(float value);
    int32_t GetGUID() const;
    void SetGUID(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GFeBuildTaperedCapsuleRigid_t
{
private:
    void *m_ptr;

public:
    GFeBuildTaperedCapsuleRigid_t(std::string ptr);
    GFeBuildTaperedCapsuleRigid_t(void *ptr);

    int32_t GetPriority() const;
    void SetPriority(int32_t value);
    uint32_t GetVertexMapHash() const;
    void SetVertexMapHash(uint32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCStateUpdateData
{
private:
    void *m_ptr;

public:
    GCStateUpdateData(std::string ptr);
    GCStateUpdateData(void *ptr);

    CUtlString GetName() const;
    void SetName(CUtlString value);
    GAnimScriptHandle GetScript() const;
    void SetScript(GAnimScriptHandle value);
    std::vector<int32> GetTransitionIndices() const;
    void SetTransitionIndices(std::vector<int32> value);
    std::vector<GCStateActionUpdater> GetActions() const;
    void SetActions(std::vector<GCStateActionUpdater> value);
    GAnimStateID GetStateID() const;
    void SetStateID(GAnimStateID value);

    std::string ToPtr();
    bool IsValid();
};

class GCPhysSurfaceProperties
{
private:
    void *m_ptr;

public:
    GCPhysSurfaceProperties(std::string ptr);
    GCPhysSurfaceProperties(void *ptr);

    CUtlString GetName() const;
    void SetName(CUtlString value);
    uint32_t GetNameHash() const;
    void SetNameHash(uint32_t value);
    uint32_t GetBaseNameHash() const;
    void SetBaseNameHash(uint32_t value);
    bool GetHidden() const;
    void SetHidden(bool value);
    CUtlString GetDescription() const;
    void SetDescription(CUtlString value);
    GCPhysSurfacePropertiesPhysics GetPhysics() const;
    void SetPhysics(GCPhysSurfacePropertiesPhysics value);
    GCPhysSurfacePropertiesSoundNames GetAudioSounds() const;
    void SetAudioSounds(GCPhysSurfacePropertiesSoundNames value);
    GCPhysSurfacePropertiesAudio GetAudioParams() const;
    void SetAudioParams(GCPhysSurfacePropertiesAudio value);

    std::string ToPtr();
    bool IsValid();
};

class GCMotionSearchNode
{
private:
    void *m_ptr;

public:
    GCMotionSearchNode(std::string ptr);
    GCMotionSearchNode(void *ptr);

    std::vector<GCMotionSearchNode*> GetChildren() const;
    void SetChildren(std::vector<GCMotionSearchNode*> value);
    GCVectorQuantizer GetQuantizer() const;
    void SetQuantizer(GCVectorQuantizer value);
    std::vector<int32> GetSelectableSamples() const;
    void SetSelectableSamples(std::vector<int32> value);

    std::string ToPtr();
    bool IsValid();
};

class GVMixVocoderDesc_t
{
private:
    void *m_ptr;

public:
    GVMixVocoderDesc_t(std::string ptr);
    GVMixVocoderDesc_t(void *ptr);

    int32_t GetBandCount() const;
    void SetBandCount(int32_t value);
    float GetBandwidth() const;
    void SetBandwidth(float value);
    float GetFldBModGain() const;
    void SetFldBModGain(float value);
    float GetFreqRangeStart() const;
    void SetFreqRangeStart(float value);
    float GetFreqRangeEnd() const;
    void SetFreqRangeEnd(float value);
    float GetFldBUnvoicedGain() const;
    void SetFldBUnvoicedGain(float value);
    float GetAttackTimeMS() const;
    void SetAttackTimeMS(float value);
    float GetReleaseTimeMS() const;
    void SetReleaseTimeMS(float value);
    int32_t GetDebugBand() const;
    void SetDebugBand(int32_t value);
    bool GetPeakMode() const;
    void SetPeakMode(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCAnimScriptManager
{
private:
    void *m_ptr;

public:
    GCAnimScriptManager(std::string ptr);
    GCAnimScriptManager(void *ptr);

    std::vector<GScriptInfo_t> GetScriptInfo() const;
    void SetScriptInfo(std::vector<GScriptInfo_t> value);

    std::string ToPtr();
    bool IsValid();
};

class GCAnimationGraphVisualizerLine
{
private:
    void *m_ptr;

public:
    GCAnimationGraphVisualizerLine(std::string ptr);
    GCAnimationGraphVisualizerLine(void *ptr);

    Vector GetWsPositionStart() const;
    void SetWsPositionStart(Vector value);
    Vector GetWsPositionEnd() const;
    void SetWsPositionEnd(Vector value);
    Color GetColor() const;
    void SetColor(Color value);

    std::string ToPtr();
    bool IsValid();
};

class GCFootTrajectory
{
private:
    void *m_ptr;

public:
    GCFootTrajectory(std::string ptr);
    GCFootTrajectory(void *ptr);

    Vector GetOffset() const;
    void SetOffset(Vector value);
    float GetRotationOffset() const;
    void SetRotationOffset(float value);
    float GetProgression() const;
    void SetProgression(float value);

    std::string ToPtr();
    bool IsValid();
};

class GVMixModDelayDesc_t
{
private:
    void *m_ptr;

public:
    GVMixModDelayDesc_t(std::string ptr);
    GVMixModDelayDesc_t(void *ptr);

    GVMixFilterDesc_t GetFeedbackFilter() const;
    void SetFeedbackFilter(GVMixFilterDesc_t value);
    bool GetPhaseInvert() const;
    void SetPhaseInvert(bool value);
    float GetGlideTime() const;
    void SetGlideTime(float value);
    float GetDelay() const;
    void SetDelay(float value);
    float GetOutputGain() const;
    void SetOutputGain(float value);
    float GetFeedbackGain() const;
    void SetFeedbackGain(float value);
    float GetModRate() const;
    void SetModRate(float value);
    float GetModDepth() const;
    void SetModDepth(float value);
    bool GetApplyAntialiasing() const;
    void SetApplyAntialiasing(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCHitBox
{
private:
    void *m_ptr;

public:
    GCHitBox(std::string ptr);
    GCHitBox(void *ptr);

    CUtlString GetName() const;
    void SetName(CUtlString value);
    CUtlString GetSurfaceProperty() const;
    void SetSurfaceProperty(CUtlString value);
    CUtlString GetBoneName() const;
    void SetBoneName(CUtlString value);
    Vector GetMinBounds() const;
    void SetMinBounds(Vector value);
    Vector GetMaxBounds() const;
    void SetMaxBounds(Vector value);
    float GetShapeRadius() const;
    void SetShapeRadius(float value);
    uint32_t GetBoneNameHash() const;
    void SetBoneNameHash(uint32_t value);
    int32_t GetGroupId() const;
    void SetGroupId(int32_t value);
    uint8_t GetShapeType() const;
    void SetShapeType(uint8_t value);
    bool GetTranslationOnly() const;
    void SetTranslationOnly(bool value);
    uint32_t GetCRC() const;
    void SetCRC(uint32_t value);
    Color GetCRenderColor() const;
    void SetCRenderColor(Color value);
    uint16_t GetHitBoxIndex() const;
    void SetHitBoxIndex(uint16_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCTestDomainDerived_Cursor
{
private:
    void *m_ptr;

public:
    GCTestDomainDerived_Cursor(std::string ptr);
    GCTestDomainDerived_Cursor(void *ptr);

    int32_t GetCursorValueA() const;
    void SetCursorValueA(int32_t value);
    int32_t GetCursorValueB() const;
    void SetCursorValueB(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCAudioMorphData
{
private:
    void *m_ptr;

public:
    GCAudioMorphData(std::string ptr);
    GCAudioMorphData(void *ptr);

    std::vector<float32> GetTimes() const;
    void SetTimes(std::vector<float32> value);
    std::vector<uint32> GetNameHashCodes() const;
    void SetNameHashCodes(std::vector<uint32> value);
    std::vector<CUtlString> GetNameStrings() const;
    void SetNameStrings(std::vector<CUtlString> value);
    float GetEaseIn() const;
    void SetEaseIn(float value);
    float GetEaseOut() const;
    void SetEaseOut(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCSeqIKLock
{
private:
    void *m_ptr;

public:
    GCSeqIKLock(std::string ptr);
    GCSeqIKLock(void *ptr);

    float GetPosWeight() const;
    void SetPosWeight(float value);
    float GetAngleWeight() const;
    void SetAngleWeight(float value);
    int16_t GetLocalBone() const;
    void SetLocalBone(int16_t value);
    bool GetBonesOrientedAlongPositiveX() const;
    void SetBonesOrientedAlongPositiveX(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GFeQuad_t
{
private:
    void *m_ptr;

public:
    GFeQuad_t(std::string ptr);
    GFeQuad_t(void *ptr);

    std::vector<uint16_t> GetNode() const;
    void SetNode(std::vector<uint16_t> value);
    float GetSlack() const;
    void SetSlack(float value);
    std::vector<Vector4D> GetShape() const;
    void SetShape(std::vector<Vector4D> value);

    std::string ToPtr();
    bool IsValid();
};

class GCSosGroupMatchPattern
{
private:
    void *m_ptr;

public:
    GCSosGroupMatchPattern(std::string ptr);
    GCSosGroupMatchPattern(void *ptr);

    CUtlString GetMatchSoundEventName() const;
    void SetMatchSoundEventName(CUtlString value);
    CUtlString GetMatchSoundEventSubString() const;
    void SetMatchSoundEventSubString(CUtlString value);
    float GetEntIndex() const;
    void SetEntIndex(float value);
    float GetOpvar() const;
    void SetOpvar(float value);
    CUtlString GetOpvarString() const;
    void SetOpvarString(CUtlString value);

    std::string ToPtr();
    bool IsValid();
};

class GCSSDSEndFrameViewInfo
{
private:
    void *m_ptr;

public:
    GCSSDSEndFrameViewInfo(std::string ptr);
    GCSSDSEndFrameViewInfo(void *ptr);

    uint64_t GetViewId() const;
    void SetViewId(uint64_t value);
    CUtlString GetViewName() const;
    void SetViewName(CUtlString value);

    std::string ToPtr();
    bool IsValid();
};

class GCNmExternalGraphNode
{
private:
    void *m_ptr;

public:
    GCNmExternalGraphNode(std::string ptr);
    GCNmExternalGraphNode(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCMoverUpdateNode
{
private:
    void *m_ptr;

public:
    GCMoverUpdateNode(std::string ptr);
    GCMoverUpdateNode(void *ptr);

    GCAnimInputDamping GetDamping() const;
    void SetDamping(GCAnimInputDamping value);
    AnimValueSource GetFacingTarget() const;
    void SetFacingTarget(AnimValueSource value);
    GCAnimParamHandle GetMoveVecParam() const;
    void SetMoveVecParam(GCAnimParamHandle value);
    GCAnimParamHandle GetMoveHeadingParam() const;
    void SetMoveHeadingParam(GCAnimParamHandle value);
    GCAnimParamHandle GetTurnToFaceParam() const;
    void SetTurnToFaceParam(GCAnimParamHandle value);
    float GetTurnToFaceOffset() const;
    void SetTurnToFaceOffset(float value);
    float GetTurnToFaceLimit() const;
    void SetTurnToFaceLimit(float value);
    bool GetAdditive() const;
    void SetAdditive(bool value);
    bool GetApplyMovement() const;
    void SetApplyMovement(bool value);
    bool GetOrientMovement() const;
    void SetOrientMovement(bool value);
    bool GetApplyRotation() const;
    void SetApplyRotation(bool value);
    bool GetLimitOnly() const;
    void SetLimitOnly(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GRnHull_t
{
private:
    void *m_ptr;

public:
    GRnHull_t(std::string ptr);
    GRnHull_t(void *ptr);

    Vector GetCentroid() const;
    void SetCentroid(Vector value);
    float GetMaxAngularRadius() const;
    void SetMaxAngularRadius(float value);
    GAABB_t GetBounds() const;
    void SetBounds(GAABB_t value);
    Vector GetOrthographicAreas() const;
    void SetOrthographicAreas(Vector value);
    matrix3x4_t GetMassProperties() const;
    void SetMassProperties(matrix3x4_t value);
    float GetVolume() const;
    void SetVolume(float value);
    float GetSurfaceArea() const;
    void SetSurfaceArea(float value);
    std::vector<GRnVertex_t> GetVertices() const;
    void SetVertices(std::vector<GRnVertex_t> value);
    std::vector<Vector> GetVertexPositions() const;
    void SetVertexPositions(std::vector<Vector> value);
    std::vector<GRnHalfEdge_t> GetEdges() const;
    void SetEdges(std::vector<GRnHalfEdge_t> value);
    std::vector<GRnFace_t> GetFaces() const;
    void SetFaces(std::vector<GRnFace_t> value);
    std::vector<GRnPlane_t> GetFacePlanes() const;
    void SetFacePlanes(std::vector<GRnPlane_t> value);
    uint32_t GetFlags() const;
    void SetFlags(uint32_t value);
    GCRegionSVM GetRegionSVM() const;
    void SetRegionSVM(GCRegionSVM* value);

    std::string ToPtr();
    bool IsValid();
};

class GCMoodVData
{
private:
    void *m_ptr;

public:
    GCMoodVData(std::string ptr);
    GCMoodVData(void *ptr);

    MoodType_t GetMoodType() const;
    void SetMoodType(MoodType_t value);

    std::string ToPtr();
    bool IsValid();
};

class GEventClientFrameSimulate_t
{
private:
    void *m_ptr;

public:
    GEventClientFrameSimulate_t(std::string ptr);
    GEventClientFrameSimulate_t(void *ptr);

    GEngineLoopState_t GetLoopState() const;
    void SetLoopState(GEngineLoopState_t value);
    float GetRealTime() const;
    void SetRealTime(float value);
    float GetFrameTime() const;
    void SetFrameTime(float value);
    double GetWhenScheduleSendTickPacket() const;
    void SetWhenScheduleSendTickPacket(double value);

    std::string ToPtr();
    bool IsValid();
};

class GCRagdollComponentUpdater
{
private:
    void *m_ptr;

public:
    GCRagdollComponentUpdater(std::string ptr);
    GCRagdollComponentUpdater(void *ptr);

    std::vector<GCAnimNodePath> GetRagdollNodePaths() const;
    void SetRagdollNodePaths(std::vector<GCAnimNodePath> value);
    std::vector<int32> GetBoneIndices() const;
    void SetBoneIndices(std::vector<int32> value);
    std::vector<CUtlString> GetBoneNames() const;
    void SetBoneNames(std::vector<CUtlString> value);
    std::vector<GWeightList> GetWeightLists() const;
    void SetWeightLists(std::vector<GWeightList> value);
    float GetSpringFrequencyMin() const;
    void SetSpringFrequencyMin(float value);
    float GetSpringFrequencyMax() const;
    void SetSpringFrequencyMax(float value);
    float GetMaxStretch() const;
    void SetMaxStretch(float value);
    bool GetSolidCollisionAtZeroWeight() const;
    void SetSolidCollisionAtZeroWeight(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCMotionNodeBlend1D
{
private:
    void *m_ptr;

public:
    GCMotionNodeBlend1D(std::string ptr);
    GCMotionNodeBlend1D(void *ptr);

    std::vector<GMotionBlendItem> GetBlendItems() const;
    void SetBlendItems(std::vector<GMotionBlendItem> value);
    int32_t GetParamIndex() const;
    void SetParamIndex(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCNmControlParameterVectorNode
{
private:
    void *m_ptr;

public:
    GCNmControlParameterVectorNode(std::string ptr);
    GCNmControlParameterVectorNode(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCPathHelperUpdateNode
{
private:
    void *m_ptr;

public:
    GCPathHelperUpdateNode(std::string ptr);
    GCPathHelperUpdateNode(void *ptr);

    float GetStoppingRadius() const;
    void SetStoppingRadius(float value);
    float GetStoppingSpeedScale() const;
    void SetStoppingSpeedScale(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCSeqPoseParamDesc
{
private:
    void *m_ptr;

public:
    GCSeqPoseParamDesc(std::string ptr);
    GCSeqPoseParamDesc(void *ptr);

    CBufferString GetName() const;
    void SetName(CBufferString value);
    float GetStart() const;
    void SetStart(float value);
    float GetEnd() const;
    void SetEnd(float value);
    float GetLoop() const;
    void SetLoop(float value);
    bool GetLooping() const;
    void SetLooping(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GVMixPitchShiftDesc_t
{
private:
    void *m_ptr;

public:
    GVMixPitchShiftDesc_t(std::string ptr);
    GVMixPitchShiftDesc_t(void *ptr);

    int32_t GetGrainSampleCount() const;
    void SetGrainSampleCount(int32_t value);
    float GetPitchShift() const;
    void SetPitchShift(float value);
    int32_t GetQuality() const;
    void SetQuality(int32_t value);
    int32_t GetProcType() const;
    void SetProcType(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCAudioSentence
{
private:
    void *m_ptr;

public:
    GCAudioSentence(std::string ptr);
    GCAudioSentence(void *ptr);

    bool GetShouldVoiceDuck() const;
    void SetShouldVoiceDuck(bool value);
    std::vector<GCAudioPhonemeTag> GetRunTimePhonemes() const;
    void SetRunTimePhonemes(std::vector<GCAudioPhonemeTag> value);
    std::vector<GCAudioEmphasisSample> GetEmphasisSamples() const;
    void SetEmphasisSamples(std::vector<GCAudioEmphasisSample> value);
    GCAudioMorphData GetMorphData() const;
    void SetMorphData(GCAudioMorphData value);

    std::string ToPtr();
    bool IsValid();
};

class GCRenderBufferBinding
{
private:
    void *m_ptr;

public:
    GCRenderBufferBinding(std::string ptr);
    GCRenderBufferBinding(void *ptr);

    uint64_t GetBuffer() const;
    void SetBuffer(uint64_t value);
    uint32_t GetBindOffsetBytes() const;
    void SetBindOffsetBytes(uint32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCParticleAnimTag
{
private:
    void *m_ptr;

public:
    GCParticleAnimTag(std::string ptr);
    GCParticleAnimTag(void *ptr);

    CUtlString GetParticleSystemName() const;
    void SetParticleSystemName(CUtlString value);
    CUtlString GetConfigName() const;
    void SetConfigName(CUtlString value);
    bool GetDetachFromOwner() const;
    void SetDetachFromOwner(bool value);
    bool GetStopWhenTagEnds() const;
    void SetStopWhenTagEnds(bool value);
    bool GetTagEndStopIsInstant() const;
    void SetTagEndStopIsInstant(bool value);
    CUtlString GetAttachmentName() const;
    void SetAttachmentName(CUtlString value);
    ParticleAttachment_t GetAttachmentType() const;
    void SetAttachmentType(ParticleAttachment_t value);
    CUtlString GetAttachmentCP1Name() const;
    void SetAttachmentCP1Name(CUtlString value);
    ParticleAttachment_t GetAttachmentCP1Type() const;
    void SetAttachmentCP1Type(ParticleAttachment_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCStaticPoseCacheBuilder
{
private:
    void *m_ptr;

public:
    GCStaticPoseCacheBuilder(std::string ptr);
    GCStaticPoseCacheBuilder(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCNmRootMotionData
{
private:
    void *m_ptr;

public:
    GCNmRootMotionData(std::string ptr);
    GCNmRootMotionData(void *ptr);

    int32_t GetNumFrames() const;
    void SetNumFrames(int32_t value);
    float GetAverageLinearVelocity() const;
    void SetAverageLinearVelocity(float value);
    float GetAverageAngularVelocityRadians() const;
    void SetAverageAngularVelocityRadians(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCAnimReplayFrame
{
private:
    void *m_ptr;

public:
    GCAnimReplayFrame(std::string ptr);
    GCAnimReplayFrame(void *ptr);

    float GetTimeStamp() const;
    void SetTimeStamp(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCNmVirtualParameterBoneMaskNode
{
private:
    void *m_ptr;

public:
    GCNmVirtualParameterBoneMaskNode(std::string ptr);
    GCNmVirtualParameterBoneMaskNode(void *ptr);

    int16_t GetChildNodeIdx() const;
    void SetChildNodeIdx(int16_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCBlockSelectionMetricEvaluator
{
private:
    void *m_ptr;

public:
    GCBlockSelectionMetricEvaluator(std::string ptr);
    GCBlockSelectionMetricEvaluator(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCMotionGraph
{
private:
    void *m_ptr;

public:
    GCMotionGraph(std::string ptr);
    GCMotionGraph(void *ptr);

    GCParamSpanUpdater GetParamSpans() const;
    void SetParamSpans(GCParamSpanUpdater value);
    std::vector<GTagSpan_t> GetTags() const;
    void SetTags(std::vector<GTagSpan_t> value);
    int32_t GetParameterCount() const;
    void SetParameterCount(int32_t value);
    int32_t GetConfigStartIndex() const;
    void SetConfigStartIndex(int32_t value);
    int32_t GetConfigCount() const;
    void SetConfigCount(int32_t value);
    bool GetLoop() const;
    void SetLoop(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCSosSoundEventGroupSchema
{
private:
    void *m_ptr;

public:
    GCSosSoundEventGroupSchema(std::string ptr);
    GCSosSoundEventGroupSchema(void *ptr);

    CUtlString GetName() const;
    void SetName(CUtlString value);
    SosGroupType_t GetType() const;
    void SetType(SosGroupType_t value);
    bool GetIsBlocking() const;
    void SetIsBlocking(bool value);
    int32_t GetBlockMaxCount() const;
    void SetBlockMaxCount(int32_t value);
    bool GetInvertMatch() const;
    void SetInvertMatch(bool value);
    GCSosGroupMatchPattern GetMatchPattern() const;
    void SetMatchPattern(GCSosGroupMatchPattern value);
    GCSosGroupBranchPattern GetBranchPattern() const;
    void SetBranchPattern(GCSosGroupBranchPattern value);
    float GetLifeSpanTime() const;
    void SetLifeSpanTime(float value);
    std::vector<GCSosGroupActionSchema*> GetActions() const;
    void SetActions(std::vector<GCSosGroupActionSchema*> value);

    std::string ToPtr();
    bool IsValid();
};

class GCFootMotion
{
private:
    void *m_ptr;

public:
    GCFootMotion(std::string ptr);
    GCFootMotion(void *ptr);

    std::vector<GCFootStride> GetStrides() const;
    void SetStrides(std::vector<GCFootStride> value);
    CUtlString GetName() const;
    void SetName(CUtlString value);
    bool GetAdditive() const;
    void SetAdditive(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCDampedValueUpdateItem
{
private:
    void *m_ptr;

public:
    GCDampedValueUpdateItem(std::string ptr);
    GCDampedValueUpdateItem(void *ptr);

    GCAnimInputDamping GetDamping() const;
    void SetDamping(GCAnimInputDamping value);
    GCAnimParamHandle GetParamIn() const;
    void SetParamIn(GCAnimParamHandle value);
    GCAnimParamHandle GetParamOut() const;
    void SetParamOut(GCAnimParamHandle value);

    std::string ToPtr();
    bool IsValid();
};

class GRnHalfEdge_t
{
private:
    void *m_ptr;

public:
    GRnHalfEdge_t(std::string ptr);
    GRnHalfEdge_t(void *ptr);

    uint8_t GetNext() const;
    void SetNext(uint8_t value);
    uint8_t GetTwin() const;
    void SetTwin(uint8_t value);
    uint8_t GetOrigin() const;
    void SetOrigin(uint8_t value);
    uint8_t GetFace() const;
    void SetFace(uint8_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCAnimDataChannelDesc
{
private:
    void *m_ptr;

public:
    GCAnimDataChannelDesc(std::string ptr);
    GCAnimDataChannelDesc(void *ptr);

    CBufferString GetChannelClass() const;
    void SetChannelClass(CBufferString value);
    CBufferString GetVariableName() const;
    void SetVariableName(CBufferString value);
    int32_t GetFlags() const;
    void SetFlags(int32_t value);
    int32_t GetType() const;
    void SetType(int32_t value);
    CBufferString GetGrouping() const;
    void SetGrouping(CBufferString value);
    CBufferString GetDescription() const;
    void SetDescription(CBufferString value);
    std::vector<CBufferString> GetElementNameArray() const;
    void SetElementNameArray(std::vector<CBufferString> value);
    std::vector<int32> GetElementIndexArray() const;
    void SetElementIndexArray(std::vector<int32> value);
    std::vector<uint32> GetElementMaskArray() const;
    void SetElementMaskArray(std::vector<uint32> value);

    std::string ToPtr();
    bool IsValid();
};

class GEventClientProcessNetworking_t
{
private:
    void *m_ptr;

public:
    GEventClientProcessNetworking_t(std::string ptr);
    GEventClientProcessNetworking_t(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCModelConfigList
{
private:
    void *m_ptr;

public:
    GCModelConfigList(std::string ptr);
    GCModelConfigList(void *ptr);

    bool GetHideMaterialGroupInTools() const;
    void SetHideMaterialGroupInTools(bool value);
    bool GetHideRenderColorInTools() const;
    void SetHideRenderColorInTools(bool value);
    std::vector<GCModelConfig*> GetConfigs() const;
    void SetConfigs(std::vector<GCModelConfig*> value);

    std::string ToPtr();
    bool IsValid();
};

class GCNmGraphVariation
{
private:
    void *m_ptr;

public:
    GCNmGraphVariation(std::string ptr);
    GCNmGraphVariation(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCSosGroupActionTimeBlockLimitSchema
{
private:
    void *m_ptr;

public:
    GCSosGroupActionTimeBlockLimitSchema(std::string ptr);
    GCSosGroupActionTimeBlockLimitSchema(void *ptr);

    int32_t GetMaxCount() const;
    void SetMaxCount(int32_t value);
    float GetMaxDuration() const;
    void SetMaxDuration(float value);

    std::string ToPtr();
    bool IsValid();
};

class GVMixDynamics3BandDesc_t
{
private:
    void *m_ptr;

public:
    GVMixDynamics3BandDesc_t(std::string ptr);
    GVMixDynamics3BandDesc_t(void *ptr);

    float GetFldbGainOutput() const;
    void SetFldbGainOutput(float value);
    float GetRMSTimeMS() const;
    void SetRMSTimeMS(float value);
    float GetFldbKneeWidth() const;
    void SetFldbKneeWidth(float value);
    float GetDepth() const;
    void SetDepth(float value);
    float GetWetMix() const;
    void SetWetMix(float value);
    float GetTimeScale() const;
    void SetTimeScale(float value);
    float GetLowCutoffFreq() const;
    void SetLowCutoffFreq(float value);
    float GetHighCutoffFreq() const;
    void SetHighCutoffFreq(float value);
    bool GetPeakMode() const;
    void SetPeakMode(bool value);
    std::vector<GVMixDynamicsBand_t> GetBandDesc() const;
    void SetBandDesc(std::vector<GVMixDynamicsBand_t> value);

    std::string ToPtr();
    bool IsValid();
};

class GCModelConfigElement_SetMaterialGroup
{
private:
    void *m_ptr;

public:
    GCModelConfigElement_SetMaterialGroup(std::string ptr);
    GCModelConfigElement_SetMaterialGroup(void *ptr);

    CUtlString GetMaterialGroupName() const;
    void SetMaterialGroupName(CUtlString value);

    std::string ToPtr();
    bool IsValid();
};

class GCMovementHandshakeAnimTag
{
private:
    void *m_ptr;

public:
    GCMovementHandshakeAnimTag(std::string ptr);
    GCMovementHandshakeAnimTag(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCSeqScaleSet
{
private:
    void *m_ptr;

public:
    GCSeqScaleSet(std::string ptr);
    GCSeqScaleSet(void *ptr);

    CBufferString GetName() const;
    void SetName(CBufferString value);
    bool GetRootOffset() const;
    void SetRootOffset(bool value);
    Vector GetRootOffset1() const;
    void SetRootOffset1(Vector value);
    std::vector<int16> GetLocalBoneArray() const;
    void SetLocalBoneArray(std::vector<int16> value);
    std::vector<float32> GetBoneScaleArray() const;
    void SetBoneScaleArray(std::vector<float32> value);

    std::string ToPtr();
    bool IsValid();
};

class GEventClientProcessGameInput_t
{
private:
    void *m_ptr;

public:
    GEventClientProcessGameInput_t(std::string ptr);
    GEventClientProcessGameInput_t(void *ptr);

    GEngineLoopState_t GetLoopState() const;
    void SetLoopState(GEngineLoopState_t value);
    float GetRealTime() const;
    void SetRealTime(float value);
    float GetFrameTime() const;
    void SetFrameTime(float value);

    std::string ToPtr();
    bool IsValid();
};

class GVsInputSignatureElement_t
{
private:
    void *m_ptr;

public:
    GVsInputSignatureElement_t(std::string ptr);
    GVsInputSignatureElement_t(void *ptr);

    std::string GetName() const;
    void SetName(std::string value);
    std::string GetSemantic() const;
    void SetSemantic(std::string value);
    std::string GetD3DSemanticName() const;
    void SetD3DSemanticName(std::string value);
    int32_t GetD3DSemanticIndex() const;
    void SetD3DSemanticIndex(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCompositeMaterialMatchFilter_t
{
private:
    void *m_ptr;

public:
    GCompositeMaterialMatchFilter_t(std::string ptr);
    GCompositeMaterialMatchFilter_t(void *ptr);

    CompositeMaterialMatchFilterType_t GetCompositeMaterialMatchFilterType() const;
    void SetCompositeMaterialMatchFilterType(CompositeMaterialMatchFilterType_t value);
    CUtlString GetStrMatchFilter() const;
    void SetStrMatchFilter(CUtlString value);
    CUtlString GetStrMatchValue() const;
    void SetStrMatchValue(CUtlString value);
    bool GetPassWhenTrue() const;
    void SetPassWhenTrue(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GVertexPositionColor_t
{
private:
    void *m_ptr;

public:
    GVertexPositionColor_t(std::string ptr);
    GVertexPositionColor_t(void *ptr);

    Vector GetPosition() const;
    void SetPosition(Vector value);

    std::string ToPtr();
    bool IsValid();
};

class GCFootTrajectories
{
private:
    void *m_ptr;

public:
    GCFootTrajectories(std::string ptr);
    GCFootTrajectories(void *ptr);

    std::vector<GCFootTrajectory> GetTrajectories() const;
    void SetTrajectories(std::vector<GCFootTrajectory> value);

    std::string ToPtr();
    bool IsValid();
};

class GSceneObject_t
{
private:
    void *m_ptr;

public:
    GSceneObject_t(std::string ptr);
    GSceneObject_t(void *ptr);

    uint32_t GetObjectID() const;
    void SetObjectID(uint32_t value);
    std::vector<Vector4D> GetTransform() const;
    void SetTransform(std::vector<Vector4D> value);
    float GetFadeStartDistance() const;
    void SetFadeStartDistance(float value);
    float GetFadeEndDistance() const;
    void SetFadeEndDistance(float value);
    Vector4D GetTintColor() const;
    void SetTintColor(Vector4D value);
    CUtlString GetSkin() const;
    void SetSkin(CUtlString value);
    ObjectTypeFlags_t GetObjectTypeFlags() const;
    void SetObjectTypeFlags(ObjectTypeFlags_t value);
    Vector GetLightingOrigin() const;
    void SetLightingOrigin(Vector value);
    int16_t GetOverlayRenderOrder() const;
    void SetOverlayRenderOrder(int16_t value);
    int16_t GetLODOverride() const;
    void SetLODOverride(int16_t value);
    int32_t GetCubeMapPrecomputedHandshake() const;
    void SetCubeMapPrecomputedHandshake(int32_t value);
    int32_t GetLightProbeVolumePrecomputedHandshake() const;
    void SetLightProbeVolumePrecomputedHandshake(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCSSDSMsg_ViewTarget
{
private:
    void *m_ptr;

public:
    GCSSDSMsg_ViewTarget(std::string ptr);
    GCSSDSMsg_ViewTarget(void *ptr);

    CUtlString GetName() const;
    void SetName(CUtlString value);
    uint64_t GetTextureId() const;
    void SetTextureId(uint64_t value);
    int32_t GetWidth() const;
    void SetWidth(int32_t value);
    int32_t GetHeight() const;
    void SetHeight(int32_t value);
    int32_t GetRequestedWidth() const;
    void SetRequestedWidth(int32_t value);
    int32_t GetRequestedHeight() const;
    void SetRequestedHeight(int32_t value);
    int32_t GetNumMipLevels() const;
    void SetNumMipLevels(int32_t value);
    int32_t GetDepth() const;
    void SetDepth(int32_t value);
    int32_t GetMultisampleNumSamples() const;
    void SetMultisampleNumSamples(int32_t value);
    int32_t GetFormat() const;
    void SetFormat(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GVMixSubgraphSwitchDesc_t
{
private:
    void *m_ptr;

public:
    GVMixSubgraphSwitchDesc_t(std::string ptr);
    GVMixSubgraphSwitchDesc_t(void *ptr);

    VMixSubgraphSwitchInterpolationType_t GetInterpolationMode() const;
    void SetInterpolationMode(VMixSubgraphSwitchInterpolationType_t value);
    bool GetOnlyTailsOnFadeOut() const;
    void SetOnlyTailsOnFadeOut(bool value);
    float GetInterpolationTime() const;
    void SetInterpolationTime(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCNmTransitionNode
{
private:
    void *m_ptr;

public:
    GCNmTransitionNode(std::string ptr);
    GCNmTransitionNode(void *ptr);

    int16_t GetTargetCNmStateNodeIdx() const;
    void SetTargetCNmStateNodeIdx(int16_t value);
    int16_t GetDurationOverrideNodeIdx() const;
    void SetDurationOverrideNodeIdx(int16_t value);
    int16_t GetSyncEventOffsetOverrideNodeIdx() const;
    void SetSyncEventOffsetOverrideNodeIdx(int16_t value);
    int16_t GetStartBoneMaskNodeIdx() const;
    void SetStartBoneMaskNodeIdx(int16_t value);
    float GetDuration() const;
    void SetDuration(float value);
    GNmPercent_t GetBoneMaskBlendInTimePercentage() const;
    void SetBoneMaskBlendInTimePercentage(GNmPercent_t value);
    float GetSyncEventOffset() const;
    void SetSyncEventOffset(float value);
    GCNmTransitionNode GetTransitionOptions() const;
    void SetTransitionOptions(GCNmTransitionNode value);
    int16_t GetTargetSyncIDNodeIdx() const;
    void SetTargetSyncIDNodeIdx(int16_t value);
    NmEasingOperation_t GetBlendWeightEasing() const;
    void SetBlendWeightEasing(NmEasingOperation_t value);
    NmRootMotionBlendMode_t GetRootMotionBlend() const;
    void SetRootMotionBlend(NmRootMotionBlendMode_t value);

    std::string ToPtr();
    bool IsValid();
};

class GMotionDBIndex
{
private:
    void *m_ptr;

public:
    GMotionDBIndex(std::string ptr);
    GMotionDBIndex(void *ptr);

    uint32_t GetIndex() const;
    void SetIndex(uint32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCToggleComponentActionUpdater
{
private:
    void *m_ptr;

public:
    GCToggleComponentActionUpdater(std::string ptr);
    GCToggleComponentActionUpdater(void *ptr);

    GAnimComponentID GetComponentID() const;
    void SetComponentID(GAnimComponentID value);
    bool GetSetEnabled() const;
    void SetSetEnabled(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCNmControlParameterIDNode
{
private:
    void *m_ptr;

public:
    GCNmControlParameterIDNode(std::string ptr);
    GCNmControlParameterIDNode(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GPostProcessingTonemapParameters_t
{
private:
    void *m_ptr;

public:
    GPostProcessingTonemapParameters_t(std::string ptr);
    GPostProcessingTonemapParameters_t(void *ptr);

    float GetExposureBias() const;
    void SetExposureBias(float value);
    float GetShoulderStrength() const;
    void SetShoulderStrength(float value);
    float GetLinearStrength() const;
    void SetLinearStrength(float value);
    float GetLinearAngle() const;
    void SetLinearAngle(float value);
    float GetToeStrength() const;
    void SetToeStrength(float value);
    float GetToeNum() const;
    void SetToeNum(float value);
    float GetToeDenom() const;
    void SetToeDenom(float value);
    float GetWhitePoint() const;
    void SetWhitePoint(float value);
    float GetLuminanceSource() const;
    void SetLuminanceSource(float value);
    float GetExposureBiasShadows() const;
    void SetExposureBiasShadows(float value);
    float GetExposureBiasHighlights() const;
    void SetExposureBiasHighlights(float value);
    float GetMinShadowLum() const;
    void SetMinShadowLum(float value);
    float GetMaxShadowLum() const;
    void SetMaxShadowLum(float value);
    float GetMinHighlightLum() const;
    void SetMinHighlightLum(float value);
    float GetMaxHighlightLum() const;
    void SetMaxHighlightLum(float value);

    std::string ToPtr();
    bool IsValid();
};

class GVMixAutoFilterDesc_t
{
private:
    void *m_ptr;

public:
    GVMixAutoFilterDesc_t(std::string ptr);
    GVMixAutoFilterDesc_t(void *ptr);

    float GetEnvelopeAmount() const;
    void SetEnvelopeAmount(float value);
    float GetAttackTimeMS() const;
    void SetAttackTimeMS(float value);
    float GetReleaseTimeMS() const;
    void SetReleaseTimeMS(float value);
    GVMixFilterDesc_t GetFilter() const;
    void SetFilter(GVMixFilterDesc_t value);
    float GetLFOAmount() const;
    void SetLFOAmount(float value);
    float GetLFORate() const;
    void SetLFORate(float value);
    float GetPhase() const;
    void SetPhase(float value);
    VMixLFOShape_t GetLFOShape() const;
    void SetLFOShape(VMixLFOShape_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCSeqMultiFetch
{
private:
    void *m_ptr;

public:
    GCSeqMultiFetch(std::string ptr);
    GCSeqMultiFetch(void *ptr);

    GCSeqMultiFetchFlag GetFlags() const;
    void SetFlags(GCSeqMultiFetchFlag value);
    std::vector<int16> GetLocalReferenceArray() const;
    void SetLocalReferenceArray(std::vector<int16> value);
    std::vector<int32_t> GetGroupSize() const;
    void SetGroupSize(std::vector<int32_t> value);
    std::vector<int32_t> GetLocalPose() const;
    void SetLocalPose(std::vector<int32_t> value);
    std::vector<float32> GetPoseKeyArray0() const;
    void SetPoseKeyArray0(std::vector<float32> value);
    std::vector<float32> GetPoseKeyArray1() const;
    void SetPoseKeyArray1(std::vector<float32> value);
    int32_t GetLocalCyclePoseParameter() const;
    void SetLocalCyclePoseParameter(int32_t value);
    bool GetCalculatePoseParameters() const;
    void SetCalculatePoseParameters(bool value);
    bool GetFixedBlendWeight() const;
    void SetFixedBlendWeight(bool value);
    std::vector<float> GetFixedBlendWeightVals() const;
    void SetFixedBlendWeightVals(std::vector<float> value);

    std::string ToPtr();
    bool IsValid();
};

class GCNmStateMachineNode
{
private:
    void *m_ptr;

public:
    GCNmStateMachineNode(std::string ptr);
    GCNmStateMachineNode(void *ptr);

    int16_t GetDefaultStateIndex() const;
    void SetDefaultStateIndex(int16_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCBoneConstraintPoseSpaceMorph
{
private:
    void *m_ptr;

public:
    GCBoneConstraintPoseSpaceMorph(std::string ptr);
    GCBoneConstraintPoseSpaceMorph(void *ptr);

    CUtlString GetBoneName() const;
    void SetBoneName(CUtlString value);
    CUtlString GetAttachmentName() const;
    void SetAttachmentName(CUtlString value);
    std::vector<CUtlString> GetOutputMorph() const;
    void SetOutputMorph(std::vector<CUtlString> value);
    std::vector<GCBoneConstraintPoseSpaceMorph> GetInputList() const;
    void SetInputList(std::vector<GCBoneConstraintPoseSpaceMorph> value);
    bool GetClamp() const;
    void SetClamp(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCSSDSMsg_PreLayer
{
private:
    void *m_ptr;

public:
    GCSSDSMsg_PreLayer(std::string ptr);
    GCSSDSMsg_PreLayer(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCSelectorUpdateNode
{
private:
    void *m_ptr;

public:
    GCSelectorUpdateNode(std::string ptr);
    GCSelectorUpdateNode(void *ptr);

    std::vector<GCAnimUpdateNodeRef> GetChildren() const;
    void SetChildren(std::vector<GCAnimUpdateNodeRef> value);
    std::vector<int8> GetTags() const;
    void SetTags(std::vector<int8> value);
    GCBlendCurve GetBlendCurve() const;
    void SetBlendCurve(GCBlendCurve value);
    GCAnimParamHandle GetParameter() const;
    void SetParameter(GCAnimParamHandle value);
    int32_t GetTagIndex() const;
    void SetTagIndex(int32_t value);
    SelectorTagBehavior_t GetTagBehavior() const;
    void SetTagBehavior(SelectorTagBehavior_t value);
    bool GetResetOnChange() const;
    void SetResetOnChange(bool value);
    bool GetLockWhenWaning() const;
    void SetLockWhenWaning(bool value);
    bool GetSyncCyclesOnChange() const;
    void SetSyncCyclesOnChange(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCAimCameraUpdateNode
{
private:
    void *m_ptr;

public:
    GCAimCameraUpdateNode(std::string ptr);
    GCAimCameraUpdateNode(void *ptr);

    GCAnimParamHandle GetParameterPosition() const;
    void SetParameterPosition(GCAnimParamHandle value);
    GCAnimParamHandle GetParameterOrientation() const;
    void SetParameterOrientation(GCAnimParamHandle value);
    GCAnimParamHandle GetParameterSpineRotationWeight() const;
    void SetParameterSpineRotationWeight(GCAnimParamHandle value);
    GCAnimParamHandle GetParameterPelvisOffset() const;
    void SetParameterPelvisOffset(GCAnimParamHandle value);
    GCAnimParamHandle GetParameterUseIK() const;
    void SetParameterUseIK(GCAnimParamHandle value);
    GCAnimParamHandle GetParameterWeaponDepenetrationDistance() const;
    void SetParameterWeaponDepenetrationDistance(GCAnimParamHandle value);
    GCAnimParamHandle GetParameterCameraClearanceDistance() const;
    void SetParameterCameraClearanceDistance(GCAnimParamHandle value);
    GAimCameraOpFixedSettings_t GetOpFixedSettings() const;
    void SetOpFixedSettings(GAimCameraOpFixedSettings_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCFootStepTriggerUpdateNode
{
private:
    void *m_ptr;

public:
    GCFootStepTriggerUpdateNode(std::string ptr);
    GCFootStepTriggerUpdateNode(void *ptr);

    std::vector<GFootStepTrigger> GetTriggers() const;
    void SetTriggers(std::vector<GFootStepTrigger> value);
    float GetTolerance() const;
    void SetTolerance(float value);

    std::string ToPtr();
    bool IsValid();
};

class GRnSoftbodyParticle_t
{
private:
    void *m_ptr;

public:
    GRnSoftbodyParticle_t(std::string ptr);
    GRnSoftbodyParticle_t(void *ptr);

    float GetMassInv() const;
    void SetMassInv(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCSingleFrameUpdateNode
{
private:
    void *m_ptr;

public:
    GCSingleFrameUpdateNode(std::string ptr);
    GCSingleFrameUpdateNode(void *ptr);

    GCPoseHandle GetPoseCacheHandle() const;
    void SetPoseCacheHandle(GCPoseHandle value);
    float GetCycle() const;
    void SetCycle(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCSeqSynthAnimDesc
{
private:
    void *m_ptr;

public:
    GCSeqSynthAnimDesc(std::string ptr);
    GCSeqSynthAnimDesc(void *ptr);

    CBufferString GetName() const;
    void SetName(CBufferString value);
    GCSeqSeqDescFlag GetFlags() const;
    void SetFlags(GCSeqSeqDescFlag value);
    GCSeqTransition GetTransition() const;
    void SetTransition(GCSeqTransition value);
    int16_t GetLocalBaseReference() const;
    void SetLocalBaseReference(int16_t value);
    int16_t GetLocalBoneMask() const;
    void SetLocalBoneMask(int16_t value);
    std::vector<GCAnimActivity> GetActivityArray() const;
    void SetActivityArray(std::vector<GCAnimActivity> value);

    std::string ToPtr();
    bool IsValid();
};

class GCDirectPlaybackTagData
{
private:
    void *m_ptr;

public:
    GCDirectPlaybackTagData(std::string ptr);
    GCDirectPlaybackTagData(void *ptr);

    CUtlString GetSequenceName() const;
    void SetSequenceName(CUtlString value);
    std::vector<GTagSpan_t> GetTags() const;
    void SetTags(std::vector<GTagSpan_t> value);

    std::string ToPtr();
    bool IsValid();
};

class GEventFrameBoundary_t
{
private:
    void *m_ptr;

public:
    GEventFrameBoundary_t(std::string ptr);
    GEventFrameBoundary_t(void *ptr);

    float GetFrameTime() const;
    void SetFrameTime(float value);

    std::string ToPtr();
    bool IsValid();
};

class GWorldNode_t
{
private:
    void *m_ptr;

public:
    GWorldNode_t(std::string ptr);
    GWorldNode_t(void *ptr);

    std::vector<GSceneObject_t> GetSceneObjects() const;
    void SetSceneObjects(std::vector<GSceneObject_t> value);
    std::vector<GInfoOverlayData_t> GetInfoOverlays() const;
    void SetInfoOverlays(std::vector<GInfoOverlayData_t> value);
    std::vector<uint16> GetVisClusterMembership() const;
    void SetVisClusterMembership(std::vector<uint16> value);
    std::vector<GAggregateSceneObject_t> GetAggregateSceneObjects() const;
    void SetAggregateSceneObjects(std::vector<GAggregateSceneObject_t> value);
    std::vector<GClutterSceneObject_t> GetClutterSceneObjects() const;
    void SetClutterSceneObjects(std::vector<GClutterSceneObject_t> value);
    std::vector<GExtraVertexStreamOverride_t> GetExtraVertexStreamOverrides() const;
    void SetExtraVertexStreamOverrides(std::vector<GExtraVertexStreamOverride_t> value);
    std::vector<GMaterialOverride_t> GetMaterialOverrides() const;
    void SetMaterialOverrides(std::vector<GMaterialOverride_t> value);
    std::vector<GWorldNodeOnDiskBufferData_t> GetExtraVertexStreams() const;
    void SetExtraVertexStreams(std::vector<GWorldNodeOnDiskBufferData_t> value);
    std::vector<CUtlString> GetLayerNames() const;
    void SetLayerNames(std::vector<CUtlString> value);
    std::vector<uint8> GetSceneObjectLayerIndices() const;
    void SetSceneObjectLayerIndices(std::vector<uint8> value);
    std::vector<uint8> GetOverlayLayerIndices() const;
    void SetOverlayLayerIndices(std::vector<uint8> value);
    CUtlString GetGrassFileName() const;
    void SetGrassFileName(CUtlString value);
    GBakedLightingInfo_t GetNodeLightingInfo() const;
    void SetNodeLightingInfo(GBakedLightingInfo_t value);

    std::string ToPtr();
    bool IsValid();
};

class GAggregateMeshInfo_t
{
private:
    void *m_ptr;

public:
    GAggregateMeshInfo_t(std::string ptr);
    GAggregateMeshInfo_t(void *ptr);

    uint32_t GetVisClusterMemberOffset() const;
    void SetVisClusterMemberOffset(uint32_t value);
    uint8_t GetVisClusterMemberCount() const;
    void SetVisClusterMemberCount(uint8_t value);
    bool GetHasTransform() const;
    void SetHasTransform(bool value);
    int16_t GetDrawCallIndex() const;
    void SetDrawCallIndex(int16_t value);
    int16_t GetLODSetupIndex() const;
    void SetLODSetupIndex(int16_t value);
    uint8_t GetLODGroupMask() const;
    void SetLODGroupMask(uint8_t value);
    Color GetTintColor() const;
    void SetTintColor(Color value);
    ObjectTypeFlags_t GetObjectFlags() const;
    void SetObjectFlags(ObjectTypeFlags_t value);
    int32_t GetLightProbeVolumePrecomputedHandshake() const;
    void SetLightProbeVolumePrecomputedHandshake(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GFeSimdRodConstraintAnim_t
{
private:
    void *m_ptr;

public:
    GFeSimdRodConstraintAnim_t(std::string ptr);
    GFeSimdRodConstraintAnim_t(void *ptr);

    float Get4Weight0() const;
    void Set4Weight0(float value);
    float Get4RelaxationFactor() const;
    void Set4RelaxationFactor(float value);

    std::string ToPtr();
    bool IsValid();
};

class GEventPostAdvanceTick_t
{
private:
    void *m_ptr;

public:
    GEventPostAdvanceTick_t(std::string ptr);
    GEventPostAdvanceTick_t(void *ptr);

    int32_t GetCurrentTick() const;
    void SetCurrentTick(int32_t value);
    int32_t GetCurrentTickThisFrame() const;
    void SetCurrentTickThisFrame(int32_t value);
    int32_t GetTotalTicksThisFrame() const;
    void SetTotalTicksThisFrame(int32_t value);
    int32_t GetTotalTicks() const;
    void SetTotalTicks(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GFeBuildBoxRigid_t
{
private:
    void *m_ptr;

public:
    GFeBuildBoxRigid_t(std::string ptr);
    GFeBuildBoxRigid_t(void *ptr);

    int32_t GetPriority() const;
    void SetPriority(int32_t value);
    uint32_t GetVertexMapHash() const;
    void SetVertexMapHash(uint32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GIPhysicsPlayerController
{
private:
    void *m_ptr;

public:
    GIPhysicsPlayerController(std::string ptr);
    GIPhysicsPlayerController(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GEventServerPostAdvanceTick_t
{
private:
    void *m_ptr;

public:
    GEventServerPostAdvanceTick_t(std::string ptr);
    GEventServerPostAdvanceTick_t(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GEventClientPreOutput_t
{
private:
    void *m_ptr;

public:
    GEventClientPreOutput_t(std::string ptr);
    GEventClientPreOutput_t(void *ptr);

    GEngineLoopState_t GetLoopState() const;
    void SetLoopState(GEngineLoopState_t value);
    double GetRenderTime() const;
    void SetRenderTime(double value);
    double GetRenderFrameTime() const;
    void SetRenderFrameTime(double value);
    double GetRenderFrameTimeUnbounded() const;
    void SetRenderFrameTimeUnbounded(double value);
    float GetRealTime() const;
    void SetRealTime(float value);
    bool GetRenderOnly() const;
    void SetRenderOnly(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GRnSoftbodySpring_t
{
private:
    void *m_ptr;

public:
    GRnSoftbodySpring_t(std::string ptr);
    GRnSoftbodySpring_t(void *ptr);

    std::vector<uint16_t> GetParticle() const;
    void SetParticle(std::vector<uint16_t> value);
    float GetLength() const;
    void SetLength(float value);

    std::string ToPtr();
    bool IsValid();
};

class GFeNodeReverseOffset_t
{
private:
    void *m_ptr;

public:
    GFeNodeReverseOffset_t(std::string ptr);
    GFeNodeReverseOffset_t(void *ptr);

    Vector GetOffset() const;
    void SetOffset(Vector value);
    uint16_t GetBoneCtrl() const;
    void SetBoneCtrl(uint16_t value);
    uint16_t GetTargetNode() const;
    void SetTargetNode(uint16_t value);

    std::string ToPtr();
    bool IsValid();
};

class GRnHullDesc_t
{
private:
    void *m_ptr;

public:
    GRnHullDesc_t(std::string ptr);
    GRnHullDesc_t(void *ptr);

    GRnHull_t GetHull() const;
    void SetHull(GRnHull_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCSymbolAnimParameter
{
private:
    void *m_ptr;

public:
    GCSymbolAnimParameter(std::string ptr);
    GCSymbolAnimParameter(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GFeStiffHingeBuild_t
{
private:
    void *m_ptr;

public:
    GFeStiffHingeBuild_t(std::string ptr);
    GFeStiffHingeBuild_t(void *ptr);

    float GetMaxAngle() const;
    void SetMaxAngle(float value);
    float GetStrength() const;
    void SetStrength(float value);
    std::vector<float> GetMotionBias() const;
    void SetMotionBias(std::vector<float> value);
    std::vector<uint16_t> GetNode() const;
    void SetNode(std::vector<uint16_t> value);

    std::string ToPtr();
    bool IsValid();
};

class GExtraVertexStreamOverride_t
{
private:
    void *m_ptr;

public:
    GExtraVertexStreamOverride_t(std::string ptr);
    GExtraVertexStreamOverride_t(void *ptr);

    uint32_t GetSubSceneObject() const;
    void SetSubSceneObject(uint32_t value);
    uint32_t GetDrawCallIndex() const;
    void SetDrawCallIndex(uint32_t value);
    MeshDrawPrimitiveFlags_t GetAdditionalMeshDrawPrimitiveFlags() const;
    void SetAdditionalMeshDrawPrimitiveFlags(MeshDrawPrimitiveFlags_t value);
    GCRenderBufferBinding GetExtraBufferBinding() const;
    void SetExtraBufferBinding(GCRenderBufferBinding value);

    std::string ToPtr();
    bool IsValid();
};

class GEntityIOConnectionData_t
{
private:
    void *m_ptr;

public:
    GEntityIOConnectionData_t(std::string ptr);
    GEntityIOConnectionData_t(void *ptr);

    CUtlString GetOutputName() const;
    void SetOutputName(CUtlString value);
    uint32_t GetTargetType() const;
    void SetTargetType(uint32_t value);
    CUtlString GetTargetName() const;
    void SetTargetName(CUtlString value);
    CUtlString GetInputName() const;
    void SetInputName(CUtlString value);
    CUtlString GetOverrideParam() const;
    void SetOverrideParam(CUtlString value);
    float GetDelay() const;
    void SetDelay(float value);
    int32_t GetTimesToFire() const;
    void SetTimesToFire(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GSkeletonAnimCapture_t
{
private:
    void *m_ptr;

public:
    GSkeletonAnimCapture_t(std::string ptr);
    GSkeletonAnimCapture_t(void *ptr);

    CEntityIndex GetEntIndex() const;
    void SetEntIndex(CEntityIndex value);
    CEntityIndex GetEntParent() const;
    void SetEntParent(CEntityIndex value);
    std::vector<CEntityIndex> GetImportedCollision() const;
    void SetImportedCollision(std::vector<CEntityIndex> value);
    CUtlString GetModelName() const;
    void SetModelName(CUtlString value);
    CUtlString GetCaptureName() const;
    void SetCaptureName(CUtlString value);
    std::vector<GSkeletonAnimCapture_t> GetModelBindPose() const;
    void SetModelBindPose(std::vector<GSkeletonAnimCapture_t> value);
    std::vector<GSkeletonAnimCapture_t> GetFeModelInitPose() const;
    void SetFeModelInitPose(std::vector<GSkeletonAnimCapture_t> value);
    int32_t GetFlexControllers() const;
    void SetFlexControllers(int32_t value);
    bool GetPredicted() const;
    void SetPredicted(bool value);
    std::vector<GSkeletonAnimCapture_t> GetFrames() const;
    void SetFrames(std::vector<GSkeletonAnimCapture_t> value);

    std::string ToPtr();
    bool IsValid();
};

class GCStateActionUpdater
{
private:
    void *m_ptr;

public:
    GCStateActionUpdater(std::string ptr);
    GCStateActionUpdater(void *ptr);

    StateActionBehavior GetBehavior() const;
    void SetBehavior(StateActionBehavior value);

    std::string ToPtr();
    bool IsValid();
};

class GCSeqS1SeqDesc
{
private:
    void *m_ptr;

public:
    GCSeqS1SeqDesc(std::string ptr);
    GCSeqS1SeqDesc(void *ptr);

    CBufferString GetName() const;
    void SetName(CBufferString value);
    GCSeqSeqDescFlag GetFlags() const;
    void SetFlags(GCSeqSeqDescFlag value);
    GCSeqMultiFetch GetFetch() const;
    void SetFetch(GCSeqMultiFetch value);
    int32_t GetLocalWeightlist() const;
    void SetLocalWeightlist(int32_t value);
    std::vector<GCSeqAutoLayer> GetAutoLayerArray() const;
    void SetAutoLayerArray(std::vector<GCSeqAutoLayer> value);
    std::vector<GCSeqIKLock> GetIKLockArray() const;
    void SetIKLockArray(std::vector<GCSeqIKLock> value);
    GCSeqTransition GetTransition() const;
    void SetTransition(GCSeqTransition value);
    CBufferString GetLegacyKeyValueText() const;
    void SetLegacyKeyValueText(CBufferString value);
    std::vector<GCAnimActivity> GetActivityArray() const;
    void SetActivityArray(std::vector<GCAnimActivity> value);
    std::vector<GCFootMotion> GetFootMotion() const;
    void SetFootMotion(std::vector<GCFootMotion> value);

    std::string ToPtr();
    bool IsValid();
};

class GAimMatrixOpFixedSettings_t
{
private:
    void *m_ptr;

public:
    GAimMatrixOpFixedSettings_t(std::string ptr);
    GAimMatrixOpFixedSettings_t(void *ptr);

    GCAnimAttachment GetAttachment() const;
    void SetAttachment(GCAnimAttachment value);
    GCAnimInputDamping GetDamping() const;
    void SetDamping(GCAnimInputDamping value);
    std::vector<GCPoseHandle> GetPoseCacheHandles() const;
    void SetPoseCacheHandles(std::vector<GCPoseHandle> value);
    AimMatrixBlendMode GetBlendMode() const;
    void SetBlendMode(AimMatrixBlendMode value);
    float GetMaxYawAngle() const;
    void SetMaxYawAngle(float value);
    float GetMaxPitchAngle() const;
    void SetMaxPitchAngle(float value);
    int32_t GetSequenceMaxFrame() const;
    void SetSequenceMaxFrame(int32_t value);
    int32_t GetBoneMaskIndex() const;
    void SetBoneMaskIndex(int32_t value);
    bool GetTargetIsPosition() const;
    void SetTargetIsPosition(bool value);
    bool GetUseBiasAndClamp() const;
    void SetUseBiasAndClamp(bool value);
    float GetBiasAndClampYawOffset() const;
    void SetBiasAndClampYawOffset(float value);
    float GetBiasAndClampPitchOffset() const;
    void SetBiasAndClampPitchOffset(float value);
    GCBlendCurve GetBiasAndClampBlendCurve() const;
    void SetBiasAndClampBlendCurve(GCBlendCurve value);

    std::string ToPtr();
    bool IsValid();
};

class GParticlePreviewState_t
{
private:
    void *m_ptr;

public:
    GParticlePreviewState_t(std::string ptr);
    GParticlePreviewState_t(void *ptr);

    CUtlString GetPreviewModel() const;
    void SetPreviewModel(CUtlString value);
    uint32_t GetModSpecificData() const;
    void SetModSpecificData(uint32_t value);
    PetGroundType_t GetGroundType() const;
    void SetGroundType(PetGroundType_t value);
    CUtlString GetSequenceName() const;
    void SetSequenceName(CUtlString value);
    int32_t GetFireParticleOnSequenceFrame() const;
    void SetFireParticleOnSequenceFrame(int32_t value);
    CUtlString GetHitboxSetName() const;
    void SetHitboxSetName(CUtlString value);
    CUtlString GetMaterialGroupName() const;
    void SetMaterialGroupName(CUtlString value);
    std::vector<GParticlePreviewBodyGroup_t> GetBodyGroups() const;
    void SetBodyGroups(std::vector<GParticlePreviewBodyGroup_t> value);
    float GetPlaybackSpeed() const;
    void SetPlaybackSpeed(float value);
    float GetParticleSimulationRate() const;
    void SetParticleSimulationRate(float value);
    bool GetShouldDrawHitboxes() const;
    void SetShouldDrawHitboxes(bool value);
    bool GetShouldDrawAttachments() const;
    void SetShouldDrawAttachments(bool value);
    bool GetShouldDrawAttachmentNames() const;
    void SetShouldDrawAttachmentNames(bool value);
    bool GetShouldDrawControlPointAxes() const;
    void SetShouldDrawControlPointAxes(bool value);
    bool GetAnimationNonLooping() const;
    void SetAnimationNonLooping(bool value);
    Vector GetPreviewGravity() const;
    void SetPreviewGravity(Vector value);

    std::string ToPtr();
    bool IsValid();
};

class GFeCtrlOsOffset_t
{
private:
    void *m_ptr;

public:
    GFeCtrlOsOffset_t(std::string ptr);
    GFeCtrlOsOffset_t(void *ptr);

    uint16_t GetCtrlParent() const;
    void SetCtrlParent(uint16_t value);
    uint16_t GetCtrlChild() const;
    void SetCtrlChild(uint16_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCMorphData
{
private:
    void *m_ptr;

public:
    GCMorphData(std::string ptr);
    GCMorphData(void *ptr);

    CUtlString GetName() const;
    void SetName(CUtlString value);
    std::vector<GCMorphRectData> GetMorphRectDatas() const;
    void SetMorphRectDatas(std::vector<GCMorphRectData> value);

    std::string ToPtr();
    bool IsValid();
};

class GCAimMatrixUpdateNode
{
private:
    void *m_ptr;

public:
    GCAimMatrixUpdateNode(std::string ptr);
    GCAimMatrixUpdateNode(void *ptr);

    GAimMatrixOpFixedSettings_t GetOpFixedSettings() const;
    void SetOpFixedSettings(GAimMatrixOpFixedSettings_t value);
    AnimVectorSource GetTarget() const;
    void SetTarget(AnimVectorSource value);
    GCAnimParamHandle GetParamIndex() const;
    void SetParamIndex(GCAnimParamHandle value);
    bool GetResetChild() const;
    void SetResetChild(bool value);
    bool GetLockWhenWaning() const;
    void SetLockWhenWaning(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCDirectionalBlendUpdateNode
{
private:
    void *m_ptr;

public:
    GCDirectionalBlendUpdateNode(std::string ptr);
    GCDirectionalBlendUpdateNode(void *ptr);

    GCAnimInputDamping GetDamping() const;
    void SetDamping(GCAnimInputDamping value);
    AnimValueSource GetBlendValueSource() const;
    void SetBlendValueSource(AnimValueSource value);
    GCAnimParamHandle GetParamIndex() const;
    void SetParamIndex(GCAnimParamHandle value);
    float GetPlaybackSpeed() const;
    void SetPlaybackSpeed(float value);
    float GetDuration() const;
    void SetDuration(float value);
    bool GetLoop() const;
    void SetLoop(bool value);
    bool GetLockBlendOnReset() const;
    void SetLockBlendOnReset(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GVMixPannerDesc_t
{
private:
    void *m_ptr;

public:
    GVMixPannerDesc_t(std::string ptr);
    GVMixPannerDesc_t(void *ptr);

    VMixPannerType_t GetType() const;
    void SetType(VMixPannerType_t value);
    float GetStrength() const;
    void SetStrength(float value);

    std::string ToPtr();
    bool IsValid();
};

class GFeSimdSpringIntegrator_t
{
private:
    void *m_ptr;

public:
    GFeSimdSpringIntegrator_t(std::string ptr);
    GFeSimdSpringIntegrator_t(void *ptr);

    float GetSpringRestLength() const;
    void SetSpringRestLength(float value);
    float GetSpringConstant() const;
    void SetSpringConstant(float value);
    float GetSpringDamping() const;
    void SetSpringDamping(float value);
    float GetNodeWeight0() const;
    void SetNodeWeight0(float value);

    std::string ToPtr();
    bool IsValid();
};

class GModelBoneFlexDriver_t
{
private:
    void *m_ptr;

public:
    GModelBoneFlexDriver_t(std::string ptr);
    GModelBoneFlexDriver_t(void *ptr);

    CUtlString GetBoneName() const;
    void SetBoneName(CUtlString value);
    uint32_t GetBoneNameToken() const;
    void SetBoneNameToken(uint32_t value);
    std::vector<GModelBoneFlexDriverControl_t> GetControls() const;
    void SetControls(std::vector<GModelBoneFlexDriverControl_t> value);

    std::string ToPtr();
    bool IsValid();
};

class GCBoolAnimParameter
{
private:
    void *m_ptr;

public:
    GCBoolAnimParameter(std::string ptr);
    GCBoolAnimParameter(void *ptr);

    bool GetDefaultValue() const;
    void SetDefaultValue(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GEventAppShutdown_t
{
private:
    void *m_ptr;

public:
    GEventAppShutdown_t(std::string ptr);
    GEventAppShutdown_t(void *ptr);

    int32_t GetDummy0() const;
    void SetDummy0(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GResourceId_t
{
private:
    void *m_ptr;

public:
    GResourceId_t(std::string ptr);
    GResourceId_t(void *ptr);

    uint64_t GetValue() const;
    void SetValue(uint64_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCVoiceContainerRealtimeFMSineWave
{
private:
    void *m_ptr;

public:
    GCVoiceContainerRealtimeFMSineWave(std::string ptr);
    GCVoiceContainerRealtimeFMSineWave(void *ptr);

    float GetCarrierFrequency() const;
    void SetCarrierFrequency(float value);
    float GetModulatorFrequency() const;
    void SetModulatorFrequency(float value);
    float GetModulatorAmount() const;
    void SetModulatorAmount(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCNmVirtualParameterBoolNode
{
private:
    void *m_ptr;

public:
    GCNmVirtualParameterBoolNode(std::string ptr);
    GCNmVirtualParameterBoolNode(void *ptr);

    int16_t GetChildNodeIdx() const;
    void SetChildNodeIdx(int16_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCNmSyncTrack
{
private:
    void *m_ptr;

public:
    GCNmSyncTrack(std::string ptr);
    GCNmSyncTrack(void *ptr);

    int32_t GetStartEventOffset() const;
    void SetStartEventOffset(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GTagSpan_t
{
private:
    void *m_ptr;

public:
    GTagSpan_t(std::string ptr);
    GTagSpan_t(void *ptr);

    int32_t GetTagIndex() const;
    void SetTagIndex(int32_t value);
    float GetStartCycle() const;
    void SetStartCycle(float value);
    float GetEndCycle() const;
    void SetEndCycle(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCNmStateNode__TimedEvent_t
{
private:
    void *m_ptr;

public:
    GCNmStateNode__TimedEvent_t(std::string ptr);
    GCNmStateNode__TimedEvent_t(void *ptr);

    float GetTimeValue() const;
    void SetTimeValue(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCNmControlParameterTargetNode
{
private:
    void *m_ptr;

public:
    GCNmControlParameterTargetNode(std::string ptr);
    GCNmControlParameterTargetNode(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCFootstepLandedAnimTag
{
private:
    void *m_ptr;

public:
    GCFootstepLandedAnimTag(std::string ptr);
    GCFootstepLandedAnimTag(void *ptr);

    FootstepLandedFootSoundType_t GetFootstepType() const;
    void SetFootstepType(FootstepLandedFootSoundType_t value);
    CUtlString GetOverrideSoundName() const;
    void SetOverrideSoundName(CUtlString value);
    CUtlString GetDebugAnimSourceString() const;
    void SetDebugAnimSourceString(CUtlString value);
    CUtlString GetBoneName() const;
    void SetBoneName(CUtlString value);

    std::string ToPtr();
    bool IsValid();
};

class GCEnumAnimParameter
{
private:
    void *m_ptr;

public:
    GCEnumAnimParameter(std::string ptr);
    GCEnumAnimParameter(void *ptr);

    uint8_t GetDefaultValue() const;
    void SetDefaultValue(uint8_t value);
    std::vector<CUtlString> GetEnumOptions() const;
    void SetEnumOptions(std::vector<CUtlString> value);
    std::vector<uint64> GetEnumReferenced() const;
    void SetEnumReferenced(std::vector<uint64> value);

    std::string ToPtr();
    bool IsValid();
};

class GCAnimationGraphVisualizerPie
{
private:
    void *m_ptr;

public:
    GCAnimationGraphVisualizerPie(std::string ptr);
    GCAnimationGraphVisualizerPie(void *ptr);

    Vector GetWsCenter() const;
    void SetWsCenter(Vector value);
    Vector GetWsStart() const;
    void SetWsStart(Vector value);
    Vector GetWsEnd() const;
    void SetWsEnd(Vector value);
    Color GetColor() const;
    void SetColor(Color value);

    std::string ToPtr();
    bool IsValid();
};

class GAnimationSnapshot_t
{
private:
    void *m_ptr;

public:
    GAnimationSnapshot_t(std::string ptr);
    GAnimationSnapshot_t(void *ptr);

    int32_t GetEntIndex() const;
    void SetEntIndex(int32_t value);
    CUtlString GetModelName() const;
    void SetModelName(CUtlString value);

    std::string ToPtr();
    bool IsValid();
};

class GVPhysXCollisionAttributes_t
{
private:
    void *m_ptr;

public:
    GVPhysXCollisionAttributes_t(std::string ptr);
    GVPhysXCollisionAttributes_t(void *ptr);

    uint32_t GetCollisionGroup() const;
    void SetCollisionGroup(uint32_t value);
    std::vector<uint32> GetInteractAs() const;
    void SetInteractAs(std::vector<uint32> value);
    std::vector<uint32> GetInteractWith() const;
    void SetInteractWith(std::vector<uint32> value);
    std::vector<uint32> GetInteractExclude() const;
    void SetInteractExclude(std::vector<uint32> value);
    CUtlString GetCollisionGroupString() const;
    void SetCollisionGroupString(CUtlString value);
    std::vector<CUtlString> GetInteractAsStrings() const;
    void SetInteractAsStrings(std::vector<CUtlString> value);
    std::vector<CUtlString> GetInteractWithStrings() const;
    void SetInteractWithStrings(std::vector<CUtlString> value);
    std::vector<CUtlString> GetInteractExcludeStrings() const;
    void SetInteractExcludeStrings(std::vector<CUtlString> value);

    std::string ToPtr();
    bool IsValid();
};

class GCActionComponentUpdater
{
private:
    void *m_ptr;

public:
    GCActionComponentUpdater(std::string ptr);
    GCActionComponentUpdater(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCNmVirtualParameterVectorNode
{
private:
    void *m_ptr;

public:
    GCNmVirtualParameterVectorNode(std::string ptr);
    GCNmVirtualParameterVectorNode(void *ptr);

    int16_t GetChildNodeIdx() const;
    void SetChildNodeIdx(int16_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCAnimFrameSegment
{
private:
    void *m_ptr;

public:
    GCAnimFrameSegment(std::string ptr);
    GCAnimFrameSegment(void *ptr);

    int32_t GetUniqueFrameIndex() const;
    void SetUniqueFrameIndex(int32_t value);
    uint32_t GetLocalElementMasks() const;
    void SetLocalElementMasks(uint32_t value);
    int32_t GetLocalChannel() const;
    void SetLocalChannel(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCClothSettingsAnimTag
{
private:
    void *m_ptr;

public:
    GCClothSettingsAnimTag(std::string ptr);
    GCClothSettingsAnimTag(void *ptr);

    float GetStiffness() const;
    void SetStiffness(float value);
    float GetEaseIn() const;
    void SetEaseIn(float value);
    float GetEaseOut() const;
    void SetEaseOut(float value);
    CUtlString GetVertexSet() const;
    void SetVertexSet(CUtlString value);

    std::string ToPtr();
    bool IsValid();
};

class GVariableInfo_t
{
private:
    void *m_ptr;

public:
    GVariableInfo_t(std::string ptr);
    GVariableInfo_t(void *ptr);

    CUtlString GetName() const;
    void SetName(CUtlString value);
    CUtlStringToken GetNameToken() const;
    void SetNameToken(CUtlStringToken value);
    GFuseVariableIndex_t GetIndex() const;
    void SetIndex(GFuseVariableIndex_t value);
    uint8_t GetNumComponents() const;
    void SetNumComponents(uint8_t value);
    FuseVariableType_t GetVarType() const;
    void SetVarType(FuseVariableType_t value);
    FuseVariableAccess_t GetAccess() const;
    void SetAccess(FuseVariableAccess_t value);

    std::string ToPtr();
    bool IsValid();
};

class GVMixShaperDesc_t
{
private:
    void *m_ptr;

public:
    GVMixShaperDesc_t(std::string ptr);
    GVMixShaperDesc_t(void *ptr);

    int32_t GetShape() const;
    void SetShape(int32_t value);
    float GetFldbDrive() const;
    void SetFldbDrive(float value);
    float GetFldbOutputGain() const;
    void SetFldbOutputGain(float value);
    float GetWetMix() const;
    void SetWetMix(float value);
    int32_t GetOversampleFactor() const;
    void SetOversampleFactor(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCSoundInfoHeader
{
private:
    void *m_ptr;

public:
    GCSoundInfoHeader(std::string ptr);
    GCSoundInfoHeader(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCVoiceContainerDecayingSineWave
{
private:
    void *m_ptr;

public:
    GCVoiceContainerDecayingSineWave(std::string ptr);
    GCVoiceContainerDecayingSineWave(void *ptr);

    float GetFrequency() const;
    void SetFrequency(float value);
    float GetDecayTime() const;
    void SetDecayTime(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCCycleControlClipUpdateNode
{
private:
    void *m_ptr;

public:
    GCCycleControlClipUpdateNode(std::string ptr);
    GCCycleControlClipUpdateNode(void *ptr);

    std::vector<GTagSpan_t> GetTags() const;
    void SetTags(std::vector<GTagSpan_t> value);
    float GetDuration() const;
    void SetDuration(float value);
    AnimValueSource GetValueSource() const;
    void SetValueSource(AnimValueSource value);
    GCAnimParamHandle GetParamIndex() const;
    void SetParamIndex(GCAnimParamHandle value);

    std::string ToPtr();
    bool IsValid();
};

class GCBaseTrailRenderer
{
private:
    void *m_ptr;

public:
    GCBaseTrailRenderer(std::string ptr);
    GCBaseTrailRenderer(void *ptr);

    ParticleOrientationChoiceList_t GetOrientationType() const;
    void SetOrientationType(ParticleOrientationChoiceList_t value);
    int32_t GetOrientationControlPoint() const;
    void SetOrientationControlPoint(int32_t value);
    float GetMinSize() const;
    void SetMinSize(float value);
    float GetMaxSize() const;
    void SetMaxSize(float value);
    GCParticleCollectionRendererFloatInput GetStartFadeSize() const;
    void SetStartFadeSize(GCParticleCollectionRendererFloatInput value);
    GCParticleCollectionRendererFloatInput GetEndFadeSize() const;
    void SetEndFadeSize(GCParticleCollectionRendererFloatInput value);
    bool GetClampV() const;
    void SetClampV(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCBoneConstraintPoseSpaceBone
{
private:
    void *m_ptr;

public:
    GCBoneConstraintPoseSpaceBone(std::string ptr);
    GCBoneConstraintPoseSpaceBone(void *ptr);

    std::vector<GCBoneConstraintPoseSpaceBone> GetInputList() const;
    void SetInputList(std::vector<GCBoneConstraintPoseSpaceBone> value);

    std::string ToPtr();
    bool IsValid();
};

class GEventServerPostSimulate_t
{
private:
    void *m_ptr;

public:
    GEventServerPostSimulate_t(std::string ptr);
    GEventServerPostSimulate_t(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCChoreoUpdateNode
{
private:
    void *m_ptr;

public:
    GCChoreoUpdateNode(std::string ptr);
    GCChoreoUpdateNode(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCNmSkeleton
{
private:
    void *m_ptr;

public:
    GCNmSkeleton(std::string ptr);
    GCNmSkeleton(void *ptr);

    std::vector<int32> GetParentIndices() const;
    void SetParentIndices(std::vector<int32> value);
    int32_t GetNumBonesToSampleAtLowLOD() const;
    void SetNumBonesToSampleAtLowLOD(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GVMixBoxverbDesc_t
{
private:
    void *m_ptr;

public:
    GVMixBoxverbDesc_t(std::string ptr);
    GVMixBoxverbDesc_t(void *ptr);

    float GetSizeMax() const;
    void SetSizeMax(float value);
    float GetSizeMin() const;
    void SetSizeMin(float value);
    float GetComplexity() const;
    void SetComplexity(float value);
    float GetDiffusion() const;
    void SetDiffusion(float value);
    float GetModDepth() const;
    void SetModDepth(float value);
    float GetModRate() const;
    void SetModRate(float value);
    bool GetParallel() const;
    void SetParallel(bool value);
    GVMixFilterDesc_t GetFilterType() const;
    void SetFilterType(GVMixFilterDesc_t value);
    float GetWidth() const;
    void SetWidth(float value);
    float GetHeight() const;
    void SetHeight(float value);
    float GetDepth() const;
    void SetDepth(float value);
    float GetFeedbackScale() const;
    void SetFeedbackScale(float value);
    float GetFeedbackWidth() const;
    void SetFeedbackWidth(float value);
    float GetFeedbackHeight() const;
    void SetFeedbackHeight(float value);
    float GetFeedbackDepth() const;
    void SetFeedbackDepth(float value);
    float GetOutputGain() const;
    void SetOutputGain(float value);
    float GetTaps() const;
    void SetTaps(float value);

    std::string ToPtr();
    bool IsValid();
};

class GFeTreeChildren_t
{
private:
    void *m_ptr;

public:
    GFeTreeChildren_t(std::string ptr);
    GFeTreeChildren_t(void *ptr);

    std::vector<uint16_t> GetChild() const;
    void SetChild(std::vector<uint16_t> value);

    std::string ToPtr();
    bool IsValid();
};

class GCSceneObjectData
{
private:
    void *m_ptr;

public:
    GCSceneObjectData(std::string ptr);
    GCSceneObjectData(void *ptr);

    Vector GetMinBounds() const;
    void SetMinBounds(Vector value);
    Vector GetMaxBounds() const;
    void SetMaxBounds(Vector value);
    std::vector<GCMaterialDrawDescriptor> GetDrawCalls() const;
    void SetDrawCalls(std::vector<GCMaterialDrawDescriptor> value);
    std::vector<GAABB_t> GetDrawBounds() const;
    void SetDrawBounds(std::vector<GAABB_t> value);
    std::vector<GCMeshletDescriptor> GetMeshlets() const;
    void SetMeshlets(std::vector<GCMeshletDescriptor> value);
    Vector4D GetTintColor() const;
    void SetTintColor(Vector4D value);

    std::string ToPtr();
    bool IsValid();
};

class GStanceInfo_t
{
private:
    void *m_ptr;

public:
    GStanceInfo_t(std::string ptr);
    GStanceInfo_t(void *ptr);

    Vector GetPosition() const;
    void SetPosition(Vector value);
    float GetDirection() const;
    void SetDirection(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCMotionNodeSequence
{
private:
    void *m_ptr;

public:
    GCMotionNodeSequence(std::string ptr);
    GCMotionNodeSequence(void *ptr);

    std::vector<GTagSpan_t> GetTags() const;
    void SetTags(std::vector<GTagSpan_t> value);
    float GetPlaybackSpeed() const;
    void SetPlaybackSpeed(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCFootCycleDefinition
{
private:
    void *m_ptr;

public:
    GCFootCycleDefinition(std::string ptr);
    GCFootCycleDefinition(void *ptr);

    Vector GetStancePositionMS() const;
    void SetStancePositionMS(Vector value);
    Vector GetMidpointPositionMS() const;
    void SetMidpointPositionMS(Vector value);
    float GetStanceDirectionMS() const;
    void SetStanceDirectionMS(float value);
    Vector GetToStrideStartPos() const;
    void SetToStrideStartPos(Vector value);
    GCAnimCycle GetStanceCycle() const;
    void SetStanceCycle(GCAnimCycle value);
    GCFootCycle GetFootLiftCycle() const;
    void SetFootLiftCycle(GCFootCycle value);
    GCFootCycle GetFootOffCycle() const;
    void SetFootOffCycle(GCFootCycle value);
    GCFootCycle GetFootStrikeCycle() const;
    void SetFootStrikeCycle(GCFootCycle value);
    GCFootCycle GetFootLandCycle() const;
    void SetFootLandCycle(GCFootCycle value);

    std::string ToPtr();
    bool IsValid();
};

class GCAnimDesc_Flag
{
private:
    void *m_ptr;

public:
    GCAnimDesc_Flag(std::string ptr);
    GCAnimDesc_Flag(void *ptr);

    bool GetLooping() const;
    void SetLooping(bool value);
    bool GetAllZeros() const;
    void SetAllZeros(bool value);
    bool GetHidden() const;
    void SetHidden(bool value);
    bool GetDelta() const;
    void SetDelta(bool value);
    bool GetLegacyWorldspace() const;
    void SetLegacyWorldspace(bool value);
    bool GetModelDoc() const;
    void SetModelDoc(bool value);
    bool GetImplicitSeqIgnoreDelta() const;
    void SetImplicitSeqIgnoreDelta(bool value);
    bool GetAnimGraphAdditive() const;
    void SetAnimGraphAdditive(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCBoneVelocityMetricEvaluator
{
private:
    void *m_ptr;

public:
    GCBoneVelocityMetricEvaluator(std::string ptr);
    GCBoneVelocityMetricEvaluator(void *ptr);

    int32_t GetBoneIndex() const;
    void SetBoneIndex(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCFuseProgram
{
private:
    void *m_ptr;

public:
    GCFuseProgram(std::string ptr);
    GCFuseProgram(void *ptr);

    std::vector<uint8> GetProgramBuffer() const;
    void SetProgramBuffer(std::vector<uint8> value);
    std::vector<GFuseVariableIndex_t> GetVariablesRead() const;
    void SetVariablesRead(std::vector<GFuseVariableIndex_t> value);
    std::vector<GFuseVariableIndex_t> GetVariablesWritten() const;
    void SetVariablesWritten(std::vector<GFuseVariableIndex_t> value);
    int32_t GetMaxTempVarsUsed() const;
    void SetMaxTempVarsUsed(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCFeVertexMapBuildArray
{
private:
    void *m_ptr;

public:
    GCFeVertexMapBuildArray(std::string ptr);
    GCFeVertexMapBuildArray(void *ptr);

    std::vector<GFeVertexMapBuild_t*> GetArray() const;
    void SetArray(std::vector<GFeVertexMapBuild_t*> value);

    std::string ToPtr();
    bool IsValid();
};

class GFeSoftParent_t
{
private:
    void *m_ptr;

public:
    GFeSoftParent_t(std::string ptr);
    GFeSoftParent_t(void *ptr);

    int32_t GetParent() const;
    void SetParent(int32_t value);
    float GetAlpha() const;
    void SetAlpha(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCFootFallAnimTag
{
private:
    void *m_ptr;

public:
    GCFootFallAnimTag(std::string ptr);
    GCFootFallAnimTag(void *ptr);

    FootFallTagFoot_t GetFoot() const;
    void SetFoot(FootFallTagFoot_t value);

    std::string ToPtr();
    bool IsValid();
};

class GEventClientOutput_t
{
private:
    void *m_ptr;

public:
    GEventClientOutput_t(std::string ptr);
    GEventClientOutput_t(void *ptr);

    GEngineLoopState_t GetLoopState() const;
    void SetLoopState(GEngineLoopState_t value);
    float GetRenderTime() const;
    void SetRenderTime(float value);
    float GetRealTime() const;
    void SetRealTime(float value);
    float GetRenderFrameTimeUnbounded() const;
    void SetRenderFrameTimeUnbounded(float value);
    bool GetRenderOnly() const;
    void SetRenderOnly(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GMaterialVariable_t
{
private:
    void *m_ptr;

public:
    GMaterialVariable_t(std::string ptr);
    GMaterialVariable_t(void *ptr);

    CUtlString GetStrVariable() const;
    void SetStrVariable(CUtlString value);
    GParticleAttributeIndex_t GetVariableField() const;
    void SetVariableField(GParticleAttributeIndex_t value);
    float GetScale() const;
    void SetScale(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCFeNamedJiggleBone
{
private:
    void *m_ptr;

public:
    GCFeNamedJiggleBone(std::string ptr);
    GCFeNamedJiggleBone(void *ptr);

    CUtlString GetStrParentBone() const;
    void SetStrParentBone(CUtlString value);
    uint32_t GetJiggleParent() const;
    void SetJiggleParent(uint32_t value);
    GCFeJiggleBone GetJiggleBone() const;
    void SetJiggleBone(GCFeJiggleBone value);

    std::string ToPtr();
    bool IsValid();
};

class GEventClientProcessInput_t
{
private:
    void *m_ptr;

public:
    GEventClientProcessInput_t(std::string ptr);
    GEventClientProcessInput_t(void *ptr);

    GEngineLoopState_t GetLoopState() const;
    void SetLoopState(GEngineLoopState_t value);
    float GetRealTime() const;
    void SetRealTime(float value);
    float GetTickInterval() const;
    void SetTickInterval(float value);
    double GetTickStartTime() const;
    void SetTickStartTime(double value);

    std::string ToPtr();
    bool IsValid();
};

class GJiggleBoneSettingsList_t
{
private:
    void *m_ptr;

public:
    GJiggleBoneSettingsList_t(std::string ptr);
    GJiggleBoneSettingsList_t(void *ptr);

    std::vector<GJiggleBoneSettings_t> GetBoneSettings() const;
    void SetBoneSettings(std::vector<GJiggleBoneSettings_t> value);

    std::string ToPtr();
    bool IsValid();
};

class GCSequenceFinishedAnimTag
{
private:
    void *m_ptr;

public:
    GCSequenceFinishedAnimTag(std::string ptr);
    GCSequenceFinishedAnimTag(void *ptr);

    CUtlString GetSequenceName() const;
    void SetSequenceName(CUtlString value);

    std::string ToPtr();
    bool IsValid();
};

class GCAnimationGraphVisualizerText
{
private:
    void *m_ptr;

public:
    GCAnimationGraphVisualizerText(std::string ptr);
    GCAnimationGraphVisualizerText(void *ptr);

    Vector GetWsPosition() const;
    void SetWsPosition(Vector value);
    Color GetColor() const;
    void SetColor(Color value);
    CUtlString GetText() const;
    void SetText(CUtlString value);

    std::string ToPtr();
    bool IsValid();
};

class GCDampedPathAnimMotorUpdater
{
private:
    void *m_ptr;

public:
    GCDampedPathAnimMotorUpdater(std::string ptr);
    GCDampedPathAnimMotorUpdater(void *ptr);

    float GetAnticipationTime() const;
    void SetAnticipationTime(float value);
    float GetMinSpeedScale() const;
    void SetMinSpeedScale(float value);
    GCAnimParamHandle GetAnticipationPosParam() const;
    void SetAnticipationPosParam(GCAnimParamHandle value);
    GCAnimParamHandle GetAnticipationHeadingParam() const;
    void SetAnticipationHeadingParam(GCAnimParamHandle value);
    float GetSpringConstant() const;
    void SetSpringConstant(float value);
    float GetMinSpringTension() const;
    void SetMinSpringTension(float value);
    float GetMaxSpringTension() const;
    void SetMaxSpringTension(float value);

    std::string ToPtr();
    bool IsValid();
};

class GLookAtOpFixedSettings_t
{
private:
    void *m_ptr;

public:
    GLookAtOpFixedSettings_t(std::string ptr);
    GLookAtOpFixedSettings_t(void *ptr);

    GCAnimAttachment GetAttachment() const;
    void SetAttachment(GCAnimAttachment value);
    GCAnimInputDamping GetDamping() const;
    void SetDamping(GCAnimInputDamping value);
    std::vector<GLookAtBone_t> GetBones() const;
    void SetBones(std::vector<GLookAtBone_t> value);
    float GetYawLimit() const;
    void SetYawLimit(float value);
    float GetPitchLimit() const;
    void SetPitchLimit(float value);
    float GetHysteresisInnerAngle() const;
    void SetHysteresisInnerAngle(float value);
    float GetHysteresisOuterAngle() const;
    void SetHysteresisOuterAngle(float value);
    bool GetRotateYawForward() const;
    void SetRotateYawForward(bool value);
    bool GetMaintainUpDirection() const;
    void SetMaintainUpDirection(bool value);
    bool GetTargetIsPosition() const;
    void SetTargetIsPosition(bool value);
    bool GetUseHysteresis() const;
    void SetUseHysteresis(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCEntityIOOutput
{
private:
    void *m_ptr;

public:
    GCEntityIOOutput(std::string ptr);
    GCEntityIOOutput(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCDSPPresetMixgroupModifierTable
{
private:
    void *m_ptr;

public:
    GCDSPPresetMixgroupModifierTable(std::string ptr);
    GCDSPPresetMixgroupModifierTable(void *ptr);

    std::vector<GCDspPresetModifierList> GetTable() const;
    void SetTable(std::vector<GCDspPresetModifierList> value);

    std::string ToPtr();
    bool IsValid();
};

class GRnWing_t
{
private:
    void *m_ptr;

public:
    GRnWing_t(std::string ptr);
    GRnWing_t(void *ptr);

    std::vector<int32_t> GetIndex() const;
    void SetIndex(std::vector<int32_t> value);

    std::string ToPtr();
    bool IsValid();
};

class GCNmChildGraphNode
{
private:
    void *m_ptr;

public:
    GCNmChildGraphNode(std::string ptr);
    GCNmChildGraphNode(void *ptr);

    int16_t GetChildGraphIdx() const;
    void SetChildGraphIdx(int16_t value);

    std::string ToPtr();
    bool IsValid();
};

class GVMixPlateverbDesc_t
{
private:
    void *m_ptr;

public:
    GVMixPlateverbDesc_t(std::string ptr);
    GVMixPlateverbDesc_t(void *ptr);

    float GetPrefilter() const;
    void SetPrefilter(float value);
    float GetInputDiffusion1() const;
    void SetInputDiffusion1(float value);
    float GetInputDiffusion2() const;
    void SetInputDiffusion2(float value);
    float GetDecay() const;
    void SetDecay(float value);
    float GetDamp() const;
    void SetDamp(float value);
    float GetFeedbackDiffusion1() const;
    void SetFeedbackDiffusion1(float value);
    float GetFeedbackDiffusion2() const;
    void SetFeedbackDiffusion2(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCMotionSearchDB
{
private:
    void *m_ptr;

public:
    GCMotionSearchDB(std::string ptr);
    GCMotionSearchDB(void *ptr);

    GCMotionSearchNode GetRootNode() const;
    void SetRootNode(GCMotionSearchNode value);
    GCProductQuantizer GetResidualQuantizer() const;
    void SetResidualQuantizer(GCProductQuantizer value);
    std::vector<GMotionDBIndex> GetCodeIndices() const;
    void SetCodeIndices(std::vector<GMotionDBIndex> value);

    std::string ToPtr();
    bool IsValid();
};

class GVPhysics2ShapeDef_t
{
private:
    void *m_ptr;

public:
    GVPhysics2ShapeDef_t(std::string ptr);
    GVPhysics2ShapeDef_t(void *ptr);

    std::vector<GRnSphereDesc_t> GetSpheres() const;
    void SetSpheres(std::vector<GRnSphereDesc_t> value);
    std::vector<GRnCapsuleDesc_t> GetCapsules() const;
    void SetCapsules(std::vector<GRnCapsuleDesc_t> value);
    std::vector<GRnHullDesc_t> GetHulls() const;
    void SetHulls(std::vector<GRnHullDesc_t> value);
    std::vector<GRnMeshDesc_t> GetMeshes() const;
    void SetMeshes(std::vector<GRnMeshDesc_t> value);
    std::vector<uint16> GetCollisionAttributeIndices() const;
    void SetCollisionAttributeIndices(std::vector<uint16> value);

    std::string ToPtr();
    bool IsValid();
};

class GWorldBuilderParams_t
{
private:
    void *m_ptr;

public:
    GWorldBuilderParams_t(std::string ptr);
    GWorldBuilderParams_t(void *ptr);

    float GetMinDrawVolumeSize() const;
    void SetMinDrawVolumeSize(float value);
    bool GetBuildBakedLighting() const;
    void SetBuildBakedLighting(bool value);
    GBakedLightingInfo_t GetBakedLightingInfo() const;
    void SetBakedLightingInfo(GBakedLightingInfo_t value);
    uint64_t GetCompileTimestamp() const;
    void SetCompileTimestamp(uint64_t value);
    uint64_t GetCompileFingerprint() const;
    void SetCompileFingerprint(uint64_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCFootAdjustmentUpdateNode
{
private:
    void *m_ptr;

public:
    GCFootAdjustmentUpdateNode(std::string ptr);
    GCFootAdjustmentUpdateNode(void *ptr);

    GCPoseHandle GetBasePoseCacheHandle() const;
    void SetBasePoseCacheHandle(GCPoseHandle value);
    GCAnimParamHandle GetFacingTarget() const;
    void SetFacingTarget(GCAnimParamHandle value);
    float GetTurnTimeMin() const;
    void SetTurnTimeMin(float value);
    float GetTurnTimeMax() const;
    void SetTurnTimeMax(float value);
    float GetStepHeightMax() const;
    void SetStepHeightMax(float value);
    float GetStepHeightMaxAngle() const;
    void SetStepHeightMaxAngle(float value);
    bool GetResetChild() const;
    void SetResetChild(bool value);
    bool GetAnimationDriven() const;
    void SetAnimationDriven(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCNmClipNode
{
private:
    void *m_ptr;

public:
    GCNmClipNode(std::string ptr);
    GCNmClipNode(void *ptr);

    int16_t GetPlayInReverseValueNodeIdx() const;
    void SetPlayInReverseValueNodeIdx(int16_t value);
    int16_t GetResetTimeValueNodeIdx() const;
    void SetResetTimeValueNodeIdx(int16_t value);
    bool GetSampleRootMotion() const;
    void SetSampleRootMotion(bool value);
    bool GetAllowLooping() const;
    void SetAllowLooping(bool value);
    int16_t GetDataSlotIdx() const;
    void SetDataSlotIdx(int16_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCAnimMorphDifference
{
private:
    void *m_ptr;

public:
    GCAnimMorphDifference(std::string ptr);
    GCAnimMorphDifference(void *ptr);

    CBufferString GetName() const;
    void SetName(CBufferString value);

    std::string ToPtr();
    bool IsValid();
};

class GIParticleCollection
{
private:
    void *m_ptr;

public:
    GIParticleCollection(std::string ptr);
    GIParticleCollection(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCNmGraphDefinition__ChildGraphSlot_t
{
private:
    void *m_ptr;

public:
    GCNmGraphDefinition__ChildGraphSlot_t(std::string ptr);
    GCNmGraphDefinition__ChildGraphSlot_t(void *ptr);

    int16_t GetNodeIdx() const;
    void SetNodeIdx(int16_t value);
    int16_t GetDataSlotIdx() const;
    void SetDataSlotIdx(int16_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCFutureVelocityMetricEvaluator
{
private:
    void *m_ptr;

public:
    GCFutureVelocityMetricEvaluator(std::string ptr);
    GCFutureVelocityMetricEvaluator(void *ptr);

    float GetDistance() const;
    void SetDistance(float value);
    float GetStoppingDistance() const;
    void SetStoppingDistance(float value);
    float GetTargetSpeed() const;
    void SetTargetSpeed(float value);
    VelocityMetricMode GetMode() const;
    void SetMode(VelocityMetricMode value);

    std::string ToPtr();
    bool IsValid();
};

class GCParticleProperty
{
private:
    void *m_ptr;

public:
    GCParticleProperty(std::string ptr);
    GCParticleProperty(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GVertexPositionNormal_t
{
private:
    void *m_ptr;

public:
    GVertexPositionNormal_t(std::string ptr);
    GVertexPositionNormal_t(void *ptr);

    Vector GetPosition() const;
    void SetPosition(Vector value);
    Vector GetNormal() const;
    void SetNormal(Vector value);

    std::string ToPtr();
    bool IsValid();
};

class GFeEffectDesc_t
{
private:
    void *m_ptr;

public:
    GFeEffectDesc_t(std::string ptr);
    GFeEffectDesc_t(void *ptr);

    CUtlString GetName() const;
    void SetName(CUtlString value);
    uint32_t GetNameHash() const;
    void SetNameHash(uint32_t value);
    int32_t GetType() const;
    void SetType(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCLODComponentUpdater
{
private:
    void *m_ptr;

public:
    GCLODComponentUpdater(std::string ptr);
    GCLODComponentUpdater(void *ptr);

    int32_t GetServerLOD() const;
    void SetServerLOD(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCNmLegacyEvent
{
private:
    void *m_ptr;

public:
    GCNmLegacyEvent(std::string ptr);
    GCNmLegacyEvent(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GMaterialParamVector_t
{
private:
    void *m_ptr;

public:
    GMaterialParamVector_t(std::string ptr);
    GMaterialParamVector_t(void *ptr);

    Vector4D GetValue() const;
    void SetValue(Vector4D value);

    std::string ToPtr();
    bool IsValid();
};

class GCMotionGraphGroup
{
private:
    void *m_ptr;

public:
    GCMotionGraphGroup(std::string ptr);
    GCMotionGraphGroup(void *ptr);

    GCMotionSearchDB GetSearchDB() const;
    void SetSearchDB(GCMotionSearchDB value);
    std::vector<GCMotionGraphConfig> GetMotionGraphConfigs() const;
    void SetMotionGraphConfigs(std::vector<GCMotionGraphConfig> value);
    std::vector<int32> GetSampleToConfig() const;
    void SetSampleToConfig(std::vector<int32> value);
    GAnimScriptHandle GetIsActiveScript() const;
    void SetIsActiveScript(GAnimScriptHandle value);

    std::string ToPtr();
    bool IsValid();
};

class GHitReactFixedSettings_t
{
private:
    void *m_ptr;

public:
    GHitReactFixedSettings_t(std::string ptr);
    GHitReactFixedSettings_t(void *ptr);

    int32_t GetWeightListIndex() const;
    void SetWeightListIndex(int32_t value);
    int32_t GetEffectedBoneCount() const;
    void SetEffectedBoneCount(int32_t value);
    float GetMaxImpactForce() const;
    void SetMaxImpactForce(float value);
    float GetMinImpactForce() const;
    void SetMinImpactForce(float value);
    float GetWhipImpactScale() const;
    void SetWhipImpactScale(float value);
    float GetCounterRotationScale() const;
    void SetCounterRotationScale(float value);
    float GetDistanceFadeScale() const;
    void SetDistanceFadeScale(float value);
    float GetPropagationScale() const;
    void SetPropagationScale(float value);
    float GetWhipDelay() const;
    void SetWhipDelay(float value);
    float GetSpringStrength() const;
    void SetSpringStrength(float value);
    float GetWhipSpringStrength() const;
    void SetWhipSpringStrength(float value);
    float GetMaxAngleRadians() const;
    void SetMaxAngleRadians(float value);
    int32_t GetHipBoneIndex() const;
    void SetHipBoneIndex(int32_t value);
    float GetHipBoneTranslationScale() const;
    void SetHipBoneTranslationScale(float value);
    float GetHipDipSpringStrength() const;
    void SetHipDipSpringStrength(float value);
    float GetHipDipImpactScale() const;
    void SetHipDipImpactScale(float value);
    float GetHipDipDelay() const;
    void SetHipDipDelay(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCRootUpdateNode
{
private:
    void *m_ptr;

public:
    GCRootUpdateNode(std::string ptr);
    GCRootUpdateNode(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCAnimMovement
{
private:
    void *m_ptr;

public:
    GCAnimMovement(std::string ptr);
    GCAnimMovement(void *ptr);

    int32_t GetEndframe() const;
    void SetEndframe(int32_t value);
    int32_t GetMotionflags() const;
    void SetMotionflags(int32_t value);
    float Get0() const;
    void Set0(float value);
    float Get1() const;
    void Set1(float value);
    float GetAngle() const;
    void SetAngle(float value);
    Vector GetVector() const;
    void SetVector(Vector value);
    Vector GetPosition() const;
    void SetPosition(Vector value);

    std::string ToPtr();
    bool IsValid();
};

class GCConstraintSlave
{
private:
    void *m_ptr;

public:
    GCConstraintSlave(std::string ptr);
    GCConstraintSlave(void *ptr);

    Quaternion GetBaseOrientation() const;
    void SetBaseOrientation(Quaternion value);
    Vector GetBasePosition() const;
    void SetBasePosition(Vector value);
    uint32_t GetBoneHash() const;
    void SetBoneHash(uint32_t value);
    float GetWeight() const;
    void SetWeight(float value);
    CUtlString GetName() const;
    void SetName(CUtlString value);

    std::string ToPtr();
    bool IsValid();
};

class GCSeqBoneMaskList
{
private:
    void *m_ptr;

public:
    GCSeqBoneMaskList(std::string ptr);
    GCSeqBoneMaskList(void *ptr);

    CBufferString GetName() const;
    void SetName(CBufferString value);
    std::vector<int16> GetLocalBoneArray() const;
    void SetLocalBoneArray(std::vector<int16> value);
    std::vector<float32> GetBoneWeightArray() const;
    void SetBoneWeightArray(std::vector<float32> value);
    float GetDefaultMorphCtrlWeight() const;
    void SetDefaultMorphCtrlWeight(float value);

    std::string ToPtr();
    bool IsValid();
};

class GPermModelDataAnimatedMaterialAttribute_t
{
private:
    void *m_ptr;

public:
    GPermModelDataAnimatedMaterialAttribute_t(std::string ptr);
    GPermModelDataAnimatedMaterialAttribute_t(void *ptr);

    CUtlString GetAttributeName() const;
    void SetAttributeName(CUtlString value);
    int32_t GetNumChannels() const;
    void SetNumChannels(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GScriptInfo_t
{
private:
    void *m_ptr;

public:
    GScriptInfo_t(std::string ptr);
    GScriptInfo_t(void *ptr);

    CUtlString GetCode() const;
    void SetCode(CUtlString value);
    std::vector<GCAnimParamHandle> GetParamsModified() const;
    void SetParamsModified(std::vector<GCAnimParamHandle> value);
    std::vector<int32> GetProxyReadParams() const;
    void SetProxyReadParams(std::vector<int32> value);
    std::vector<int32> GetProxyWriteParams() const;
    void SetProxyWriteParams(std::vector<int32> value);
    AnimScriptType GetScriptType() const;
    void SetScriptType(AnimScriptType value);

    std::string ToPtr();
    bool IsValid();
};

class GVPhysXRange_t
{
private:
    void *m_ptr;

public:
    GVPhysXRange_t(std::string ptr);
    GVPhysXRange_t(void *ptr);

    float GetMin() const;
    void SetMin(float value);
    float GetMax() const;
    void SetMax(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCJiggleBoneUpdateNode
{
private:
    void *m_ptr;

public:
    GCJiggleBoneUpdateNode(std::string ptr);
    GCJiggleBoneUpdateNode(void *ptr);

    GJiggleBoneSettingsList_t GetOpFixedData() const;
    void SetOpFixedData(GJiggleBoneSettingsList_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCollisionGroupContext_t
{
private:
    void *m_ptr;

public:
    GCollisionGroupContext_t(std::string ptr);
    GCollisionGroupContext_t(void *ptr);

    int32_t GetCollisionGroupNumber() const;
    void SetCollisionGroupNumber(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCAudioPhonemeTag
{
private:
    void *m_ptr;

public:
    GCAudioPhonemeTag(std::string ptr);
    GCAudioPhonemeTag(void *ptr);

    float GetStartTime() const;
    void SetStartTime(float value);
    float GetEndTime() const;
    void SetEndTime(float value);
    int32_t GetPhonemeCode() const;
    void SetPhonemeCode(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCAnimData
{
private:
    void *m_ptr;

public:
    GCAnimData(std::string ptr);
    GCAnimData(void *ptr);

    CBufferString GetName() const;
    void SetName(CBufferString value);
    std::vector<GCAnimDesc> GetAnimArray() const;
    void SetAnimArray(std::vector<GCAnimDesc> value);
    std::vector<GCAnimDecoder> GetDecoderArray() const;
    void SetDecoderArray(std::vector<GCAnimDecoder> value);
    int32_t GetMaxUniqueFrameIndex() const;
    void SetMaxUniqueFrameIndex(int32_t value);
    std::vector<GCAnimFrameSegment> GetSegmentArray() const;
    void SetSegmentArray(std::vector<GCAnimFrameSegment> value);

    std::string ToPtr();
    bool IsValid();
};

class GSosEditItemInfo_t
{
private:
    void *m_ptr;

public:
    GSosEditItemInfo_t(std::string ptr);
    GSosEditItemInfo_t(void *ptr);

    SosEditItemType_t GetItemType() const;
    void SetItemType(SosEditItemType_t value);
    CUtlString GetItemName() const;
    void SetItemName(CUtlString value);
    CUtlString GetItemTypeName() const;
    void SetItemTypeName(CUtlString value);
    CUtlString GetItemKVString() const;
    void SetItemKVString(CUtlString value);
    Vector2D GetItemPos() const;
    void SetItemPos(Vector2D value);

    std::string ToPtr();
    bool IsValid();
};

class GFeFitInfluence_t
{
private:
    void *m_ptr;

public:
    GFeFitInfluence_t(std::string ptr);
    GFeFitInfluence_t(void *ptr);

    uint32_t GetVertexNode() const;
    void SetVertexNode(uint32_t value);
    float GetWeight() const;
    void SetWeight(float value);
    uint32_t GetMatrixNode() const;
    void SetMatrixNode(uint32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCInputStreamUpdateNode
{
private:
    void *m_ptr;

public:
    GCInputStreamUpdateNode(std::string ptr);
    GCInputStreamUpdateNode(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GEventClientPollInput_t
{
private:
    void *m_ptr;

public:
    GEventClientPollInput_t(std::string ptr);
    GEventClientPollInput_t(void *ptr);

    GEngineLoopState_t GetLoopState() const;
    void SetLoopState(GEngineLoopState_t value);
    float GetRealTime() const;
    void SetRealTime(float value);

    std::string ToPtr();
    bool IsValid();
};

class GFeSimdQuad_t
{
private:
    void *m_ptr;

public:
    GFeSimdQuad_t(std::string ptr);
    GFeSimdQuad_t(void *ptr);

    float Get4Slack() const;
    void Set4Slack(float value);
    std::vector<float> Get4Weights() const;
    void Set4Weights(std::vector<float> value);

    std::string ToPtr();
    bool IsValid();
};

class GCEmitTagActionUpdater
{
private:
    void *m_ptr;

public:
    GCEmitTagActionUpdater(std::string ptr);
    GCEmitTagActionUpdater(void *ptr);

    int32_t GetTagIndex() const;
    void SetTagIndex(int32_t value);
    bool GetIsZeroDuration() const;
    void SetIsZeroDuration(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCAddUpdateNode
{
private:
    void *m_ptr;

public:
    GCAddUpdateNode(std::string ptr);
    GCAddUpdateNode(void *ptr);

    BinaryNodeChildOption GetFootMotionTiming() const;
    void SetFootMotionTiming(BinaryNodeChildOption value);
    bool GetApplyToFootMotion() const;
    void SetApplyToFootMotion(bool value);
    bool GetApplyChannelsSeparately() const;
    void SetApplyChannelsSeparately(bool value);
    bool GetUseModelSpace() const;
    void SetUseModelSpace(bool value);
    bool GetApplyScale() const;
    void SetApplyScale(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCAnimTagManagerUpdater
{
private:
    void *m_ptr;

public:
    GCAnimTagManagerUpdater(std::string ptr);
    GCAnimTagManagerUpdater(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GSampleCode
{
private:
    void *m_ptr;

public:
    GSampleCode(std::string ptr);
    GSampleCode(void *ptr);

    std::vector<uint8_t> GetSubCode() const;
    void SetSubCode(std::vector<uint8_t> value);

    std::string ToPtr();
    bool IsValid();
};

class GCExpressionActionUpdater
{
private:
    void *m_ptr;

public:
    GCExpressionActionUpdater(std::string ptr);
    GCExpressionActionUpdater(void *ptr);

    GCAnimParamHandle GetParam() const;
    void SetParam(GCAnimParamHandle value);
    AnimParamType_t GetParamType() const;
    void SetParamType(AnimParamType_t value);
    GAnimScriptHandle GetScript() const;
    void SetScript(GAnimScriptHandle value);

    std::string ToPtr();
    bool IsValid();
};

class GEventClientPostAdvanceTick_t
{
private:
    void *m_ptr;

public:
    GEventClientPostAdvanceTick_t(std::string ptr);
    GEventClientPostAdvanceTick_t(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GBoneDemoCaptureSettings_t
{
private:
    void *m_ptr;

public:
    GBoneDemoCaptureSettings_t(std::string ptr);
    GBoneDemoCaptureSettings_t(void *ptr);

    CUtlString GetBoneName() const;
    void SetBoneName(CUtlString value);
    float GetErrorSplineRotationMax() const;
    void SetErrorSplineRotationMax(float value);
    float GetErrorSplineTranslationMax() const;
    void SetErrorSplineTranslationMax(float value);
    float GetErrorSplineScaleMax() const;
    void SetErrorSplineScaleMax(float value);
    float GetErrorQuantizationRotationMax() const;
    void SetErrorQuantizationRotationMax(float value);
    float GetErrorQuantizationTranslationMax() const;
    void SetErrorQuantizationTranslationMax(float value);
    float GetErrorQuantizationScaleMax() const;
    void SetErrorQuantizationScaleMax(float value);

    std::string ToPtr();
    bool IsValid();
};

class GVPhysXBodyPart_t
{
private:
    void *m_ptr;

public:
    GVPhysXBodyPart_t(std::string ptr);
    GVPhysXBodyPart_t(void *ptr);

    uint32_t GetFlags() const;
    void SetFlags(uint32_t value);
    float GetMass() const;
    void SetMass(float value);
    GVPhysics2ShapeDef_t GetRnShape() const;
    void SetRnShape(GVPhysics2ShapeDef_t value);
    uint16_t GetCollisionAttributeIndex() const;
    void SetCollisionAttributeIndex(uint16_t value);
    uint16_t GetReserved() const;
    void SetReserved(uint16_t value);
    float GetInertiaScale() const;
    void SetInertiaScale(float value);
    float GetLinearDamping() const;
    void SetLinearDamping(float value);
    float GetAngularDamping() const;
    void SetAngularDamping(float value);
    bool GetOverrideMassCenter() const;
    void SetOverrideMassCenter(bool value);
    Vector GetMassCenterOverride() const;
    void SetMassCenterOverride(Vector value);

    std::string ToPtr();
    bool IsValid();
};

class GCDecalInfo
{
private:
    void *m_ptr;

public:
    GCDecalInfo(std::string ptr);
    GCDecalInfo(void *ptr);

    float GetAnimationScale() const;
    void SetAnimationScale(float value);
    float GetAnimationLifeSpan() const;
    void SetAnimationLifeSpan(float value);
    float GetPlaceTime() const;
    void SetPlaceTime(float value);
    float GetFadeStartTime() const;
    void SetFadeStartTime(float value);
    float GetFadeDuration() const;
    void SetFadeDuration(float value);
    int32_t GetVBSlot() const;
    void SetVBSlot(int32_t value);
    int32_t GetBoneIndex() const;
    void SetBoneIndex(int32_t value);
    Vector GetPosition() const;
    void SetPosition(Vector value);
    float GetBoundingRadiusSqr() const;
    void SetBoundingRadiusSqr(float value);
    GCDecalInfo GetNext() const;
    void SetNext(GCDecalInfo* value);
    GCDecalInfo GetPrev() const;
    void SetPrev(GCDecalInfo* value);
    int32_t GetDecalMaterialIndex() const;
    void SetDecalMaterialIndex(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GParticleControlPointConfiguration_t
{
private:
    void *m_ptr;

public:
    GParticleControlPointConfiguration_t(std::string ptr);
    GParticleControlPointConfiguration_t(void *ptr);

    CUtlString GetName() const;
    void SetName(CUtlString value);
    std::vector<GParticleControlPointDriver_t> GetDrivers() const;
    void SetDrivers(std::vector<GParticleControlPointDriver_t> value);
    GParticlePreviewState_t GetPreviewState() const;
    void SetPreviewState(GParticlePreviewState_t value);

    std::string ToPtr();
    bool IsValid();
};

class GVMixUtilityDesc_t
{
private:
    void *m_ptr;

public:
    GVMixUtilityDesc_t(std::string ptr);
    GVMixUtilityDesc_t(void *ptr);

    VMixChannelOperation_t GetOp() const;
    void SetOp(VMixChannelOperation_t value);
    float GetInputPan() const;
    void SetInputPan(float value);
    float GetOutputBalance() const;
    void SetOutputBalance(float value);
    float GetFldbOutputGain() const;
    void SetFldbOutputGain(float value);
    bool GetBassMono() const;
    void SetBassMono(bool value);
    float GetBassFreq() const;
    void SetBassFreq(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCMotionGraphConfig
{
private:
    void *m_ptr;

public:
    GCMotionGraphConfig(std::string ptr);
    GCMotionGraphConfig(void *ptr);

    std::vector<float> GetParamValues() const;
    void SetParamValues(std::vector<float> value);
    float GetDuration() const;
    void SetDuration(float value);
    GMotionIndex GetMotionIndex() const;
    void SetMotionIndex(GMotionIndex value);
    int32_t GetSampleStart() const;
    void SetSampleStart(int32_t value);
    int32_t GetSampleCount() const;
    void SetSampleCount(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCMovementComponentUpdater
{
private:
    void *m_ptr;

public:
    GCMovementComponentUpdater(std::string ptr);
    GCMovementComponentUpdater(void *ptr);

    GCAnimInputDamping GetFacingDamping() const;
    void SetFacingDamping(GCAnimInputDamping value);
    int32_t GetDefaultMotorIndex() const;
    void SetDefaultMotorIndex(int32_t value);
    float GetDefaultRunSpeed() const;
    void SetDefaultRunSpeed(float value);
    bool GetMoveVarsDisabled() const;
    void SetMoveVarsDisabled(bool value);
    bool GetNetworkPath() const;
    void SetNetworkPath(bool value);
    bool GetNetworkFacing() const;
    void SetNetworkFacing(bool value);
    std::vector<GCAnimParamHandle> GetParamHandles() const;
    void SetParamHandles(std::vector<GCAnimParamHandle> value);

    std::string ToPtr();
    bool IsValid();
};

class GPointDefinition_t
{
private:
    void *m_ptr;

public:
    GPointDefinition_t(std::string ptr);
    GPointDefinition_t(void *ptr);

    int32_t GetControlPoint() const;
    void SetControlPoint(int32_t value);
    bool GetLocalCoords() const;
    void SetLocalCoords(bool value);
    Vector GetOffset() const;
    void SetOffset(Vector value);

    std::string ToPtr();
    bool IsValid();
};

class GVMixEffectChainDesc_t
{
private:
    void *m_ptr;

public:
    GVMixEffectChainDesc_t(std::string ptr);
    GVMixEffectChainDesc_t(void *ptr);

    float GetCrossfadeTime() const;
    void SetCrossfadeTime(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCHitReactUpdateNode
{
private:
    void *m_ptr;

public:
    GCHitReactUpdateNode(std::string ptr);
    GCHitReactUpdateNode(void *ptr);

    GHitReactFixedSettings_t GetOpFixedSettings() const;
    void SetOpFixedSettings(GHitReactFixedSettings_t value);
    GCAnimParamHandle GetTriggerParam() const;
    void SetTriggerParam(GCAnimParamHandle value);
    GCAnimParamHandle GetHitBoneParam() const;
    void SetHitBoneParam(GCAnimParamHandle value);
    GCAnimParamHandle GetHitOffsetParam() const;
    void SetHitOffsetParam(GCAnimParamHandle value);
    GCAnimParamHandle GetHitDirectionParam() const;
    void SetHitDirectionParam(GCAnimParamHandle value);
    GCAnimParamHandle GetHitStrengthParam() const;
    void SetHitStrengthParam(GCAnimParamHandle value);
    float GetMinDelayBetweenHits() const;
    void SetMinDelayBetweenHits(float value);
    bool GetResetChild() const;
    void SetResetChild(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GEntInput_t
{
private:
    void *m_ptr;

public:
    GEntInput_t(std::string ptr);
    GEntInput_t(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCNmVirtualParameterFloatNode
{
private:
    void *m_ptr;

public:
    GCNmVirtualParameterFloatNode(std::string ptr);
    GCNmVirtualParameterFloatNode(void *ptr);

    int16_t GetChildNodeIdx() const;
    void SetChildNodeIdx(int16_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCParticleSystemDefinition
{
private:
    void *m_ptr;

public:
    GCParticleSystemDefinition(std::string ptr);
    GCParticleSystemDefinition(void *ptr);

    int32_t GetBehaviorVersion() const;
    void SetBehaviorVersion(int32_t value);
    std::vector<GCParticleFunctionPreEmission*> GetPreEmissionOperators() const;
    void SetPreEmissionOperators(std::vector<GCParticleFunctionPreEmission*> value);
    std::vector<GCParticleFunctionEmitter*> GetEmitters() const;
    void SetEmitters(std::vector<GCParticleFunctionEmitter*> value);
    std::vector<GCParticleFunctionInitializer*> GetInitializers() const;
    void SetInitializers(std::vector<GCParticleFunctionInitializer*> value);
    std::vector<GCParticleFunctionOperator*> GetOperators() const;
    void SetOperators(std::vector<GCParticleFunctionOperator*> value);
    std::vector<GCParticleFunctionForce*> GetForceGenerators() const;
    void SetForceGenerators(std::vector<GCParticleFunctionForce*> value);
    std::vector<GCParticleFunctionConstraint*> GetConstraints() const;
    void SetConstraints(std::vector<GCParticleFunctionConstraint*> value);
    std::vector<GCParticleFunctionRenderer*> GetRenderers() const;
    void SetRenderers(std::vector<GCParticleFunctionRenderer*> value);
    std::vector<GParticleChildrenInfo_t> GetChildren() const;
    void SetChildren(std::vector<GParticleChildrenInfo_t> value);
    int32_t GetFirstMultipleOverride_BackwardCompat() const;
    void SetFirstMultipleOverride_BackwardCompat(int32_t value);
    int32_t GetInitialParticles() const;
    void SetInitialParticles(int32_t value);
    int32_t GetMaxParticles() const;
    void SetMaxParticles(int32_t value);
    int32_t GetGroupID() const;
    void SetGroupID(int32_t value);
    Vector GetBoundingBoxMin() const;
    void SetBoundingBoxMin(Vector value);
    Vector GetBoundingBoxMax() const;
    void SetBoundingBoxMax(Vector value);
    float GetDepthSortBias() const;
    void SetDepthSortBias(float value);
    int32_t GetSortOverridePositionCP() const;
    void SetSortOverridePositionCP(int32_t value);
    bool GetInfiniteBounds() const;
    void SetInfiniteBounds(bool value);
    bool GetEnableNamedValues() const;
    void SetEnableNamedValues(bool value);
    CUtlString GetNamedValueDomain() const;
    void SetNamedValueDomain(CUtlString value);
    std::vector<GParticleNamedValueSource_t*> GetNamedValueLocals() const;
    void SetNamedValueLocals(std::vector<GParticleNamedValueSource_t*> value);
    Color GetConstantColor() const;
    void SetConstantColor(Color value);
    Vector GetConstantNormal() const;
    void SetConstantNormal(Vector value);
    float GetConstantRadius() const;
    void SetConstantRadius(float value);
    float GetConstantRotation() const;
    void SetConstantRotation(float value);
    float GetConstantRotationSpeed() const;
    void SetConstantRotationSpeed(float value);
    float GetConstantLifespan() const;
    void SetConstantLifespan(float value);
    int32_t GetConstantSequenceNumber() const;
    void SetConstantSequenceNumber(int32_t value);
    int32_t GetConstantSequenceNumber1() const;
    void SetConstantSequenceNumber1(int32_t value);
    int32_t GetSnapshotControlPoint() const;
    void SetSnapshotControlPoint(int32_t value);
    float GetCullRadius() const;
    void SetCullRadius(float value);
    float GetCullFillCost() const;
    void SetCullFillCost(float value);
    int32_t GetCullControlPoint() const;
    void SetCullControlPoint(int32_t value);
    int32_t GetFallbackMaxCount() const;
    void SetFallbackMaxCount(int32_t value);
    float GetPreSimulationTime() const;
    void SetPreSimulationTime(float value);
    float GetStopSimulationAfterTime() const;
    void SetStopSimulationAfterTime(float value);
    float GetMaximumTimeStep() const;
    void SetMaximumTimeStep(float value);
    float GetMaximumSimTime() const;
    void SetMaximumSimTime(float value);
    float GetMinimumSimTime() const;
    void SetMinimumSimTime(float value);
    float GetMinimumTimeStep() const;
    void SetMinimumTimeStep(float value);
    int32_t GetMinimumFrames() const;
    void SetMinimumFrames(int32_t value);
    int32_t GetMinCPULevel() const;
    void SetMinCPULevel(int32_t value);
    int32_t GetMinGPULevel() const;
    void SetMinGPULevel(int32_t value);
    float GetNoDrawTimeToGoToSleep() const;
    void SetNoDrawTimeToGoToSleep(float value);
    float GetMaxDrawDistance() const;
    void SetMaxDrawDistance(float value);
    float GetStartFadeDistance() const;
    void SetStartFadeDistance(float value);
    float GetMaxCreationDistance() const;
    void SetMaxCreationDistance(float value);
    int32_t GetAggregationMinAvailableParticles() const;
    void SetAggregationMinAvailableParticles(int32_t value);
    float GetAggregateRadius() const;
    void SetAggregateRadius(float value);
    bool GetShouldBatch() const;
    void SetShouldBatch(bool value);
    bool GetShouldHitboxesFallbackToRenderBounds() const;
    void SetShouldHitboxesFallbackToRenderBounds(bool value);
    bool GetShouldHitboxesFallbackToSnapshot() const;
    void SetShouldHitboxesFallbackToSnapshot(bool value);
    bool GetShouldHitboxesFallbackToCollisionHulls() const;
    void SetShouldHitboxesFallbackToCollisionHulls(bool value);
    InheritableBoolType_t GetViewModelEffect() const;
    void SetViewModelEffect(InheritableBoolType_t value);
    bool GetScreenSpaceEffect() const;
    void SetScreenSpaceEffect(bool value);
    CUtlSymbolLarge GetTargetLayerID() const;
    void SetTargetLayerID(CUtlSymbolLarge value);
    int32_t GetSkipRenderControlPoint() const;
    void SetSkipRenderControlPoint(int32_t value);
    int32_t GetAllowRenderControlPoint() const;
    void SetAllowRenderControlPoint(int32_t value);
    bool GetShouldSort() const;
    void SetShouldSort(bool value);
    std::vector<GParticleControlPointConfiguration_t> GetControlPointConfigurations() const;
    void SetControlPointConfigurations(std::vector<GParticleControlPointConfiguration_t> value);

    std::string ToPtr();
    bool IsValid();
};

class GCVoiceContainerSelector
{
private:
    void *m_ptr;

public:
    GCVoiceContainerSelector(std::string ptr);
    GCVoiceContainerSelector(void *ptr);

    PlayBackMode_t GetMode() const;
    void SetMode(PlayBackMode_t value);
    bool GetRetrigger() const;
    void SetRetrigger(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCRegionSVM
{
private:
    void *m_ptr;

public:
    GCRegionSVM(std::string ptr);
    GCRegionSVM(void *ptr);

    std::vector<GRnPlane_t> GetPlanes() const;
    void SetPlanes(std::vector<GRnPlane_t> value);
    std::vector<uint32> GetNodes() const;
    void SetNodes(std::vector<uint32> value);

    std::string ToPtr();
    bool IsValid();
};

class GCSetParameterActionUpdater
{
private:
    void *m_ptr;

public:
    GCSetParameterActionUpdater(std::string ptr);
    GCSetParameterActionUpdater(void *ptr);

    GCAnimParamHandle GetParam() const;
    void SetParam(GCAnimParamHandle value);

    std::string ToPtr();
    bool IsValid();
};

class GCAnimUpdateSharedData
{
private:
    void *m_ptr;

public:
    GCAnimUpdateSharedData(std::string ptr);
    GCAnimUpdateSharedData(void *ptr);

    GCAnimGraphSettingsManager GetSettings() const;
    void SetSettings(GCAnimGraphSettingsManager value);
    GCAnimNodePath GetRootNodePath() const;
    void SetRootNodePath(GCAnimNodePath value);

    std::string ToPtr();
    bool IsValid();
};

class GEventClientSimulate_t
{
private:
    void *m_ptr;

public:
    GEventClientSimulate_t(std::string ptr);
    GEventClientSimulate_t(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCVoiceContainerAmpedDecayingSineWave
{
private:
    void *m_ptr;

public:
    GCVoiceContainerAmpedDecayingSineWave(std::string ptr);
    GCVoiceContainerAmpedDecayingSineWave(void *ptr);

    float GetGainAmount() const;
    void SetGainAmount(float value);

    std::string ToPtr();
    bool IsValid();
};

class GClutterTile_t
{
private:
    void *m_ptr;

public:
    GClutterTile_t(std::string ptr);
    GClutterTile_t(void *ptr);

    uint32_t GetFirstInstance() const;
    void SetFirstInstance(uint32_t value);
    uint32_t GetLastInstance() const;
    void SetLastInstance(uint32_t value);
    GAABB_t GetBoundsWs() const;
    void SetBoundsWs(GAABB_t value);

    std::string ToPtr();
    bool IsValid();
};

class GPointDefinitionWithTimeValues_t
{
private:
    void *m_ptr;

public:
    GPointDefinitionWithTimeValues_t(std::string ptr);
    GPointDefinitionWithTimeValues_t(void *ptr);

    float GetTimeDuration() const;
    void SetTimeDuration(float value);

    std::string ToPtr();
    bool IsValid();
};

class GFeVertexMapBuild_t
{
private:
    void *m_ptr;

public:
    GFeVertexMapBuild_t(std::string ptr);
    GFeVertexMapBuild_t(void *ptr);

    CUtlString GetVertexMapName() const;
    void SetVertexMapName(CUtlString value);
    uint32_t GetNameHash() const;
    void SetNameHash(uint32_t value);
    Color GetColor() const;
    void SetColor(Color value);
    float GetVolumetricSolveStrength() const;
    void SetVolumetricSolveStrength(float value);
    int32_t GetScaleSourceNode() const;
    void SetScaleSourceNode(int32_t value);
    std::vector<float32> GetWeights() const;
    void SetWeights(std::vector<float32> value);

    std::string ToPtr();
    bool IsValid();
};

class GCAnimDesc
{
private:
    void *m_ptr;

public:
    GCAnimDesc(std::string ptr);
    GCAnimDesc(void *ptr);

    CBufferString GetName() const;
    void SetName(CBufferString value);
    GCAnimDesc_Flag GetFlags() const;
    void SetFlags(GCAnimDesc_Flag value);
    float GetFps() const;
    void SetFps(float value);
    GCAnimEncodedFrames GetData() const;
    void SetData(GCAnimEncodedFrames value);
    std::vector<GCAnimMovement> GetMovementArray() const;
    void SetMovementArray(std::vector<GCAnimMovement> value);
    std::vector<GCAnimEventDefinition> GetEventArray() const;
    void SetEventArray(std::vector<GCAnimEventDefinition> value);
    std::vector<GCAnimActivity> GetActivityArray() const;
    void SetActivityArray(std::vector<GCAnimActivity> value);
    std::vector<GCAnimLocalHierarchy> GetHierarchyArray() const;
    void SetHierarchyArray(std::vector<GCAnimLocalHierarchy> value);
    float GetFramestalltime() const;
    void SetFramestalltime(float value);
    Vector GetRootMin() const;
    void SetRootMin(Vector value);
    Vector GetRootMax() const;
    void SetRootMax(Vector value);
    std::vector<Vector> GetBoneWorldMin() const;
    void SetBoneWorldMin(std::vector<Vector> value);
    std::vector<Vector> GetBoneWorldMax() const;
    void SetBoneWorldMax(std::vector<Vector> value);
    GCAnimSequenceParams GetSequenceParams() const;
    void SetSequenceParams(GCAnimSequenceParams value);

    std::string ToPtr();
    bool IsValid();
};

class GCTwistConstraint
{
private:
    void *m_ptr;

public:
    GCTwistConstraint(std::string ptr);
    GCTwistConstraint(void *ptr);

    bool GetInverse() const;
    void SetInverse(bool value);
    Quaternion GetParentBindRotation() const;
    void SetParentBindRotation(Quaternion value);
    Quaternion GetChildBindRotation() const;
    void SetChildBindRotation(Quaternion value);

    std::string ToPtr();
    bool IsValid();
};

class GCNewParticleEffect
{
private:
    void *m_ptr;

public:
    GCNewParticleEffect(std::string ptr);
    GCNewParticleEffect(void *ptr);

    GCNewParticleEffect GetNext() const;
    void SetNext(GCNewParticleEffect* value);
    GCNewParticleEffect GetPrev() const;
    void SetPrev(GCNewParticleEffect* value);
    GIParticleCollection GetParticles() const;
    void SetParticles(GIParticleCollection* value);
    std::string GetDebugName() const;
    void SetDebugName(std::string value);
    Vector GetSortOrigin() const;
    void SetSortOrigin(Vector value);
    float GetScale() const;
    void SetScale(float value);
    GPARTICLE_EHANDLE__ GetOwner() const;
    void SetOwner(GPARTICLE_EHANDLE__* value);
    GCParticleProperty GetOwningParticleProperty() const;
    void SetOwningParticleProperty(GCParticleProperty* value);
    float GetFreezeTransitionStart() const;
    void SetFreezeTransitionStart(float value);
    float GetFreezeTransitionDuration() const;
    void SetFreezeTransitionDuration(float value);
    float GetFreezeTransitionOverride() const;
    void SetFreezeTransitionOverride(float value);
    bool GetFreezeTransitionActive() const;
    void SetFreezeTransitionActive(bool value);
    bool GetFreezeTargetState() const;
    void SetFreezeTargetState(bool value);
    bool GetCanFreeze() const;
    void SetCanFreeze(bool value);
    Vector GetLastMin() const;
    void SetLastMin(Vector value);
    Vector GetLastMax() const;
    void SetLastMax(Vector value);
    int32_t GetSplitScreenUser() const;
    void SetSplitScreenUser(int32_t value);
    Vector GetAggregationCenter() const;
    void SetAggregationCenter(Vector value);
    int32_t GetRefCount() const;
    void SetRefCount(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCFeIndexedJiggleBone
{
private:
    void *m_ptr;

public:
    GCFeIndexedJiggleBone(std::string ptr);
    GCFeIndexedJiggleBone(void *ptr);

    uint32_t GetNode() const;
    void SetNode(uint32_t value);
    uint32_t GetJiggleParent() const;
    void SetJiggleParent(uint32_t value);
    GCFeJiggleBone GetJiggleBone() const;
    void SetJiggleBone(GCFeJiggleBone value);

    std::string ToPtr();
    bool IsValid();
};

class GCFloatAnimParameter
{
private:
    void *m_ptr;

public:
    GCFloatAnimParameter(std::string ptr);
    GCFloatAnimParameter(void *ptr);

    float GetDefaultValue() const;
    void SetDefaultValue(float value);
    float GetMinValue() const;
    void SetMinValue(float value);
    float GetMaxValue() const;
    void SetMaxValue(float value);
    bool GetInterpolate() const;
    void SetInterpolate(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GRnBlendVertex_t
{
private:
    void *m_ptr;

public:
    GRnBlendVertex_t(std::string ptr);
    GRnBlendVertex_t(void *ptr);

    uint16_t GetWeight0() const;
    void SetWeight0(uint16_t value);
    uint16_t GetIndex0() const;
    void SetIndex0(uint16_t value);
    uint16_t GetWeight1() const;
    void SetWeight1(uint16_t value);
    uint16_t GetIndex1() const;
    void SetIndex1(uint16_t value);
    uint16_t GetWeight2() const;
    void SetWeight2(uint16_t value);
    uint16_t GetIndex2() const;
    void SetIndex2(uint16_t value);
    uint16_t GetFlags() const;
    void SetFlags(uint16_t value);
    uint16_t GetTargetIndex() const;
    void SetTargetIndex(uint16_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCVirtualAnimParameter
{
private:
    void *m_ptr;

public:
    GCVirtualAnimParameter(std::string ptr);
    GCVirtualAnimParameter(void *ptr);

    CUtlString GetExpressionString() const;
    void SetExpressionString(CUtlString value);
    AnimParamType_t GetParamType() const;
    void SetParamType(AnimParamType_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCHitBoxSetList
{
private:
    void *m_ptr;

public:
    GCHitBoxSetList(std::string ptr);
    GCHitBoxSetList(void *ptr);

    std::vector<GCHitBoxSet> GetHitBoxSets() const;
    void SetHitBoxSets(std::vector<GCHitBoxSet> value);

    std::string ToPtr();
    bool IsValid();
};

class GMaterialParamString_t
{
private:
    void *m_ptr;

public:
    GMaterialParamString_t(std::string ptr);
    GMaterialParamString_t(void *ptr);

    CUtlString GetValue() const;
    void SetValue(CUtlString value);

    std::string ToPtr();
    bool IsValid();
};

class GVsInputSignature_t
{
private:
    void *m_ptr;

public:
    GVsInputSignature_t(std::string ptr);
    GVsInputSignature_t(void *ptr);

    std::vector<GVsInputSignatureElement_t> GetElems() const;
    void SetElems(std::vector<GVsInputSignatureElement_t> value);

    std::string ToPtr();
    bool IsValid();
};

class GInfoOverlayData_t
{
private:
    void *m_ptr;

public:
    GInfoOverlayData_t(std::string ptr);
    GInfoOverlayData_t(void *ptr);

    matrix3x4_t GetTransform() const;
    void SetTransform(matrix3x4_t value);
    float GetWidth() const;
    void SetWidth(float value);
    float GetHeight() const;
    void SetHeight(float value);
    float GetDepth() const;
    void SetDepth(float value);
    Vector2D GetUVStart() const;
    void SetUVStart(Vector2D value);
    Vector2D GetUVEnd() const;
    void SetUVEnd(Vector2D value);
    int32_t GetRenderOrder() const;
    void SetRenderOrder(int32_t value);
    Vector4D GetTintColor() const;
    void SetTintColor(Vector4D value);
    int32_t GetSequenceOverride() const;
    void SetSequenceOverride(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCastSphereSATParams_t
{
private:
    void *m_ptr;

public:
    GCastSphereSATParams_t(std::string ptr);
    GCastSphereSATParams_t(void *ptr);

    Vector GetRayStart() const;
    void SetRayStart(Vector value);
    Vector GetRayDelta() const;
    void SetRayDelta(Vector value);
    float GetRadius() const;
    void SetRadius(float value);
    float GetMaxFraction() const;
    void SetMaxFraction(float value);
    float GetScale() const;
    void SetScale(float value);
    GRnHull_t GetHull() const;
    void SetHull(GRnHull_t* value);

    std::string ToPtr();
    bool IsValid();
};

class GCBindPoseUpdateNode
{
private:
    void *m_ptr;

public:
    GCBindPoseUpdateNode(std::string ptr);
    GCBindPoseUpdateNode(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GVMixFreeverbDesc_t
{
private:
    void *m_ptr;

public:
    GVMixFreeverbDesc_t(std::string ptr);
    GVMixFreeverbDesc_t(void *ptr);

    float GetRoomSize() const;
    void SetRoomSize(float value);
    float GetDamp() const;
    void SetDamp(float value);
    float GetWidth() const;
    void SetWidth(float value);
    float GetLateReflections() const;
    void SetLateReflections(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCCurrentVelocityMetricEvaluator
{
private:
    void *m_ptr;

public:
    GCCurrentVelocityMetricEvaluator(std::string ptr);
    GCCurrentVelocityMetricEvaluator(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCVoxelVisibility
{
private:
    void *m_ptr;

public:
    GCVoxelVisibility(std::string ptr);
    GCVoxelVisibility(void *ptr);

    uint32_t GetBaseClusterCount() const;
    void SetBaseClusterCount(uint32_t value);
    uint32_t GetPVSBytesPerCluster() const;
    void SetPVSBytesPerCluster(uint32_t value);
    Vector GetMinBounds() const;
    void SetMinBounds(Vector value);
    Vector GetMaxBounds() const;
    void SetMaxBounds(Vector value);
    float GetGridSize() const;
    void SetGridSize(float value);
    uint32_t GetSkyVisibilityCluster() const;
    void SetSkyVisibilityCluster(uint32_t value);
    uint32_t GetSunVisibilityCluster() const;
    void SetSunVisibilityCluster(uint32_t value);
    GVoxelVisBlockOffset_t GetNodeBlock() const;
    void SetNodeBlock(GVoxelVisBlockOffset_t value);
    GVoxelVisBlockOffset_t GetRegionBlock() const;
    void SetRegionBlock(GVoxelVisBlockOffset_t value);
    GVoxelVisBlockOffset_t GetEnclosedClusterListBlock() const;
    void SetEnclosedClusterListBlock(GVoxelVisBlockOffset_t value);
    GVoxelVisBlockOffset_t GetEnclosedClustersBlock() const;
    void SetEnclosedClustersBlock(GVoxelVisBlockOffset_t value);
    GVoxelVisBlockOffset_t GetMasksBlock() const;
    void SetMasksBlock(GVoxelVisBlockOffset_t value);
    GVoxelVisBlockOffset_t GetVisBlocks() const;
    void SetVisBlocks(GVoxelVisBlockOffset_t value);

    std::string ToPtr();
    bool IsValid();
};

class GSelectedEditItemInfo_t
{
private:
    void *m_ptr;

public:
    GSelectedEditItemInfo_t(std::string ptr);
    GSelectedEditItemInfo_t(void *ptr);

    std::vector<GSosEditItemInfo_t> GetEditItems() const;
    void SetEditItems(std::vector<GSosEditItemInfo_t> value);

    std::string ToPtr();
    bool IsValid();
};

class GChainToSolveData_t
{
private:
    void *m_ptr;

public:
    GChainToSolveData_t(std::string ptr);
    GChainToSolveData_t(void *ptr);

    int32_t GetChainIndex() const;
    void SetChainIndex(int32_t value);
    GIKSolverSettings_t GetSolverSettings() const;
    void SetSolverSettings(GIKSolverSettings_t value);
    GIKTargetSettings_t GetTargetSettings() const;
    void SetTargetSettings(GIKTargetSettings_t value);
    SolveIKChainAnimNodeDebugSetting GetDebugSetting() const;
    void SetDebugSetting(SolveIKChainAnimNodeDebugSetting value);
    float GetDebugNormalizedValue() const;
    void SetDebugNormalizedValue(float value);
    Vector GetDebugOffset() const;
    void SetDebugOffset(Vector value);

    std::string ToPtr();
    bool IsValid();
};

class GCGlowSprite
{
private:
    void *m_ptr;

public:
    GCGlowSprite(std::string ptr);
    GCGlowSprite(void *ptr);

    Vector GetColor() const;
    void SetColor(Vector value);
    float GetHorzSize() const;
    void SetHorzSize(float value);
    float GetVertSize() const;
    void SetVertSize(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCSSDSMsg_PostLayer
{
private:
    void *m_ptr;

public:
    GCSSDSMsg_PostLayer(std::string ptr);
    GCSSDSMsg_PostLayer(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCAnimBone
{
private:
    void *m_ptr;

public:
    GCAnimBone(std::string ptr);
    GCAnimBone(void *ptr);

    CBufferString GetName() const;
    void SetName(CBufferString value);
    int32_t GetParent() const;
    void SetParent(int32_t value);
    Vector GetPos() const;
    void SetPos(Vector value);
    float GetScale() const;
    void SetScale(float value);
    int32_t GetFlags() const;
    void SetFlags(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GVPhysXConstraint2_t
{
private:
    void *m_ptr;

public:
    GVPhysXConstraint2_t(std::string ptr);
    GVPhysXConstraint2_t(void *ptr);

    uint32_t GetFlags() const;
    void SetFlags(uint32_t value);
    uint16_t GetParent() const;
    void SetParent(uint16_t value);
    uint16_t GetChild() const;
    void SetChild(uint16_t value);
    GVPhysXConstraintParams_t GetParams() const;
    void SetParams(GVPhysXConstraintParams_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCEditableMotionGraph
{
private:
    void *m_ptr;

public:
    GCEditableMotionGraph(std::string ptr);
    GCEditableMotionGraph(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCAnimKeyData
{
private:
    void *m_ptr;

public:
    GCAnimKeyData(std::string ptr);
    GCAnimKeyData(void *ptr);

    CBufferString GetName() const;
    void SetName(CBufferString value);
    std::vector<GCAnimBone> GetBoneArray() const;
    void SetBoneArray(std::vector<GCAnimBone> value);
    std::vector<GCAnimUser> GetUserArray() const;
    void SetUserArray(std::vector<GCAnimUser> value);
    std::vector<CBufferString> GetMorphArray() const;
    void SetMorphArray(std::vector<CBufferString> value);
    int32_t GetChannelElements() const;
    void SetChannelElements(int32_t value);
    std::vector<GCAnimDataChannelDesc> GetDataChannelArray() const;
    void SetDataChannelArray(std::vector<GCAnimDataChannelDesc> value);

    std::string ToPtr();
    bool IsValid();
};

class GEventPreDataUpdate_t
{
private:
    void *m_ptr;

public:
    GEventPreDataUpdate_t(std::string ptr);
    GEventPreDataUpdate_t(void *ptr);

    int32_t GetCount() const;
    void SetCount(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GWorld_t
{
private:
    void *m_ptr;

public:
    GWorld_t(std::string ptr);
    GWorld_t(void *ptr);

    GWorldBuilderParams_t GetBuilderParams() const;
    void SetBuilderParams(GWorldBuilderParams_t value);
    std::vector<GNodeData_t> GetWorldNodes() const;
    void SetWorldNodes(std::vector<GNodeData_t> value);
    GBakedLightingInfo_t GetWorldLightingInfo() const;
    void SetWorldLightingInfo(GBakedLightingInfo_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCVectorAnimParameter
{
private:
    void *m_ptr;

public:
    GCVectorAnimParameter(std::string ptr);
    GCVectorAnimParameter(void *ptr);

    Vector GetDefaultValue() const;
    void SetDefaultValue(Vector value);
    bool GetInterpolate() const;
    void SetInterpolate(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCNmControlParameterBoolNode
{
private:
    void *m_ptr;

public:
    GCNmControlParameterBoolNode(std::string ptr);
    GCNmControlParameterBoolNode(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCStateMachineUpdateNode
{
private:
    void *m_ptr;

public:
    GCStateMachineUpdateNode(std::string ptr);
    GCStateMachineUpdateNode(void *ptr);

    GCAnimStateMachineUpdater GetStateMachine() const;
    void SetStateMachine(GCAnimStateMachineUpdater value);
    std::vector<GCStateNodeStateData> GetStateData() const;
    void SetStateData(std::vector<GCStateNodeStateData> value);
    std::vector<GCStateNodeTransitionData> GetTransitionData() const;
    void SetTransitionData(std::vector<GCStateNodeTransitionData> value);
    bool GetBlockWaningTags() const;
    void SetBlockWaningTags(bool value);
    bool GetLockStateWhenWaning() const;
    void SetLockStateWhenWaning(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCHitBoxSet
{
private:
    void *m_ptr;

public:
    GCHitBoxSet(std::string ptr);
    GCHitBoxSet(void *ptr);

    CUtlString GetName() const;
    void SetName(CUtlString value);
    uint32_t GetNameHash() const;
    void SetNameHash(uint32_t value);
    std::vector<GCHitBox> GetHitBoxes() const;
    void SetHitBoxes(std::vector<GCHitBox> value);
    CUtlString GetSourceFilename() const;
    void SetSourceFilename(CUtlString value);

    std::string ToPtr();
    bool IsValid();
};

class GCExampleSchemaVData_PolymorphicDerivedB
{
private:
    void *m_ptr;

public:
    GCExampleSchemaVData_PolymorphicDerivedB(std::string ptr);
    GCExampleSchemaVData_PolymorphicDerivedB(void *ptr);

    int32_t GetDerivedB() const;
    void SetDerivedB(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GFeSimdTri_t
{
private:
    void *m_ptr;

public:
    GFeSimdTri_t(std::string ptr);
    GFeSimdTri_t(void *ptr);

    float GetW1() const;
    void SetW1(float value);
    float GetW2() const;
    void SetW2(float value);
    float Get1x() const;
    void Set1x(float value);

    std::string ToPtr();
    bool IsValid();
};

class GPostProcessingResource_t
{
private:
    void *m_ptr;

public:
    GPostProcessingResource_t(std::string ptr);
    GPostProcessingResource_t(void *ptr);

    bool GetHasTonemapParams() const;
    void SetHasTonemapParams(bool value);
    GPostProcessingTonemapParameters_t GetToneMapParams() const;
    void SetToneMapParams(GPostProcessingTonemapParameters_t value);
    bool GetHasBloomParams() const;
    void SetHasBloomParams(bool value);
    GPostProcessingBloomParameters_t GetBloomParams() const;
    void SetBloomParams(GPostProcessingBloomParameters_t value);
    bool GetHasVignetteParams() const;
    void SetHasVignetteParams(bool value);
    GPostProcessingVignetteParameters_t GetVignetteParams() const;
    void SetVignetteParams(GPostProcessingVignetteParameters_t value);
    bool GetHasLocalContrastParams() const;
    void SetHasLocalContrastParams(bool value);
    GPostProcessingLocalContrastParameters_t GetLocalConstrastParams() const;
    void SetLocalConstrastParams(GPostProcessingLocalContrastParameters_t value);
    int32_t GetColorCorrectionVolumeDim() const;
    void SetColorCorrectionVolumeDim(int32_t value);
    bool GetHasColorCorrection() const;
    void SetHasColorCorrection(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCNmStateNode
{
private:
    void *m_ptr;

public:
    GCNmStateNode(std::string ptr);
    GCNmStateNode(void *ptr);

    int16_t GetChildNodeIdx() const;
    void SetChildNodeIdx(int16_t value);
    int16_t GetLayerWeightNodeIdx() const;
    void SetLayerWeightNodeIdx(int16_t value);
    int16_t GetLayerRootMotionWeightNodeIdx() const;
    void SetLayerRootMotionWeightNodeIdx(int16_t value);
    int16_t GetLayerBoneMaskNodeIdx() const;
    void SetLayerBoneMaskNodeIdx(int16_t value);
    bool GetIsOffState() const;
    void SetIsOffState(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GNodeData_t
{
private:
    void *m_ptr;

public:
    GNodeData_t(std::string ptr);
    GNodeData_t(void *ptr);

    int32_t GetParent() const;
    void SetParent(int32_t value);
    Vector GetOrigin() const;
    void SetOrigin(Vector value);
    Vector GetMinBounds() const;
    void SetMinBounds(Vector value);
    Vector GetMaxBounds() const;
    void SetMaxBounds(Vector value);
    float GetMinimumDistance() const;
    void SetMinimumDistance(float value);
    std::vector<int32> GetChildNodeIndices() const;
    void SetChildNodeIndices(std::vector<int32> value);
    CUtlString GetWorldNodePrefix() const;
    void SetWorldNodePrefix(CUtlString value);

    std::string ToPtr();
    bool IsValid();
};

class GCTaskStatusAnimTag
{
private:
    void *m_ptr;

public:
    GCTaskStatusAnimTag(std::string ptr);
    GCTaskStatusAnimTag(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCMaterialDrawDescriptor
{
private:
    void *m_ptr;

public:
    GCMaterialDrawDescriptor(std::string ptr);
    GCMaterialDrawDescriptor(void *ptr);

    float GetUvDensity() const;
    void SetUvDensity(float value);
    Vector GetTintColor() const;
    void SetTintColor(Vector value);
    float GetAlpha() const;
    void SetAlpha(float value);
    uint32_t GetFirstMeshlet() const;
    void SetFirstMeshlet(uint32_t value);
    uint16_t GetNumMeshlets() const;
    void SetNumMeshlets(uint16_t value);
    RenderPrimitiveType_t GetPrimitiveType() const;
    void SetPrimitiveType(RenderPrimitiveType_t value);
    int32_t GetBaseVertex() const;
    void SetBaseVertex(int32_t value);
    int32_t GetVertexCount() const;
    void SetVertexCount(int32_t value);
    int32_t GetStartIndex() const;
    void SetStartIndex(int32_t value);
    int32_t GetIndexCount() const;
    void SetIndexCount(int32_t value);
    GCRenderBufferBinding GetIndexBuffer() const;
    void SetIndexBuffer(GCRenderBufferBinding value);

    std::string ToPtr();
    bool IsValid();
};

class GEventServerProcessNetworking_t
{
private:
    void *m_ptr;

public:
    GEventServerProcessNetworking_t(std::string ptr);
    GEventServerProcessNetworking_t(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCInterpolatedValue
{
private:
    void *m_ptr;

public:
    GCInterpolatedValue(std::string ptr);
    GCInterpolatedValue(void *ptr);

    float GetStartTime() const;
    void SetStartTime(float value);
    float GetEndTime() const;
    void SetEndTime(float value);
    float GetStartValue() const;
    void SetStartValue(float value);
    float GetEndValue() const;
    void SetEndValue(float value);
    int32_t GetInterpType() const;
    void SetInterpType(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCMotionGraphUpdateNode
{
private:
    void *m_ptr;

public:
    GCMotionGraphUpdateNode(std::string ptr);
    GCMotionGraphUpdateNode(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCLookAtUpdateNode
{
private:
    void *m_ptr;

public:
    GCLookAtUpdateNode(std::string ptr);
    GCLookAtUpdateNode(void *ptr);

    GLookAtOpFixedSettings_t GetOpFixedSettings() const;
    void SetOpFixedSettings(GLookAtOpFixedSettings_t value);
    AnimVectorSource GetTarget() const;
    void SetTarget(AnimVectorSource value);
    GCAnimParamHandle GetParamIndex() const;
    void SetParamIndex(GCAnimParamHandle value);
    GCAnimParamHandle GetWeightParamIndex() const;
    void SetWeightParamIndex(GCAnimParamHandle value);
    bool GetResetChild() const;
    void SetResetChild(bool value);
    bool GetLockWhenWaning() const;
    void SetLockWhenWaning(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCFlexController
{
private:
    void *m_ptr;

public:
    GCFlexController(std::string ptr);
    GCFlexController(void *ptr);

    CUtlString GetName() const;
    void SetName(CUtlString value);
    CUtlString GetType() const;
    void SetType(CUtlString value);
    float GetMin() const;
    void SetMin(float value);
    float GetMax() const;
    void SetMax(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCExampleSchemaVData_PolymorphicDerivedA
{
private:
    void *m_ptr;

public:
    GCExampleSchemaVData_PolymorphicDerivedA(std::string ptr);
    GCExampleSchemaVData_PolymorphicDerivedA(void *ptr);

    int32_t GetDerivedA() const;
    void SetDerivedA(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GEntityKeyValueData_t
{
private:
    void *m_ptr;

public:
    GEntityKeyValueData_t(std::string ptr);
    GEntityKeyValueData_t(void *ptr);

    std::vector<GEntityIOConnectionData_t> GetConnections() const;
    void SetConnections(std::vector<GEntityIOConnectionData_t> value);

    std::string ToPtr();
    bool IsValid();
};

class GCFootStride
{
private:
    void *m_ptr;

public:
    GCFootStride(std::string ptr);
    GCFootStride(void *ptr);

    GCFootCycleDefinition GetDefinition() const;
    void SetDefinition(GCFootCycleDefinition value);
    GCFootTrajectories GetTrajectories() const;
    void SetTrajectories(GCFootTrajectories value);

    std::string ToPtr();
    bool IsValid();
};

class GCAnimationGroup
{
private:
    void *m_ptr;

public:
    GCAnimationGroup(std::string ptr);
    GCAnimationGroup(void *ptr);

    uint32_t GetFlags() const;
    void SetFlags(uint32_t value);
    CBufferString GetName() const;
    void SetName(CBufferString value);
    GCAnimKeyData GetDecodeKey() const;
    void SetDecodeKey(GCAnimKeyData value);
    std::vector<CBufferString> GetScripts() const;
    void SetScripts(std::vector<CBufferString> value);

    std::string ToPtr();
    bool IsValid();
};

class GCSubtractUpdateNode
{
private:
    void *m_ptr;

public:
    GCSubtractUpdateNode(std::string ptr);
    GCSubtractUpdateNode(void *ptr);

    BinaryNodeChildOption GetFootMotionTiming() const;
    void SetFootMotionTiming(BinaryNodeChildOption value);
    bool GetApplyToFootMotion() const;
    void SetApplyToFootMotion(bool value);
    bool GetApplyChannelsSeparately() const;
    void SetApplyChannelsSeparately(bool value);
    bool GetUseModelSpace() const;
    void SetUseModelSpace(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GFeTaperedCapsuleStretch_t
{
private:
    void *m_ptr;

public:
    GFeTaperedCapsuleStretch_t(std::string ptr);
    GFeTaperedCapsuleStretch_t(void *ptr);

    std::vector<uint16_t> GetNode() const;
    void SetNode(std::vector<uint16_t> value);
    uint16_t GetCollisionMask() const;
    void SetCollisionMask(uint16_t value);
    uint16_t GetDummy() const;
    void SetDummy(uint16_t value);
    std::vector<float> GetRadius() const;
    void SetRadius(std::vector<float> value);

    std::string ToPtr();
    bool IsValid();
};

class GWorldNodeOnDiskBufferData_t
{
private:
    void *m_ptr;

public:
    GWorldNodeOnDiskBufferData_t(std::string ptr);
    GWorldNodeOnDiskBufferData_t(void *ptr);

    int32_t GetElementCount() const;
    void SetElementCount(int32_t value);
    int32_t GetElementSizeInBytes() const;
    void SetElementSizeInBytes(int32_t value);
    std::vector<GRenderInputLayoutField_t> GetInputLayoutFields() const;
    void SetInputLayoutFields(std::vector<GRenderInputLayoutField_t> value);
    std::vector<uint8> GetData() const;
    void SetData(std::vector<uint8> value);

    std::string ToPtr();
    bool IsValid();
};

class GEntComponentInfo_t
{
private:
    void *m_ptr;

public:
    GEntComponentInfo_t(std::string ptr);
    GEntComponentInfo_t(void *ptr);

    std::string GetName() const;
    void SetName(std::string value);
    std::string GetCPPClassname() const;
    void SetCPPClassname(std::string value);
    std::string GetNetworkDataReferencedDescription() const;
    void SetNetworkDataReferencedDescription(std::string value);
    std::string GetNetworkDataReferencedPtrPropDescription() const;
    void SetNetworkDataReferencedPtrPropDescription(std::string value);
    int32_t GetRuntimeIndex() const;
    void SetRuntimeIndex(int32_t value);
    uint32_t GetFlags() const;
    void SetFlags(uint32_t value);
    GCEntityComponentHelper GetBaseClassComponentHelper() const;
    void SetBaseClassComponentHelper(GCEntityComponentHelper* value);

    std::string ToPtr();
    bool IsValid();
};

class GCClientGapTypeQueryRegistration
{
private:
    void *m_ptr;

public:
    GCClientGapTypeQueryRegistration(std::string ptr);
    GCClientGapTypeQueryRegistration(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCNmVirtualParameterTargetNode
{
private:
    void *m_ptr;

public:
    GCNmVirtualParameterTargetNode(std::string ptr);
    GCNmVirtualParameterTargetNode(void *ptr);

    int16_t GetChildNodeIdx() const;
    void SetChildNodeIdx(int16_t value);

    std::string ToPtr();
    bool IsValid();
};

class GCAudioAnimTag
{
private:
    void *m_ptr;

public:
    GCAudioAnimTag(std::string ptr);
    GCAudioAnimTag(void *ptr);

    CUtlString GetClipName() const;
    void SetClipName(CUtlString value);
    CUtlString GetAttachmentName() const;
    void SetAttachmentName(CUtlString value);
    float GetVolume() const;
    void SetVolume(float value);
    bool GetStopWhenTagEnds() const;
    void SetStopWhenTagEnds(bool value);
    bool GetStopWhenGraphEnds() const;
    void SetStopWhenGraphEnds(bool value);
    bool GetPlayOnServer() const;
    void SetPlayOnServer(bool value);
    bool GetPlayOnClient() const;
    void SetPlayOnClient(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCRenderMesh
{
private:
    void *m_ptr;

public:
    GCRenderMesh(std::string ptr);
    GCRenderMesh(void *ptr);

    std::vector<GCBaseConstraint*> GetConstraints() const;
    void SetConstraints(std::vector<GCBaseConstraint*> value);
    GCRenderSkeleton GetSkeleton() const;
    void SetSkeleton(GCRenderSkeleton value);
    GDynamicMeshDeformParams_t GetMeshDeformParams() const;
    void SetMeshDeformParams(GDynamicMeshDeformParams_t value);
    GCRenderGroom GetGroomData() const;
    void SetGroomData(GCRenderGroom* value);

    std::string ToPtr();
    bool IsValid();
};

class Gconstraint_hingeparams_t
{
private:
    void *m_ptr;

public:
    Gconstraint_hingeparams_t(std::string ptr);
    Gconstraint_hingeparams_t(void *ptr);

    Vector GetWorldPosition() const;
    void SetWorldPosition(Vector value);
    Vector GetWorldAxisDirection() const;
    void SetWorldAxisDirection(Vector value);
    Gconstraint_axislimit_t GetHingeAxis() const;
    void SetHingeAxis(Gconstraint_axislimit_t value);
    Gconstraint_breakableparams_t GetConstraint() const;
    void SetConstraint(Gconstraint_breakableparams_t value);

    std::string ToPtr();
    bool IsValid();
};

class GNmCompressionSettings_t
{
private:
    void *m_ptr;

public:
    GNmCompressionSettings_t(std::string ptr);
    GNmCompressionSettings_t(void *ptr);

    GNmCompressionSettings_t GetTranslationRangeX() const;
    void SetTranslationRangeX(GNmCompressionSettings_t value);
    GNmCompressionSettings_t GetTranslationRangeY() const;
    void SetTranslationRangeY(GNmCompressionSettings_t value);
    GNmCompressionSettings_t GetTranslationRangeZ() const;
    void SetTranslationRangeZ(GNmCompressionSettings_t value);
    GNmCompressionSettings_t GetScaleRange() const;
    void SetScaleRange(GNmCompressionSettings_t value);
    Quaternion GetConstantRotation() const;
    void SetConstantRotation(Quaternion value);
    bool GetIsRotationStatic() const;
    void SetIsRotationStatic(bool value);
    bool GetIsTranslationStatic() const;
    void SetIsTranslationStatic(bool value);
    bool GetIsScaleStatic() const;
    void SetIsScaleStatic(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCTurnHelperUpdateNode
{
private:
    void *m_ptr;

public:
    GCTurnHelperUpdateNode(std::string ptr);
    GCTurnHelperUpdateNode(void *ptr);

    AnimValueSource GetFacingTarget() const;
    void SetFacingTarget(AnimValueSource value);
    float GetTurnStartTimeOffset() const;
    void SetTurnStartTimeOffset(float value);
    float GetTurnDuration() const;
    void SetTurnDuration(float value);
    bool GetMatchChildDuration() const;
    void SetMatchChildDuration(bool value);
    float GetManualTurnOffset() const;
    void SetManualTurnOffset(float value);
    bool GetUseManualTurnOffset() const;
    void SetUseManualTurnOffset(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCSosGroupActionTimeLimitSchema
{
private:
    void *m_ptr;

public:
    GCSosGroupActionTimeLimitSchema(std::string ptr);
    GCSosGroupActionTimeLimitSchema(void *ptr);

    float GetMaxDuration() const;
    void SetMaxDuration(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCFollowTargetUpdateNode
{
private:
    void *m_ptr;

public:
    GCFollowTargetUpdateNode(std::string ptr);
    GCFollowTargetUpdateNode(void *ptr);

    GFollowTargetOpFixedSettings_t GetOpFixedData() const;
    void SetOpFixedData(GFollowTargetOpFixedSettings_t value);
    GCAnimParamHandle GetParameterPosition() const;
    void SetParameterPosition(GCAnimParamHandle value);
    GCAnimParamHandle GetParameterOrientation() const;
    void SetParameterOrientation(GCAnimParamHandle value);

    std::string ToPtr();
    bool IsValid();
};

class GEventClientAdvanceNonRenderedFrame_t
{
private:
    void *m_ptr;

public:
    GEventClientAdvanceNonRenderedFrame_t(std::string ptr);
    GEventClientAdvanceNonRenderedFrame_t(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCSosSoundEventGroupListSchema
{
private:
    void *m_ptr;

public:
    GCSosSoundEventGroupListSchema(std::string ptr);
    GCSosSoundEventGroupListSchema(void *ptr);

    std::vector<GCSosSoundEventGroupSchema> GetGroupList() const;
    void SetGroupList(std::vector<GCSosSoundEventGroupSchema> value);

    std::string ToPtr();
    bool IsValid();
};

class GCNmClip
{
private:
    void *m_ptr;

public:
    GCNmClip(std::string ptr);
    GCNmClip(void *ptr);

    uint32_t GetNumFrames() const;
    void SetNumFrames(uint32_t value);
    float GetDuration() const;
    void SetDuration(float value);
    std::vector<GNmCompressionSettings_t> GetTrackCompressionSettings() const;
    void SetTrackCompressionSettings(std::vector<GNmCompressionSettings_t> value);
    std::vector<uint32> GetCompressedPoseOffsets() const;
    void SetCompressedPoseOffsets(std::vector<uint32> value);
    GCNmSyncTrack GetSyncTrack() const;
    void SetSyncTrack(GCNmSyncTrack value);
    GCNmRootMotionData GetRootMotion() const;
    void SetRootMotion(GCNmRootMotionData value);
    bool GetIsAdditive() const;
    void SetIsAdditive(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GCFlexDesc
{
private:
    void *m_ptr;

public:
    GCFlexDesc(std::string ptr);
    GCFlexDesc(void *ptr);

    CUtlString GetFacs() const;
    void SetFacs(CUtlString value);

    std::string ToPtr();
    bool IsValid();
};

class GCStateMachineComponentUpdater
{
private:
    void *m_ptr;

public:
    GCStateMachineComponentUpdater(std::string ptr);
    GCStateMachineComponentUpdater(void *ptr);

    GCAnimStateMachineUpdater GetStateMachine() const;
    void SetStateMachine(GCAnimStateMachineUpdater value);

    std::string ToPtr();
    bool IsValid();
};

class GCompMatMutatorCondition_t
{
private:
    void *m_ptr;

public:
    GCompMatMutatorCondition_t(std::string ptr);
    GCompMatMutatorCondition_t(void *ptr);

    CompMatPropertyMutatorConditionType_t GetMutatorCondition() const;
    void SetMutatorCondition(CompMatPropertyMutatorConditionType_t value);
    CUtlString GetStrMutatorConditionContainerName() const;
    void SetStrMutatorConditionContainerName(CUtlString value);
    CUtlString GetStrMutatorConditionContainerVarName() const;
    void SetStrMutatorConditionContainerVarName(CUtlString value);
    CUtlString GetStrMutatorConditionContainerVarValue() const;
    void SetStrMutatorConditionContainerVarValue(CUtlString value);
    bool GetPassWhenTrue() const;
    void SetPassWhenTrue(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GFakeEntity_tAPI
{
private:
    void *m_ptr;

public:
    GFakeEntity_tAPI(std::string ptr);
    GFakeEntity_tAPI(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCBoneConstraintPoseSpaceMorph__Input_t
{
private:
    void *m_ptr;

public:
    GCBoneConstraintPoseSpaceMorph__Input_t(std::string ptr);
    GCBoneConstraintPoseSpaceMorph__Input_t(void *ptr);

    Vector GetInputValue() const;
    void SetInputValue(Vector value);
    std::vector<float32> GetOutputWeightList() const;
    void SetOutputWeightList(std::vector<float32> value);

    std::string ToPtr();
    bool IsValid();
};

class GCTwoBoneIKUpdateNode
{
private:
    void *m_ptr;

public:
    GCTwoBoneIKUpdateNode(std::string ptr);
    GCTwoBoneIKUpdateNode(void *ptr);

    GTwoBoneIKSettings_t GetOpFixedData() const;
    void SetOpFixedData(GTwoBoneIKSettings_t value);

    std::string ToPtr();
    bool IsValid();
};

class GVMixDynamicsDesc_t
{
private:
    void *m_ptr;

public:
    GVMixDynamicsDesc_t(std::string ptr);
    GVMixDynamicsDesc_t(void *ptr);

    float GetFldbGain() const;
    void SetFldbGain(float value);
    float GetFldbNoiseGateThreshold() const;
    void SetFldbNoiseGateThreshold(float value);
    float GetFldbCompressionThreshold() const;
    void SetFldbCompressionThreshold(float value);
    float GetFldbLimiterThreshold() const;
    void SetFldbLimiterThreshold(float value);
    float GetFldbKneeWidth() const;
    void SetFldbKneeWidth(float value);
    float GetRatio() const;
    void SetRatio(float value);
    float GetLimiterRatio() const;
    void SetLimiterRatio(float value);
    float GetAttackTimeMS() const;
    void SetAttackTimeMS(float value);
    float GetReleaseTimeMS() const;
    void SetReleaseTimeMS(float value);
    float GetRMSTimeMS() const;
    void SetRMSTimeMS(float value);
    float GetWetMix() const;
    void SetWetMix(float value);
    bool GetPeakMode() const;
    void SetPeakMode(bool value);

    std::string ToPtr();
    bool IsValid();
};

class GFeVertexMapDesc_t
{
private:
    void *m_ptr;

public:
    GFeVertexMapDesc_t(std::string ptr);
    GFeVertexMapDesc_t(void *ptr);

    CUtlString GetName() const;
    void SetName(CUtlString value);
    uint32_t GetNameHash() const;
    void SetNameHash(uint32_t value);
    uint32_t GetColor() const;
    void SetColor(uint32_t value);
    uint32_t GetFlags() const;
    void SetFlags(uint32_t value);
    uint16_t GetVertexBase() const;
    void SetVertexBase(uint16_t value);
    uint16_t GetVertexCount() const;
    void SetVertexCount(uint16_t value);
    uint32_t GetMapOffset() const;
    void SetMapOffset(uint32_t value);
    uint32_t GetNodeListOffset() const;
    void SetNodeListOffset(uint32_t value);
    Vector GetCenterOfMass() const;
    void SetCenterOfMass(Vector value);
    float GetVolumetricSolveStrength() const;
    void SetVolumetricSolveStrength(float value);
    int16_t GetScaleSourceNode() const;
    void SetScaleSourceNode(int16_t value);
    uint16_t GetNodeListCount() const;
    void SetNodeListCount(uint16_t value);

    std::string ToPtr();
    bool IsValid();
};

class GFeSourceEdge_t
{
private:
    void *m_ptr;

public:
    GFeSourceEdge_t(std::string ptr);
    GFeSourceEdge_t(void *ptr);

    std::vector<uint16_t> GetNode() const;
    void SetNode(std::vector<uint16_t> value);

    std::string ToPtr();
    bool IsValid();
};

class GCompositeMaterialEditorPoint_t
{
private:
    void *m_ptr;

public:
    GCompositeMaterialEditorPoint_t(std::string ptr);
    GCompositeMaterialEditorPoint_t(void *ptr);

    int32_t GetSequenceIndex() const;
    void SetSequenceIndex(int32_t value);
    float GetCycle() const;
    void SetCycle(float value);
    bool GetEnableChildModel() const;
    void SetEnableChildModel(bool value);
    std::vector<GCompositeMaterialAssemblyProcedure_t> GetCompositeMaterialAssemblyProcedures() const;
    void SetCompositeMaterialAssemblyProcedures(std::vector<GCompositeMaterialAssemblyProcedure_t> value);
    std::vector<GCompositeMaterial_t> GetCompositeMaterials() const;
    void SetCompositeMaterials(std::vector<GCompositeMaterial_t> value);

    std::string ToPtr();
    bool IsValid();
};

class GVPhysXJoint_t
{
private:
    void *m_ptr;

public:
    GVPhysXJoint_t(std::string ptr);
    GVPhysXJoint_t(void *ptr);

    uint16_t GetType() const;
    void SetType(uint16_t value);
    uint16_t GetBody1() const;
    void SetBody1(uint16_t value);
    uint16_t GetBody2() const;
    void SetBody2(uint16_t value);
    uint16_t GetFlags() const;
    void SetFlags(uint16_t value);
    bool GetEnableCollision() const;
    void SetEnableCollision(bool value);
    bool GetEnableLinearLimit() const;
    void SetEnableLinearLimit(bool value);
    GVPhysXRange_t GetLinearLimit() const;
    void SetLinearLimit(GVPhysXRange_t value);
    bool GetEnableLinearMotor() const;
    void SetEnableLinearMotor(bool value);
    Vector GetLinearTargetVelocity() const;
    void SetLinearTargetVelocity(Vector value);
    float GetMaxForce() const;
    void SetMaxForce(float value);
    bool GetEnableSwingLimit() const;
    void SetEnableSwingLimit(bool value);
    GVPhysXRange_t GetSwingLimit() const;
    void SetSwingLimit(GVPhysXRange_t value);
    bool GetEnableTwistLimit() const;
    void SetEnableTwistLimit(bool value);
    GVPhysXRange_t GetTwistLimit() const;
    void SetTwistLimit(GVPhysXRange_t value);
    bool GetEnableAngularMotor() const;
    void SetEnableAngularMotor(bool value);
    Vector GetAngularTargetVelocity() const;
    void SetAngularTargetVelocity(Vector value);
    float GetMaxTorque() const;
    void SetMaxTorque(float value);
    float GetLinearFrequency() const;
    void SetLinearFrequency(float value);
    float GetLinearDampingRatio() const;
    void SetLinearDampingRatio(float value);
    float GetAngularFrequency() const;
    void SetAngularFrequency(float value);
    float GetAngularDampingRatio() const;
    void SetAngularDampingRatio(float value);
    float GetFriction() const;
    void SetFriction(float value);

    std::string ToPtr();
    bool IsValid();
};

class GCBodyGroupSetting
{
private:
    void *m_ptr;

public:
    GCBodyGroupSetting(std::string ptr);
    GCBodyGroupSetting(void *ptr);

    CUtlString GetBodyGroupName() const;
    void SetBodyGroupName(CUtlString value);
    int32_t GetBodyGroupOption() const;
    void SetBodyGroupOption(int32_t value);

    std::string ToPtr();
    bool IsValid();
};

class GRnSphereDesc_t
{
private:
    void *m_ptr;

public:
    GRnSphereDesc_t(std::string ptr);
    GRnSphereDesc_t(void *ptr);



    std::string ToPtr();
    bool IsValid();
};

class GCNmTarget
{
private:
    void *m_ptr;

public:
    GCNmTarget(std::string ptr);
    GCNmTarget(void *ptr);

    bool GetIsBoneTarget() const;
    void SetIsBoneTarget(bool value);
    bool GetIsUsingBoneSpaceOffsets() const;
    void SetIsUsingBoneSpaceOffsets(bool value);
    bool GetHasOffsets() const;
    void SetHasOffsets(bool value);
    bool GetIsSet() const;
    void SetIsSet(bool value);

    std::string ToPtr();
    bool IsValid();
};