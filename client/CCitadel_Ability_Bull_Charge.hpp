#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf60
// Has VTable
// 
// MNetworkVarNames "QAngle m_anglesCharging"
// MNetworkVarNames "GameTime_t m_flChargeStartTime"
// MNetworkVarNames "GameTime_t m_flFastChargeEndTime"
// MNetworkVarNames "bool m_bHitAPlayer"
class CCitadel_Ability_Bull_Charge : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c98[0x2a0]; // 0xc98
public:
	// MNetworkEnable
	QAngle m_anglesCharging; // 0xf38	
	// MNetworkEnable
	// MNetworkChangeCallback "OnChargingStateChanged"
	GameTime_t m_flChargeStartTime; // 0xf44	
	// MNetworkEnable
	GameTime_t m_flFastChargeEndTime; // 0xf48	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bHitAPlayer; // 0xf4c	
private:
	[[maybe_unused]] uint8_t __pad0f4d[0x3]; // 0xf4d
public:
	bool m_bFirstTick; // 0xf50	
private:
	[[maybe_unused]] uint8_t __pad0f51[0x3]; // 0xf51
public:
	Vector m_vGoalDir; // 0xf54	
};

