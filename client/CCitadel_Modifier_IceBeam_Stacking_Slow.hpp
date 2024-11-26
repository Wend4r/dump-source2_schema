#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x228
// Has VTable
class CCitadel_Modifier_IceBeam_Stacking_Slow : public CCitadel_Modifier_Base_Buildup
{
private:
	[[maybe_unused]] uint8_t __pad00d0[0x150]; // 0xd0
public:
	float m_flCurrBuildup; // 0x220	
};

