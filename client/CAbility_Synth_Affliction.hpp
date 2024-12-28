#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd50
// Has VTable
// 
// MNetworkVarNames "int m_nBonusTechPower"
class CAbility_Synth_Affliction : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	int32_t m_nBonusTechPower; // 0xc98	
private:
	[[maybe_unused]] uint8_t __pad0c9c[0xac]; // 0xc9c
public:
	ParticleIndex_t m_hAOEParticle; // 0xd48	
};

