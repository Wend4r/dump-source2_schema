#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc60
// Has VTable
class CCitadel_Ability_Ghost_BloodShards : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0af8[0x150]; // 0xaf8
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecDamagedTargets; // 0xc48	
};

