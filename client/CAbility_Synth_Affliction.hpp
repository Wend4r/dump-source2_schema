#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd18
// Has VTable
class CAbility_Synth_Affliction : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ca0[0x70]; // 0xca0
public:
	ParticleIndex_t m_hAOEParticle; // 0xd10	
};

