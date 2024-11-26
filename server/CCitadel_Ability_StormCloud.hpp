#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb78
// Has VTable
// 
// MNetworkVarNames "float m_flFloat"
class CCitadel_Ability_StormCloud : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0b00[0x70]; // 0xb00
public:
	// MNetworkEnable
	float m_flFloat; // 0xb70	
};

