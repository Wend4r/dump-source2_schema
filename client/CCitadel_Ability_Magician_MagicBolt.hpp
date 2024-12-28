#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe80
// Has VTable
class CCitadel_Ability_Magician_MagicBolt : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c98[0x8]; // 0xc98
public:
	CUtlVector< CHandle< C_CitadelProjectile > > m_vecDeployedProjectiles; // 0xca0	
	int32_t m_iCurrentRedirects; // 0xcb8	
};

