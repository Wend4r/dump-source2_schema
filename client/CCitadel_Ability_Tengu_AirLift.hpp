#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xeb0
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hGrabTarget"
// MNetworkVarNames "EFlightState m_eFlightState"
// MNetworkVarNames "bool m_bIsGrabbing"
// MNetworkVarNames "bool m_bIsHoldingBomb"
// MNetworkVarNames "float m_flCurrentSpeed"
class CCitadel_Ability_Tengu_AirLift : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hGrabTarget; // 0xc98	
	ParticleIndex_t m_nHoldBombEffect; // 0xc9c	
private:
	[[maybe_unused]] uint8_t __pad0ca0[0x1f8]; // 0xca0
public:
	// MNetworkEnable
	EFlightState m_eFlightState; // 0xe98	
	// MNetworkEnable
	bool m_bIsGrabbing; // 0xe99	
	// MNetworkEnable
	bool m_bIsHoldingBomb; // 0xe9a	
private:
	[[maybe_unused]] uint8_t __pad0e9b[0x1]; // 0xe9b
public:
	// MNetworkEnable
	float m_flCurrentSpeed; // 0xe9c	
};

