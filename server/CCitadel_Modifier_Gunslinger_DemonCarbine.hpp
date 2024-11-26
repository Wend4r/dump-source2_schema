#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x220
// Has VTable
class CCitadel_Modifier_Gunslinger_DemonCarbine : public CCitadelModifier
{
public:
	int32_t m_nBulletCount; // 0xc0	
	float m_flElapsedPct; // 0xc4	
	ParticleIndex_t m_nFullyChargedParticle; // 0xc8	
};

