#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1038
// Has VTable
class CPropDoorRotatingBreakable : public CPropDoorRotating
{
public:
	bool m_bBreakable; // 0x1018	
	bool m_isAbleToCloseAreaPortals; // 0x1019	
private:
	[[maybe_unused]] uint8_t __pad101a[0x2]; // 0x101a
public:
	int32_t m_currentDamageState; // 0x101c	
	CUtlVector< CUtlSymbolLarge > m_damageStates; // 0x1020	
	
	// Datamap fields:
	// void InputSetUnbreakable; // 0x0
	// void InputSetBreakable; // 0x0
};

