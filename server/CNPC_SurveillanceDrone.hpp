#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x18a8
// Has VTable
class CNPC_SurveillanceDrone : public CNPC_FlyingDrone
{
public:
	int32_t m_iMinionHealth; // 0x1848	
	float m_flLifetime; // 0x184c	
private:
	[[maybe_unused]] uint8_t __pad1850[0xc]; // 0x1850
public:
	Vector m_vecHome; // 0x185c	
private:
	[[maybe_unused]] uint8_t __pad1868[0x10]; // 0x1868
public:
	int32_t m_nAbilityLevel; // 0x1878	
};

