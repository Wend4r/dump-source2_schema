#pragma once

#include <cstdint>

struct GameTime_t;
struct CCitadelAutoScaledTime;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe58
// Has VTable
// 
// MNetworkVarNames "float m_flBoostYaw"
// MNetworkVarNames "Vector m_vecCrashPosition"
// MNetworkVarNames "Vector m_vecCrashDirection"
// MNetworkVarNames "ELeapState_t m_eLeapState"
// MNetworkVarNames "GameTime_t m_flStateEnterTime"
// MNetworkVarNames "CCitadelAutoScaledTime m_flNextStateTime"
// MNetworkVarNames "CCitadelAutoScaledTime m_flBoostEndTime"
class CCitadel_Ability_Bull_Leap : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	float m_flBoostYaw; // 0xc98	
	// MNetworkEnable
	Vector m_vecCrashPosition; // 0xc9c	
	// MNetworkEnable
	Vector m_vecCrashDirection; // 0xca8	
	// MNetworkEnable
	// MNetworkChangeCallback "OnLeapStateChanged"
	ELeapState_t m_eLeapState; // 0xcb4	
private:
	[[maybe_unused]] uint8_t __pad0cb5[0x3]; // 0xcb5
public:
	// MNetworkEnable
	GameTime_t m_flStateEnterTime; // 0xcb8	
private:
	[[maybe_unused]] uint8_t __pad0cbc[0x4]; // 0xcbc
public:
	// MNetworkEnable
	CCitadelAutoScaledTime m_flNextStateTime; // 0xcc0	
	// MNetworkEnable
	CCitadelAutoScaledTime m_flBoostEndTime; // 0xcd8	
private:
	[[maybe_unused]] uint8_t __pad0cf0[0x158]; // 0xcf0
public:
	Vector m_vecLastVel; // 0xe48	
};

