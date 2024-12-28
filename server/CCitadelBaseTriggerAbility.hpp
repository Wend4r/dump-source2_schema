#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb08
// Has VTable
// 
// MNetworkVarNames "CHandle< CCitadelBaseAbility> m_hAbilityToTrigger"
// MNetworkVarNames "GameTime_t m_SwappedToTime"
class CCitadelBaseTriggerAbility : public CCitadelBaseAbility
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	CHandle< CCitadelBaseAbility > m_hAbilityToTrigger; // 0xaf8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_SwappedToTime; // 0xafc	
};

