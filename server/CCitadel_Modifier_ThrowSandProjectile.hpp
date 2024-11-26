#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x190
// Has VTable
class CCitadel_Modifier_ThrowSandProjectile : public CCitadel_Modifier_Intrinsic_Base
{
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecHitEntities; // 0xc0	
private:
	[[maybe_unused]] uint8_t __pad00d8[0xa8]; // 0xd8
public:
	Vector m_vInitialCastPosition; // 0x180	
};

