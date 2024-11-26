#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x990
// Has VTable
class CTriggerAddModifier : public CBaseTrigger
{
public:
	CUtlSymbolLarge m_strModifier; // 0x980	
	float m_flDuration; // 0x988	
	bool m_bMomentary; // 0x98c	
};

