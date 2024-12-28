#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf98
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flScopeStartTime"
class CCitadel_Ability_Hornet_Snipe : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c98[0x2b4]; // 0xc98
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flScopeStartTime; // 0xf4c	
};

