#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xde0
// Has VTable
// 
// MNetworkVarNames "bool m_bBulletFlying"
// MNetworkVarNames "bool m_bHasLatchedOnce"
// MNetworkVarNames "bool m_bLatched"
// MNetworkVarNames "Vector m_vHarpoonTarget"
// MNetworkVarNames "float m_flLatchedYaw"
// MNetworkVarNames "GameTime_t m_flCloseEnoughStartTime"
// MNetworkVarNames "GameTime_t m_flStuckStartTime"
// MNetworkVarNames "GameTime_t m_flReelStartTime"
class CAbility_Fathom_ReefdwellerHarpoon : public C_CitadelBaseAbility
{
public:
	bool m_bHitTarget; // 0xc98	
private:
	[[maybe_unused]] uint8_t __pad0c99[0x3]; // 0xc99
public:
	Vector m_vPrevPos; // 0xc9c	
	// MNetworkEnable
	bool m_bBulletFlying; // 0xca8	
	// MNetworkEnable
	bool m_bHasLatchedOnce; // 0xca9	
	// MNetworkEnable
	bool m_bLatched; // 0xcaa	
private:
	[[maybe_unused]] uint8_t __pad0cab[0x1]; // 0xcab
public:
	// MNetworkEnable
	Vector m_vHarpoonTarget; // 0xcac	
	// MNetworkEnable
	float m_flLatchedYaw; // 0xcb8	
	// MNetworkEnable
	GameTime_t m_flCloseEnoughStartTime; // 0xcbc	
	// MNetworkEnable
	GameTime_t m_flStuckStartTime; // 0xcc0	
	// MNetworkEnable
	GameTime_t m_flReelStartTime; // 0xcc4	
};

