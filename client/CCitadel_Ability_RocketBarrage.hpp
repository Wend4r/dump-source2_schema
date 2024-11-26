#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xec0
// Has VTable
class CCitadel_Ability_RocketBarrage : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ca0[0x1f8]; // 0xca0
public:
	float m_flCurrentTimeScale; // 0xe98	
	Vector m_vecAimPos; // 0xe9c	
	Vector m_vecAimVel; // 0xea8	
	GameTime_t m_flLastUpdateTime; // 0xeb4	
};

