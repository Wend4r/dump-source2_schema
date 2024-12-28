#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x868
// Has VTable
// 
// MNetworkVarNames "bool m_bAllowRotatingUp"
// MNetworkVarNames "bool m_bFixedPosition"
// MNetworkVarNames "float m_flShieldOffset"
class C_Citadel_Shield : public CCitadelModelEntity
{
public:
	// MNetworkEnable
	bool m_bAllowRotatingUp; // 0x860	
	// MNetworkEnable
	bool m_bFixedPosition; // 0x861	
private:
	[[maybe_unused]] uint8_t __pad0862[0x2]; // 0x862
public:
	// MNetworkEnable
	float m_flShieldOffset; // 0x864	
};

