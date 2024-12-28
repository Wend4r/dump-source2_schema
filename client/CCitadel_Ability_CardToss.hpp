#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf20
// Has VTable
// 
// MNetworkVarNames "bool m_bCardIsFlying"
class CCitadel_Ability_CardToss : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c98[0x280]; // 0xc98
public:
	// MNetworkEnable
	bool m_bCardIsFlying; // 0xf18	
};

