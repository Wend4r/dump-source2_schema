#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5e8
// Has VTable
// Is Abstract
class CBaseNPCMaker : public CBaseEntity
{
public:
	int32_t m_nMaxNumNPCs; // 0x4e8	
	float m_flSpawnFrequency; // 0x4ec	
	float m_flRetryFrequency; // 0x4f0	
	int32_t m_nHullCheckMode; // 0x4f4	
	CEntityOutputTemplate< CHandle< CBaseEntity > > m_OnSpawnNPC; // 0x4f8	
	CEntityIOOutput m_OnAllSpawned; // 0x520	
	CEntityIOOutput m_OnAllSpawnedDead; // 0x548	
	CEntityIOOutput m_OnAllLiveChildrenDead; // 0x570	
	int32_t m_nLiveChildren; // 0x598	
	int32_t m_nMaxLiveChildren; // 0x59c	
	int32_t m_nMinSpawnDistance; // 0x5a0	
	int32_t m_nSpawnThreshold; // 0x5a4	
	int32_t m_nBatchCount; // 0x5a8	
	float m_flRadius; // 0x5ac	
	bool m_bDisabled; // 0x5b0	
	bool m_bSpawning; // 0x5b1	
	bool m_bZeroPitchAndRoll; // 0x5b2	
private:
	[[maybe_unused]] uint8_t __pad05b3[0x1]; // 0x5b3
public:
	CHandle< CBaseEntity > m_hIgnoreEntity; // 0x5b4	
	CUtlSymbolLarge m_iszIgnoreEnt; // 0x5b8	
	CUtlSymbolLarge m_iszDestinationGroup; // 0x5c0	
	CHandle< CBaseEntity > m_hSpawnEntity; // 0x5c8	
	CHandle< CAI_BaseNPC > m_hSpawnedNPC; // 0x5cc	
	int32_t m_nCurrentBatchCount; // 0x5d0	
	CBaseNPCMaker::VisibilityCriterion_t m_CriterionVisibility; // 0x5d4	
	CBaseNPCMaker::ThreeStateDist_t m_CriterionDistance; // 0x5d8	
	
	// Datamap fields:
	// void InputSpawn; // 0x0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// void InputToggle; // 0x0
	// int32_t InputSetMaxChildren; // 0x0
	// int32_t InputAddMaxChildren; // 0x0
	// int32_t InputSetMaxLiveChildren; // 0x0
	// float InputSetSpawnFrequency; // 0x0
	// void InputSpawnInRadius; // 0x0
	// void InputSpawnInLine; // 0x0
	// int32_t InputSpawnMultiple; // 0x0
	// CUtlSymbolLarge InputChangeDestinationGroup; // 0x0
	// int32_t InputSetMinimumSpawnDistance; // 0x0
	// CUtlSymbolLarge InputSetSpawnEntity; // 0x0
	// void InputEnableInfinite; // 0x0
	// bool InputDisableInfinite; // 0x0
	// void CBaseNPCMakerMakerThink; // 0x0
};

