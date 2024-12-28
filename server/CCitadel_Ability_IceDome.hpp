#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb38
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flDomeStartTime"
// MNetworkVarNames "GameTime_t m_flDomeEndTime"
class CCitadel_Ability_IceDome : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0af8[0x38]; // 0xaf8
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flDomeStartTime; // 0xb30	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flDomeEndTime; // 0xb34	
};

