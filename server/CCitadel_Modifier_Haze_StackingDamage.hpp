#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x170
// Has VTable
class CCitadel_Modifier_Haze_StackingDamage : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0xa8]; // 0xc0
public:
	int32_t m_nTotalProcs; // 0x168	
};

