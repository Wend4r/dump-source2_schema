#pragma once

#include <cstdint>

struct GameTime_t;
struct CCitadelAutoScaledTime;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe90
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
class CCitadel_Ability_Dash : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	float m_flDashAngle; // 0xc98	
	GameTime_t m_GroundDashExecuteTime; // 0xc9c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	int32_t m_nLastGroundDashTick; // 0xca0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flGroundDashCastTime; // 0xca4	
	bool m_bTagCanActivateGroundDash; // 0xca8	
private:
	[[maybe_unused]] uint8_t __pad0ca9[0x7]; // 0xca9
public:
	// MNetworkEnable
	CCitadelAutoScaledTime m_flGroundDashEndTime; // 0xcb0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flAirDashCastTime; // 0xcc8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flAirDashDragStartTime; // 0xccc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	int8_t m_nConsecutiveAirDashes; // 0xcd0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	int8_t m_nConsecutiveDownDashes; // 0xcd1	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bDownAirDash; // 0xcd2	
private:
	[[maybe_unused]] uint8_t __pad0cd3[0x1b5]; // 0xcd3
public:
	CHandle< CCitadel_Ability_Jump > m_hJumpAbility; // 0xe88	
};

