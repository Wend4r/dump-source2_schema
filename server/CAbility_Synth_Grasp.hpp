#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb50
// Has VTable
class CAbility_Synth_Grasp : public CCitadelBaseAbility
{
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecTetheredEnemies; // 0xb00	
};

