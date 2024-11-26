#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc70
// Has VTable
// 
// MNetworkVarNames "bool m_bAirCast"
// MNetworkVarNames "Vector m_vBeamAimPos"
// MNetworkVarNames "QAngle m_angBeamAngles"
class CCitadel_Ability_Bebop_LaserBeam : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0b00[0x150]; // 0xb00
public:
	bool m_bZoomed; // 0xc50	
	// MNetworkEnable
	bool m_bAirCast; // 0xc51	
private:
	[[maybe_unused]] uint8_t __pad0c52[0x2]; // 0xc52
public:
	// MNetworkEnable
	Vector m_vBeamAimPos; // 0xc54	
private:
	[[maybe_unused]] uint8_t __pad0c60[0x4]; // 0xc60
public:
	// MNetworkEnable
	QAngle m_angBeamAngles; // 0xc64	
};

