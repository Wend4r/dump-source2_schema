#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x538
// Has VTable
// 
// MNetworkVarNames "bool m_bEnabled"
class CLogicGameEventListener : public CLogicalEntity
{
private:
	[[maybe_unused]] uint8_t __pad04e8[0x10]; // 0x4e8
public:
	CEntityIOOutput m_OnEventFired; // 0x4f8	
	CUtlSymbolLarge m_iszGameEventName; // 0x520	
	CUtlSymbolLarge m_iszGameEventItem; // 0x528	
	// MNetworkEnable
	bool m_bEnabled; // 0x530	
	bool m_bStartDisabled; // 0x531	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// void InputToggle; // 0x0
};

