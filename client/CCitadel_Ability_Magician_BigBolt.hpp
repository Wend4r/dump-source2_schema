#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xea8
// Has VTable
class CCitadel_Ability_Magician_BigBolt : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c98[0x200]; // 0xc98
public:
	GameTime_t m_flNextShootTime; // 0xe98	
	int32_t m_iBoltsFired; // 0xe9c	
	int32_t m_iRemainingBolts; // 0xea0	
	bool m_bPreppingShoot; // 0xea4	
};

