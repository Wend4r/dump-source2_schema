#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdc0
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flExplodeEndTime"
// MNetworkVarNames "GameTime_t m_flBuffEndTime"
class CCitadel_Ability_InfinitySlash : public CCitadelBaseYamatoAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ca0[0x118]; // 0xca0
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flExplodeEndTime; // 0xdb8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flBuffEndTime; // 0xdbc	
};

