#pragma once

#include <cstdint>

struct CCitadelAutoScaledTime;
struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf38
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
class CCitadel_Ability_Nano_Pounce_Instant : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c98[0x230]; // 0xc98
public:
	// MNetworkEnable
	bool m_bActive; // 0xec8	
private:
	[[maybe_unused]] uint8_t __pad0ec9[0x3]; // 0xec9
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hCurrentTarget; // 0xecc	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hLastCastTarget; // 0xed0	
	// MNetworkEnable
	Vector m_vStartPosition; // 0xed4	
	// MNetworkEnable
	Vector m_vDeparturePosition; // 0xee0	
private:
	[[maybe_unused]] uint8_t __pad0eec[0x4]; // 0xeec
public:
	// MNetworkEnable
	CCitadelAutoScaledTime m_flDepartureTime; // 0xef0	
	// MNetworkEnable
	CCitadelAutoScaledTime m_flArrivalTime; // 0xf08	
	Vector m_vLastKnownSafePos; // 0xf20	
private:
	[[maybe_unused]] uint8_t __pad0f2c[0x2]; // 0xf2c
public:
	// MNetworkEnable
	bool m_bIsFirstCastCompleted; // 0xf2e	
private:
	[[maybe_unused]] uint8_t __pad0f2f[0x1]; // 0xf2f
public:
	// MNetworkEnable
	GameTime_t m_tDoubleCastWindow; // 0xf30	
};

