#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd08
// Has VTable
class CCitadel_Ability_Magician_BigBolt : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0af8[0x200]; // 0xaf8
public:
	GameTime_t m_flNextShootTime; // 0xcf8	
	int32_t m_iBoltsFired; // 0xcfc	
	int32_t m_iRemainingBolts; // 0xd00	
	bool m_bPreppingShoot; // 0xd04	
};

