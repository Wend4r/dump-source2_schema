#pragma once

#include <cstdint>

struct ParticleIndex_t;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xca0
// Has VTable
class CAbility_Rutger_ForceField : public CCitadelBaseAbility
{
public:
	ParticleIndex_t m_hChargingParticle; // 0xaf8	
	ParticleIndex_t m_hExplodeParticle; // 0xafc	
	Vector m_vSpawnPos; // 0xb00	
	GameTime_t m_fTimeToDestroyForceField; // 0xb0c	
	bool m_bFirstThink; // 0xb10	
};

