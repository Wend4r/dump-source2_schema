#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xdb8
// Has VTable
// 
// MNetworkVarNames "bool m_bCardIsFlying"
class CCitadel_Ability_CardToss : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0af8[0x20]; // 0xaf8
public:
	CUtlVector< CCitadel_Ability_CardToss::Card_t > m_vecCards; // 0xb18	
private:
	[[maybe_unused]] uint8_t __pad0b30[0x280]; // 0xb30
public:
	// MNetworkEnable
	bool m_bCardIsFlying; // 0xdb0	
};

