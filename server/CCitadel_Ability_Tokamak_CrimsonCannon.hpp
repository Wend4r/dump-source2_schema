#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd18
// Has VTable
// 
// MNetworkVarNames "bool m_bAirCast"
class CCitadel_Ability_Tokamak_CrimsonCannon : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0af8[0x20]; // 0xaf8
public:
	CUtlVector< ParticleIndex_t > m_TargetPreviews; // 0xb18	
	// MNetworkEnable
	bool m_bAirCast; // 0xb30	
};

