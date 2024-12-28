#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x928
// Has VTable
class C_Citadel_Projectile_Viscous_GooGrenade : public C_CitadelProjectile
{
public:
	int32_t m_nBounces; // 0x8e0	
	GameTime_t m_tNextDetonateTime; // 0x8e4	
	CUtlVector< CHandle< C_BaseEntity > > m_vecProjectileHitTargets; // 0x8e8	
};

