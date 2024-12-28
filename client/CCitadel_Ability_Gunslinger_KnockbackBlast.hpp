#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe48
// Has VTable
class CCitadel_Ability_Gunslinger_KnockbackBlast : public C_CitadelBaseAbility
{
public:
	Vector m_vecKnockbackDirection; // 0xc98	
private:
	[[maybe_unused]] uint8_t __pad0ca4[0x4]; // 0xca4
public:
	CUtlVector< CHandle< C_BaseEntity > > m_vecKnockbackedUnits; // 0xca8	
};

