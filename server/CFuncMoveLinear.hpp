#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8e8
// Has VTable
// 
// MNetworkIncludeByName "m_fFlags"
// MNetworkIncludeByName "m_vecVelocity"
// MNetworkOverride "m_fFlags CBaseEntity"
class CFuncMoveLinear : public CBaseToggle
{
public:
	MoveLinearAuthoredPos_t m_authoredPosition; // 0x840	
	QAngle m_angMoveEntitySpace; // 0x844	
	Vector m_vecMoveDirParentSpace; // 0x850	
private:
	[[maybe_unused]] uint8_t __pad085c[0x4]; // 0x85c
public:
	CUtlSymbolLarge m_soundStart; // 0x860	
	CUtlSymbolLarge m_soundStop; // 0x868	
	CUtlSymbolLarge m_currentSound; // 0x870	
	float m_flBlockDamage; // 0x878	
	float m_flStartPosition; // 0x87c	
private:
	[[maybe_unused]] uint8_t __pad0880[0x8]; // 0x880
public:
	CEntityIOOutput m_OnFullyOpen; // 0x888	
	CEntityIOOutput m_OnFullyClosed; // 0x8b0	
	bool m_bCreateMovableNavMesh; // 0x8d8	
	bool m_bCreateNavObstacle; // 0x8d9	
	
	// Datamap fields:
	// float m_flMoveDistance; // 0x7c4
	// bool movewithoutpushingblockers; // 0x7fffffff
	// void CFuncMoveLinearNavObstacleThink; // 0x0
	// void CFuncMoveLinearNavMovableThink; // 0x0
	// void InputOpen; // 0x0
	// void InputClose; // 0x0
	// float InputSetPosition; // 0x0
	// float InputSetSpeed; // 0x0
	// CUtlSymbolLarge InputTeleportToTarget; // 0x0
	// float InputResetPosition; // 0x0
	// float InputSetMoveDistanceFromStart; // 0x0
	// float InputSetMoveDistanceFromEnd; // 0x0
	// void CFuncMoveLinearStopMoveSound; // 0x0
};

