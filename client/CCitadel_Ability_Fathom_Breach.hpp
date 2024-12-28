#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd80
// Has VTable
// 
// MNetworkVarNames "bool m_bInFlight"
class CCitadel_Ability_Fathom_Breach : public C_CitadelBaseAbility
{
public:
	ParticleIndex_t m_nRollFXIndex; // 0xc98	
	// MNetworkEnable
	bool m_bInFlight; // 0xc9c	
};

