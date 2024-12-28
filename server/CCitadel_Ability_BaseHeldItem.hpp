#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb38
// Has VTable
class CCitadel_Ability_BaseHeldItem : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0af8[0x38]; // 0xaf8
public:
	CHandle< CBaseEntity > m_hProjectile; // 0xb30	
	GameTime_t m_tFirstPickupTime; // 0xb34	
};

