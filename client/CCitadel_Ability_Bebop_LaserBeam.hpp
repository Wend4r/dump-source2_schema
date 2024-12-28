#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe18
// Has VTable
// 
// MNetworkVarNames "bool m_bAirCast"
// MNetworkVarNames "Vector m_vBeamAimPos"
class CCitadel_Ability_Bebop_LaserBeam : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c98[0x150]; // 0xc98
public:
	bool m_bZoomed; // 0xde8	
	// MNetworkEnable
	bool m_bAirCast; // 0xde9	
private:
	[[maybe_unused]] uint8_t __pad0dea[0x2]; // 0xdea
public:
	// MNetworkEnable
	Vector m_vBeamAimPos; // 0xdec	
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	// MNetworkChangeCallback "OnBebopBeamAnglesChanged"
	QAngle m_angBeamAngles; // 0xdf8	
private:
	[[maybe_unused]] uint8_t __pad0e04[0xc]; // 0xe04
public:
	bool m_bNeedsBeamReset; // 0xe10	
};

