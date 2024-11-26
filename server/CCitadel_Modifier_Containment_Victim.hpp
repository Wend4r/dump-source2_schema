#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x120
// Has VTable
class CCitadel_Modifier_Containment_Victim : public CCitadelModifier
{
public:
	float m_flGoalHeight; // 0xc0	
	float m_flFallRate; // 0xc4	
	ParticleIndex_t m_nFXIndex; // 0xc8	
	ParticleIndex_t m_nFXIndexVictim; // 0xcc	
	ParticleIndex_t m_nChainFxIndex; // 0xd0	
	float m_flTetherRadius; // 0xd4	
	Vector m_vecOrigin; // 0xd8	
};

