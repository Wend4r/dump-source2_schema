#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xca8
// Has VTable
class CCitadel_Ability_Gunslinger_KnockbackBlast : public CCitadelBaseAbility
{
public:
	Vector m_vecKnockbackDirection; // 0xaf8	
private:
	[[maybe_unused]] uint8_t __pad0b04[0x4]; // 0xb04
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecKnockbackedUnits; // 0xb08	
};

