#pragma once

#include <cstdint>

struct GameTime_t;
struct CCitadelAutoScaledTime;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xcb8
// Has VTable
// 
// MNetworkVarNames "float m_flBoostYaw"
// MNetworkVarNames "Vector m_vecCrashPosition"
// MNetworkVarNames "Vector m_vecCrashDirection"
// MNetworkVarNames "ELeapState_t m_eLeapState"
// MNetworkVarNames "GameTime_t m_flStateEnterTime"
// MNetworkVarNames "CCitadelAutoScaledTime m_flNextStateTime"
// MNetworkVarNames "CCitadelAutoScaledTime m_flBoostEndTime"
class CCitadel_Ability_Bull_Leap : public CCitadelBaseAbility
{
public:
	// MNetworkEnable
	float m_flBoostYaw; // 0xaf8	
	// MNetworkEnable
	Vector m_vecCrashPosition; // 0xafc	
	// MNetworkEnable
	Vector m_vecCrashDirection; // 0xb08	
	// MNetworkEnable
	// MNetworkChangeCallback "OnLeapStateChanged"
	ELeapState_t m_eLeapState; // 0xb14	
private:
	[[maybe_unused]] uint8_t __pad0b15[0x3]; // 0xb15
public:
	// MNetworkEnable
	GameTime_t m_flStateEnterTime; // 0xb18	
private:
	[[maybe_unused]] uint8_t __pad0b1c[0x4]; // 0xb1c
public:
	// MNetworkEnable
	CCitadelAutoScaledTime m_flNextStateTime; // 0xb20	
	// MNetworkEnable
	CCitadelAutoScaledTime m_flBoostEndTime; // 0xb38	
private:
	[[maybe_unused]] uint8_t __pad0b50[0x158]; // 0xb50
public:
	Vector m_vecLastVel; // 0xca8	
};

