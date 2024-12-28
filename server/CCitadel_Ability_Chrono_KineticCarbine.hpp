#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd10
// Has VTable
// 
// MNetworkVarNames "bool m_bWantsSlow"
// MNetworkVarNames "GameTime_t m_flLatchedTimeScaleFracChangeTime"
// MNetworkVarNames "float m_flLatchedTimeScaleFrac"
// MNetworkVarNames "GameTime_t m_flSpeedBoostEndTime"
// MNetworkVarNames "GameTime_t m_flShotTimeScaleEndTime"
class CCitadel_Ability_Chrono_KineticCarbine : public CCitadelBaseAbility
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bWantsSlow; // 0xaf8	
private:
	[[maybe_unused]] uint8_t __pad0af9[0x3]; // 0xaf9
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flLatchedTimeScaleFracChangeTime; // 0xafc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	float m_flLatchedTimeScaleFrac; // 0xb00	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flSpeedBoostEndTime; // 0xb04	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flShotTimeScaleEndTime; // 0xb08	
private:
	[[maybe_unused]] uint8_t __pad0b0c[0x4]; // 0xb0c
public:
	float m_flStoredPowerPct; // 0xb10	
};

