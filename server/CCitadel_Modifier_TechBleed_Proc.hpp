#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x258
// Has VTable
class CCitadel_Modifier_TechBleed_Proc : public CCitadel_Modifier_BaseEventProc
{
public:
	bool m_bNoDeath; // 0x168	
private:
	[[maybe_unused]] uint8_t __pad0169[0x3]; // 0x169
public:
	float m_flDamage; // 0x16c	
	int32_t m_nDamageTick; // 0x170	
	CHandle< CBaseEntity > m_hTarget; // 0x174	
};

