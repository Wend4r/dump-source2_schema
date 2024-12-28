#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc18
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hActiveProjectile"
class CCitadel_Ability_Perched_Predator : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0af8[0x118]; // 0xaf8
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	CHandle< CBaseEntity > m_hActiveProjectile; // 0xc10	
};

