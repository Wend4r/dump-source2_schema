#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcd8
// Has VTable
// 
// MNetworkVarNames "bool m_bHoldingBall"
class CCitadel_Ability_WreckingBall : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c98[0x38]; // 0xc98
public:
	// MNetworkEnable
	bool m_bHoldingBall; // 0xcd0	
};

