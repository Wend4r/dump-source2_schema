#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd10
// Has VTable
class CCitadel_Ability_Spinning_Blade : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0af8[0x1f8]; // 0xaf8
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecOutgoingHits; // 0xcf0	
	CHandle< CCitadelProjectile > m_hActiveProjectile; // 0xd08	
};

