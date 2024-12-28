#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc68
// Has VTable
class CCitadel_Ability_Wrecker_BoulderGrenade : public CCitadelBaseAbility
{
public:
	CUtlVector< CHandle< CBaseEntity > > m_hHitTroopers; // 0xaf8	
private:
	[[maybe_unused]] uint8_t __pad0b10[0x4]; // 0xb10
public:
	ParticleIndex_t m_nBallParticle; // 0xb14	
};

