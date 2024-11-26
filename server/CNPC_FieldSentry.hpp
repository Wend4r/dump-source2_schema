#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc20
// Has VTable
// 
// MNetworkVarNames "float m_flAimPitch"
// MNetworkVarNames "float m_flAttackRange"
class CNPC_FieldSentry : public CNPC_SimpleAnimatingAI
{
private:
	[[maybe_unused]] uint8_t __pad0bd8[0xc]; // 0xbd8
public:
	// MNetworkEnable
	float m_flAimPitch; // 0xbe4	
	GameTime_t m_flNextAttackTime; // 0xbe8	
	float m_flAttackCone; // 0xbec	
	float m_flAttackDelay; // 0xbf0	
	GameTime_t m_flLastAlertSound; // 0xbf4	
	float m_flTrackingSpeed; // 0xbf8	
	float m_flDeployTime; // 0xbfc	
private:
	[[maybe_unused]] uint8_t __pad0c00[0xa]; // 0xc00
public:
	bool m_bHadEnemy; // 0xc0a	
	bool m_bLockedOn; // 0xc0b	
private:
	[[maybe_unused]] uint8_t __pad0c0c[0x10]; // 0xc0c
public:
	// MNetworkEnable
	float m_flAttackRange; // 0xc1c	
	
	// Datamap fields:
	// float m_flLifeTime; // 0xc04
	// void m_flSpawnTime; // 0xc00
};

