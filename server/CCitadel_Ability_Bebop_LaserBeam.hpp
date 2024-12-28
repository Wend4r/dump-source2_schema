#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc68
// Has VTable
// 
// MNetworkVarNames "bool m_bAirCast"
// MNetworkVarNames "Vector m_vBeamAimPos"
// MNetworkVarNames "QAngle m_angBeamAngles"
class CCitadel_Ability_Bebop_LaserBeam : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0af8[0x150]; // 0xaf8
public:
	bool m_bZoomed; // 0xc48	
	// MNetworkEnable
	bool m_bAirCast; // 0xc49	
private:
	[[maybe_unused]] uint8_t __pad0c4a[0x2]; // 0xc4a
public:
	// MNetworkEnable
	Vector m_vBeamAimPos; // 0xc4c	
private:
	[[maybe_unused]] uint8_t __pad0c58[0x4]; // 0xc58
public:
	// MNetworkEnable
	QAngle m_angBeamAngles; // 0xc5c	
};

