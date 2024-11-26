#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x170
// Has VTable
class CCitadel_Modifier_StickyBombAttached : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0x4]; // 0xc0
public:
	ParticleIndex_t m_nParticleIndex; // 0xc4	
};

