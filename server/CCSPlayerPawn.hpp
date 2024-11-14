#pragma once

#include <cstdint>

struct CCSPlayer_BulletServices;
struct CCSPlayer_HostageServices;
struct CCSPlayer_BuyServices;
struct CCSPlayer_ActionTrackingServices;
struct CCSPlayer_RadioServices;
struct CCSPlayer_DamageReactServices;
struct GameTime_t;
struct CEconItemView;
struct EntitySpottedState_t;
struct CCSBot;
// Registered binary: server.dll (project 'server')
// Alignment: 16
// Size: 0x1b30
// Has VTable
// 
// MNetworkVarTypeOverride "CCSPlayer_WeaponServices m_pWeaponServices"
// MNetworkIncludeByName "m_pWeaponServices"
// MNetworkVarTypeOverride "CCSPlayer_ItemServices m_pItemServices"
// MNetworkIncludeByName "m_pItemServices"
// MNetworkVarTypeOverride "CCSPlayer_UseServices m_pUseServices"
// MNetworkIncludeByName "m_pUseServices"
// MNetworkVarTypeOverride "CCSPlayer_WaterServices m_pWaterServices"
// MNetworkIncludeByName "m_pWaterServices"
// MNetworkVarTypeOverride "CCSPlayer_MovementServices m_pMovementServices"
// MNetworkIncludeByName "m_pMovementServices"
// MNetworkVarTypeOverride "CCSPlayer_ViewModelServices m_pViewModelServices"
// MNetworkIncludeByName "m_pViewModelServices"
// MNetworkVarTypeOverride "CCSPlayer_CameraServices m_pCameraServices"
// MNetworkIncludeByName "m_pCameraServices"
// MNetworkVarNames "CCSPlayer_BulletServices * m_pBulletServices"
// MNetworkVarNames "CCSPlayer_HostageServices * m_pHostageServices"
// MNetworkVarNames "CCSPlayer_BuyServices * m_pBuyServices"
// MNetworkVarNames "CCSPlayer_ActionTrackingServices * m_pActionTrackingServices"
// MNetworkVarNames "bool m_bHasFemaleVoice"
// MNetworkVarNames "char m_szLastPlaceName"
// MNetworkVarNames "bool m_bInBuyZone"
// MNetworkVarNames "bool m_bInHostageRescueZone"
// MNetworkVarNames "bool m_bInBombZone"
// MNetworkVarNames "int m_iRetakesOffering"
// MNetworkVarNames "int m_iRetakesOfferingCard"
// MNetworkVarNames "bool m_bRetakesHasDefuseKit"
// MNetworkVarNames "bool m_bRetakesMVPLastRound"
// MNetworkVarNames "int m_iRetakesMVPBoostItem"
// MNetworkVarNames "loadout_slot_t m_RetakesMVPBoostExtraUtility"
// MNetworkVarNames "GameTime_t m_flHealthShotBoostExpirationTime"
// MNetworkVarNames "QAngle m_aimPunchAngle"
// MNetworkVarNames "QAngle m_aimPunchAngleVel"
// MNetworkVarNames "int m_aimPunchTickBase"
// MNetworkVarNames "float m_aimPunchTickFraction"
// MNetworkVarNames "bool m_bIsBuyMenuOpen"
// MNetworkVarNames "GameTime_t m_flTimeOfLastInjury"
// MNetworkVarNames "GameTime_t m_flNextSprayDecalTime"
// MNetworkVarNames "int m_nRagdollDamageBone"
// MNetworkVarNames "Vector m_vRagdollDamageForce"
// MNetworkVarNames "Vector m_vRagdollDamagePosition"
// MNetworkVarNames "char m_szRagdollDamageWeaponName"
// MNetworkVarNames "bool m_bRagdollDamageHeadshot"
// MNetworkVarNames "Vector m_vRagdollServerOrigin"
// MNetworkVarNames "CEconItemView m_EconGloves"
// MNetworkVarNames "uint8 m_nEconGlovesChanged"
// MNetworkVarNames "QAngle m_qDeathEyeAngles"
// MNetworkVarNames "bool m_bLeftHanded"
// MNetworkVarNames "GameTime_t m_fSwitchedHandednessTime"
// MNetworkVarNames "float m_flViewmodelOffsetX"
// MNetworkVarNames "float m_flViewmodelOffsetY"
// MNetworkVarNames "float m_flViewmodelOffsetZ"
// MNetworkVarNames "float m_flViewmodelFOV"
// MNetworkVarNames "bool m_bIsWalking"
// MNetworkVarNames "CEntityIndex m_nLastKillerIndex"
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
// MNetworkVarNames "QAngle m_thirdPersonHeading"
// MNetworkVarNames "float m_flSlopeDropOffset"
// MNetworkVarNames "float m_flSlopeDropHeight"
// MNetworkVarNames "Vector m_vHeadConstraintOffset"
// MNetworkVarNames "int32 m_ArmorValue"
// MNetworkVarNames "uint16 m_unCurrentEquipmentValue"
// MNetworkVarNames "uint16 m_unRoundStartEquipmentValue"
// MNetworkVarNames "uint16 m_unFreezetimeEndEquipmentValue"
// MNetworkVarNames "uint32 m_vecPlayerPatchEconIndices"
// MNetworkVarNames "Color m_GunGameImmunityColor"
// MNetworkVarNames "PredictedDamageTag_t m_PredictedDamageTags"
class CCSPlayerPawn : public CCSPlayerPawnBase
{
private:
	[[maybe_unused]] uint8_t __pad0dc8[0x8]; // 0xdc8
public:
	// MNetworkEnable
	CCSPlayer_BulletServices* m_pBulletServices; // 0xdd0	
	// MNetworkEnable
	CCSPlayer_HostageServices* m_pHostageServices; // 0xdd8	
	// MNetworkEnable
	CCSPlayer_BuyServices* m_pBuyServices; // 0xde0	
	// MNetworkEnable
	CCSPlayer_ActionTrackingServices* m_pActionTrackingServices; // 0xde8	
	CCSPlayer_RadioServices* m_pRadioServices; // 0xdf0	
	CCSPlayer_DamageReactServices* m_pDamageReactServices; // 0xdf8	
	uint16_t m_nCharacterDefIndex; // 0xe00	
	// MNetworkEnable
	bool m_bHasFemaleVoice; // 0xe02	
private:
	[[maybe_unused]] uint8_t __pad0e03[0x5]; // 0xe03
public:
	CUtlString m_strVOPrefix; // 0xe08	
	// MNetworkEnable
	char m_szLastPlaceName[18]; // 0xe10	
private:
	[[maybe_unused]] uint8_t __pad0e22[0xae]; // 0xe22
public:
	bool m_bInHostageResetZone; // 0xed0	
	// MNetworkEnable
	bool m_bInBuyZone; // 0xed1	
private:
	[[maybe_unused]] uint8_t __pad0ed2[0x6]; // 0xed2
public:
	CUtlVector< CHandle< CBaseEntity > > m_TouchingBuyZones; // 0xed8	
	bool m_bWasInBuyZone; // 0xef0	
	// MNetworkEnable
	bool m_bInHostageRescueZone; // 0xef1	
	// MNetworkEnable
	bool m_bInBombZone; // 0xef2	
	bool m_bWasInHostageRescueZone; // 0xef3	
	// MNetworkEnable
	int32_t m_iRetakesOffering; // 0xef4	
	// MNetworkEnable
	int32_t m_iRetakesOfferingCard; // 0xef8	
	// MNetworkEnable
	bool m_bRetakesHasDefuseKit; // 0xefc	
	// MNetworkEnable
	bool m_bRetakesMVPLastRound; // 0xefd	
private:
	[[maybe_unused]] uint8_t __pad0efe[0x2]; // 0xefe
public:
	// MNetworkEnable
	int32_t m_iRetakesMVPBoostItem; // 0xf00	
	// MNetworkEnable
	loadout_slot_t m_RetakesMVPBoostExtraUtility; // 0xf04	
	// MNetworkEnable
	GameTime_t m_flHealthShotBoostExpirationTime; // 0xf08	
	float m_flLandingTimeSeconds; // 0xf0c	
	// MNetworkEnable
	// MNetworkBitCount "32"
	QAngle m_aimPunchAngle; // 0xf10	
	// MNetworkEnable
	// MNetworkBitCount "32"
	QAngle m_aimPunchAngleVel; // 0xf1c	
	// MNetworkEnable
	int32_t m_aimPunchTickBase; // 0xf28	
	// MNetworkEnable
	float m_aimPunchTickFraction; // 0xf2c	
	CUtlVector< QAngle > m_aimPunchCache; // 0xf30	
	// MNetworkEnable
	bool m_bIsBuyMenuOpen; // 0xf48	
private:
	[[maybe_unused]] uint8_t __pad0f49[0x6a7]; // 0xf49
public:
	CTransform m_xLastHeadBoneTransform; // 0x15f0	
	bool m_bLastHeadBoneTransformIsValid; // 0x1610	
private:
	[[maybe_unused]] uint8_t __pad1611[0x3]; // 0x1611
public:
	GameTime_t m_lastLandTime; // 0x1614	
	bool m_bOnGroundLastTick; // 0x1618	
private:
	[[maybe_unused]] uint8_t __pad1619[0x3]; // 0x1619
public:
	int32_t m_iPlayerLocked; // 0x161c	
private:
	[[maybe_unused]] uint8_t __pad1620[0x4]; // 0x1620
public:
	// MNetworkEnable
	GameTime_t m_flTimeOfLastInjury; // 0x1624	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	GameTime_t m_flNextSprayDecalTime; // 0x1628	
	bool m_bNextSprayDecalTimeExpedited; // 0x162c	
private:
	[[maybe_unused]] uint8_t __pad162d[0x3]; // 0x162d
public:
	// MNetworkEnable
	int32_t m_nRagdollDamageBone; // 0x1630	
	// MNetworkEnable
	Vector m_vRagdollDamageForce; // 0x1634	
	// MNetworkEnable
	Vector m_vRagdollDamagePosition; // 0x1640	
	// MNetworkEnable
	char m_szRagdollDamageWeaponName[64]; // 0x164c	
	// MNetworkEnable
	bool m_bRagdollDamageHeadshot; // 0x168c	
private:
	[[maybe_unused]] uint8_t __pad168d[0x3]; // 0x168d
public:
	// MNetworkEnable
	Vector m_vRagdollServerOrigin; // 0x1690	
private:
	[[maybe_unused]] uint8_t __pad169c[0x4]; // 0x169c
public:
	// MNetworkEnable
	CEconItemView m_EconGloves; // 0x16a0	
	// MNetworkEnable
	uint8_t m_nEconGlovesChanged; // 0x1918	
private:
	[[maybe_unused]] uint8_t __pad1919[0x3]; // 0x1919
public:
	// MNetworkEnable
	QAngle m_qDeathEyeAngles; // 0x191c	
	bool m_bSkipOneHeadConstraintUpdate; // 0x1928	
	// MNetworkEnable
	bool m_bLeftHanded; // 0x1929	
private:
	[[maybe_unused]] uint8_t __pad192a[0x2]; // 0x192a
public:
	// MNetworkEnable
	GameTime_t m_fSwitchedHandednessTime; // 0x192c	
	// MNetworkEnable
	// MNetworkMinValue "-2.000000"
	// MNetworkMaxValue "2.500000"
	float m_flViewmodelOffsetX; // 0x1930	
	// MNetworkEnable
	// MNetworkMinValue "-2.000000"
	// MNetworkMaxValue "2.000000"
	float m_flViewmodelOffsetY; // 0x1934	
	// MNetworkEnable
	// MNetworkMinValue "-2.000000"
	// MNetworkMaxValue "2.000000"
	float m_flViewmodelOffsetZ; // 0x1938	
	// MNetworkEnable
	// MNetworkMinValue "60.000000"
	// MNetworkMaxValue "68.000000"
	float m_flViewmodelFOV; // 0x193c	
	// MNetworkEnable
	bool m_bIsWalking; // 0x1940	
private:
	[[maybe_unused]] uint8_t __pad1941[0x3]; // 0x1941
public:
	float m_fLastGivenDefuserTime; // 0x1944	
	float m_fLastGivenBombTime; // 0x1948	
	float m_flDealtDamageToEnemyMostRecentTimestamp; // 0x194c	
	uint32_t m_iDisplayHistoryBits; // 0x1950	
	float m_flLastAttackedTeammate; // 0x1954	
	GameTime_t m_allowAutoFollowTime; // 0x1958	
	bool m_bResetArmorNextSpawn; // 0x195c	
private:
	[[maybe_unused]] uint8_t __pad195d[0x3]; // 0x195d
public:
	// MNetworkEnable
	CEntityIndex m_nLastKillerIndex; // 0x1960	
private:
	[[maybe_unused]] uint8_t __pad1964[0x4]; // 0x1964
public:
	// MNetworkEnable
	EntitySpottedState_t m_entitySpottedState; // 0x1968	
	int32_t m_nSpotRules; // 0x1980	
	// MNetworkEnable
	bool m_bIsScoped; // 0x1984	
	// MNetworkEnable
	bool m_bResumeZoom; // 0x1985	
	// MNetworkEnable
	bool m_bIsDefusing; // 0x1986	
	// MNetworkEnable
	bool m_bIsGrabbingHostage; // 0x1987	
	// MNetworkEnable
	CSPlayerBlockingUseAction_t m_iBlockingUseActionInProgress; // 0x1988	
	// MNetworkEnable
	GameTime_t m_flEmitSoundTime; // 0x198c	
	// MNetworkEnable
	bool m_bInNoDefuseArea; // 0x1990	
private:
	[[maybe_unused]] uint8_t __pad1991[0x3]; // 0x1991
public:
	CEntityIndex m_iBombSiteIndex; // 0x1994	
	// MNetworkEnable
	int32_t m_nWhichBombZone; // 0x1998	
	bool m_bInBombZoneTrigger; // 0x199c	
	bool m_bWasInBombZoneTrigger; // 0x199d	
private:
	[[maybe_unused]] uint8_t __pad199e[0x2]; // 0x199e
public:
	// MNetworkEnable
	int32_t m_iShotsFired; // 0x19a0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flFlinchStack; // 0x19a4	
	// MNetworkEnable
	float m_flVelocityModifier; // 0x19a8	
	// MNetworkEnable
	float m_flHitHeading; // 0x19ac	
	// MNetworkEnable
	int32_t m_nHitBodyPart; // 0x19b0	
	Vector m_vecTotalBulletForce; // 0x19b4	
	// MNetworkEnable
	bool m_bWaitForNoAttack; // 0x19c0	
private:
	[[maybe_unused]] uint8_t __pad19c1[0x3]; // 0x19c1
public:
	float m_ignoreLadderJumpTime; // 0x19c4	
	// MNetworkEnable
	bool m_bKilledByHeadshot; // 0x19c8	
private:
	[[maybe_unused]] uint8_t __pad19c9[0x3]; // 0x19c9
public:
	int32_t m_LastHitBox; // 0x19cc	
	int32_t m_LastHealth; // 0x19d0	
private:
	[[maybe_unused]] uint8_t __pad19d4[0x4]; // 0x19d4
public:
	CCSBot* m_pBot; // 0x19d8	
	bool m_bBotAllowActive; // 0x19e0	
private:
	[[maybe_unused]] uint8_t __pad19e1[0x3]; // 0x19e1
public:
	// MNetworkEnable
	// MNetworkEncoder "qangle_precise"
	// MNetworkPriority "32"
	QAngle m_thirdPersonHeading; // 0x19e4	
	// MNetworkEnable
	// MNetworkPriority "32"
	float m_flSlopeDropOffset; // 0x19f0	
	// MNetworkEnable
	// MNetworkPriority "32"
	float m_flSlopeDropHeight; // 0x19f4	
	// MNetworkEnable
	// MNetworkPriority "32"
	Vector m_vHeadConstraintOffset; // 0x19f8	
	int32_t m_nLastPickupPriority; // 0x1a04	
	float m_flLastPickupPriorityTime; // 0x1a08	
	// MNetworkEnable
	int32_t m_ArmorValue; // 0x1a0c	
	// MNetworkEnable
	uint16_t m_unCurrentEquipmentValue; // 0x1a10	
	// MNetworkEnable
	uint16_t m_unRoundStartEquipmentValue; // 0x1a12	
	// MNetworkEnable
	uint16_t m_unFreezetimeEndEquipmentValue; // 0x1a14	
private:
	[[maybe_unused]] uint8_t __pad1a16[0x2]; // 0x1a16
public:
	int32_t m_iLastWeaponFireUsercmd; // 0x1a18	
	bool m_bIsSpawning; // 0x1a1c	
private:
	[[maybe_unused]] uint8_t __pad1a1d[0xb]; // 0x1a1d
public:
	int32_t m_iDeathFlags; // 0x1a28	
	bool m_bHasDeathInfo; // 0x1a2c	
private:
	[[maybe_unused]] uint8_t __pad1a2d[0x3]; // 0x1a2d
public:
	float m_flDeathInfoTime; // 0x1a30	
	Vector m_vecDeathInfoOrigin; // 0x1a34	
	// MNetworkEnable
	uint32_t m_vecPlayerPatchEconIndices[5]; // 0x1a40	
	// MNetworkEnable
	Color m_GunGameImmunityColor; // 0x1a54	
	GameTime_t m_grenadeParameterStashTime; // 0x1a58	
	bool m_bGrenadeParametersStashed; // 0x1a5c	
private:
	[[maybe_unused]] uint8_t __pad1a5d[0x3]; // 0x1a5d
public:
	QAngle m_angStashedShootAngles; // 0x1a60	
	Vector m_vecStashedGrenadeThrowPosition; // 0x1a6c	
	Vector m_vecStashedVelocity; // 0x1a78	
	QAngle m_angShootAngleHistory[2]; // 0x1a84	
	Vector m_vecThrowPositionHistory[2]; // 0x1a9c	
	Vector m_vecVelocityHistory[2]; // 0x1ab4	
private:
	[[maybe_unused]] uint8_t __pad1acc[0x4]; // 0x1acc
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	CUtlVectorEmbeddedNetworkVar< PredictedDamageTag_t > m_PredictedDamageTags; // 0x1ad0	
	int32_t m_nHighestAppliedDamageTagTick; // 0x1b20	
	
	// Datamap fields:
	// CCSPlayer_WeaponServices m_pWeaponServices; // 0xac0
	// CCSPlayer_ItemServices m_pItemServices; // 0xac8
	// CCSPlayer_UseServices m_pUseServices; // 0xae8
	// CCSPlayer_WaterServices m_pWaterServices; // 0xae0
	// CCSPlayer_MovementServices m_pMovementServices; // 0xb00
	// CCSPlayer_ViewModelServices m_pViewModelServices; // 0xcc0
	// CCSPlayer_CameraServices m_pCameraServices; // 0xaf8
	// void CCSPlayerPawnCheckStuffThink; // 0x0
	// void CCSPlayerPawnPushawayThink; // 0x0
	// void RescueZoneTouch; // 0x0
	// bool bot; // 0x7fffffff
};

