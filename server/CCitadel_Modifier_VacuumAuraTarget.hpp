#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x168
// Has VTable
class CCitadel_Modifier_VacuumAuraTarget : public CCitadel_Modifier_Stunned
{
private:
	[[maybe_unused]] uint8_t __pad00d0[0x70]; // 0xd0
public:
	float m_flMaxDist; // 0x140	
	Vector m_vecOffsetDir; // 0x144	
	Vector m_vecStartPosition; // 0x150	
	float m_flAOERadius; // 0x15c	
};

