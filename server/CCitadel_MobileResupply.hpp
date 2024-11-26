#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc28
// Has VTable
// 
// MNetworkVarNames "CHandle< CCitadelBaseAbility> m_hAbility"
// MNetworkVarNames "bool m_bFloating"
class CCitadel_MobileResupply : public CCitadelAnimatingModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0bc0[0x5c]; // 0xbc0
public:
	// MNetworkEnable
	CHandle< CCitadelBaseAbility > m_hAbility; // 0xc1c	
	// MNetworkEnable
	bool m_bFloating; // 0xc20	
};

