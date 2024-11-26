#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd20
// Has VTable
class CCitadel_Ability_RocketBarrage : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0b00[0x1f8]; // 0xb00
public:
	float m_flCurrentTimeScale; // 0xcf8	
	Vector m_vecAimPos; // 0xcfc	
	Vector m_vecAimVel; // 0xd08	
	GameTime_t m_flLastUpdateTime; // 0xd14	
};

