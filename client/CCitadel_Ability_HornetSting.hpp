#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe40
// Has VTable
class CCitadel_Ability_HornetSting : public C_CitadelBaseAbility
{
public:
	int32_t m_BounceCount; // 0xc98	
	bool m_bHitHero; // 0xc9c	
private:
	[[maybe_unused]] uint8_t __pad0c9d[0x3]; // 0xc9d
public:
	CUtlVector< CHandle< C_BaseEntity > > m_vecValidBounceTargets; // 0xca0	
};

