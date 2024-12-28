#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xed8
// Has VTable
// 
// MNetworkVarNames "bool m_bLeaping"
// MNetworkVarNames "GameTime_t m_flLeapStartTime"
class CCitadel_Ability_HornetLeap : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c98[0x2]; // 0xc98
public:
	// MNetworkEnable
	bool m_bLeaping; // 0xc9a	
private:
	[[maybe_unused]] uint8_t __pad0c9b[0x1]; // 0xc9b
public:
	// MNetworkEnable
	GameTime_t m_flLeapStartTime; // 0xc9c	
	ParticleIndex_t m_nFXIndex; // 0xca0	
};

