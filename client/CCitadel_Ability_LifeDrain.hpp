#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xca0
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_tDrainLifeStopTime"
class CCitadel_Ability_LifeDrain : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_tDrainLifeStopTime; // 0xc98	
};

