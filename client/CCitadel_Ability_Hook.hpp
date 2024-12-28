#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe80
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hHookVictim"
// MNetworkVarNames "EHANDLE m_hProjectile"
// MNetworkVarNames "Vector m_vecHookTargetStartPos"
class CCitadel_Ability_Hook : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "HookVictimChanged"
	CHandle< C_BaseEntity > m_hHookVictim; // 0xc98	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hProjectile; // 0xc9c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vecHookTargetStartPos; // 0xca0	
};

