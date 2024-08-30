#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb58
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flParryStartTime"
// MNetworkVarNames "bool m_bAttackParried"
// MNetworkVarNames "GameTime_t m_flParrySuccessTime"
class CCitadel_Ability_MeleeParry : public CCitadelBaseAbility
{
public:
	// MNetworkEnable
	GameTime_t m_flParryStartTime; // 0xad8	
	// MNetworkEnable
	bool m_bAttackParried; // 0xadc	
private:
	[[maybe_unused]] uint8_t __pad0add[0x3]; // 0xadd
public:
	// MNetworkEnable
	GameTime_t m_flParrySuccessTime; // 0xae0	
};

