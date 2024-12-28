#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xe0
// Has VTable
// Is Abstract
class CBaseModifierAura : public CCitadelModifier
{
public:
	CUtlVector< CHandle< CBaseEntity > > m_hAuraUnits; // 0xc0	
	float m_flOverrideRadius; // 0xd8	
};

