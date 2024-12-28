#pragma once

#include <cstdint>

struct GameTime_t;
struct CCitadelAutoScaledTime;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xcc0
// Has VTable
// 
// MNetworkVarNames "float m_flDashAngle"
// MNetworkVarNames "int m_nLastGroundDashTick"
// MNetworkVarNames "GameTime_t m_flGroundDashCastTime"
// MNetworkVarNames "CCitadelAutoScaledTime m_flGroundDashEndTime"
// MNetworkVarNames "GameTime_t m_flAirDashCastTime"
// MNetworkVarNames "GameTime_t m_flAirDashDragStartTime"
// MNetworkVarNames "int8 m_nConsecutiveAirDashes"
// MNetworkVarNames "int8 m_nConsecutiveDownDashes"
// MNetworkVarNames "bool m_bDownAirDash"
class CCitadel_Ability_Dash : public CCitadelBaseAbility
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	float m_flDashAngle; // 0xaf8	
	GameTime_t m_GroundDashExecuteTime; // 0xafc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	int32_t m_nLastGroundDashTick; // 0xb00	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flGroundDashCastTime; // 0xb04	
	bool m_bTagCanActivateGroundDash; // 0xb08	
private:
	[[maybe_unused]] uint8_t __pad0b09[0x7]; // 0xb09
public:
	// MNetworkEnable
	CCitadelAutoScaledTime m_flGroundDashEndTime; // 0xb10	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flAirDashCastTime; // 0xb28	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flAirDashDragStartTime; // 0xb2c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	int8_t m_nConsecutiveAirDashes; // 0xb30	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	int8_t m_nConsecutiveDownDashes; // 0xb31	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bDownAirDash; // 0xb32	
};

