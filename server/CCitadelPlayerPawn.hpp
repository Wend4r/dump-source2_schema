#pragma once

#include <cstdint>

struct GameTime_t;
struct CCitadelAbilityComponent;
struct CCitadelHeroComponent;
struct CCitadelRegenComponent;
struct CCitadelMinimapComponent;
struct CTakeDamageResult;
struct ParticleIndex_t;
struct CCitadelPlayerBot;
struct GameTick_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1710
// Has VTable
// 
// MNetworkIncludeByName "m_iMaxHealth"
// MNetworkExcludeByName "m_baseLayer.m_hSequence"
// MNetworkExcludeByName "m_blinktoggle"
// MNetworkExcludeByName "m_flAnimTime"
// MNetworkExcludeByUserGroup "m_flCycle"
// MNetworkExcludeByName "m_flEncodedController"
// MNetworkExcludeByName "m_flPoseParameter"
// MNetworkUserGroupProxy "CCitadelPlayerPawn"
// MNetworkUserGroupProxy "CCitadelPlayerPawn"
// MNetworkVarTypeOverride "CCitadelPlayer_CameraServices m_pCameraServices"
// MNetworkIncludeByName "m_pCameraServices"
// MNetworkVarTypeOverride "CCitadelPlayer_MovementServices m_pMovementServices"
// MNetworkIncludeByName "m_pMovementServices"
// MNetworkVarNames "QAngle m_angClientCamera"
// MNetworkVarNames "QAngle m_angEyeAngles"
// MNetworkVarNames "QAngle m_angLockedEyeAngles"
// MNetworkVarNames "int32 m_nLevel"
// MNetworkVarNames "int32 m_nCurrencies"
// MNetworkVarNames "int32 m_nSpentCurrencies"
// MNetworkVarNames "GameTime_t m_flRespawnTime"
// MNetworkVarNames "GameTime_t m_flLastSpawnTime"
// MNetworkVarNames "bool m_bInRegenerationZone"
// MNetworkVarNames "bool m_bInItemShopZone"
// MNetworkVarNames "GameTime_t m_timeRevealedOnMinimapByNPC"
// MNetworkVarNames "EntitySubclassID_t m_vecFullSellPriceItems"
// MNetworkVarNames "FullSellPriceAbilityUpgrades_t m_vecFullSellPriceAbilityUpgrades"
// MNetworkVarNames "bool m_bNetworkDisconnected"
// MNetworkVarNames "bool m_bHasIncomingThreats"
// MNetworkVarNames "bool m_bLearningAbility"
// MNetworkVarNames "int m_nFlashStartTick"
// MNetworkVarNames "int m_nFlashMaxStartTick"
// MNetworkVarNames "int m_nFlashFadeStartTick"
// MNetworkVarNames "int m_nFlashEndTick"
// MNetworkVarNames "int8 m_nFlashMaxAlpha"
// MNetworkVarNames "int32 m_nDeducedLane"
// MNetworkVarNames "bool m_bDismissedReportCard"
// MNetworkVarNames "float m_flCurrentHealingAmount"
// MNetworkVarNames "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
// MNetworkVarNames "CCitadelHeroComponent::Storage_t m_CCitadelHeroComponent"
// MNetworkVarNames "CCitadelRegenComponent::Storage_t m_CCitadelRegenComponent"
// MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
// MNetworkVarNames "CMsgLaneColor m_eZipLineLaneColor"
// MNetworkVarNames "int8 m_nSuccessiveDucks"
// MNetworkVarNames "GameTime_t m_flLastDuckTime"
// MNetworkVarNames "bool m_bAnimGraphMovementClipped"
// MNetworkVarNames "bool m_bAnimGraphMovementDisableGravity"
// MNetworkVarNames "bool m_bAnimGraphMovementDirectAirControl"
// MNetworkVarNames "GameTime_t m_flPredTimeSlowedStart"
// MNetworkVarNames "GameTime_t m_flPredTimeSlowedEnd"
// MNetworkVarNames "float32 m_flPredSlowSpeed"
// MNetworkVarNames "GameTime_t m_flTimeSlowedStart"
// MNetworkVarNames "GameTime_t m_flTimeSlowedEnd"
// MNetworkVarNames "float32 m_flSlowSpeed"
// MNetworkVarNames "GameTime_t m_flSprintAnimSuppressEndTime"
class CCitadelPlayerPawn : public CCitadelPlayerPawnBase
{
private:
	[[maybe_unused]] uint8_t __pad0d20[0x18]; // 0xd20
public:
	int32_t m_arrGoldSources[37]; // 0xd38	
	// MNetworkEnable
	// MNetworkUserGroup "SourceTVExclusive"
	// MNetworkBitCount "11"
	// MNetworkPriority "32"
	QAngle m_angClientCamera; // 0xdcc	
	// MNetworkEnable
	// MNetworkUserGroup "RemotePlayersOnly"
	// MNetworkEncoder "qangle"
	// MNetworkBitCount "11"
	// MNetworkPriority "32"
	QAngle m_angEyeAngles; // 0xdd8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	QAngle m_angLockedEyeAngles; // 0xde4	
	// MNetworkEnable
	int32_t m_nLevel; // 0xdf0	
	// MNetworkEnable
	int32_t m_nCurrencies[4]; // 0xdf4	
	// MNetworkEnable
	int32_t m_nSpentCurrencies[4]; // 0xe04	
	// MNetworkEnable
	GameTime_t m_flRespawnTime; // 0xe14	
	// MNetworkEnable
	GameTime_t m_flLastSpawnTime; // 0xe18	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerAndObserversExclusive"
	bool m_bInRegenerationZone; // 0xe1c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bInItemShopZone; // 0xe1d	
private:
	[[maybe_unused]] uint8_t __pad0e1e[0x2]; // 0xe1e
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerAndObserversExclusive"
	GameTime_t m_timeRevealedOnMinimapByNPC; // 0xe20	
private:
	[[maybe_unused]] uint8_t __pad0e24[0x4]; // 0xe24
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	CNetworkUtlVectorBase< CUtlStringToken > m_vecFullSellPriceItems; // 0xe28	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	CNetworkUtlVectorBase< FullSellPriceAbilityUpgrades_t > m_vecFullSellPriceAbilityUpgrades; // 0xe40	
	// MNetworkEnable
	bool m_bNetworkDisconnected; // 0xea0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bHasIncomingThreats; // 0xea1	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bLearningAbility; // 0xea2	
private:
	[[maybe_unused]] uint8_t __pad0ea3[0x1]; // 0xea3
public:
	// MNetworkEnable
	int32_t m_nFlashStartTick; // 0xea4	
	// MNetworkEnable
	int32_t m_nFlashMaxStartTick; // 0xea8	
	// MNetworkEnable
	int32_t m_nFlashFadeStartTick; // 0xeac	
	// MNetworkEnable
	int32_t m_nFlashEndTick; // 0xeb0	
	// MNetworkEnable
	int8_t m_nFlashMaxAlpha; // 0xeb4	
private:
	[[maybe_unused]] uint8_t __pad0eb5[0x3]; // 0xeb5
public:
	// MNetworkEnable
	int32_t m_nDeducedLane; // 0xeb8	
	// MNetworkEnable
	bool m_bDismissedReportCard; // 0xebc	
private:
	[[maybe_unused]] uint8_t __pad0ebd[0x3]; // 0xebd
public:
	// MNetworkEnable
	float m_flCurrentHealingAmount; // 0xec0	
	CHandle< CCitadelBaseAbility > m_hAbilityRequiresDebounce; // 0xec4	
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelAbilityComponent"
	// MNetworkAlias "CCitadelAbilityComponent"
	// MNetworkTypeAlias "CCitadelAbilityComponent"
	// MNetworkPriority "32"
	CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0xec8	
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelHeroComponent"
	// MNetworkAlias "CCitadelHeroComponent"
	// MNetworkTypeAlias "CCitadelHeroComponent"
	CCitadelHeroComponent m_CCitadelHeroComponent; // 0x10d0	
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelRegenComponent"
	// MNetworkAlias "CCitadelRegenComponent"
	// MNetworkTypeAlias "CCitadelRegenComponent"
	CCitadelRegenComponent m_CCitadelRegenComponent; // 0x10f0	
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelMinimapComponent"
	// MNetworkAlias "CCitadelMinimapComponent"
	// MNetworkTypeAlias "CCitadelMinimapComponent"
	CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0x1270	
	bool m_bHasShopOpen; // 0x1288	
private:
	[[maybe_unused]] uint8_t __pad1289[0x3]; // 0x1289
public:
	ECitadelPingLocation_t m_eCurrentPingLocation; // 0x128c	
private:
	[[maybe_unused]] uint8_t __pad1290[0xc]; // 0x1290
public:
	float m_flLastRegenThinkTime; // 0x129c	
	float m_flCitadelDamageAccumulator; // 0x12a0	
private:
	[[maybe_unused]] uint8_t __pad12a4[0x34]; // 0x12a4
public:
	int32_t m_nBulletsFiredAtUs; // 0x12d8	
	int32_t m_nBulletsHitOnUs; // 0x12dc	
	int32_t m_nHeadshotsOnUs; // 0x12e0	
	GameTime_t m_flLastGameStatsRecorded; // 0x12e4	
	float m_flUnusedGoldRemainder; // 0x12e8	
	float m_flUnusedAbilityRemainder; // 0x12ec	
	int32_t m_nBulletsFiredAtEnemyHeroes; // 0x12f0	
	int32_t m_nBulletsHitOnEnemyHeroes; // 0x12f4	
	int32_t m_nHeadshotsOnEnemyHeroes; // 0x12f8	
	int32_t m_nLuckyShotsOnEnemyHeroes; // 0x12fc	
	int32_t m_nBulletsHitOnImmobileEnemyHeroes; // 0x1300	
	int32_t m_nHeadshotsOnImmobileEnemyHeroes; // 0x1304	
	CHandle< CBaseEntity > m_hEnemyHeroClientAimedAtAttackTime; // 0x1308	
	bool m_bHasOverrideSpawnPos; // 0x130c	
private:
	[[maybe_unused]] uint8_t __pad130d[0x3]; // 0x130d
public:
	Vector m_vecOverrideSpawnPos; // 0x1310	
	int32_t m_iKillStreak; // 0x131c	
	int32_t m_iTrooperWaveEventCount; // 0x1320	
	int32_t m_iTrooperWaveNumber; // 0x1324	
	int32_t m_iPrevTrooperWaveEventCount; // 0x1328	
	int32_t m_iPrevTrooperWaveNumber; // 0x132c	
	bool m_bHasStartedPlaying; // 0x1330	
private:
	[[maybe_unused]] uint8_t __pad1331[0x3]; // 0x1331
public:
	CHandle< CBaseEntity > m_hRevengeTarget; // 0x1334	
private:
	[[maybe_unused]] uint8_t __pad1338[0xc]; // 0x1338
public:
	GameTime_t m_flLastHurtTimeByEnemyTeam; // 0x1344	
	GameTime_t m_flLastTimeLookedAtByDirector; // 0x1348	
private:
	[[maybe_unused]] uint8_t __pad134c[0x4]; // 0x134c
public:
	CTakeDamageResult m_ragdollDamage; // 0x1350	
	CUtlVector< CHandle< CBaseEntity > > m_vecThreats; // 0x1370	
private:
	[[maybe_unused]] uint8_t __pad1388[0x154]; // 0x1388
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	CMsgLaneColor m_eZipLineLaneColor; // 0x14dc	
	bool m_bCanBecomeRagdoll; // 0x14e0	
private:
	[[maybe_unused]] uint8_t __pad14e1[0x3]; // 0x14e1
public:
	float m_blindUntilTime; // 0x14e4	
	float m_blindStartTime; // 0x14e8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	int8_t m_nSuccessiveDucks; // 0x14ec	
private:
	[[maybe_unused]] uint8_t __pad14ed[0x3]; // 0x14ed
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	GameTime_t m_flLastDuckTime; // 0x14f0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bAnimGraphMovementClipped; // 0x14f4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bAnimGraphMovementDisableGravity; // 0x14f5	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bAnimGraphMovementDirectAirControl; // 0x14f6	
	bool m_bLastMoveWasAnimGraph; // 0x14f7	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	GameTime_t m_flPredTimeSlowedStart; // 0x14f8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	GameTime_t m_flPredTimeSlowedEnd; // 0x14fc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flPredSlowSpeed; // 0x1500	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	GameTime_t m_flTimeSlowedStart[4]; // 0x1504	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	GameTime_t m_flTimeSlowedEnd[4]; // 0x1514	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flSlowSpeed[4]; // 0x1524	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	GameTime_t m_flSprintAnimSuppressEndTime; // 0x1534	
	bool m_bPreventAbilityLearning; // 0x1538	
private:
	[[maybe_unused]] uint8_t __pad1539[0x3]; // 0x1539
public:
	int32_t m_iCurSlowSlot; // 0x153c	
private:
	[[maybe_unused]] uint8_t __pad1540[0x4]; // 0x1540
public:
	ParticleIndex_t m_nRespawnParticleIndex; // 0x1544	
	ParticleIndex_t m_nShoppingParticle; // 0x1548	
private:
	[[maybe_unused]] uint8_t __pad154c[0x2c]; // 0x154c
public:
	CCitadelPlayerBot* m_pBot; // 0x1578	
private:
	[[maybe_unused]] uint8_t __pad1580[0x168]; // 0x1580
public:
	Vector m_vShootTestOffsetStanding; // 0x16e8	
	Vector m_vShootTestOffsetCrouching; // 0x16f4	
	GameTime_t m_leanStartTime; // 0x1700	
	GameTick_t m_nLastUnpredictableMovementTick; // 0x1704	
	
	// Datamap fields:
	// CCitadelPlayer_CameraServices m_pCameraServices; // 0xb90
	// CCitadelPlayer_MovementServices m_pMovementServices; // 0xb98
};

