#pragma once

#include <cstdint>

struct locksound_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xf80
// Has VTable
// Is Abstract
// 
// MNetworkExcludeByName "m_flAnimTime"
// MNetworkExcludeByName "m_flexWeight"
// MNetworkExcludeByName "m_blinktoggle"
// MNetworkExcludeByUserGroup "m_flPoseParameter"
// MNetworkExcludeByName "m_animationController.m_flPlaybackRate"
// MNetworkExcludeByUserGroup "overlay_vars"
// MNetworkIncludeByName "m_spawnflags"
// MNetworkVarNames "DoorState_t m_eDoorState"
// MNetworkVarNames "bool m_bLocked"
// MNetworkVarNames "bool m_bNoNPCs"
// MNetworkVarNames "Vector m_closedPosition"
// MNetworkVarNames "QAngle m_closedAngles"
// MNetworkVarNames "CHandle< CBasePropDoor> m_hMaster"
class CBasePropDoor : public CDynamicProp
{
private:
	[[maybe_unused]] uint8_t __pad0cf0[0x10]; // 0xcf0
public:
	float m_flAutoReturnDelay; // 0xd00	
private:
	[[maybe_unused]] uint8_t __pad0d04[0x4]; // 0xd04
public:
	CUtlVector< CHandle< CBasePropDoor > > m_hDoorList; // 0xd08	
	int32_t m_nHardwareType; // 0xd20	
	bool m_bNeedsHardware; // 0xd24	
private:
	[[maybe_unused]] uint8_t __pad0d25[0x3]; // 0xd25
public:
	// MNetworkEnable
	DoorState_t m_eDoorState; // 0xd28	
	// MNetworkEnable
	bool m_bLocked; // 0xd2c	
	// MNetworkEnable
	bool m_bNoNPCs; // 0xd2d	
private:
	[[maybe_unused]] uint8_t __pad0d2e[0x2]; // 0xd2e
public:
	// MNetworkEnable
	Vector m_closedPosition; // 0xd30	
	// MNetworkEnable
	QAngle m_closedAngles; // 0xd3c	
	CHandle< CBaseEntity > m_hBlocker; // 0xd48	
	bool m_bFirstBlocked; // 0xd4c	
private:
	[[maybe_unused]] uint8_t __pad0d4d[0x3]; // 0xd4d
public:
	locksound_t m_ls; // 0xd50	
	bool m_bForceClosed; // 0xd70	
private:
	[[maybe_unused]] uint8_t __pad0d71[0x3]; // 0xd71
public:
	Vector m_vecLatchWorldPosition; // 0xd74	
	CHandle< CBaseEntity > m_hActivator; // 0xd80	
private:
	[[maybe_unused]] uint8_t __pad0d84[0xc]; // 0xd84
public:
	CUtlSymbolLarge m_SoundMoving; // 0xd90	
	CUtlSymbolLarge m_SoundOpen; // 0xd98	
	CUtlSymbolLarge m_SoundClose; // 0xda0	
	CUtlSymbolLarge m_SoundLock; // 0xda8	
	CUtlSymbolLarge m_SoundUnlock; // 0xdb0	
	CUtlSymbolLarge m_SoundLatch; // 0xdb8	
	CUtlSymbolLarge m_SoundPound; // 0xdc0	
	CUtlSymbolLarge m_SoundJiggle; // 0xdc8	
	CUtlSymbolLarge m_SoundLockedAnim; // 0xdd0	
	int32_t m_numCloseAttempts; // 0xdd8	
	CUtlStringToken m_nPhysicsMaterial; // 0xddc	
	CUtlSymbolLarge m_SlaveName; // 0xde0	
	// MNetworkEnable
	CHandle< CBasePropDoor > m_hMaster; // 0xde8	
private:
	[[maybe_unused]] uint8_t __pad0dec[0x4]; // 0xdec
public:
	CEntityIOOutput m_OnBlockedClosing; // 0xdf0	
	CEntityIOOutput m_OnBlockedOpening; // 0xe18	
	CEntityIOOutput m_OnUnblockedClosing; // 0xe40	
	CEntityIOOutput m_OnUnblockedOpening; // 0xe68	
	CEntityIOOutput m_OnFullyClosed; // 0xe90	
	CEntityIOOutput m_OnFullyOpen; // 0xeb8	
	CEntityIOOutput m_OnClose; // 0xee0	
	CEntityIOOutput m_OnOpen; // 0xf08	
	CEntityIOOutput m_OnLockedUse; // 0xf30	
	CEntityIOOutput m_OnAjarOpen; // 0xf58	
	
	// Datamap fields:
	// void m_hSoundMoving; // 0xd84
	//  m_ls.sLockedSound; // 0xd58
	//  m_ls.sUnlockedSound; // 0xd60
	// void InputOpen; // 0x0
	// CUtlSymbolLarge InputOpenAwayFrom; // 0x0
	// float InputOpenAwayFromActivator; // 0x0
	// void InputClose; // 0x0
	// void InputToggle; // 0x0
	// void InputLock; // 0x0
	// void InputUnlock; // 0x0
	// void InputPlayerOpen; // 0x0
	// void InputPlayerClose; // 0x0
	// bool InputSetNoNPCs; // 0x0
	// void CBasePropDoorDoorOpenMoveDone; // 0x0
	// void CBasePropDoorDoorCloseMoveDone; // 0x0
	// void CBasePropDoorDoorAutoCloseThink; // 0x0
	// void CBasePropDoorDisableAreaPortalThink; // 0x0
};

