#pragma once

#include <cstdint>

struct CCitadelAutoScaledTime;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc70
// Has VTable
// 
// MNetworkVarNames "CCitadelAutoScaledTime m_flDetonateTime"
// MNetworkVarNames "GameTime_t m_flStartTime"
class CCitadel_Ability_FireBomb : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0af8[0x158]; // 0xaf8
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	CCitadelAutoScaledTime m_flDetonateTime; // 0xc50	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flStartTime; // 0xc68	
};

