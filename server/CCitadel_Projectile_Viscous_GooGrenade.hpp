#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8b8
// Has VTable
class CCitadel_Projectile_Viscous_GooGrenade : public CCitadelProjectile
{
public:
	int32_t m_nBounces; // 0x870	
	GameTime_t m_tNextDetonateTime; // 0x874	
	CUtlVector< CHandle< CBaseEntity > > m_vecProjectileHitTargets; // 0x878	
};

