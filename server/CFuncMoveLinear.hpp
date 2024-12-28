#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8e0
// Has VTable
// 
// MNetworkIncludeByName "m_fFlags"
// MNetworkIncludeByName "m_vecVelocity"
// MNetworkOverride "m_fFlags CBaseEntity"
class CFuncMoveLinear : public CBaseToggle
{
public:
	MoveLinearAuthoredPos_t m_authoredPosition; // 0x838	
	QAngle m_angMoveEntitySpace; // 0x83c	
	Vector m_vecMoveDirParentSpace; // 0x848	
private:
	[[maybe_unused]] uint8_t __pad0854[0x4]; // 0x854
public:
	CUtlSymbolLarge m_soundStart; // 0x858	
	CUtlSymbolLarge m_soundStop; // 0x860	
	CUtlSymbolLarge m_currentSound; // 0x868	
	float m_flBlockDamage; // 0x870	
	float m_flStartPosition; // 0x874	
private:
	[[maybe_unused]] uint8_t __pad0878[0x8]; // 0x878
public:
	CEntityIOOutput m_OnFullyOpen; // 0x880	
	CEntityIOOutput m_OnFullyClosed; // 0x8a8	
	bool m_bCreateMovableNavMesh; // 0x8d0	
	bool m_bCreateNavObstacle; // 0x8d1	
	
	// Datamap fields:
	// float m_flMoveDistance; // 0x7bc
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

