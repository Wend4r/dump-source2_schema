#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x140
// Has VTable
class CCitadel_Modifier_AnimalCurse : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0x70]; // 0xc0
public:
	CWeakHandle< InfoForResourceTypeCModel > m_pOriginalModel; // 0x130	
	float m_flOriginalModelScale; // 0x138	
};

