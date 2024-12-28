#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xde0
// Has VTable
// 
// MNetworkVarNames "QAngle m_anglesCharging"
// MNetworkVarNames "GameTime_t m_flChargeStartTime"
// MNetworkVarNames "GameTime_t m_flFastChargeEndTime"
// MNetworkVarNames "bool m_bHitAPlayer"
class CCitadel_Ability_Bull_Charge : public CCitadelBaseAbility
{
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecHitEntities; // 0xaf8	
	bool m_bGainedWeaponPowerBuff; // 0xb10	
private:
	[[maybe_unused]] uint8_t __pad0b11[0x2a7]; // 0xb11
public:
	// MNetworkEnable
	QAngle m_anglesCharging; // 0xdb8	
	// MNetworkEnable
	// MNetworkChangeCallback "OnChargingStateChanged"
	GameTime_t m_flChargeStartTime; // 0xdc4	
	// MNetworkEnable
	GameTime_t m_flFastChargeEndTime; // 0xdc8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bHitAPlayer; // 0xdcc	
private:
	[[maybe_unused]] uint8_t __pad0dcd[0x3]; // 0xdcd
public:
	bool m_bFirstTick; // 0xdd0	
private:
	[[maybe_unused]] uint8_t __pad0dd1[0x3]; // 0xdd1
public:
	Vector m_vGoalDir; // 0xdd4	
};

