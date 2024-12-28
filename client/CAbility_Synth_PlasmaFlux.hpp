#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe10
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hActiveProjectile"
class CAbility_Synth_PlasmaFlux : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c98[0x10]; // 0xc98
public:
	bool m_bTeleported; // 0xca8	
private:
	[[maybe_unused]] uint8_t __pad0ca9[0x3]; // 0xca9
public:
	GameTime_t m_flProjectileLaunchTime; // 0xcac	
	GameTime_t m_flProjectileExpireTime; // 0xcb0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	CHandle< C_BaseEntity > m_hActiveProjectile; // 0xcb4	
};

