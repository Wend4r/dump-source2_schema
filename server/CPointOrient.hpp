#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x508
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
class CPointOrient : public CBaseEntity
{
public:
	CUtlSymbolLarge m_iszSpawnTargetName; // 0x4e8	
	CHandle< CBaseEntity > m_hTarget; // 0x4f0	
	bool m_bActive; // 0x4f4	
private:
	[[maybe_unused]] uint8_t __pad04f5[0x3]; // 0x4f5
public:
	PointOrientGoalDirectionType_t m_nGoalDirection; // 0x4f8	
	PointOrientConstraint_t m_nConstraint; // 0x4fc	
	float m_flMaxTurnRate; // 0x500	
	GameTime_t m_flLastGameTime; // 0x504	
	
	// Datamap fields:
	// bool InputSetActive; // 0x0
	// CUtlSymbolLarge InputSetTarget; // 0x0
	// void CPointOrientReorientThink; // 0x0
};

