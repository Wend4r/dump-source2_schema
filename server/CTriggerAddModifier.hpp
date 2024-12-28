#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x988
// Has VTable
class CTriggerAddModifier : public CBaseTrigger
{
public:
	CUtlSymbolLarge m_strModifier; // 0x978	
	float m_flDuration; // 0x980	
	bool m_bMomentary; // 0x984	
};

