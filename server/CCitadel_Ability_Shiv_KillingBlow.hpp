#pragma once

#include <cstdint>

struct CCitadelAutoScaledTime;
struct ParticleIndex_t;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xee8
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
	[[maybe_unused]] uint8_t __pad0ad8[0x1c0]; // 0xad8
public:
	// MNetworkEnable
	bool m_bActive; // 0xc98	
private:
	[[maybe_unused]] uint8_t __pad0c99[0x3]; // 0xc99
public:
	// MNetworkEnable
	CHandle< CBaseEntity > m_hCurrentTarget; // 0xc9c	
	// MNetworkEnable
	Vector m_vStartPosition; // 0xca0	
	// MNetworkEnable
	Vector m_vDeparturePosition; // 0xcac	
	// MNetworkEnable
	CCitadelAutoScaledTime m_flDepartureTime; // 0xcb8	
	// MNetworkEnable
	CCitadelAutoScaledTime m_flArrivalTime; // 0xcd0	
	Vector m_vLastKnownSafePos; // 0xce8	
private:
	[[maybe_unused]] uint8_t __pad0cf4[0x4]; // 0xcf4
public:
	ParticleIndex_t m_ChannelParticle; // 0xcf8	
private:
	[[maybe_unused]] uint8_t __pad0cfc[0xc]; // 0xcfc
public:
	// MNetworkEnable
	GameTime_t m_flDrainSuppressEndTime; // 0xd08	
private:
	[[maybe_unused]] uint8_t __pad0d0c[0x1c4]; // 0xd0c
public:
	CModifierHandleTyped< CCitadelModifier > m_BuffModifier; // 0xed0	
};

