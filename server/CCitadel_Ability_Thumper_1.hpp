#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xcb8
// Has VTable
class CCitadel_Ability_Thumper_1 : public CCitadelBaseAbility
{
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecHitEntities; // 0xaf8	
	Vector m_vecAimPos; // 0xb10	
	Vector m_vecAimNormal; // 0xb1c	
	float m_flPushForce; // 0xb28	
};

