#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xcc8
// Has VTable
// 
// MNetworkVarNames "float m_flFloat"
// MNetworkVarNames "int m_nLightningStrikesRemaining"
class CCitadel_Ability_StormCloud : public CCitadelBaseAbility
{
public:
	ParticleIndex_t m_nTargetingParticleIndex; // 0xaf8	
private:
	[[maybe_unused]] uint8_t __pad0afc[0x1c4]; // 0xafc
public:
	// MNetworkEnable
	float m_flFloat; // 0xcc0	
	// MNetworkEnable
	int32_t m_nLightningStrikesRemaining; // 0xcc4	
};

