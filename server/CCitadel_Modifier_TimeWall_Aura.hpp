#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x228
// Has VTable
class CCitadel_Modifier_TimeWall_Aura : public CCitadelModifierAura
{
private:
	[[maybe_unused]] uint8_t __pad00e0[0x118]; // 0xe0
public:
	CUtlVector< CHandle< CCitadelBulletTimeWarp > > m_vecTimeWarps; // 0x1f8	
};

