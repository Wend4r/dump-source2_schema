#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xbd0
// Has VTable
class CCitadel_Ability_GoldenIdol : public CCitadel_Ability_BaseHeldItem
{
public:
	int32_t m_nGold; // 0xb38	
	float m_flAmberTime; // 0xb3c	
	float m_flSapphireTime; // 0xb40	
	GameTime_t m_tAbilityCreateTime; // 0xb44	
	GameTime_t m_tLastDamageTime; // 0xb48	
private:
	[[maybe_unused]] uint8_t __pad0b4c[0x4]; // 0xb4c
public:
	Vector m_vHomePosition; // 0xb50	
};

