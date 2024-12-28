#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xeb8
// Has VTable
class CCitadel_Ability_RocketBarrage : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c98[0x1f8]; // 0xc98
public:
	float m_flCurrentTimeScale; // 0xe90	
	Vector m_vecAimPos; // 0xe94	
	Vector m_vecAimVel; // 0xea0	
	GameTime_t m_flLastUpdateTime; // 0xeac	
};

