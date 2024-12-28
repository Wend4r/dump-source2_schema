#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc30
// Has VTable
// 
// MNetworkIncludeByName "m_bTakesDamage"
// MNetworkIncludeByName "m_nTakeDamageFlags"
// MNetworkVarNames "Vector m_vecUnitStatusOffset"
class CNPC_BaseDefenseSentry : public CNPC_SimpleAnimatingAI
{
private:
	[[maybe_unused]] uint8_t __pad0bd0[0x8]; // 0xbd0
public:
	// MNetworkEnable
	Vector m_vecUnitStatusOffset; // 0xbd8	
private:
	[[maybe_unused]] uint8_t __pad0be4[0x28]; // 0xbe4
public:
	float m_flAttackCone; // 0xc0c	
	float m_flAttackDelay; // 0xc10	
	GameTime_t m_flLastAlertSound; // 0xc14	
private:
	[[maybe_unused]] uint8_t __pad0c18[0x4]; // 0xc18
public:
	int16_t m_nSentryLevel; // 0xc1c	
private:
	[[maybe_unused]] uint8_t __pad0c1e[0x2]; // 0xc1e
public:
	Vector m_vecForward; // 0xc20	
	
	// Datamap fields:
	// void EnableAttacking; // 0x0
	// void DisableAttacking; // 0x0
};

