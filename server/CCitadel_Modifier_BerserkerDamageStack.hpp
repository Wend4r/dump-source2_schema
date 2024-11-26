#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x100
// Has VTable
class CCitadel_Modifier_BerserkerDamageStack : public CCitadelModifier
{
public:
	ParticleIndex_t m_nBuffParticle; // 0xc0	
	ParticleIndex_t m_nBuffParticleEnemy; // 0xc4	
};

