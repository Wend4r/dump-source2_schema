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
// Size: 0x1278
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
	[[maybe_unused]] uint8_t __pad0b50[0x10]; // 0xb50
public:
	bool m_bCheckContacts; // 0xb60	
	bool m_bIsUsingSmallHull; // 0xb61	
	bool m_bForceDynamicHull; // 0xb62	
private:
	[[maybe_unused]] uint8_t __pad0b63[0x1]; // 0xb63
public:
	Vector m_vecLastPosition; // 0xb64	
	float m_flLastPositionTolerance; // 0xb70	
	CHandle< CAI_BaseNPC > m_hSynchronizedPrimaryNPC; // 0xb74	
	CUtlVector< CHandle< CAI_BaseNPC > > m_vecSynchronizedSecondaryNPCs; // 0xb78	
	// MNetworkEnable
	NPC_STATE m_NPCState; // 0xb90	
	NPC_STATE m_nPreModifierNPCState; // 0xb94	
	NPC_STATE m_IdealNPCState; // 0xb98	
	GameTime_t m_flLastStateChangeTime; // 0xb9c	
private:
	[[maybe_unused]] uint8_t __pad0ba0[0x8]; // 0xba0
public:
	CAI_ScheduleBits m_Conditions; // 0xba8	
	CAI_ScheduleBits m_NonGatherConditions; // 0xbcc	
	CAI_ScheduleBits m_CustomInterruptConditions; // 0xbf0	
	bool m_bForceConditionsGather; // 0xc14	
	bool m_bConditionsGathered; // 0xc15	
	bool m_bDoPostRestoreRefindPath; // 0xc16	
private:
	[[maybe_unused]] uint8_t __pad0c17[0x1]; // 0xc17
public:
	CAI_BehaviorHost* m_pBehaviorHost; // 0xc18	
private:
	[[maybe_unused]] uint8_t __pad0c20[0x8]; // 0xc20
public:
	GameTime_t m_flBlinkTime; // 0xc28	
private:
	[[maybe_unused]] uint8_t __pad0c2c[0x4]; // 0xc2c
public:
	CAI_EnemyServices* m_pEnemyServices; // 0xc30	
	CRandStopwatch m_GiveUpOnDeadEnemyTimer; // 0xc38	
	CSimpleSimTimer m_FailChooseEnemyTimer; // 0xc4c	
	GameTime_t m_flAcceptableTimeSeenEnemy; // 0xc54	
	bool m_bSkippedChooseEnemy; // 0xc58	
	bool m_bIgnoreUnseenEnemies; // 0xc59	
private:
	[[maybe_unused]] uint8_t __pad0c5a[0x2]; // 0xc5a
public:
	CHandle< CBaseFilter > m_hEnemyFilter; // 0xc5c	
	CUtlSymbolLarge m_iszEnemyFilterName; // 0xc60	
	CHandle< CBaseEntity > m_hTargetEnt; // 0xc68	
	bool m_bClearTargetOnScheduleEnd; // 0xc6c	
private:
	[[maybe_unused]] uint8_t __pad0c6d[0x3]; // 0xc6d
public:
	GameTime_t m_flSoundWaitTime; // 0xc70	
	int32_t m_nSoundPriority; // 0xc74	
	bool m_bSuppressFootsteps; // 0xc78	
private:
	[[maybe_unused]] uint8_t __pad0c79[0x3]; // 0xc79
public:
	int32_t m_afCapability; // 0xc7c	
private:
	[[maybe_unused]] uint8_t __pad0c80[0x170]; // 0xc80
public:
	float m_flGroundSpeed; // 0xdf0	
	GameTime_t m_flMoveWaitFinished; // 0xdf4	
	CHandle< CBaseEntity > m_hOpeningDoor; // 0xdf8	
private:
	[[maybe_unused]] uint8_t __pad0dfc[0x4]; // 0xdfc
public:
	CUnreachableTargetList m_UnreachableTargets; // 0xe00	
	CHandle< CBaseEntity > m_hPathObstructor; // 0xe20	
	float m_flJumpMaxRise; // 0xe24	
	float m_flJumpMaxDrop; // 0xe28	
	float m_flJumpMaxDist; // 0xe2c	
	float m_flJumpMinDist; // 0xe30	
private:
	[[maybe_unused]] uint8_t __pad0e34[0x4]; // 0xe34
public:
	CAI_AnimGraphServices* m_pAnimGraphServices; // 0xe38	
	bool m_bAnimGraphIsAnimatingDeath; // 0xe40	
	bool m_bDeferredNavigation; // 0xe41	
private:
	[[maybe_unused]] uint8_t __pad0e42[0x6]; // 0xe42
public:
	CAI_Scheduler m_Scheduler; // 0xe48	
	CAI_Navigator* m_pNavigatorNavmesh; // 0xef0	
private:
	[[maybe_unused]] uint8_t __pad0ef8[0x18]; // 0xef8
public:
	CAI_Motor* m_pMotor; // 0xf10	
	GameTime_t m_flTimeLastMovement; // 0xf18	
	GameTime_t m_flTimeLastFootstep; // 0xf1c	
	CSimpleSimTimer m_CheckOnGroundTimer; // 0xf20	
	CUtlSymbolLarge m_strNavRestrictionVolume; // 0xf28	
	Vector m_vDefaultEyeOffset; // 0xf30	
	int32_t m_afMemory; // 0xf3c	
	GameTime_t m_flLastAttackTime; // 0xf40	
	GameTime_t m_flLastTookDamageTime; // 0xf44	
	GameTime_t m_flLastTookDamageFromPlayerTime; // 0xf48	
	Vector m_vecLastTookDamageAttackVector; // 0xf4c	
	CUtlSymbolLarge m_iszSquadName; // 0xf58	
	CUtlVector< SquadSlotNPCEntry_t > m_vecMySquadSlots; // 0xf60	
private:
	[[maybe_unused]] uint8_t __pad0f78[0x8]; // 0xf78
public:
	int32_t m_nPrevHealthDuringModifyDamage; // 0xf80	
private:
	[[maybe_unused]] uint8_t __pad0f84[0x4]; // 0xf84
public:
	// MNetworkEnable
	bool m_bFadeCorpse; // 0xf88	
	// MNetworkEnable
	bool m_bImportantRagdoll; // 0xf89	
private:
	[[maybe_unused]] uint8_t __pad0f8a[0x6]; // 0xf8a
public:
	CTakeDamageResult m_deathBlowResult; // 0xf90	
	bool m_bDidDeathCleanup; // 0xfb0	
	bool m_bReceivedEnemyDeadNotification; // 0xfb1	
private:
	[[maybe_unused]] uint8_t __pad0fb2[0x2]; // 0xfb2
public:
	GameTime_t m_flWaitFinished; // 0xfb4	
	bool m_fNoDamageDecal; // 0xfb8	
private:
	[[maybe_unused]] uint8_t __pad0fb9[0x7]; // 0xfb9
public:
	CUtlVector< CHandle< CBaseEntity > >* m_pVecAttachments; // 0xfc0	
	CEntityIOOutput m_OnDamaged; // 0xfc8	
	CEntityIOOutput m_OnDeath; // 0xff0	
	CEntityIOOutput m_OnQuarterHealth; // 0x1018	
	CEntityIOOutput m_OnHalfHealth; // 0x1040	
	CEntityIOOutput m_OnThreeQuarterHealth; // 0x1068	
	CEntityOutputTemplate< CHandle< CBaseEntity > > m_OnFoundEnemy; // 0x1090	
	CEntityIOOutput m_OnLostEnemy; // 0x10b8	
	CEntityIOOutput m_OnLostPlayer; // 0x10e0	
	CEntityIOOutput m_OnDamagedByPlayer; // 0x1108	
	CEntityIOOutput m_OnDamagedByPlayerSquad; // 0x1130	
	CEntityIOOutput m_OnPlayerUse; // 0x1158	
	CEntityIOOutput m_OnUse; // 0x1180	
	CEntityIOOutput m_OnStartTouchMaterial; // 0x11a8	
	CEntityIOOutput m_OnEndTouchMaterial; // 0x11d0	
	CEntityIOOutput m_OnLostEnemyLOS; // 0x11f8	
	CEntityIOOutput m_OnLostPlayerLOS; // 0x1220	
	uint64_t m_nAITraceMask; // 0x1248	
	float m_flThinkTime; // 0x1250	
private:
	[[maybe_unused]] uint8_t __pad1254[0x1c]; // 0x1254
public:
	int32_t m_nDebugCurIndex; // 0x1270	
	
	// Static fields:
	static CUtlSymbolLarge &Get_sm_iszPlayerSquad(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_BaseNPC")->m_static_fields[0]->m_instance);};
	static int32_t &Get_sm_nDebugBits(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_BaseNPC")->m_static_fields[1]->m_instance);};
	static int32_t &Get_sm_nDebugPauseIndex(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_BaseNPC")->m_static_fields[2]->m_instance);};
	
	// Datamap fields:
	// CAI_Senses m_pSenses; // 0xba0
	// void m_pSquad; // 0xf78
	// void CAI_BaseNPCForceSelectedGoLoopThink; // 0x0
	// void m_vecTaskThinkTimes; // 0x1258
	// CAI_Pathfinder m_pPathfinderNavmesh; // 0xef8
	// void m_hDamagedFX; // 0xf84
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

