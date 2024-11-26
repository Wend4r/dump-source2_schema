#pragma once

#include <cstdint>

struct CEntityIOOutput;
struct CAI_ProxTester;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x600
// Has VTable
class CAI_ScriptConditions : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04e8[0x8]; // 0x4e8
public:
	CEntityIOOutput m_OnConditionsSatisfied; // 0x4f0	
	CEntityIOOutput m_OnConditionsTimeout; // 0x518	
	CEntityIOOutput m_NoValidActors; // 0x540	
	bool m_fDisabled; // 0x568	
	bool m_bLeaveAsleep; // 0x569	
private:
	[[maybe_unused]] uint8_t __pad056a[0x2]; // 0x56a
public:
	CHandle< CBaseEntity > m_hTarget; // 0x56c	
	float m_flRequiredDuration; // 0x570	
	NPC_STATE m_fMinState; // 0x574	
	NPC_STATE m_fMaxState; // 0x578	
	ThreeState_t m_fScriptStatus; // 0x57c	
	ThreeState_t m_fActorSeePlayer; // 0x580	
private:
	[[maybe_unused]] uint8_t __pad0584[0x4]; // 0x584
public:
	CUtlSymbolLarge m_Actor; // 0x588	
	float m_flPlayerActorProximity; // 0x590	
	CAI_ProxTester m_PlayerActorProxTester; // 0x594	
	float m_flPlayerActorFOV; // 0x59c	
	bool m_bPlayerActorFOVTrueCone; // 0x5a0	
private:
	[[maybe_unused]] uint8_t __pad05a1[0x3]; // 0x5a1
public:
	ThreeState_t m_fPlayerActorLOS; // 0x5a4	
	ThreeState_t m_fActorSeeTarget; // 0x5a8	
	float m_flActorTargetProximity; // 0x5ac	
	CAI_ProxTester m_ActorTargetProxTester; // 0x5b0	
	float m_flPlayerTargetProximity; // 0x5b8	
	CAI_ProxTester m_PlayerTargetProxTester; // 0x5bc	
	float m_flPlayerTargetFOV; // 0x5c4	
	bool m_bPlayerTargetFOVTrueCone; // 0x5c8	
private:
	[[maybe_unused]] uint8_t __pad05c9[0x3]; // 0x5c9
public:
	ThreeState_t m_fPlayerTargetLOS; // 0x5cc	
	ThreeState_t m_fPlayerBlockingActor; // 0x5d0	
	ThreeState_t m_fActorInPVS; // 0x5d4	
	float m_flMinTimeout; // 0x5d8	
	float m_flMaxTimeout; // 0x5dc	
	ThreeState_t m_fActorInVehicle; // 0x5e0	
	ThreeState_t m_fPlayerInVehicle; // 0x5e4	
	CUtlVector< CAI_ScriptConditionsElement > m_ElementList; // 0x5e8	
	
	// Datamap fields:
	// void CAI_ScriptConditionsEvaluationThink; // 0x0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

