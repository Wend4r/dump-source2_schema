#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe70
// Has VTable
// 
// MNetworkVarNames "float m_flFloat"
// MNetworkVarNames "int m_nLightningStrikesRemaining"
class CCitadel_Ability_StormCloud : public C_CitadelBaseAbility
{
public:
	ParticleIndex_t m_nTargetingParticleIndex; // 0xc98	
private:
	[[maybe_unused]] uint8_t __pad0c9c[0x1c4]; // 0xc9c
public:
	// MNetworkEnable
	float m_flFloat; // 0xe60	
	// MNetworkEnable
	int32_t m_nLightningStrikesRemaining; // 0xe64	
};

