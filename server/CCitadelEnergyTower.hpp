#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4f8
// Has VTable
class CCitadelEnergyTower : public CServerOnlyEntity
{
public:
	bool m_bEnabled; // 0x4e0	
private:
	[[maybe_unused]] uint8_t __pad04e1[0x3]; // 0x4e1
public:
	float m_flDamage; // 0x4e4	
	float m_flRadius; // 0x4e8	
	
	// Datamap fields:
	//  InputEnable; // 0x0
	//  InputDisable; // 0x0
};

