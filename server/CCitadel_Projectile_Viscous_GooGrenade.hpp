#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8b0
// Has VTable
class CCitadel_Projectile_Viscous_GooGrenade : public CCitadelProjectile
{
public:
	int32_t m_nBounces; // 0x868	
	GameTime_t m_tNextDetonateTime; // 0x86c	
	CUtlVector< CHandle< CBaseEntity > > m_vecProjectileHitTargets; // 0x870	
};

