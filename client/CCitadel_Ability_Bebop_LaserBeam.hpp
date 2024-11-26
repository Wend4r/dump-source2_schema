#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe20
// Has VTable
// 
// MNetworkVarNames "bool m_bAirCast"
// MNetworkVarNames "Vector m_vBeamAimPos"
class CCitadel_Ability_Bebop_LaserBeam : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ca0[0x150]; // 0xca0
public:
	bool m_bZoomed; // 0xdf0	
	// MNetworkEnable
	bool m_bAirCast; // 0xdf1	
private:
	[[maybe_unused]] uint8_t __pad0df2[0x2]; // 0xdf2
public:
	// MNetworkEnable
	Vector m_vBeamAimPos; // 0xdf4	
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	// MNetworkChangeCallback "OnBebopBeamAnglesChanged"
	QAngle m_angBeamAngles; // 0xe00	
private:
	[[maybe_unused]] uint8_t __pad0e0c[0xc]; // 0xe0c
public:
	bool m_bNeedsBeamReset; // 0xe18	
};

