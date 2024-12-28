#pragma once

#include <cstdint>

struct ParticleIndex_t;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xcd0
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flPostCastHoldEndTime"
class CCitadel_Ability_HealthSwap : public CCitadelBaseAbility
{
public:
	ParticleIndex_t m_nFXIndex; // 0xaf8	
	float m_flHealthToCaster; // 0xafc	
	float m_flTargetHealthLost; // 0xb00	
private:
	[[maybe_unused]] uint8_t __pad0b04[0x18c]; // 0xb04
public:
	// MNetworkEnable
	GameTime_t m_flPostCastHoldEndTime; // 0xc90	
};

