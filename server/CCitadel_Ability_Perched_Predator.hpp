#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc00
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hActiveProjectile"
class CCitadel_Ability_Perched_Predator : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ad8[0x120]; // 0xad8
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	CHandle< CBaseEntity > m_hActiveProjectile; // 0xbf8	
};
