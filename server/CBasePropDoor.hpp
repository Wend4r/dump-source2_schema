#pragma once

#include <cstdint>

struct locksound_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xf78
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
	[[maybe_unused]] uint8_t __pad0ce8[0x10]; // 0xce8
public:
	float m_flAutoReturnDelay; // 0xcf8	
private:
	[[maybe_unused]] uint8_t __pad0cfc[0x4]; // 0xcfc
public:
	CUtlVector< CHandle< CBasePropDoor > > m_hDoorList; // 0xd00	
	int32_t m_nHardwareType; // 0xd18	
	bool m_bNeedsHardware; // 0xd1c	
private:
	[[maybe_unused]] uint8_t __pad0d1d[0x3]; // 0xd1d
public:
	// MNetworkEnable
	DoorState_t m_eDoorState; // 0xd20	
	// MNetworkEnable
	bool m_bLocked; // 0xd24	
	// MNetworkEnable
	bool m_bNoNPCs; // 0xd25	
private:
	[[maybe_unused]] uint8_t __pad0d26[0x2]; // 0xd26
public:
	// MNetworkEnable
	Vector m_closedPosition; // 0xd28	
	// MNetworkEnable
	QAngle m_closedAngles; // 0xd34	
	CHandle< CBaseEntity > m_hBlocker; // 0xd40	
	bool m_bFirstBlocked; // 0xd44	
private:
	[[maybe_unused]] uint8_t __pad0d45[0x3]; // 0xd45
public:
	locksound_t m_ls; // 0xd48	
	bool m_bForceClosed; // 0xd68	
private:
	[[maybe_unused]] uint8_t __pad0d69[0x3]; // 0xd69
public:
	Vector m_vecLatchWorldPosition; // 0xd6c	
	CHandle< CBaseEntity > m_hActivator; // 0xd78	
private:
	[[maybe_unused]] uint8_t __pad0d7c[0xc]; // 0xd7c
public:
	CUtlSymbolLarge m_SoundMoving; // 0xd88	
	CUtlSymbolLarge m_SoundOpen; // 0xd90	
	CUtlSymbolLarge m_SoundClose; // 0xd98	
	CUtlSymbolLarge m_SoundLock; // 0xda0	
	CUtlSymbolLarge m_SoundUnlock; // 0xda8	
	CUtlSymbolLarge m_SoundLatch; // 0xdb0	
	CUtlSymbolLarge m_SoundPound; // 0xdb8	
	CUtlSymbolLarge m_SoundJiggle; // 0xdc0	
	CUtlSymbolLarge m_SoundLockedAnim; // 0xdc8	
	int32_t m_numCloseAttempts; // 0xdd0	
	CUtlStringToken m_nPhysicsMaterial; // 0xdd4	
	CUtlSymbolLarge m_SlaveName; // 0xdd8	
	// MNetworkEnable
	CHandle< CBasePropDoor > m_hMaster; // 0xde0	
private:
	[[maybe_unused]] uint8_t __pad0de4[0x4]; // 0xde4
public:
	CEntityIOOutput m_OnBlockedClosing; // 0xde8	
	CEntityIOOutput m_OnBlockedOpening; // 0xe10	
	CEntityIOOutput m_OnUnblockedClosing; // 0xe38	
	CEntityIOOutput m_OnUnblockedOpening; // 0xe60	
	CEntityIOOutput m_OnFullyClosed; // 0xe88	
	CEntityIOOutput m_OnFullyOpen; // 0xeb0	
	CEntityIOOutput m_OnClose; // 0xed8	
	CEntityIOOutput m_OnOpen; // 0xf00	
	CEntityIOOutput m_OnLockedUse; // 0xf28	
	CEntityIOOutput m_OnAjarOpen; // 0xf50	
	
	// Datamap fields:
	// void m_hSoundMoving; // 0xd7c
	//  m_ls.sLockedSound; // 0xd50
	//  m_ls.sUnlockedSound; // 0xd58
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

