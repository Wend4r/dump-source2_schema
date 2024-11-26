#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x520
// Has VTable
class CLogicAchievement : public CLogicalEntity
{
public:
	bool m_bDisabled; // 0x4e8	
private:
	[[maybe_unused]] uint8_t __pad04e9[0x7]; // 0x4e9
public:
	CUtlSymbolLarge m_iszAchievementEventID; // 0x4f0	
	CEntityIOOutput m_OnFired; // 0x4f8	
	
	// Datamap fields:
	// void InputFireEvent; // 0x0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// void InputToggle; // 0x0
};

