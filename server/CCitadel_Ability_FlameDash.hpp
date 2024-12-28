#pragma once

#include <cstdint>

struct CCitadelAutoScaledTime;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc88
// Has VTable
// 
// MNetworkVarNames "CCitadelAutoScaledTime m_flDashEndTime"
// MNetworkVarNames "bool m_bIsSpeedBursting"
class CCitadel_Ability_FlameDash : public CCitadelBaseAbility
{
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecHitEntities; // 0xaf8	
	// MNetworkEnable
	CCitadelAutoScaledTime m_flDashEndTime; // 0xb10	
	// MNetworkEnable
	bool m_bIsSpeedBursting; // 0xb28	
};

