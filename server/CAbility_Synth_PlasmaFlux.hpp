#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc98
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hActiveProjectile"
class CAbility_Synth_PlasmaFlux : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0af8[0x10]; // 0xaf8
public:
	bool m_bTeleported; // 0xb08	
private:
	[[maybe_unused]] uint8_t __pad0b09[0x7]; // 0xb09
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecUniqueHitList; // 0xb10	
	Vector m_vLastValidTeleportPosition; // 0xb28	
	GameTime_t m_flProjectileLaunchTime; // 0xb34	
	GameTime_t m_flProjectileExpireTime; // 0xb38	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	CHandle< CBaseEntity > m_hActiveProjectile; // 0xb3c	
};

