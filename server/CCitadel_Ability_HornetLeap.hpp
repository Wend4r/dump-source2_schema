#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd40
// Has VTable
// 
// MNetworkVarNames "bool m_bLeaping"
// MNetworkVarNames "GameTime_t m_flLeapStartTime"
class CCitadel_Ability_HornetLeap : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0af8[0x2]; // 0xaf8
public:
	// MNetworkEnable
	bool m_bLeaping; // 0xafa	
private:
	[[maybe_unused]] uint8_t __pad0afb[0x1]; // 0xafb
public:
	// MNetworkEnable
	GameTime_t m_flLeapStartTime; // 0xafc	
	ParticleIndex_t m_nFXIndex; // 0xb00	
private:
	[[maybe_unused]] uint8_t __pad0b04[0x234]; // 0xb04
public:
	ParticleIndex_t m_TrailFX; // 0xd38	
};

