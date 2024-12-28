#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc70
// Has VTable
class CCitadel_Ability_Trappers_Bolo : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0af8[0x38]; // 0xaf8
public:
	CHandle< CBaseEntity > m_hProjectile; // 0xb30	
	CHandle< CBaseEntity > m_hNextTarget; // 0xb34	
	CUtlVector< CHandle< CBaseEntity > > m_hHitTargets; // 0xb38	
	int32_t m_iBounces; // 0xb50	
	bool m_bReturning; // 0xb54	
};

