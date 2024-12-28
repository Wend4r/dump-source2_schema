#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc40
// Has VTable
// 
// MNetworkVarNames "Vector m_vecCastPosition"
// MNetworkVarNames "Vector m_vecCastPositionNormal"
// MNetworkVarNames "Vector m_vecEndPosition"
// MNetworkVarNames "Vector m_vecEndPositionNormal"
class CCitadel_Ability_Trapper_WebWall : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0af8[0x118]; // 0xaf8
public:
	// MNetworkEnable
	Vector m_vecCastPosition; // 0xc10	
	// MNetworkEnable
	Vector m_vecCastPositionNormal; // 0xc1c	
	// MNetworkEnable
	Vector m_vecEndPosition; // 0xc28	
	// MNetworkEnable
	Vector m_vecEndPositionNormal; // 0xc34	
};

