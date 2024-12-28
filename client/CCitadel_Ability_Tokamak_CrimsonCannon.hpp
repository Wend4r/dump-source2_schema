#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe88
// Has VTable
// 
// MNetworkVarNames "bool m_bAirCast"
class CCitadel_Ability_Tokamak_CrimsonCannon : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	bool m_bAirCast; // 0xc98	
private:
	[[maybe_unused]] uint8_t __pad0c99[0x1c7]; // 0xc99
public:
	bool m_bIsZoomed; // 0xe60	
};

