#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x248
// Has VTable
class CCitadel_Modifier_MageWalk : public CCitadelModifier
{
public:
	bool m_bIsFakeout; // 0xc0	
	bool m_bTeleported; // 0xc1	
private:
	[[maybe_unused]] uint8_t __pad00c2[0x2]; // 0xc2
public:
	ParticleIndex_t m_particleStart; // 0xc4	
	ParticleIndex_t m_particleEnd; // 0xc8	
	ParticleIndex_t m_particleTrail; // 0xcc	
	Vector m_vecEndLocation; // 0xd0	
	Vector m_vecStartPosition; // 0xdc	
	Vector m_vecEndLocationCaster; // 0xe8	
};

