#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8a0
// Has VTable
class CCitadelHornetStingProjectile : public CCitadelProjectile
{
public:
	int32_t m_iMaxBounces; // 0x870	
	int32_t m_BounceCount; // 0x874	
	bool m_bHitHero; // 0x878	
private:
	[[maybe_unused]] uint8_t __pad0879[0x7]; // 0x879
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecValidBounceTargets; // 0x880	
	float m_flBounceRange; // 0x898	
};

