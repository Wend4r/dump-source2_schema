#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xcb0
// Has VTable
// 
// MNetworkVarNames "bool m_bAirCast"
class CCitadel_Ability_Chrono_TimeWall : public CCitadelBaseAbility
{
public:
	CHandle< CCitadelBulletTimeWarp > m_hWall; // 0xaf8	
	Vector vecDir; // 0xafc	
	ParticleIndex_t m_hChargingParticle; // 0xb08	
	Vector m_vSpawnPos; // 0xb0c	
	QAngle m_qAngles; // 0xb18	
	// MNetworkEnable
	bool m_bAirCast; // 0xb24	
};

