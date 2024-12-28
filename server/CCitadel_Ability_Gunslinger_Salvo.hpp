#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb78
// Has VTable
class CCitadel_Ability_Gunslinger_Salvo : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0af8[0x4]; // 0xaf8
public:
	CHandle< CBaseEntity > m_CastTarget; // 0xafc	
	int32_t m_iCurrentShots; // 0xb00	
	int32_t m_iTotalShots; // 0xb04	
};

