#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd18
// Has VTable
class CCitadel_Ability_Gunslinger_Salvo : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c98[0x4]; // 0xc98
public:
	CHandle< C_BaseEntity > m_CastTarget; // 0xc9c	
	int32_t m_iCurrentShots; // 0xca0	
	int32_t m_iTotalShots; // 0xca4	
};

