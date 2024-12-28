#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xbd8
// Has VTable
// 
// MNetworkVarNames "CHandle< CCitadelBaseAbility> m_hAbility"
class CCitadel_Nano_Predatory_Statue : public CCitadelAnimatingModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0bb8[0x18]; // 0xbb8
public:
	// MNetworkEnable
	CHandle< CCitadelBaseAbility > m_hAbility; // 0xbd0	
	float m_flLifetime; // 0xbd4	
};

