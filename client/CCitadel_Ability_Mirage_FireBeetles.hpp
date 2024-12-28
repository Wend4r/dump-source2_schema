#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdd0
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flCastStartTime"
class CCitadel_Ability_Mirage_FireBeetles : public C_CitadelBaseAbility
{
public:
	Vector m_vLaunchPosition; // 0xc98	
	QAngle m_qLaunchAngle; // 0xca4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flCastStartTime; // 0xcb0	
};

