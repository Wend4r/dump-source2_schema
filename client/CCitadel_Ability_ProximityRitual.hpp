#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe50
// Has VTable
// 
// MNetworkVarNames "ECatStatueState_t m_eState"
// MNetworkVarNames "EHANDLE m_hStatue"
class CCitadel_Ability_ProximityRitual : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	ECatStatueState_t m_eState; // 0xc98	
private:
	[[maybe_unused]] uint8_t __pad0c99[0x3]; // 0xc99
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	CHandle< C_BaseEntity > m_hStatue; // 0xc9c	
private:
	[[maybe_unused]] uint8_t __pad0ca0[0x8]; // 0xca0
public:
	Vector m_vLaunchPosition; // 0xca8	
	QAngle m_qLaunchAngle; // 0xcb4	
};

