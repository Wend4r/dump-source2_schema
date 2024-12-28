#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xca0
// Has VTable
class CCitadel_Ability_HornetSting : public CCitadelBaseAbility
{
public:
	int32_t m_BounceCount; // 0xaf8	
	bool m_bHitHero; // 0xafc	
private:
	[[maybe_unused]] uint8_t __pad0afd[0x3]; // 0xafd
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecValidBounceTargets; // 0xb00	
};

