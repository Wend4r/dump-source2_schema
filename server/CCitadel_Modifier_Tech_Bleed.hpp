#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x100
// Has VTable
class CCitadel_Modifier_Tech_Bleed : public CCitadelModifier
{
public:
	bool m_bNoDeath; // 0xc0	
private:
	[[maybe_unused]] uint8_t __pad00c1[0x3]; // 0xc1
public:
	float m_flDamage; // 0xc4	
};

