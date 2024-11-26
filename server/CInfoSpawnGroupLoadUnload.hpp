#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5e8
// Has VTable
class CInfoSpawnGroupLoadUnload : public CLogicalEntity
{
public:
	CEntityIOOutput m_OnSpawnGroupLoadStarted; // 0x4e8	
	CEntityIOOutput m_OnSpawnGroupLoadFinished; // 0x510	
	CEntityIOOutput m_OnSpawnGroupUnloadStarted; // 0x538	
	CEntityIOOutput m_OnSpawnGroupUnloadFinished; // 0x560	
	CUtlSymbolLarge m_iszSpawnGroupName; // 0x588	
	CUtlSymbolLarge m_iszSpawnGroupFilterName; // 0x590	
	CUtlSymbolLarge m_iszLandmarkName; // 0x598	
	CUtlString m_sFixedSpawnGroupName; // 0x5a0	
	float m_flTimeoutInterval; // 0x5a8	
	bool m_bStreamingStarted; // 0x5ac	
	bool m_bUnloadingStarted; // 0x5ad	
	
	// Datamap fields:
	// void CInfoSpawnGroupLoadUnloadSpawnGroupLoadingThink; // 0x0
	// void CInfoSpawnGroupLoadUnloadSpawnGroupUnloadingThink; // 0x0
	// void InputStartSpawnGroupLoad; // 0x0
	// void InputActivateSpawnGroup; // 0x0
	// void InputStartSpawnGroupUnload; // 0x0
	// CUtlSymbolLarge InputSetSpawnGroup; // 0x0
};

