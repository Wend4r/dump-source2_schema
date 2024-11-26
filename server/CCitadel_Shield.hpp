#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x948
// Has VTable
// 
// MNetworkVarNames "bool m_bAllowRotatingUp"
// MNetworkVarNames "bool m_bFixedPosition"
// MNetworkVarNames "float m_flShieldOffset"
class CCitadel_Shield : public CCitadelModelEntity
{
public:
	// MNetworkEnable
	bool m_bAllowRotatingUp; // 0x940	
	// MNetworkEnable
	bool m_bFixedPosition; // 0x941	
private:
	[[maybe_unused]] uint8_t __pad0942[0x2]; // 0x942
public:
	// MNetworkEnable
	float m_flShieldOffset; // 0x944	
};

