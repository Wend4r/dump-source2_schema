#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc30
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hProjectile"
// MNetworkVarNames "float m_flArrowSpeed"
// MNetworkVarNames "GameTime_t m_flSnapAnglesBackTime"
class CCitadel_Ability_WreckerTeleport : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0af8[0x8]; // 0xaf8
public:
	// MNetworkEnable
	CHandle< CBaseEntity > m_hProjectile; // 0xb00	
	// MNetworkEnable
	float m_flArrowSpeed; // 0xb04	
	// MNetworkEnable
	GameTime_t m_flSnapAnglesBackTime; // 0xb08	
	float m_flCastTimeDamage; // 0xb0c	
	GameTime_t m_flCastTime; // 0xb10	
	bool m_bNeedsExplosion; // 0xb14	
private:
	[[maybe_unused]] uint8_t __pad0b15[0x3]; // 0xb15
public:
	Vector m_vProjectileRemovedOrigin; // 0xb18	
	QAngle m_angCasterAnglesAtCastTime; // 0xb24	
	float m_flTravelDistance; // 0xb30	
};

