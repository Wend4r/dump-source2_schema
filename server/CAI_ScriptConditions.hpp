#pragma once

#include <cstdint>

struct CEntityIOOutput;
struct CAI_ProxTester;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5f8
// Has VTable
class CAI_ScriptConditions : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04e0[0x8]; // 0x4e0
public:
	CEntityIOOutput m_OnConditionsSatisfied; // 0x4e8	
	CEntityIOOutput m_OnConditionsTimeout; // 0x510	
	CEntityIOOutput m_NoValidActors; // 0x538	
	bool m_fDisabled; // 0x560	
	bool m_bLeaveAsleep; // 0x561	
private:
	[[maybe_unused]] uint8_t __pad0562[0x2]; // 0x562
public:
	CHandle< CBaseEntity > m_hTarget; // 0x564	
	float m_flRequiredDuration; // 0x568	
	NPC_STATE m_fMinState; // 0x56c	
	NPC_STATE m_fMaxState; // 0x570	
	ThreeState_t m_fScriptStatus; // 0x574	
	ThreeState_t m_fActorSeePlayer; // 0x578	
private:
	[[maybe_unused]] uint8_t __pad057c[0x4]; // 0x57c
public:
	CUtlSymbolLarge m_Actor; // 0x580	
	float m_flPlayerActorProximity; // 0x588	
	CAI_ProxTester m_PlayerActorProxTester; // 0x58c	
	float m_flPlayerActorFOV; // 0x594	
	bool m_bPlayerActorFOVTrueCone; // 0x598	
private:
	[[maybe_unused]] uint8_t __pad0599[0x3]; // 0x599
public:
	ThreeState_t m_fPlayerActorLOS; // 0x59c	
	ThreeState_t m_fActorSeeTarget; // 0x5a0	
	float m_flActorTargetProximity; // 0x5a4	
	CAI_ProxTester m_ActorTargetProxTester; // 0x5a8	
	float m_flPlayerTargetProximity; // 0x5b0	
	CAI_ProxTester m_PlayerTargetProxTester; // 0x5b4	
	float m_flPlayerTargetFOV; // 0x5bc	
	bool m_bPlayerTargetFOVTrueCone; // 0x5c0	
private:
	[[maybe_unused]] uint8_t __pad05c1[0x3]; // 0x5c1
public:
	ThreeState_t m_fPlayerTargetLOS; // 0x5c4	
	ThreeState_t m_fPlayerBlockingActor; // 0x5c8	
	ThreeState_t m_fActorInPVS; // 0x5cc	
	float m_flMinTimeout; // 0x5d0	
	float m_flMaxTimeout; // 0x5d4	
	ThreeState_t m_fActorInVehicle; // 0x5d8	
	ThreeState_t m_fPlayerInVehicle; // 0x5dc	
	CUtlVector< CAI_ScriptConditionsElement > m_ElementList; // 0x5e0	
	
	// Datamap fields:
	// void CAI_ScriptConditionsEvaluationThink; // 0x0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

