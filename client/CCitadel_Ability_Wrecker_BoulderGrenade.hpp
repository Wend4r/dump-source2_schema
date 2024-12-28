#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe08
// Has VTable
class CCitadel_Ability_Wrecker_BoulderGrenade : public C_CitadelBaseAbility
{
public:
	CUtlVector< CHandle< C_BaseEntity > > m_hHitTroopers; // 0xc98	
private:
	[[maybe_unused]] uint8_t __pad0cb0[0x4]; // 0xcb0
public:
	ParticleIndex_t m_nBallParticle; // 0xcb4	
};

