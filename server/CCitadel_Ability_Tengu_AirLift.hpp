#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd18
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hGrabTarget"
// MNetworkVarNames "EFlightState m_eFlightState"
// MNetworkVarNames "bool m_bIsGrabbing"
// MNetworkVarNames "bool m_bIsHoldingBomb"
// MNetworkVarNames "float m_flCurrentSpeed"
class CCitadel_Ability_Tengu_AirLift : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0af8[0x18]; // 0xaf8
public:
	// MNetworkEnable
	CHandle< CBaseEntity > m_hGrabTarget; // 0xb10	
	ParticleIndex_t m_nHoldBombEffect; // 0xb14	
private:
	[[maybe_unused]] uint8_t __pad0b18[0x1f8]; // 0xb18
public:
	// MNetworkEnable
	EFlightState m_eFlightState; // 0xd10	
	// MNetworkEnable
	bool m_bIsGrabbing; // 0xd11	
	// MNetworkEnable
	bool m_bIsHoldingBomb; // 0xd12	
private:
	[[maybe_unused]] uint8_t __pad0d13[0x1]; // 0xd13
public:
	// MNetworkEnable
	float m_flCurrentSpeed; // 0xd14	
};

