#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x350
// Has VTable
class CCitadel_Modifier_FissureWall : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0x230]; // 0xc0
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecFissureWallEntities; // 0x2f0	
	CUtlVector< CHandle< CBaseEntity > > m_vecFisureEntitiesHit; // 0x308	
	int32_t m_nSegment; // 0x320	
	Vector m_vPosition; // 0x324	
	Vector m_vDirection; // 0x330	
	Vector m_vLeft; // 0x33c	
	float m_Length; // 0x348	
};

