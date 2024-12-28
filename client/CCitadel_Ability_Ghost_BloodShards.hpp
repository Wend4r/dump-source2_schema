#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe00
// Has VTable
class CCitadel_Ability_Ghost_BloodShards : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c98[0x150]; // 0xc98
public:
	CUtlVector< CHandle< C_BaseEntity > > m_vecDamagedTargets; // 0xde8	
};

