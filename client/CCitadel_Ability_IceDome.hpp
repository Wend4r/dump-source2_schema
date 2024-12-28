#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcd8
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flDomeStartTime"
// MNetworkVarNames "GameTime_t m_flDomeEndTime"
class CCitadel_Ability_IceDome : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c98[0x38]; // 0xc98
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flDomeStartTime; // 0xcd0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flDomeEndTime; // 0xcd4	
};

