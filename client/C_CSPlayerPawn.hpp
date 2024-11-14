#pragma once

#include <cstdint>

struct CCSPlayer_BulletServices;
struct CCSPlayer_HostageServices;
struct CCSPlayer_BuyServices;
struct CCSPlayer_GlowServices;
struct CCSPlayer_ActionTrackingServices;
struct CCSPlayer_DamageReactServices;
struct GameTime_t;
struct C_EconItemView;
struct EntitySpottedState_t;
struct GameTick_t;
// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x3a40
// Has VTable
// 
// MNetworkVarNames "CCSPlayer_BulletServices * m_pBulletServices"
// MNetworkVarNames "CCSPlayer_HostageServices * m_pHostageServices"
// MNetworkVarNames "CCSPlayer_BuyServices * m_pBuyServices"
// MNetworkVarNames "CCSPlayer_GlowServices * m_pGlowServices"
// MNetworkVarNames "CCSPlayer_ActionTrackingServices * m_pActionTrackingServices"
// MNetworkVarTypeOverride "CCSPlayer_UseServices m_pUseServices"
// MNetworkIncludeByName "m_pUseServices"
// MNetworkVarTypeOverride "CCSPlayer_ItemServices m_pItemServices"
// MNetworkIncludeByName "m_pItemServices"
// MNetworkVarTypeOverride "CCSPlayer_MovementServices m_pMovementServices"
// MNetworkIncludeByName "m_pMovementServices"
// MNetworkVarTypeOverride "CCSPlayer_WaterServices m_pWaterServices"
// MNetworkIncludeByName "m_pWaterServices"
// MNetworkVarTypeOverride "CCSPlayer_ViewModelServices m_pViewModelServices"
// MNetworkIncludeByName "m_pViewModelServices"
// MNetworkVarTypeOverride "CCSPlayer_CameraServices m_pCameraServices"
// MNetworkIncludeByName "m_pCameraServices"
// MNetworkVarTypeOverride "CCSPlayer_WeaponServices m_pWeaponServices"
// MNetworkIncludeByName "m_pWeaponServices"
// MNetworkIncludeByName "m_ArmorValue"
// MNetworkVarNames "GameTime_t m_flHealthShotBoostExpirationTime"
// MNetworkVarNames "bool m_bHasFemaleVoice"
// MNetworkVarNames "char m_szLastPlaceName"
// MNetworkVarNames "bool m_bInBuyZone"
// MNetworkVarNames "QAngle m_aimPunchAngle"
// MNetworkVarNames "QAngle m_aimPunchAngleVel"
// MNetworkVarNames "int m_aimPunchTickBase"
// MNetworkVarNames "float m_aimPunchTickFraction"
// MNetworkVarNames "bool m_bInHostageRescueZone"
// MNetworkVarNames "bool m_bInBombZone"
// MNetworkVarNames "bool m_bIsBuyMenuOpen"
// MNetworkVarNames "GameTime_t m_flTimeOfLastInjury"
// MNetworkVarNames "GameTime_t m_flNextSprayDecalTime"
// MNetworkVarNames "int m_iRetakesOffering"
// MNetworkVarNames "int m_iRetakesOfferingCard"
// MNetworkVarNames "bool m_bRetakesHasDefuseKit"
// MNetworkVarNames "bool m_bRetakesMVPLastRound"
// MNetworkVarNames "int m_iRetakesMVPBoostItem"
// MNetworkVarNames "loadout_slot_t m_RetakesMVPBoostExtraUtility"
// MNetworkVarNames "CEconItemView m_EconGloves"
// MNetworkVarNames "uint8 m_nEconGlovesChanged"
// MNetworkVarNames "int m_nRagdollDamageBone"
// MNetworkVarNames "Vector m_vRagdollDamageForce"
// MNetworkVarNames "Vector m_vRagdollDamagePosition"
// MNetworkVarNames "char m_szRagdollDamageWeaponName"
// MNetworkVarNames "bool m_bRagdollDamageHeadshot"
// MNetworkVarNames "Vector m_vRagdollServerOrigin"
// MNetworkReplayCompatField "m_bClientRagdoll"
// MNetworkVarNames "QAngle m_qDeathEyeAngles"
// MNetworkVarNames "bool m_bLeftHanded"
// MNetworkVarNames "GameTime_t m_fSwitchedHandednessTime"
// MNetworkVarNames "float m_flViewmodelOffsetX"
// MNetworkVarNames "float m_flViewmodelOffsetY"
// MNetworkVarNames "float m_flViewmodelOffsetZ"
// MNetworkVarNames "float m_flViewmodelFOV"
// MNetworkVarNames "uint32 m_vecPlayerPatchEconIndices"
// MNetworkVarNames "Color m_GunGameImmunityColor"
// MNetworkVarNames "bool m_bIsWalking"
// MNetworkVarNames "EntitySpottedState_t m_entitySpottedState"
// MNetworkVarNames "bool m_bIsScoped"
// MNetworkVarNames "bool m_bResumeZoom"
// MNetworkVarNames "bool m_bIsDefusing"
// MNetworkVarNames "bool m_bIsGrabbingHostage"
// MNetworkVarNames "CSPlayerBlockingUseAction_t m_iBlockingUseActionInProgress"
// MNetworkVarNames "GameTime_t m_flEmitSoundTime"
// MNetworkVarNames "bool m_bInNoDefuseArea"
// MNetworkVarNames "int m_nWhichBombZone"
// MNetworkVarNames "int m_iShotsFired"
// MNetworkVarNames "float m_flFlinchStack"
// MNetworkVarNames "float m_flVelocityModifier"
// MNetworkVarNames "float m_flHitHeading"
// MNetworkVarNames "int m_nHitBodyPart"
// MNetworkVarNames "bool m_bWaitForNoAttack"
// MNetworkVarNames "bool m_bKilledByHeadshot"
// MNetworkVarNames "int32 m_ArmorValue"
// MNetworkVarNames "uint16 m_unCurrentEquipmentValue"
// MNetworkVarNames "uint16 m_unRoundStartEquipmentValue"
// MNetworkVarNames "uint16 m_unFreezetimeEndEquipmentValue"
// MNetworkVarNames "CEntityIndex m_nLastKillerIndex"
// MNetworkVarNames "PredictedDamageTag_t m_PredictedDamageTags"
class C_CSPlayerPawn : public C_CSPlayerPawnBase
{
private:
	[[maybe_unused]] uint8_t __pad1510[0x8]; // 0x1510
public:
	// MNetworkEnable
	CCSPlayer_BulletServices* m_pBulletServices; // 0x1518	
	// MNetworkEnable
	CCSPlayer_HostageServices* m_pHostageServices; // 0x1520	
	// MNetworkEnable
	CCSPlayer_BuyServices* m_pBuyServices; // 0x1528	
	// MNetworkEnable
	CCSPlayer_GlowServices* m_pGlowServices; // 0x1530	
	// MNetworkEnable
	CCSPlayer_ActionTrackingServices* m_pActionTrackingServices; // 0x1538	
	CCSPlayer_DamageReactServices* m_pDamageReactServices; // 0x1540	
	// MNetworkEnable
	GameTime_t m_flHealthShotBoostExpirationTime; // 0x1548	
	GameTime_t m_flLastFiredWeaponTime; // 0x154c	
	// MNetworkEnable
	bool m_bHasFemaleVoice; // 0x1550	
private:
	[[maybe_unused]] uint8_t __pad1551[0x3]; // 0x1551
public:
	float m_flLandingTimeSeconds; // 0x1554	
	float m_flOldFallVelocity; // 0x1558	
	// MNetworkEnable
	char m_szLastPlaceName[18]; // 0x155c	
	bool m_bPrevDefuser; // 0x156e	
	bool m_bPrevHelmet; // 0x156f	
	int32_t m_nPrevArmorVal; // 0x1570	
	int32_t m_nPrevGrenadeAmmoCount; // 0x1574	
	uint32_t m_unPreviousWeaponHash; // 0x1578	
	uint32_t m_unWeaponHash; // 0x157c	
	// MNetworkEnable
	bool m_bInBuyZone; // 0x1580	
	bool m_bPreviouslyInBuyZone; // 0x1581	
private:
	[[maybe_unused]] uint8_t __pad1582[0x2]; // 0x1582
public:
	// MNetworkEnable
	// MNetworkBitCount "32"
	QAngle m_aimPunchAngle; // 0x1584	
	// MNetworkEnable
	// MNetworkBitCount "32"
	QAngle m_aimPunchAngleVel; // 0x1590	
	// MNetworkEnable
	int32_t m_aimPunchTickBase; // 0x159c	
	// MNetworkEnable
	float m_aimPunchTickFraction; // 0x15a0	
private:
	[[maybe_unused]] uint8_t __pad15a4[0x4]; // 0x15a4
public:
	CUtlVector< QAngle > m_aimPunchCache; // 0x15a8	
private:
	[[maybe_unused]] uint8_t __pad15c0[0x8]; // 0x15c0
public:
	bool m_bInLanding; // 0x15c8	
private:
	[[maybe_unused]] uint8_t __pad15c9[0x3]; // 0x15c9
public:
	float m_flLandingStartTime; // 0x15cc	
	// MNetworkEnable
	bool m_bInHostageRescueZone; // 0x15d0	
	// MNetworkEnable
	bool m_bInBombZone; // 0x15d1	
	// MNetworkEnable
	bool m_bIsBuyMenuOpen; // 0x15d2	
private:
	[[maybe_unused]] uint8_t __pad15d3[0x1]; // 0x15d3
public:
	// MNetworkEnable
	GameTime_t m_flTimeOfLastInjury; // 0x15d4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	GameTime_t m_flNextSprayDecalTime; // 0x15d8	
private:
	[[maybe_unused]] uint8_t __pad15dc[0x154]; // 0x15dc
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnRetakesOfferingChanged"
	int32_t m_iRetakesOffering; // 0x1730	
	// MNetworkEnable
	// MNetworkChangeCallback "OnRetakesOfferingCardChanged"
	int32_t m_iRetakesOfferingCard; // 0x1734	
	// MNetworkEnable
	bool m_bRetakesHasDefuseKit; // 0x1738	
	// MNetworkEnable
	bool m_bRetakesMVPLastRound; // 0x1739	
private:
	[[maybe_unused]] uint8_t __pad173a[0x2]; // 0x173a
public:
	// MNetworkEnable
	int32_t m_iRetakesMVPBoostItem; // 0x173c	
	// MNetworkEnable
	loadout_slot_t m_RetakesMVPBoostExtraUtility; // 0x1740	
private:
	[[maybe_unused]] uint8_t __pad1744[0x1c]; // 0x1744
public:
	bool m_bNeedToReApplyGloves; // 0x1760	
private:
	[[maybe_unused]] uint8_t __pad1761[0x7]; // 0x1761
public:
	// MNetworkEnable
	C_EconItemView m_EconGloves; // 0x1768	
	// MNetworkEnable
	// MNetworkChangeCallback "OnEconGlovesChanged"
	uint8_t m_nEconGlovesChanged; // 0x1bb0	
	bool m_bMustSyncRagdollState; // 0x1bb1	
private:
	[[maybe_unused]] uint8_t __pad1bb2[0x2]; // 0x1bb2
public:
	// MNetworkEnable
	int32_t m_nRagdollDamageBone; // 0x1bb4	
	// MNetworkEnable
	Vector m_vRagdollDamageForce; // 0x1bb8	
	// MNetworkEnable
	Vector m_vRagdollDamagePosition; // 0x1bc4	
	// MNetworkEnable
	char m_szRagdollDamageWeaponName[64]; // 0x1bd0	
	// MNetworkEnable
	bool m_bRagdollDamageHeadshot; // 0x1c10	
private:
	[[maybe_unused]] uint8_t __pad1c11[0x3]; // 0x1c11
public:
	// MNetworkEnable
	Vector m_vRagdollServerOrigin; // 0x1c14	
private:
	[[maybe_unused]] uint8_t __pad1c20[0x670]; // 0x1c20
public:
	bool m_bLastHeadBoneTransformIsValid; // 0x2290	
private:
	[[maybe_unused]] uint8_t __pad2291[0x3]; // 0x2291
public:
	GameTime_t m_lastLandTime; // 0x2294	
	bool m_bOnGroundLastTick; // 0x2298	
private:
	[[maybe_unused]] uint8_t __pad2299[0x1b]; // 0x2299
public:
	// MNetworkEnable
	QAngle m_qDeathEyeAngles; // 0x22b4	
	bool m_bSkipOneHeadConstraintUpdate; // 0x22c0	
	// MNetworkEnable
	bool m_bLeftHanded; // 0x22c1	
private:
	[[maybe_unused]] uint8_t __pad22c2[0x2]; // 0x22c2
public:
	// MNetworkEnable
	GameTime_t m_fSwitchedHandednessTime; // 0x22c4	
	// MNetworkEnable
	// MNetworkMinValue "-2.000000"
	// MNetworkMaxValue "2.500000"
	float m_flViewmodelOffsetX; // 0x22c8	
	// MNetworkEnable
	// MNetworkMinValue "-2.000000"
	// MNetworkMaxValue "2.000000"
	float m_flViewmodelOffsetY; // 0x22cc	
	// MNetworkEnable
	// MNetworkMinValue "-2.000000"
	// MNetworkMaxValue "2.000000"
	float m_flViewmodelOffsetZ; // 0x22d0	
	// MNetworkEnable
	// MNetworkMinValue "60.000000"
	// MNetworkMaxValue "68.000000"
	float m_flViewmodelFOV; // 0x22d4	
	// MNetworkEnable
	// MNetworkChangeCallback "RecvProxy_PatchEconIndices"
	uint32_t m_vecPlayerPatchEconIndices[5]; // 0x22d8	
private:
	[[maybe_unused]] uint8_t __pad22ec[0x24]; // 0x22ec
public:
	// MNetworkEnable
	Color m_GunGameImmunityColor; // 0x2310	
private:
	[[maybe_unused]] uint8_t __pad2314[0x4c]; // 0x2314
public:
	CUtlVector< C_BulletHitModel* > m_vecBulletHitModels; // 0x2360	
	// MNetworkEnable
	bool m_bIsWalking; // 0x2378	
private:
	[[maybe_unused]] uint8_t __pad2379[0x7]; // 0x2379
public:
	// MNetworkEnable
	// MNetworkEncoder "qangle_precise"
	// MNetworkChangeCallback "OnThirdPersonHeadingChanged"
	// MNetworkPriority "32"
	QAngle m_thirdPersonHeading; // 0x2380	
private:
	[[maybe_unused]] uint8_t __pad238c[0xc]; // 0x238c
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnSlopeDropOffsetChanged"
	// MNetworkPriority "32"
	float m_flSlopeDropOffset; // 0x2398	
private:
	[[maybe_unused]] uint8_t __pad239c[0xc]; // 0x239c
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnSlopeDropHeightChanged"
	// MNetworkPriority "32"
	float m_flSlopeDropHeight; // 0x23a8	
private:
	[[maybe_unused]] uint8_t __pad23ac[0xc]; // 0x23ac
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnHeadConstraintChanged"
	// MNetworkPriority "32"
	Vector m_vHeadConstraintOffset; // 0x23b8	
private:
	[[maybe_unused]] uint8_t __pad23c4[0xc]; // 0x23c4
public:
	// MNetworkEnable
	EntitySpottedState_t m_entitySpottedState; // 0x23d0	
	// MNetworkEnable
	bool m_bIsScoped; // 0x23e8	
	// MNetworkEnable
	bool m_bResumeZoom; // 0x23e9	
	// MNetworkEnable
	bool m_bIsDefusing; // 0x23ea	
	// MNetworkEnable
	bool m_bIsGrabbingHostage; // 0x23eb	
	// MNetworkEnable
	CSPlayerBlockingUseAction_t m_iBlockingUseActionInProgress; // 0x23ec	
	// MNetworkEnable
	GameTime_t m_flEmitSoundTime; // 0x23f0	
	// MNetworkEnable
	bool m_bInNoDefuseArea; // 0x23f4	
private:
	[[maybe_unused]] uint8_t __pad23f5[0x3]; // 0x23f5
public:
	// MNetworkEnable
	int32_t m_nWhichBombZone; // 0x23f8	
	// MNetworkEnable
	int32_t m_iShotsFired; // 0x23fc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flFlinchStack; // 0x2400	
	// MNetworkEnable
	float m_flVelocityModifier; // 0x2404	
	// MNetworkEnable
	float m_flHitHeading; // 0x2408	
	// MNetworkEnable
	int32_t m_nHitBodyPart; // 0x240c	
	// MNetworkEnable
	bool m_bWaitForNoAttack; // 0x2410	
private:
	[[maybe_unused]] uint8_t __pad2411[0x3]; // 0x2411
public:
	float m_ignoreLadderJumpTime; // 0x2414	
private:
	[[maybe_unused]] uint8_t __pad2418[0x1]; // 0x2418
public:
	// MNetworkEnable
	bool m_bKilledByHeadshot; // 0x2419	
private:
	[[maybe_unused]] uint8_t __pad241a[0x2]; // 0x241a
public:
	// MNetworkEnable
	int32_t m_ArmorValue; // 0x241c	
	// MNetworkEnable
	uint16_t m_unCurrentEquipmentValue; // 0x2420	
	// MNetworkEnable
	uint16_t m_unRoundStartEquipmentValue; // 0x2422	
	// MNetworkEnable
	uint16_t m_unFreezetimeEndEquipmentValue; // 0x2424	
private:
	[[maybe_unused]] uint8_t __pad2426[0x2]; // 0x2426
public:
	// MNetworkEnable
	CEntityIndex m_nLastKillerIndex; // 0x2428	
	bool m_bOldIsScoped; // 0x242c	
	bool m_bHasDeathInfo; // 0x242d	
private:
	[[maybe_unused]] uint8_t __pad242e[0x2]; // 0x242e
public:
	float m_flDeathInfoTime; // 0x2430	
	Vector m_vecDeathInfoOrigin; // 0x2434	
	GameTime_t m_grenadeParameterStashTime; // 0x2440	
	bool m_bGrenadeParametersStashed; // 0x2444	
private:
	[[maybe_unused]] uint8_t __pad2445[0x3]; // 0x2445
public:
	QAngle m_angStashedShootAngles; // 0x2448	
	Vector m_vecStashedGrenadeThrowPosition; // 0x2454	
	Vector m_vecStashedVelocity; // 0x2460	
	QAngle m_angShootAngleHistory[2]; // 0x246c	
	Vector m_vecThrowPositionHistory[2]; // 0x2484	
	Vector m_vecVelocityHistory[2]; // 0x249c	
private:
	[[maybe_unused]] uint8_t __pad24b4[0x4]; // 0x24b4
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	// MNetworkChangeCallback "OnPredictedDamageTagsChanged"
	C_UtlVectorEmbeddedNetworkVar< PredictedDamageTag_t > m_PredictedDamageTags; // 0x24b8	
	GameTick_t m_nPrevHighestReceivedDamageTagTick; // 0x2508	
	int32_t m_nHighestAppliedDamageTagTick; // 0x250c	
	
	// Datamap fields:
	// CCSPlayer_ItemServices m_pItemServices; // 0x11b0
	// CCSPlayer_UseServices m_pUseServices; // 0x11d0
	// CCSPlayer_WaterServices m_pWaterServices; // 0x11c8
	// CCSPlayer_MovementServices m_pMovementServices; // 0x11e8
	// CCSPlayer_ViewModelServices m_pViewModelServices; // 0x1368
	// CCSPlayer_WeaponServices m_pWeaponServices; // 0x11a8
	// CCSPlayer_CameraServices m_pCameraServices; // 0x11e0
};

