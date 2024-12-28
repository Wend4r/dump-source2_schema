#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdc0
// Has VTable
// 
// MNetworkVarNames "float m_flBombBonus"
class CCitadel_Ability_StickyBomb : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c98[0x8]; // 0xc98
public:
	// MNetworkEnable
	float m_flBombBonus; // 0xca0	
};

