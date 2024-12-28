#pragma once

#include <cstdint>

struct CCitadelAutoScaledTime;
struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd98
// Has VTable
// 
// MNetworkVarNames "bool m_bActive"
// MNetworkVarNames "EHANDLE m_hCurrentTarget"
// MNetworkVarNames "EHANDLE m_hLastCastTarget"
// MNetworkVarNames "Vector m_vStartPosition"
// MNetworkVarNames "Vector m_vDeparturePosition"
// MNetworkVarNames "CCitadelAutoScaledTime m_flDepartureTime"
// MNetworkVarNames "CCitadelAutoScaledTime m_flArrivalTime"
// MNetworkVarNames "bool m_bIsFirstCastCompleted"
// MNetworkVarNames "GameTime_t m_tDoubleCastWindow"
class CCitadel_Ability_Nano_Pounce_Instant : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0af8[0x230]; // 0xaf8
public:
	// MNetworkEnable
	bool m_bActive; // 0xd28	
private:
	[[maybe_unused]] uint8_t __pad0d29[0x3]; // 0xd29
public:
	// MNetworkEnable
	CHandle< CBaseEntity > m_hCurrentTarget; // 0xd2c	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hLastCastTarget; // 0xd30	
	// MNetworkEnable
	Vector m_vStartPosition; // 0xd34	
	// MNetworkEnable
	Vector m_vDeparturePosition; // 0xd40	
private:
	[[maybe_unused]] uint8_t __pad0d4c[0x4]; // 0xd4c
public:
	// MNetworkEnable
	CCitadelAutoScaledTime m_flDepartureTime; // 0xd50	
	// MNetworkEnable
	CCitadelAutoScaledTime m_flArrivalTime; // 0xd68	
	Vector m_vLastKnownSafePos; // 0xd80	
private:
	[[maybe_unused]] uint8_t __pad0d8c[0x2]; // 0xd8c
public:
	// MNetworkEnable
	bool m_bIsFirstCastCompleted; // 0xd8e	
private:
	[[maybe_unused]] uint8_t __pad0d8f[0x1]; // 0xd8f
public:
	// MNetworkEnable
	GameTime_t m_tDoubleCastWindow; // 0xd90	
	ParticleIndex_t m_CastStartParticle; // 0xd94	
};

