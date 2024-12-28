#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc68
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hProjectile"
// MNetworkVarNames "float m_flArrowSpeed"
// MNetworkVarNames "GameTime_t m_flSnapAnglesBackTime"
// MNetworkVarNames "int m_nBonusTechPower"
class CCitadel_Ability_GuidedArrow : public CCitadelBaseAbility
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
	// MNetworkEnable
	int32_t m_nBonusTechPower; // 0xb0c	
	CHandle< CCitadelAnimatingModelEntity > m_hOwl; // 0xb10	
private:
	[[maybe_unused]] uint8_t __pad0b14[0xc]; // 0xb14
public:
	GameTime_t m_flCastTime; // 0xb20	
	bool m_bNeedsExplosion; // 0xb24	
private:
	[[maybe_unused]] uint8_t __pad0b25[0x3]; // 0xb25
public:
	Vector m_vProjectileRemovedOrigin; // 0xb28	
	QAngle m_angCasterAnglesAtCastTime; // 0xb34	
	float m_flTravelDistance; // 0xb40	
	bool m_bInKillFlow; // 0xb44	
private:
	[[maybe_unused]] uint8_t __pad0b45[0x3]; // 0xb45
public:
	float m_flProjectileTurnVel; // 0xb48	
};

