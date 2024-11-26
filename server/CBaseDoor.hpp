#pragma once

#include <cstdint>

struct locksound_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa48
// Has VTable
// 
// MNetworkVarNames "bool m_bIsUsable"
class CBaseDoor : public CBaseToggle
{
private:
	[[maybe_unused]] uint8_t __pad0840[0x10]; // 0x840
public:
	QAngle m_angMoveEntitySpace; // 0x850	
	Vector m_vecMoveDirParentSpace; // 0x85c	
	locksound_t m_ls; // 0x868	
	bool m_bForceClosed; // 0x888	
	bool m_bDoorGroup; // 0x889	
	bool m_bLocked; // 0x88a	
	bool m_bIgnoreDebris; // 0x88b	
	bool m_bNoNPCs; // 0x88c	
private:
	[[maybe_unused]] uint8_t __pad088d[0x3]; // 0x88d
public:
	FuncDoorSpawnPos_t m_eSpawnPosition; // 0x890	
	float m_flBlockDamage; // 0x894	
	CUtlSymbolLarge m_NoiseMoving; // 0x898	
	CUtlSymbolLarge m_NoiseArrived; // 0x8a0	
	CUtlSymbolLarge m_NoiseMovingClosed; // 0x8a8	
	CUtlSymbolLarge m_NoiseArrivedClosed; // 0x8b0	
	CUtlSymbolLarge m_ChainTarget; // 0x8b8	
	CEntityIOOutput m_OnBlockedClosing; // 0x8c0	
	CEntityIOOutput m_OnBlockedOpening; // 0x8e8	
	CEntityIOOutput m_OnUnblockedClosing; // 0x910	
	CEntityIOOutput m_OnUnblockedOpening; // 0x938	
	CEntityIOOutput m_OnFullyClosed; // 0x960	
	CEntityIOOutput m_OnFullyOpen; // 0x988	
	CEntityIOOutput m_OnClose; // 0x9b0	
	CEntityIOOutput m_OnOpen; // 0x9d8	
	CEntityIOOutput m_OnLockedUse; // 0xa00	
	bool m_bLoopMoveSound; // 0xa28	
private:
	[[maybe_unused]] uint8_t __pad0a29[0x17]; // 0xa29
public:
	bool m_bCreateNavObstacle; // 0xa40	
	bool m_isChaining; // 0xa41	
	// MNetworkEnable
	bool m_bIsUsable; // 0xa42	
	
	// Datamap fields:
	// void m_nMovingSoundGUID; // 0xa2c
	//  m_ls.sLockedSound; // 0x870
	//  m_ls.sUnlockedSound; // 0x878
	// void InputOpen; // 0x0
	// void InputClose; // 0x0
	// void InputToggle; // 0x0
	// void InputLock; // 0x0
	// void InputUnlock; // 0x0
	// float InputSetSpeed; // 0x0
	// float InputSetToggleState; // 0x0
	// bool InputSetNoNPCs; // 0x0
	// void CBaseDoorDoorTouch; // 0x0
	// void CBaseDoorDoorGoUp; // 0x0
	// void CBaseDoorDoorGoDown; // 0x0
	// void CBaseDoorDoorHitTop; // 0x0
	// void CBaseDoorDoorHitBottom; // 0x0
	// void CBaseDoorMovingSoundThink; // 0x0
	// void CBaseDoorCloseAreaPortalsThink; // 0x0
};

