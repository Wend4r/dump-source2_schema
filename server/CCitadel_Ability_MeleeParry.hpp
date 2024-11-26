#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb80
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flParryStartTime"
// MNetworkVarNames "bool m_bAttackParried"
// MNetworkVarNames "GameTime_t m_flParrySuccessTime"
class CCitadel_Ability_MeleeParry : public CCitadelBaseAbility
{
public:
	// MNetworkEnable
	GameTime_t m_flParryStartTime; // 0xb00	
	// MNetworkEnable
	bool m_bAttackParried; // 0xb04	
private:
	[[maybe_unused]] uint8_t __pad0b05[0x3]; // 0xb05
public:
	// MNetworkEnable
	GameTime_t m_flParrySuccessTime; // 0xb08	
};

