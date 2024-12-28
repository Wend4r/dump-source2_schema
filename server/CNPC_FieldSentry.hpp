#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc18
// Has VTable
// 
// MNetworkVarNames "float m_flAimPitch"
// MNetworkVarNames "float m_flAttackRange"
class CNPC_FieldSentry : public CNPC_SimpleAnimatingAI
{
private:
	[[maybe_unused]] uint8_t __pad0bd0[0xc]; // 0xbd0
public:
	// MNetworkEnable
	float m_flAimPitch; // 0xbdc	
	GameTime_t m_flNextAttackTime; // 0xbe0	
	float m_flAttackCone; // 0xbe4	
	float m_flAttackDelay; // 0xbe8	
	GameTime_t m_flLastAlertSound; // 0xbec	
	float m_flTrackingSpeed; // 0xbf0	
	float m_flDeployTime; // 0xbf4	
private:
	[[maybe_unused]] uint8_t __pad0bf8[0xa]; // 0xbf8
public:
	bool m_bHadEnemy; // 0xc02	
	bool m_bLockedOn; // 0xc03	
private:
	[[maybe_unused]] uint8_t __pad0c04[0x10]; // 0xc04
public:
	// MNetworkEnable
	float m_flAttackRange; // 0xc14	
	
	// Datamap fields:
	// float m_flLifeTime; // 0xbfc
	// void m_flSpawnTime; // 0xbf8
};

