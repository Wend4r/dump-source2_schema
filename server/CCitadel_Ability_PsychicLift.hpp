#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb88
// Has VTable
class CCitadel_Ability_PsychicLift : public CCitadelBaseAbility
{
public:
	int32_t m_nChainsOnHitRemaining; // 0xaf8	
private:
	[[maybe_unused]] uint8_t __pad0afc[0x4]; // 0xafc
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecHitTargets; // 0xb00	
};

