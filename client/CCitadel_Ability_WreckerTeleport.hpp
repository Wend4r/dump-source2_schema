#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd80
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hProjectile"
// MNetworkVarNames "float m_flArrowSpeed"
// MNetworkVarNames "GameTime_t m_flSnapAnglesBackTime"
class CCitadel_Ability_WreckerTeleport : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c60[0x8]; // 0xc60
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hProjectile; // 0xc68	
	// MNetworkEnable
	float m_flArrowSpeed; // 0xc6c	
	// MNetworkEnable
	GameTime_t m_flSnapAnglesBackTime; // 0xc70	
	float m_flCastTimeDamage; // 0xc74	
	GameTime_t m_flCastTime; // 0xc78	
	bool m_bNeedsExplosion; // 0xc7c	
private:
	[[maybe_unused]] uint8_t __pad0c7d[0x3]; // 0xc7d
public:
	Vector m_vProjectileRemovedOrigin; // 0xc80	
	QAngle m_angCasterAnglesAtCastTime; // 0xc8c	
	float m_flTravelDistance; // 0xc98	
};
