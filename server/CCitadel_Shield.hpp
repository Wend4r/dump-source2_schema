#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x940
// Has VTable
// 
// MNetworkVarNames "bool m_bAllowRotatingUp"
// MNetworkVarNames "bool m_bFixedPosition"
// MNetworkVarNames "float m_flShieldOffset"
class CCitadel_Shield : public CCitadelModelEntity
{
public:
	// MNetworkEnable
	bool m_bAllowRotatingUp; // 0x938	
	// MNetworkEnable
	bool m_bFixedPosition; // 0x939	
private:
	[[maybe_unused]] uint8_t __pad093a[0x2]; // 0x93a
public:
	// MNetworkEnable
	float m_flShieldOffset; // 0x93c	
};

