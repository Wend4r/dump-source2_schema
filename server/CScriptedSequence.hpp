#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 16
// Size: 0x800
// Has VTable
class CScriptedSequence : public CBaseEntity
{
public:
	CUtlSymbolLarge m_iszEntry; // 0x4e8	
	CUtlSymbolLarge m_iszPreIdle; // 0x4f0	
	CUtlSymbolLarge m_iszPlay; // 0x4f8	
	CUtlSymbolLarge m_iszPostIdle; // 0x500	
	CUtlSymbolLarge m_iszModifierToAddOnPlay; // 0x508	
	CUtlSymbolLarge m_iszNextScript; // 0x510	
	CUtlSymbolLarge m_iszEntity; // 0x518	
	CUtlSymbolLarge m_iszSyncGroup; // 0x520	
	ScriptedMoveTo_t m_nMoveTo; // 0x528	
	SharedMovementGait_t m_nMoveToGait; // 0x52c	
private:
	[[maybe_unused]] uint8_t __pad052d[0x3]; // 0x52d
public:
	ScriptedHeldWeaponBehavior_t m_nHeldWeaponBehavior; // 0x530	
	bool m_bIsPlayingPreIdle; // 0x534	
	bool m_bIsPlayingEntry; // 0x535	
	bool m_bIsPlayingAction; // 0x536	
	bool m_bIsPlayingPostIdle; // 0x537	
	bool m_bDontRotateOther; // 0x538	
	bool m_bIsRepeatable; // 0x539	
	bool m_bShouldLeaveCorpse; // 0x53a	
	bool m_bStartOnSpawn; // 0x53b	
	bool m_bDisallowInterrupts; // 0x53c	
	bool m_bCanOverrideNPCState; // 0x53d	
	bool m_bDontTeleportAtEnd; // 0x53e	
	bool m_bHighPriority; // 0x53f	
	bool m_bHideDebugComplaints; // 0x540	
	bool m_bContinueOnDeath; // 0x541	
	bool m_bLoopPreIdleSequence; // 0x542	
	bool m_bLoopActionSequence; // 0x543	
	bool m_bLoopPostIdleSequence; // 0x544	
	bool m_bSynchPostIdles; // 0x545	
	bool m_bIgnoreLookAt; // 0x546	
	bool m_bIgnoreGravity; // 0x547	
	bool m_bDisableNPCCollisions; // 0x548	
	bool m_bKeepAnimgraphLockedPost; // 0x549	
	bool m_bDontAddModifiers; // 0x54a	
	bool m_bDisableAimingWhileMoving; // 0x54b	
	float m_flRadius; // 0x54c	
	float m_flRepeat; // 0x550	
	float m_flPlayAnimFadeInTime; // 0x554	
	float m_flMoveInterpTime; // 0x558	
	float m_flAngRate; // 0x55c	
	bool m_bWaitUntilMoveCompletesToStartAnimation; // 0x560	
private:
	[[maybe_unused]] uint8_t __pad0561[0x3]; // 0x561
public:
	int32_t m_nNotReadySequenceCount; // 0x564	
	GameTime_t m_startTime; // 0x568	
	bool m_bWaitForBeginSequence; // 0x56c	
private:
	[[maybe_unused]] uint8_t __pad056d[0x3]; // 0x56d
public:
	int32_t m_saved_effects; // 0x570	
	int32_t m_savedFlags; // 0x574	
	int32_t m_savedCollisionGroup; // 0x578	
	bool m_bInterruptable; // 0x57c	
	bool m_sequenceStarted; // 0x57d	
	bool m_bPositionRelativeToOtherEntity; // 0x57e	
private:
	[[maybe_unused]] uint8_t __pad057f[0x1]; // 0x57f
public:
	CHandle< CBaseEntity > m_hTargetEnt; // 0x580	
	CHandle< CScriptedSequence > m_hNextCine; // 0x584	
	bool m_bThinking; // 0x588	
	bool m_bInitiatedSelfDelete; // 0x589	
	bool m_bIsTeleportingDueToMoveTo; // 0x58a	
	bool m_bAllowCustomInterruptConditions; // 0x58b	
	CHandle< CBaseAnimGraph > m_hForcedTarget; // 0x58c	
	bool m_bDontCancelOtherSequences; // 0x590	
	bool m_bForceSynch; // 0x591	
	bool m_bPreventUpdateYawOnFinish; // 0x592	
	bool m_bEnsureOnNavmeshOnFinish; // 0x593	
	ScriptedOnDeath_t m_onDeathBehavior; // 0x594	
	ScriptedConflictResponse_t m_ConflictResponse; // 0x598	
private:
	[[maybe_unused]] uint8_t __pad059c[0x4]; // 0x59c
public:
	CEntityIOOutput m_OnBeginSequence; // 0x5a0	
	CEntityIOOutput m_OnActionStartOrLoop; // 0x5c8	
	CEntityIOOutput m_OnEndSequence; // 0x5f0	
	CEntityIOOutput m_OnPostIdleEndSequence; // 0x618	
	CEntityIOOutput m_OnCancelSequence; // 0x640	
	CEntityIOOutput m_OnCancelFailedSequence; // 0x668	
	CEntityIOOutput m_OnScriptEvent[8]; // 0x690	
	CTransform m_matOtherToMain; // 0x7d0	
	CHandle< CBaseEntity > m_hInteractionMainEntity; // 0x7f0	
	int32_t m_iPlayerDeathBehavior; // 0x7f4	
	
	// Datamap fields:
	// void CScriptedSequenceScriptThink; // 0x0
	// void InputMoveToPosition; // 0x0
	// void InputBeginSequence; // 0x0
	// void InputCancelSequence; // 0x0
	// CUtlSymbolLarge InputSetActionSequence; // 0x0
	// CUtlSymbolLarge InputForceTarget; // 0x0
	// void InputScriptPlayerDeath; // 0x0
};

