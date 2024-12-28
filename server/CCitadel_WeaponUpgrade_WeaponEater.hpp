#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc00
// Has VTable
// 
// MNetworkVarNames "int m_nWeaponPower"
class CCitadel_WeaponUpgrade_WeaponEater : public CCitadel_Item
{
private:
	[[maybe_unused]] uint8_t __pad0b18[0xe0]; // 0xb18
public:
	// MNetworkEnable
	int32_t m_nWeaponPower; // 0xbf8	
};

