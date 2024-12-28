#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc30
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flCastStartTime"
class CCitadel_Ability_Mirage_FireBeetles : public CCitadelBaseAbility
{
public:
	Vector m_vLaunchPosition; // 0xaf8	
	QAngle m_qLaunchAngle; // 0xb04	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flCastStartTime; // 0xb10	
};

