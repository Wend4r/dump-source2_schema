#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xcd8
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hHookVictim"
// MNetworkVarNames "EHANDLE m_hProjectile"
// MNetworkVarNames "Vector m_vecHookTargetStartPos"
class CCitadel_Ability_Hook : public CCitadelBaseAbility
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "HookVictimChanged"
	CHandle< CBaseEntity > m_hHookVictim; // 0xaf8	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hProjectile; // 0xafc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vecHookTargetStartPos; // 0xb00	
	bool m_bProjectileHit; // 0xb0c	
private:
	[[maybe_unused]] uint8_t __pad0b0d[0x3]; // 0xb0d
public:
	float m_flLastUppercutRestoreTime; // 0xb10	
};

