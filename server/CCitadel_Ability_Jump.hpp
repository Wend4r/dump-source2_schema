#pragma once

#include <cstdint>

struct GameTime_t;
struct CCitadelAutoScaledTime;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc88
// Has VTable
// 
// MNetworkVarNames "CCitadelAutoScaledTime m_flGroundDashJumpStartTime"
// MNetworkVarNames "CCitadelAutoScaledTime m_flGroundDashJumpEndTime"
// MNetworkVarNames "bool m_bJumped"
// MNetworkVarNames "bool m_bCanDashJump"
// MNetworkVarNames "int m_nDesiredAirJumpCount"
// MNetworkVarNames "int m_nExecutedAirJumpCount"
// MNetworkVarNames "bool m_bInSlideJump"
// MNetworkVarNames "int8 m_nConsecutiveAirJumps"
// MNetworkVarNames "int8 m_nConsecutiveWallJumps"
class CCitadel_Ability_Jump : public CCitadelBaseAbility
{
public:
	GameTime_t m_flLastTimeOnZipLine; // 0xaf8	
	GameTime_t m_flLastOnGroundTime; // 0xafc	
	GameTime_t m_flPhaseStartTime; // 0xb00	
	GameTime_t m_flJumpTime; // 0xb04	
	EJumpType_t m_LastJumpType; // 0xb08	
	bool m_bShouldCreateAirJumpEffects; // 0xb09	
private:
	[[maybe_unused]] uint8_t __pad0b0a[0x2]; // 0xb0a
public:
	GameTime_t m_flDoubleJumpFailTime; // 0xb0c	
	ECitadelAbilityOrders m_eDoubleJumpFailReason; // 0xb10	
	Vector m_vWallJumpNormalUsed; // 0xb14	
private:
	[[maybe_unused]] uint8_t __pad0b20[0x118]; // 0xb20
public:
	// MNetworkEnable
	CCitadelAutoScaledTime m_flGroundDashJumpStartTime; // 0xc38	
	// MNetworkEnable
	CCitadelAutoScaledTime m_flGroundDashJumpEndTime; // 0xc50	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bJumped; // 0xc68	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bCanDashJump; // 0xc69	
private:
	[[maybe_unused]] uint8_t __pad0c6a[0x2]; // 0xc6a
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	int32_t m_nDesiredAirJumpCount; // 0xc6c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	int32_t m_nExecutedAirJumpCount; // 0xc70	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bInSlideJump; // 0xc74	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	int8_t m_nConsecutiveAirJumps; // 0xc75	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	int8_t m_nConsecutiveWallJumps; // 0xc76	
private:
	[[maybe_unused]] uint8_t __pad0c77[0x1]; // 0xc77
public:
	Vector m_vLastWallCollidedWithNormal; // 0xc78	
};

