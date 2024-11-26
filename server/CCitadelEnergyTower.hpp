#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x500
// Has VTable
class CCitadelEnergyTower : public CServerOnlyEntity
{
public:
	bool m_bEnabled; // 0x4e8	
private:
	[[maybe_unused]] uint8_t __pad04e9[0x3]; // 0x4e9
public:
	float m_flDamage; // 0x4ec	
	float m_flRadius; // 0x4f0	
	
	// Datamap fields:
	//  InputEnable; // 0x0
	//  InputDisable; // 0x0
};

