#pragma once

#include <cstdint>

struct GameTime_t;
struct CAI_ScheduleBits;
struct CAI_BehaviorHost;
struct CAI_EnemyServices;
struct CRandStopwatch;
struct CSimpleSimTimer;
struct CUnreachableTargetList;
struct CAI_AnimGraphServices;
struct CAI_Scheduler;
struct CAI_Navigator;
struct CAI_Motor;
struct CTakeDamageResult;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1280
// Has VTable
// 
// MNetworkIncludeByName "m_lifeState"
// MNetworkIncludeByName "m_spawnflags"
// MNetworkVarNames "NPC_STATE m_NPCState"
// MNetworkVarNames "bool m_bFadeCorpse"
// MNetworkVarNames "bool m_bImportantRagdoll"
class CAI_BaseNPC : public CBaseCombatCharacter
{
private:
	[[maybe_unused]] uint8_t __pad0b58[0x10]; // 0xb58
public:
	bool m_bCheckContacts; // 0xb68	
	bool m_bIsUsingSmallHull; // 0xb69	
	bool m_bForceDynamicHull; // 0xb6a	
private:
	[[maybe_unused]] uint8_t __pad0b6b[0x1]; // 0xb6b
public:
	Vector m_vecLastPosition; // 0xb6c	
	float m_flLastPositionTolerance; // 0xb78	
	CHandle< CAI_BaseNPC > m_hSynchronizedPrimaryNPC; // 0xb7c	
	CUtlVector< CHandle< CAI_BaseNPC > > m_vecSynchronizedSecondaryNPCs; // 0xb80	
	// MNetworkEnable
	NPC_STATE m_NPCState; // 0xb98	
	NPC_STATE m_nPreModifierNPCState; // 0xb9c	
	NPC_STATE m_IdealNPCState; // 0xba0	
	GameTime_t m_flLastStateChangeTime; // 0xba4	
private:
	[[maybe_unused]] uint8_t __pad0ba8[0x8]; // 0xba8
public:
	CAI_ScheduleBits m_Conditions; // 0xbb0	
	CAI_ScheduleBits m_NonGatherConditions; // 0xbd4	
	CAI_ScheduleBits m_CustomInterruptConditions; // 0xbf8	
	bool m_bForceConditionsGather; // 0xc1c	
	bool m_bConditionsGathered; // 0xc1d	
	bool m_bDoPostRestoreRefindPath; // 0xc1e	
private:
	[[maybe_unused]] uint8_t __pad0c1f[0x1]; // 0xc1f
public:
	CAI_BehaviorHost* m_pBehaviorHost; // 0xc20	
private:
	[[maybe_unused]] uint8_t __pad0c28[0x8]; // 0xc28
public:
	GameTime_t m_flBlinkTime; // 0xc30	
private:
	[[maybe_unused]] uint8_t __pad0c34[0x4]; // 0xc34
public:
	CAI_EnemyServices* m_pEnemyServices; // 0xc38	
	CRandStopwatch m_GiveUpOnDeadEnemyTimer; // 0xc40	
	CSimpleSimTimer m_FailChooseEnemyTimer; // 0xc54	
	GameTime_t m_flAcceptableTimeSeenEnemy; // 0xc5c	
	bool m_bSkippedChooseEnemy; // 0xc60	
	bool m_bIgnoreUnseenEnemies; // 0xc61	
private:
	[[maybe_unused]] uint8_t __pad0c62[0x2]; // 0xc62
public:
	CHandle< CBaseFilter > m_hEnemyFilter; // 0xc64	
	CUtlSymbolLarge m_iszEnemyFilterName; // 0xc68	
	CHandle< CBaseEntity > m_hTargetEnt; // 0xc70	
	bool m_bClearTargetOnScheduleEnd; // 0xc74	
private:
	[[maybe_unused]] uint8_t __pad0c75[0x3]; // 0xc75
public:
	GameTime_t m_flSoundWaitTime; // 0xc78	
	int32_t m_nSoundPriority; // 0xc7c	
	bool m_bSuppressFootsteps; // 0xc80	
private:
	[[maybe_unused]] uint8_t __pad0c81[0x3]; // 0xc81
public:
	int32_t m_afCapability; // 0xc84	
private:
	[[maybe_unused]] uint8_t __pad0c88[0x170]; // 0xc88
public:
	float m_flGroundSpeed; // 0xdf8	
	GameTime_t m_flMoveWaitFinished; // 0xdfc	
	CHandle< CBaseEntity > m_hOpeningDoor; // 0xe00	
private:
	[[maybe_unused]] uint8_t __pad0e04[0x4]; // 0xe04
public:
	CUnreachableTargetList m_UnreachableTargets; // 0xe08	
	CHandle< CBaseEntity > m_hPathObstructor; // 0xe28	
	float m_flJumpMaxRise; // 0xe2c	
	float m_flJumpMaxDrop; // 0xe30	
	float m_flJumpMaxDist; // 0xe34	
	float m_flJumpMinDist; // 0xe38	
private:
	[[maybe_unused]] uint8_t __pad0e3c[0x4]; // 0xe3c
public:
	CAI_AnimGraphServices* m_pAnimGraphServices; // 0xe40	
	bool m_bAnimGraphIsAnimatingDeath; // 0xe48	
	bool m_bDeferredNavigation; // 0xe49	
private:
	[[maybe_unused]] uint8_t __pad0e4a[0x6]; // 0xe4a
public:
	CAI_Scheduler m_Scheduler; // 0xe50	
	CAI_Navigator* m_pNavigatorNavmesh; // 0xef8	
private:
	[[maybe_unused]] uint8_t __pad0f00[0x18]; // 0xf00
public:
	CAI_Motor* m_pMotor; // 0xf18	
	GameTime_t m_flTimeLastMovement; // 0xf20	
	GameTime_t m_flTimeLastFootstep; // 0xf24	
	CSimpleSimTimer m_CheckOnGroundTimer; // 0xf28	
	CUtlSymbolLarge m_strNavRestrictionVolume; // 0xf30	
	Vector m_vDefaultEyeOffset; // 0xf38	
	int32_t m_afMemory; // 0xf44	
	GameTime_t m_flLastAttackTime; // 0xf48	
	GameTime_t m_flLastTookDamageTime; // 0xf4c	
	GameTime_t m_flLastTookDamageFromPlayerTime; // 0xf50	
	Vector m_vecLastTookDamageAttackVector; // 0xf54	
	CUtlSymbolLarge m_iszSquadName; // 0xf60	
	CUtlVector< SquadSlotNPCEntry_t > m_vecMySquadSlots; // 0xf68	
private:
	[[maybe_unused]] uint8_t __pad0f80[0x8]; // 0xf80
public:
	int32_t m_nPrevHealthDuringModifyDamage; // 0xf88	
private:
	[[maybe_unused]] uint8_t __pad0f8c[0x4]; // 0xf8c
public:
	// MNetworkEnable
	bool m_bFadeCorpse; // 0xf90	
	// MNetworkEnable
	bool m_bImportantRagdoll; // 0xf91	
private:
	[[maybe_unused]] uint8_t __pad0f92[0x6]; // 0xf92
public:
	CTakeDamageResult m_deathBlowResult; // 0xf98	
	bool m_bDidDeathCleanup; // 0xfb8	
	bool m_bReceivedEnemyDeadNotification; // 0xfb9	
private:
	[[maybe_unused]] uint8_t __pad0fba[0x2]; // 0xfba
public:
	GameTime_t m_flWaitFinished; // 0xfbc	
	bool m_fNoDamageDecal; // 0xfc0	
private:
	[[maybe_unused]] uint8_t __pad0fc1[0x7]; // 0xfc1
public:
	CUtlVector< CHandle< CBaseEntity > >* m_pVecAttachments; // 0xfc8	
	CEntityIOOutput m_OnDamaged; // 0xfd0	
	CEntityIOOutput m_OnDeath; // 0xff8	
	CEntityIOOutput m_OnQuarterHealth; // 0x1020	
	CEntityIOOutput m_OnHalfHealth; // 0x1048	
	CEntityIOOutput m_OnThreeQuarterHealth; // 0x1070	
	CEntityOutputTemplate< CHandle< CBaseEntity > > m_OnFoundEnemy; // 0x1098	
	CEntityIOOutput m_OnLostEnemy; // 0x10c0	
	CEntityIOOutput m_OnLostPlayer; // 0x10e8	
	CEntityIOOutput m_OnDamagedByPlayer; // 0x1110	
	CEntityIOOutput m_OnDamagedByPlayerSquad; // 0x1138	
	CEntityIOOutput m_OnPlayerUse; // 0x1160	
	CEntityIOOutput m_OnUse; // 0x1188	
	CEntityIOOutput m_OnStartTouchMaterial; // 0x11b0	
	CEntityIOOutput m_OnEndTouchMaterial; // 0x11d8	
	CEntityIOOutput m_OnLostEnemyLOS; // 0x1200	
	CEntityIOOutput m_OnLostPlayerLOS; // 0x1228	
	uint64_t m_nAITraceMask; // 0x1250	
	float m_flThinkTime; // 0x1258	
private:
	[[maybe_unused]] uint8_t __pad125c[0x1c]; // 0x125c
public:
	int32_t m_nDebugCurIndex; // 0x1278	
	
	// Static fields:
	static CUtlSymbolLarge &Get_sm_iszPlayerSquad(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_BaseNPC")->m_static_fields[0]->m_instance);};
	static int32_t &Get_sm_nDebugBits(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_BaseNPC")->m_static_fields[1]->m_instance);};
	static int32_t &Get_sm_nDebugPauseIndex(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_BaseNPC")->m_static_fields[2]->m_instance);};
	
	// Datamap fields:
	// CAI_Senses m_pSenses; // 0xba8
	// void m_pSquad; // 0xf80
	// void CAI_BaseNPCForceSelectedGoLoopThink; // 0x0
	// void m_vecTaskThinkTimes; // 0x1260
	// CAI_Pathfinder m_pPathfinderNavmesh; // 0xf00
	// void m_hDamagedFX; // 0xf8c
	// CUtlSymbolLarge InputSetEnemyFilter; // 0x0
	// int32_t InputOverrideHealth; // 0x0
	// int32_t InputSetHealth; // 0x0
	// CUtlSymbolLarge InputSetSquad; // 0x0
	// CUtlSymbolLarge InputForgetEntity; // 0x0
	// void InputBreak; // 0x0
	// void InputGagEnable; // 0x0
	// void InputGagDisable; // 0x0
	// void InputInsideTransition; // 0x0
	// void InputOutsideTransition; // 0x0
	// CUtlSymbolLarge InputUpdateEnemyMemory; // 0x0
	// CUtlSymbolLarge InputSetNavRestrictionVolume; // 0x0
	// void CAI_BaseNPCCallNPCThink; // 0x0
	// void CAI_BaseNPCCallNPCPerTickThink; // 0x0
	// void CAI_BaseNPCBlinkThink; // 0x0
};

