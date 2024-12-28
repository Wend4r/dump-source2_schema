#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x978
// Has VTable
// 
// MNetworkIncludeByName "m_spawnflags"
// MNetworkVarNames "bool m_bDisabled"
class CBaseTrigger : public CBaseToggle
{
public:
	CEntityIOOutput m_OnStartTouch; // 0x838	
	CEntityIOOutput m_OnStartTouchAll; // 0x860	
	CEntityIOOutput m_OnEndTouch; // 0x888	
	CEntityIOOutput m_OnEndTouchAll; // 0x8b0	
	CEntityIOOutput m_OnTouching; // 0x8d8	
	CEntityIOOutput m_OnTouchingEachEntity; // 0x900	
	CEntityIOOutput m_OnNotTouching; // 0x928	
	CUtlVector< CHandle< CBaseEntity > > m_hTouchingEntities; // 0x950	
	CUtlSymbolLarge m_iFilterName; // 0x968	
	CHandle< CBaseFilter > m_hFilter; // 0x970	
	// MNetworkEnable
	bool m_bDisabled; // 0x974	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// void InputToggle; // 0x0
	// void InputTouchTest; // 0x0
	// void InputStartTouch; // 0x0
	// void InputEndTouch; // 0x0
	// bool okifnomodel; // 0x7fffffff
	// float radius; // 0x7fffffff
};

