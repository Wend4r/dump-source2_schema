#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x158
// Has VTable
class CCitadel_Modifier_PsychicLift : public CCitadel_Modifier_Silenced
{
private:
	[[maybe_unused]] uint8_t __pad00d0[0x70]; // 0xd0
public:
	Vector m_vecFloatDest; // 0x140	
	Vector m_vecStartingPos; // 0x14c	
};
