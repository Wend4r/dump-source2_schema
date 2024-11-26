#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x588
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
class CPointOrient : public C_BaseEntity
{
public:
	CUtlSymbolLarge m_iszSpawnTargetName; // 0x568	
	CHandle< C_BaseEntity > m_hTarget; // 0x570	
	bool m_bActive; // 0x574	
private:
	[[maybe_unused]] uint8_t __pad0575[0x3]; // 0x575
public:
	PointOrientGoalDirectionType_t m_nGoalDirection; // 0x578	
	PointOrientConstraint_t m_nConstraint; // 0x57c	
	float m_flMaxTurnRate; // 0x580	
	GameTime_t m_flLastGameTime; // 0x584	
	
	// Datamap fields:
	// bool InputSetActive; // 0x0
	// CUtlSymbolLarge InputSetTarget; // 0x0
	// void CPointOrientReorientThink; // 0x0
};

