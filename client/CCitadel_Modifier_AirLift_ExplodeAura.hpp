#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x100
// Has VTable
class CCitadel_Modifier_AirLift_ExplodeAura : public CCitadelModifierAura
{
public:
	float m_flStartRadius; // 0xf0	
	float m_flEndRadius; // 0xf4	
	float m_flSpreadDuration; // 0xf8	
};

