#pragma once

#include <cstdint>

struct CCitadelAutoScaledTime;
struct ParticleIndex_t;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xf08
// Has VTable
// 
// MNetworkVarNames "bool m_bActive"
// MNetworkVarNames "EHANDLE m_hCurrentTarget"
// MNetworkVarNames "Vector m_vStartPosition"
// MNetworkVarNames "Vector m_vDeparturePosition"
// MNetworkVarNames "CCitadelAutoScaledTime m_flDepartureTime"
// MNetworkVarNames "CCitadelAutoScaledTime m_flArrivalTime"
// MNetworkVarNames "GameTime_t m_flDrainSuppressEndTime"
class CCitadel_Ability_Shiv_KillingBlow : public CCitadelBaseShivAbility
{
private:
	[[maybe_unused]] uint8_t __pad0af8[0x1c0]; // 0xaf8
public:
	// MNetworkEnable
	bool m_bActive; // 0xcb8	
private:
	[[maybe_unused]] uint8_t __pad0cb9[0x3]; // 0xcb9
public:
	// MNetworkEnable
	CHandle< CBaseEntity > m_hCurrentTarget; // 0xcbc	
	// MNetworkEnable
	Vector m_vStartPosition; // 0xcc0	
	// MNetworkEnable
	Vector m_vDeparturePosition; // 0xccc	
	// MNetworkEnable
	CCitadelAutoScaledTime m_flDepartureTime; // 0xcd8	
	// MNetworkEnable
	CCitadelAutoScaledTime m_flArrivalTime; // 0xcf0	
	Vector m_vLastKnownSafePos; // 0xd08	
private:
	[[maybe_unused]] uint8_t __pad0d14[0x4]; // 0xd14
public:
	ParticleIndex_t m_ChannelParticle; // 0xd18	
private:
	[[maybe_unused]] uint8_t __pad0d1c[0xc]; // 0xd1c
public:
	// MNetworkEnable
	GameTime_t m_flDrainSuppressEndTime; // 0xd28	
private:
	[[maybe_unused]] uint8_t __pad0d2c[0x1c4]; // 0xd2c
public:
	CModifierHandleTyped< CCitadelModifier > m_BuffModifier; // 0xef0	
};

