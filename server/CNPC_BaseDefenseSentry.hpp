#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc38
// Has VTable
// 
// MNetworkIncludeByName "m_bTakesDamage"
// MNetworkIncludeByName "m_nTakeDamageFlags"
// MNetworkVarNames "Vector m_vecUnitStatusOffset"
class CNPC_BaseDefenseSentry : public CNPC_SimpleAnimatingAI
{
private:
	[[maybe_unused]] uint8_t __pad0bd8[0x8]; // 0xbd8
public:
	// MNetworkEnable
	Vector m_vecUnitStatusOffset; // 0xbe0	
private:
	[[maybe_unused]] uint8_t __pad0bec[0x28]; // 0xbec
public:
	float m_flAttackCone; // 0xc14	
	float m_flAttackDelay; // 0xc18	
	GameTime_t m_flLastAlertSound; // 0xc1c	
private:
	[[maybe_unused]] uint8_t __pad0c20[0x4]; // 0xc20
public:
	int16_t m_nSentryLevel; // 0xc24	
private:
	[[maybe_unused]] uint8_t __pad0c26[0x2]; // 0xc26
public:
	Vector m_vecForward; // 0xc28	
	
	// Datamap fields:
	// void EnableAttacking; // 0x0
	// void DisableAttacking; // 0x0
};

