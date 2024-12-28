#pragma once

#include <cstdint>

struct ParticleIndex_t;
struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe70
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flPostCastHoldEndTime"
class CCitadel_Ability_HealthSwap : public C_CitadelBaseAbility
{
public:
	ParticleIndex_t m_nFXIndex; // 0xc98	
	float m_flHealthToCaster; // 0xc9c	
	float m_flTargetHealthLost; // 0xca0	
private:
	[[maybe_unused]] uint8_t __pad0ca4[0x18c]; // 0xca4
public:
	// MNetworkEnable
	GameTime_t m_flPostCastHoldEndTime; // 0xe30	
};

