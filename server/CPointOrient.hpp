#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x500
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
class CPointOrient : public CBaseEntity
{
public:
	CUtlSymbolLarge m_iszSpawnTargetName; // 0x4e0	
	CHandle< CBaseEntity > m_hTarget; // 0x4e8	
	bool m_bActive; // 0x4ec	
private:
	[[maybe_unused]] uint8_t __pad04ed[0x3]; // 0x4ed
public:
	PointOrientGoalDirectionType_t m_nGoalDirection; // 0x4f0	
	PointOrientConstraint_t m_nConstraint; // 0x4f4	
	float m_flMaxTurnRate; // 0x4f8	
	GameTime_t m_flLastGameTime; // 0x4fc	
	
	// Datamap fields:
	// bool InputSetActive; // 0x0
	// CUtlSymbolLarge InputSetTarget; // 0x0
	// void CPointOrientReorientThink; // 0x0
};

