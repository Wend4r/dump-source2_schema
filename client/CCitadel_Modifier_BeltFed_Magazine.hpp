#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x228
// Has VTable
class CCitadel_Modifier_BeltFed_Magazine : public CCitadelModifier
{
public:
	bool m_bInitialized; // 0xc0	
private:
	[[maybe_unused]] uint8_t __pad00c1[0x3]; // 0xc1
public:
	float m_flSpinUpRateOverride; // 0xc4	
	float m_flSpinUpDecayOverride; // 0xc8	
	float m_flMaxCycleTimeOverride; // 0xcc	
	float m_flMaxBurstFireCooldownOverride; // 0xd0	
};
