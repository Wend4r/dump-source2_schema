#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x980
// Has VTable
// 
// MNetworkIncludeByName "m_spawnflags"
// MNetworkVarNames "bool m_bDisabled"
class CBaseTrigger : public CBaseToggle
{
public:
	CEntityIOOutput m_OnStartTouch; // 0x840	
	CEntityIOOutput m_OnStartTouchAll; // 0x868	
	CEntityIOOutput m_OnEndTouch; // 0x890	
	CEntityIOOutput m_OnEndTouchAll; // 0x8b8	
	CEntityIOOutput m_OnTouching; // 0x8e0	
	CEntityIOOutput m_OnTouchingEachEntity; // 0x908	
	CEntityIOOutput m_OnNotTouching; // 0x930	
	CUtlVector< CHandle< CBaseEntity > > m_hTouchingEntities; // 0x958	
	CUtlSymbolLarge m_iFilterName; // 0x970	
	CHandle< CBaseFilter > m_hFilter; // 0x978	
	// MNetworkEnable
	bool m_bDisabled; // 0x97c	
	
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

