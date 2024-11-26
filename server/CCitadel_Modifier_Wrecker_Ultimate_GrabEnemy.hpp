#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x228
// Has VTable
class CCitadel_Modifier_Wrecker_Ultimate_GrabEnemy : public CCitadelModifier
{
public:
	bool m_bAddedStasisParticle; // 0xc0	
private:
	[[maybe_unused]] uint8_t __pad00c1[0x3]; // 0xc1
public:
	Vector m_vHoldOffset; // 0xc4	
	float m_flLastTouchTime; // 0xd0	
};

