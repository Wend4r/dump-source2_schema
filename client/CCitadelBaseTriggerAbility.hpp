#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xca8
// Has VTable
// 
// MNetworkVarNames "CHandle< CCitadelBaseAbility> m_hAbilityToTrigger"
// MNetworkVarNames "GameTime_t m_SwappedToTime"
class CCitadelBaseTriggerAbility : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	CHandle< C_CitadelBaseAbility > m_hAbilityToTrigger; // 0xc98	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_SwappedToTime; // 0xc9c	
};

