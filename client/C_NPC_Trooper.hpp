#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x14a8
// Has VTable
// 
// MNetworkVarNames "int m_iLane"
// MNetworkVarNames "EHANDLE m_hTargetedEnemy"
// MNetworkVarNames "float m_flHealingChargeParticlePct"
class C_NPC_Trooper : public C_AI_CitadelNPC
{
public:
	// MNetworkEnable
	int32_t m_iLane; // 0x1460	
	// MNetworkEnable
	// MNetworkChangeCallback "OnTargetedEnemyChanged"
	CHandle< C_BaseEntity > m_hTargetedEnemy; // 0x1464	
	// MNetworkEnable
	// MNetworkChangeCallback "OnHealingChargeChanged"
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	float m_flHealingChargeParticlePct; // 0x1468	
};

