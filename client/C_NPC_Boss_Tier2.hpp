#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1498
// Has VTable
// 
// MNetworkVarNames "int m_iLane"
// MNetworkVarNames "GameTime_t m_flFadeOutStart"
// MNetworkVarNames "GameTime_t m_flFadeOutEnd"
// MNetworkVarNames "EHANDLE m_hTargetedEnemy"
// MNetworkVarNames "int m_nElectricBeamCasts"
class C_NPC_Boss_Tier2 : public C_AI_CitadelNPC
{
private:
	[[maybe_unused]] uint8_t __pad1460[0x8]; // 0x1460
public:
	// MNetworkEnable
	int32_t m_iLane; // 0x1468	
	// MNetworkEnable
	GameTime_t m_flFadeOutStart; // 0x146c	
	// MNetworkEnable
	GameTime_t m_flFadeOutEnd; // 0x1470	
	// MNetworkEnable
	// MNetworkChangeCallback "OnBossTargetedEnemyChanged"
	CHandle< C_BaseEntity > m_hTargetedEnemy; // 0x1474	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	// MNetworkChangeCallback "OnLookTargetChanged"
	Vector m_vecElectricBeamLookTarget; // 0x1478	
private:
	[[maybe_unused]] uint8_t __pad1484[0xc]; // 0x1484
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnElectricBeamCastsChanged"
	int32_t m_nElectricBeamCasts; // 0x1490	
};

