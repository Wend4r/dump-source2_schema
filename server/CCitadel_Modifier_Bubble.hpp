#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x148
// Has VTable
class CCitadel_Modifier_Bubble : public CCitadel_Modifier_Silenced
{
public:
	float m_flDampingFactor; // 0xc8	
private:
	[[maybe_unused]] uint8_t __pad00cc[0x74]; // 0xcc
public:
	ParticleIndex_t m_ParticleIndex; // 0x140	
};

