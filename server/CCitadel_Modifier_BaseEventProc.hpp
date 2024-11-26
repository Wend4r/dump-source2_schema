#pragma once

#include <cstdint>

struct ShotID_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x168
// Has VTable
// Is Abstract
class CCitadel_Modifier_BaseEventProc : public CCitadelModifier
{
public:
	CUtlVector< CBaseEntity* > m_vecProcdUnitsThisShot; // 0xc0	
	CUtlVector< CBaseEntity* > m_vecTrackedUnitsThisFrame; // 0xd8	
	ShotID_t m_nLastShotId; // 0xf0	
};

