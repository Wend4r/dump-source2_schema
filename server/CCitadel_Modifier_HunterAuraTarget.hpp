#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x188
// Has VTable
class CCitadel_Modifier_HunterAuraTarget : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0xa8]; // 0xc0
public:
	float m_flDebuffScale; // 0x168	
private:
	[[maybe_unused]] uint8_t __pad016c[0x4]; // 0x16c
public:
	CModifierHandleTyped< CCitadelModifier > m_AuraModifierHandle; // 0x170	
};

