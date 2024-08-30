#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc10
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hProjectile"
// MNetworkVarNames "float m_flArrowSpeed"
// MNetworkVarNames "GameTime_t m_flSnapAnglesBackTime"
class CCitadel_Ability_WreckerTeleport : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ad8[0x8]; // 0xad8
public:
	// MNetworkEnable
	CHandle< CBaseEntity > m_hProjectile; // 0xae0	
	// MNetworkEnable
	float m_flArrowSpeed; // 0xae4	
	// MNetworkEnable
	GameTime_t m_flSnapAnglesBackTime; // 0xae8	
	float m_flCastTimeDamage; // 0xaec	
	GameTime_t m_flCastTime; // 0xaf0	
	bool m_bNeedsExplosion; // 0xaf4	
private:
	[[maybe_unused]] uint8_t __pad0af5[0x3]; // 0xaf5
public:
	Vector m_vProjectileRemovedOrigin; // 0xaf8	
	QAngle m_angCasterAnglesAtCastTime; // 0xb04	
	float m_flTravelDistance; // 0xb10	
};

