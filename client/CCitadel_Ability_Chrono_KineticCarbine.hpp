#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xeb0
// Has VTable
// 
// MNetworkVarNames "bool m_bWantsSlow"
// MNetworkVarNames "GameTime_t m_flLatchedTimeScaleFracChangeTime"
// MNetworkVarNames "float m_flLatchedTimeScaleFrac"
// MNetworkVarNames "GameTime_t m_flSpeedBoostEndTime"
// MNetworkVarNames "GameTime_t m_flShotTimeScaleEndTime"
class CCitadel_Ability_Chrono_KineticCarbine : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bWantsSlow; // 0xc98	
private:
	[[maybe_unused]] uint8_t __pad0c99[0x3]; // 0xc99
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flLatchedTimeScaleFracChangeTime; // 0xc9c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	float m_flLatchedTimeScaleFrac; // 0xca0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flSpeedBoostEndTime; // 0xca4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flShotTimeScaleEndTime; // 0xca8	
private:
	[[maybe_unused]] uint8_t __pad0cac[0x4]; // 0xcac
public:
	float m_flStoredPowerPct; // 0xcb0	
};

