#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd18
// Has VTable
class CCitadel_Ability_RocketBarrage : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0af8[0x1f8]; // 0xaf8
public:
	float m_flCurrentTimeScale; // 0xcf0	
	Vector m_vecAimPos; // 0xcf4	
	Vector m_vecAimVel; // 0xd00	
	GameTime_t m_flLastUpdateTime; // 0xd0c	
};

