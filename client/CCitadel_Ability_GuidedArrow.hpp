#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdf8
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hProjectile"
// MNetworkVarNames "float m_flArrowSpeed"
// MNetworkVarNames "GameTime_t m_flSnapAnglesBackTime"
// MNetworkVarNames "int m_nBonusTechPower"
class CCitadel_Ability_GuidedArrow : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c98[0x8]; // 0xc98
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hProjectile; // 0xca0	
	// MNetworkEnable
	float m_flArrowSpeed; // 0xca4	
	// MNetworkEnable
	GameTime_t m_flSnapAnglesBackTime; // 0xca8	
	// MNetworkEnable
	int32_t m_nBonusTechPower; // 0xcac	
	GameTime_t m_flCastTime; // 0xcb0	
	bool m_bNeedsExplosion; // 0xcb4	
private:
	[[maybe_unused]] uint8_t __pad0cb5[0x3]; // 0xcb5
public:
	Vector m_vProjectileRemovedOrigin; // 0xcb8	
	QAngle m_angCasterAnglesAtCastTime; // 0xcc4	
	float m_flTravelDistance; // 0xcd0	
	bool m_bInKillFlow; // 0xcd4	
private:
	[[maybe_unused]] uint8_t __pad0cd5[0x3]; // 0xcd5
public:
	float m_flProjectileTurnVel; // 0xcd8	
};

