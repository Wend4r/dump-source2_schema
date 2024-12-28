#pragma once

#include <cstdint>

struct ParticleIndex_t;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb78
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flParryStartTime"
// MNetworkVarNames "bool m_bAttackParried"
// MNetworkVarNames "GameTime_t m_flParrySuccessTime"
class CCitadel_Ability_MeleeParry : public CCitadelBaseAbility
{
public:
	ParticleIndex_t m_nActiveFX; // 0xaf8	
	// MNetworkEnable
	GameTime_t m_flParryStartTime; // 0xafc	
	// MNetworkEnable
	bool m_bAttackParried; // 0xb00	
private:
	[[maybe_unused]] uint8_t __pad0b01[0x3]; // 0xb01
public:
	// MNetworkEnable
	GameTime_t m_flParrySuccessTime; // 0xb04	
};

