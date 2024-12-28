#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb88
// Has VTable
class CCitadel_Ability_Dust_Storm : public CCitadelBaseAbility
{
public:
	CHandle< CCitadel_Ability_Spinning_Blade > m_hSpinningBladeAbility; // 0xaf8	
private:
	[[maybe_unused]] uint8_t __pad0afc[0x4]; // 0xafc
public:
	CUtlVector< CHandle< CBaseEntity > > m_vTargets; // 0xb00	
};

