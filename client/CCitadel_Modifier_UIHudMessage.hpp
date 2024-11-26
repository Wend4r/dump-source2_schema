#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd8
// Has VTable
class CCitadel_Modifier_UIHudMessage : public CCitadelModifier
{
public:
	CUtlString m_strHudMessage; // 0xc0	
	bool m_bIncludeDecimal; // 0xc8	
private:
	[[maybe_unused]] uint8_t __pad00c9[0x3]; // 0xc9
public:
	int32_t m_eModifierValue; // 0xcc	
	float m_flValue; // 0xd0	
};

