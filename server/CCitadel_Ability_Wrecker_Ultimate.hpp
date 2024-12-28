#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc08
// Has VTable
// 
// MNetworkVarNames "QAngle m_angBeamAngles"
class CCitadel_Ability_Wrecker_Ultimate : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0af8[0x20]; // 0xaf8
public:
	// MNetworkEnable
	QAngle m_angBeamAngles; // 0xb18	
};

