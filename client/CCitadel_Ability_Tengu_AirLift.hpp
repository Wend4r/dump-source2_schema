#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xeb8
// Has VTable
// 
// MNetworkVarNames "bool m_bFlying"
// MNetworkVarNames "bool m_bFlyingStarted"
// MNetworkVarNames "bool m_bIsGrabbing"
// MNetworkVarNames "bool m_bIsHoldingBomb"
// MNetworkVarNames "float m_flCurrentSpeed"
class CCitadel_Ability_Tengu_AirLift : public C_CitadelBaseAbility
{
public:
	ParticleIndex_t m_nHoldBombEffect; // 0xca0	
private:
	[[maybe_unused]] uint8_t __pad0ca4[0x1fc]; // 0xca4
public:
	// MNetworkEnable
	bool m_bFlying; // 0xea0	
	// MNetworkEnable
	bool m_bFlyingStarted; // 0xea1	
	// MNetworkEnable
	bool m_bIsGrabbing; // 0xea2	
	// MNetworkEnable
	bool m_bIsHoldingBomb; // 0xea3	
	// MNetworkEnable
	float m_flCurrentSpeed; // 0xea4	
};

