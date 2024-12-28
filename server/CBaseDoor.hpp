#pragma once

#include <cstdint>

struct locksound_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa40
// Has VTable
// 
// MNetworkVarNames "bool m_bIsUsable"
class CBaseDoor : public CBaseToggle
{
private:
	[[maybe_unused]] uint8_t __pad0838[0x10]; // 0x838
public:
	QAngle m_angMoveEntitySpace; // 0x848	
	Vector m_vecMoveDirParentSpace; // 0x854	
	locksound_t m_ls; // 0x860	
	bool m_bForceClosed; // 0x880	
	bool m_bDoorGroup; // 0x881	
	bool m_bLocked; // 0x882	
	bool m_bIgnoreDebris; // 0x883	
	bool m_bNoNPCs; // 0x884	
private:
	[[maybe_unused]] uint8_t __pad0885[0x3]; // 0x885
public:
	FuncDoorSpawnPos_t m_eSpawnPosition; // 0x888	
	float m_flBlockDamage; // 0x88c	
	CUtlSymbolLarge m_NoiseMoving; // 0x890	
	CUtlSymbolLarge m_NoiseArrived; // 0x898	
	CUtlSymbolLarge m_NoiseMovingClosed; // 0x8a0	
	CUtlSymbolLarge m_NoiseArrivedClosed; // 0x8a8	
	CUtlSymbolLarge m_ChainTarget; // 0x8b0	
	CEntityIOOutput m_OnBlockedClosing; // 0x8b8	
	CEntityIOOutput m_OnBlockedOpening; // 0x8e0	
	CEntityIOOutput m_OnUnblockedClosing; // 0x908	
	CEntityIOOutput m_OnUnblockedOpening; // 0x930	
	CEntityIOOutput m_OnFullyClosed; // 0x958	
	CEntityIOOutput m_OnFullyOpen; // 0x980	
	CEntityIOOutput m_OnClose; // 0x9a8	
	CEntityIOOutput m_OnOpen; // 0x9d0	
	CEntityIOOutput m_OnLockedUse; // 0x9f8	
	bool m_bLoopMoveSound; // 0xa20	
private:
	[[maybe_unused]] uint8_t __pad0a21[0x17]; // 0xa21
public:
	bool m_bCreateNavObstacle; // 0xa38	
	bool m_isChaining; // 0xa39	
	// MNetworkEnable
	bool m_bIsUsable; // 0xa3a	
	
	// Datamap fields:
	// void m_nMovingSoundGUID; // 0xa24
	//  m_ls.sLockedSound; // 0x868
	//  m_ls.sUnlockedSound; // 0x870
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

