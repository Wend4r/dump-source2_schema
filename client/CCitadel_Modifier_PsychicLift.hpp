#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x148
// Has VTable
class CCitadel_Modifier_PsychicLift : public CCitadel_Modifier_Stunned
{
private:
	[[maybe_unused]] uint8_t __pad00c8[0x70]; // 0xc8
public:
	Vector m_vecFloatDest; // 0x138	
	bool m_bImpacted; // 0x144	
};

