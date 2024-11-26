#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1b8
// Has VTable
class CCitadel_Modifier_GhostBloodShard : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0xa8]; // 0xc0
public:
	float m_flMinSlowAmount; // 0x168	
	float m_flMoveSpeedPenaltyPerStack; // 0x16c	
	float m_flSlowDuration; // 0x170	
};

