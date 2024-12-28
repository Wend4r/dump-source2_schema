#pragma once

#include <cstdint>

struct ParticleIndex_t;
struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd18
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flParryStartTime"
// MNetworkVarNames "bool m_bAttackParried"
// MNetworkVarNames "GameTime_t m_flParrySuccessTime"
class CCitadel_Ability_MeleeParry : public C_CitadelBaseAbility
{
public:
	ParticleIndex_t m_nActiveFX; // 0xc98	
	// MNetworkEnable
	GameTime_t m_flParryStartTime; // 0xc9c	
	// MNetworkEnable
	bool m_bAttackParried; // 0xca0	
private:
	[[maybe_unused]] uint8_t __pad0ca1[0x3]; // 0xca1
public:
	// MNetworkEnable
	GameTime_t m_flParrySuccessTime; // 0xca4	
};

