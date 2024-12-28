#pragma once

#include <cstdint>

struct ParticleIndex_t;
struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xee8
// Has VTable
// 
// MNetworkVarNames "EViscousChargedGunState m_ChargeState"
// MNetworkVarNames "float m_nClipConsumed"
// MNetworkVarNames "bool m_bIsCharging"
// MNetworkVarNames "bool m_bIsToggled"
class CCitadel_Ability_ViscousWeapon_Alt : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	EViscousChargedGunState m_ChargeState; // 0xc98	
	// MNetworkEnable
	float m_nClipConsumed; // 0xc9c	
	// MNetworkEnable
	bool m_bIsCharging; // 0xca0	
	// MNetworkEnable
	bool m_bIsToggled; // 0xca1	
private:
	[[maybe_unused]] uint8_t __pad0ca2[0x2]; // 0xca2
public:
	ParticleIndex_t m_fxChargingParticle; // 0xca4	
private:
	[[maybe_unused]] uint8_t __pad0ca8[0x8]; // 0xca8
public:
	GameTime_t m_flLastBulletConsumedTime; // 0xcb0	
};

