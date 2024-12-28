#pragma once

#include <cstdint>

struct ParticleIndex_t;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd48
// Has VTable
// 
// MNetworkVarNames "EViscousChargedGunState m_ChargeState"
// MNetworkVarNames "float m_nClipConsumed"
// MNetworkVarNames "bool m_bIsCharging"
// MNetworkVarNames "bool m_bIsToggled"
class CCitadel_Ability_ViscousWeapon_Alt : public CCitadelBaseAbility
{
public:
	// MNetworkEnable
	EViscousChargedGunState m_ChargeState; // 0xaf8	
	// MNetworkEnable
	float m_nClipConsumed; // 0xafc	
	// MNetworkEnable
	bool m_bIsCharging; // 0xb00	
	// MNetworkEnable
	bool m_bIsToggled; // 0xb01	
private:
	[[maybe_unused]] uint8_t __pad0b02[0x2]; // 0xb02
public:
	ParticleIndex_t m_fxChargingParticle; // 0xb04	
private:
	[[maybe_unused]] uint8_t __pad0b08[0x8]; // 0xb08
public:
	GameTime_t m_flLastBulletConsumedTime; // 0xb10	
};

