#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdd8
// Has VTable
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
// MNetworkVarNames "CHandle< C_BasePropDoor> m_hMaster"
class C_BasePropDoor : public C_DynamicProp
{
private:
	[[maybe_unused]] uint8_t __pad0d98[0x10]; // 0xd98
public:
	// MNetworkEnable
	DoorState_t m_eDoorState; // 0xda8	
	bool m_modelChanged; // 0xdac	
	// MNetworkEnable
	bool m_bLocked; // 0xdad	
	// MNetworkEnable
	bool m_bNoNPCs; // 0xdae	
private:
	[[maybe_unused]] uint8_t __pad0daf[0x1]; // 0xdaf
public:
	// MNetworkEnable
	Vector m_closedPosition; // 0xdb0	
	// MNetworkEnable
	QAngle m_closedAngles; // 0xdbc	
	// MNetworkEnable
	CHandle< C_BasePropDoor > m_hMaster; // 0xdc8	
	Vector m_vWhereToSetLightingOrigin; // 0xdcc	
};

