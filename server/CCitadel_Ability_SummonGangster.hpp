#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb00
// Has VTable
class CCitadel_Ability_SummonGangster : public CCitadelBaseAbility
{
public:
	CUtlVector< CHandle< CNPC_YakuzaGangster > > m_vecGangsters; // 0xab0	
};

