#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb18
// Has VTable
// 
// MNetworkVarNames "CHandle< CCitadelBaseAbility> m_hAbility"
class C_Citadel_Nano_Predatory_Statue : public CCitadelAnimatingModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0b08[0x8]; // 0xb08
public:
	// MNetworkEnable
	CHandle< C_CitadelBaseAbility > m_hAbility; // 0xb10	
	float m_flLifetime; // 0xb14	
};

