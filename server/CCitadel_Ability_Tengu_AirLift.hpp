#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd20
// Has VTable
// 
// MNetworkVarNames "bool m_bFlying"
// MNetworkVarNames "bool m_bFlyingStarted"
// MNetworkVarNames "bool m_bIsGrabbing"
// MNetworkVarNames "bool m_bIsHoldingBomb"
// MNetworkVarNames "float m_flCurrentSpeed"
class CCitadel_Ability_Tengu_AirLift : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0b00[0x1c]; // 0xb00
public:
	ParticleIndex_t m_nHoldBombEffect; // 0xb1c	
private:
	[[maybe_unused]] uint8_t __pad0b20[0x1f8]; // 0xb20
public:
	// MNetworkEnable
	bool m_bFlying; // 0xd18	
	// MNetworkEnable
	bool m_bFlyingStarted; // 0xd19	
	// MNetworkEnable
	bool m_bIsGrabbing; // 0xd1a	
	// MNetworkEnable
	bool m_bIsHoldingBomb; // 0xd1b	
	// MNetworkEnable
	float m_flCurrentSpeed; // 0xd1c	
};

