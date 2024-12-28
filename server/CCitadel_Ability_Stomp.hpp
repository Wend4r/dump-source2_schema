#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd20
// Has VTable
class CCitadel_Ability_Stomp : public CCitadelBaseAbility
{
public:
	Vector m_vStompPos; // 0xaf8	
	Vector m_vStompDir; // 0xb04	
	CUtlVector< CHandle< CBaseEntity > > m_vecStompedEnemies; // 0xb10	
};

