#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb48
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flDashCastStartTime"
// MNetworkVarNames "Vector m_vDashCastDir"
class CCitadelBaseDashCastAbility : public CCitadelBaseAbility
{
public:
	CHandle< CCitadelBaseAbility > m_hAbilityToTrigger; // 0xaf8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flDashCastStartTime; // 0xafc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vDashCastDir; // 0xb00	
};

