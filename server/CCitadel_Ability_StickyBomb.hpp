#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc20
// Has VTable
// 
// MNetworkVarNames "float m_flBombBonus"
class CCitadel_Ability_StickyBomb : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0af8[0x8]; // 0xaf8
public:
	// MNetworkEnable
	float m_flBombBonus; // 0xb00	
};

