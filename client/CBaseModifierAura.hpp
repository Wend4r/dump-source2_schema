#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf0
// Has VTable
// Is Abstract
class CBaseModifierAura : public CCitadelModifier
{
public:
	CUtlVector< CHandle< C_BaseEntity > > m_hAuraUnits; // 0xc0	
	float m_flOverrideRadius; // 0xd8	
	
	// Datamap fields:
	// void m_hAmbientEffect; // 0xe4
	// void m_hAmbientSound; // 0xdc
	// void m_flLastRadius; // 0xe8
};

