#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xbe0
// Has VTable
// 
// MNetworkVarNames "bool m_bAirRaiding"
class CCitadel_Ability_PowerJump : public CCitadelBaseAbility
{
public:
	ParticleIndex_t m_nTargetingParticleIndex; // 0xaf8	
	// MNetworkEnable
	bool m_bAirRaiding; // 0xafc	
};

