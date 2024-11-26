#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd18
// Has VTable
// 
// MNetworkVarNames "float m_flFloat"
class CCitadel_Ability_StormCloud : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ca0[0x70]; // 0xca0
public:
	// MNetworkEnable
	float m_flFloat; // 0xd10	
};

