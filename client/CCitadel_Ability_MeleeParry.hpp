#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd20
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flParryStartTime"
// MNetworkVarNames "bool m_bAttackParried"
// MNetworkVarNames "GameTime_t m_flParrySuccessTime"
class CCitadel_Ability_MeleeParry : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	GameTime_t m_flParryStartTime; // 0xca0	
	// MNetworkEnable
	bool m_bAttackParried; // 0xca4	
private:
	[[maybe_unused]] uint8_t __pad0ca5[0x3]; // 0xca5
public:
	// MNetworkEnable
	GameTime_t m_flParrySuccessTime; // 0xca8	
};

