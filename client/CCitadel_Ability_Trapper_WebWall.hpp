#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xde0
// Has VTable
// 
// MNetworkVarNames "Vector m_vecCastPosition"
// MNetworkVarNames "Vector m_vecCastPositionNormal"
// MNetworkVarNames "Vector m_vecEndPosition"
// MNetworkVarNames "Vector m_vecEndPositionNormal"
class CCitadel_Ability_Trapper_WebWall : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c98[0x118]; // 0xc98
public:
	// MNetworkEnable
	Vector m_vecCastPosition; // 0xdb0	
	// MNetworkEnable
	Vector m_vecCastPositionNormal; // 0xdbc	
	// MNetworkEnable
	Vector m_vecEndPosition; // 0xdc8	
	// MNetworkEnable
	Vector m_vecEndPositionNormal; // 0xdd4	
};

