#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1408
// Has VTable
// 
// MNetworkVarNames "int m_iLane"
// MNetworkVarNames "EHANDLE m_hTargetedEnemy"
// MNetworkVarNames "float m_flHealingChargeParticlePct"
// MNetworkVarNames "GameTime_t m_flVulnerableTime"
class C_NPC_Trooper : public C_AI_CitadelNPC
{
public:
	// MNetworkEnable
	int32_t m_iLane; // 0x13c0	
	// MNetworkEnable
	// MNetworkChangeCallback "OnTargetedEnemyChanged"
	CHandle< C_BaseEntity > m_hTargetedEnemy; // 0x13c4	
	// MNetworkEnable
	// MNetworkChangeCallback "OnHealingChargeChanged"
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	float m_flHealingChargeParticlePct; // 0x13c8	
	// MNetworkEnable
	GameTime_t m_flVulnerableTime; // 0x13cc	
};
