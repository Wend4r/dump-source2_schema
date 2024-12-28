#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x18a0
// Has VTable
class CNPC_SurveillanceDrone : public CNPC_FlyingDrone
{
public:
	int32_t m_iMinionHealth; // 0x1840	
	float m_flLifetime; // 0x1844	
private:
	[[maybe_unused]] uint8_t __pad1848[0xc]; // 0x1848
public:
	Vector m_vecHome; // 0x1854	
private:
	[[maybe_unused]] uint8_t __pad1860[0x10]; // 0x1860
public:
	int32_t m_nAbilityLevel; // 0x1870	
};

