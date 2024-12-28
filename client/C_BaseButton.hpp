#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x868
// Has VTable
// 
// MNetworkVarNames "CHandle< C_BaseModelEntity> m_glowEntity"
// MNetworkVarNames "bool m_usable"
// MNetworkVarNames "string_t m_szDisplayText"
class C_BaseButton : public C_BaseToggle
{
public:
	// MNetworkEnable
	CHandle< C_BaseModelEntity > m_glowEntity; // 0x858	
	// MNetworkEnable
	bool m_usable; // 0x85c	
private:
	[[maybe_unused]] uint8_t __pad085d[0x3]; // 0x85d
public:
	// MNetworkEnable
	CUtlSymbolLarge m_szDisplayText; // 0x860	
};

