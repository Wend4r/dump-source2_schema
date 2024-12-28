#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd88
// Has VTable
// 
// MNetworkVarNames "bool m_bAirRaiding"
class CCitadel_Ability_PowerJump : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c98[0x4]; // 0xc98
public:
	ParticleIndex_t m_nTargetingParticleIndex; // 0xc9c	
	// MNetworkEnable
	bool m_bAirRaiding; // 0xca0	
};

