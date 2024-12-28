#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x580
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
class CPointOrient : public C_BaseEntity
{
public:
	CUtlSymbolLarge m_iszSpawnTargetName; // 0x560	
	CHandle< C_BaseEntity > m_hTarget; // 0x568	
	bool m_bActive; // 0x56c	
private:
	[[maybe_unused]] uint8_t __pad056d[0x3]; // 0x56d
public:
	PointOrientGoalDirectionType_t m_nGoalDirection; // 0x570	
	PointOrientConstraint_t m_nConstraint; // 0x574	
	float m_flMaxTurnRate; // 0x578	
	GameTime_t m_flLastGameTime; // 0x57c	
	
	// Datamap fields:
	// bool InputSetActive; // 0x0
	// CUtlSymbolLarge InputSetTarget; // 0x0
	// void CPointOrientReorientThink; // 0x0
};

