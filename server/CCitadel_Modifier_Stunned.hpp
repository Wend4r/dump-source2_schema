#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc8
// Has VTable
class CCitadel_Modifier_Stunned : public CCitadelModifier
{
public:
	bool m_bEnabled; // 0xc0	
private:
	[[maybe_unused]] uint8_t __pad00c1[0x3]; // 0xc1
public:
	ParticleIndex_t m_nParticleIndex; // 0xc4	
};

