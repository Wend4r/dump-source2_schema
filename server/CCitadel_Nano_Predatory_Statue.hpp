#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xbe0
// Has VTable
// 
// MNetworkVarNames "CHandle< CCitadelBaseAbility> m_hAbility"
class CCitadel_Nano_Predatory_Statue : public CCitadelAnimatingModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0bc0[0x18]; // 0xbc0
public:
	// MNetworkEnable
	CHandle< CCitadelBaseAbility > m_hAbility; // 0xbd8	
	float m_flLifetime; // 0xbdc	
};

