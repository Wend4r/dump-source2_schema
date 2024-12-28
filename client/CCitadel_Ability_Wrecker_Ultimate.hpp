#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdb8
// Has VTable
class CCitadel_Ability_Wrecker_Ultimate : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c98[0x20]; // 0xc98
public:
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	// MNetworkChangeCallback "OnGrabBeamAnglesChanged"
	QAngle m_angBeamAngles; // 0xcb8	
private:
	[[maybe_unused]] uint8_t __pad0cc4[0xc]; // 0xcc4
public:
	bool m_bNeedsBeamReset; // 0xcd0	
};

