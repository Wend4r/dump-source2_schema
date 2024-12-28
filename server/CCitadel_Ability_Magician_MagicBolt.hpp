#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xce0
// Has VTable
class CCitadel_Ability_Magician_MagicBolt : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0af8[0x8]; // 0xaf8
public:
	CUtlVector< CHandle< CCitadelProjectile > > m_vecDeployedProjectiles; // 0xb00	
	int32_t m_iCurrentRedirects; // 0xb18	
};

