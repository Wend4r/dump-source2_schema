#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc40
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
class CAbility_Fathom_ReefdwellerHarpoon : public CCitadelBaseAbility
{
public:
	bool m_bHitTarget; // 0xaf8	
private:
	[[maybe_unused]] uint8_t __pad0af9[0x3]; // 0xaf9
public:
	Vector m_vPrevPos; // 0xafc	
	// MNetworkEnable
	bool m_bBulletFlying; // 0xb08	
	// MNetworkEnable
	bool m_bHasLatchedOnce; // 0xb09	
	// MNetworkEnable
	bool m_bLatched; // 0xb0a	
private:
	[[maybe_unused]] uint8_t __pad0b0b[0x1]; // 0xb0b
public:
	// MNetworkEnable
	Vector m_vHarpoonTarget; // 0xb0c	
	// MNetworkEnable
	float m_flLatchedYaw; // 0xb18	
	// MNetworkEnable
	GameTime_t m_flCloseEnoughStartTime; // 0xb1c	
	// MNetworkEnable
	GameTime_t m_flStuckStartTime; // 0xb20	
	// MNetworkEnable
	GameTime_t m_flReelStartTime; // 0xb24	
};

