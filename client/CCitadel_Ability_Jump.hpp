#pragma once

#include <cstdint>

struct GameTime_t;
struct CCitadelAutoScaledTime;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe28
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
class CCitadel_Ability_Jump : public C_CitadelBaseAbility
{
public:
	GameTime_t m_flLastTimeOnZipLine; // 0xc98	
	GameTime_t m_flLastOnGroundTime; // 0xc9c	
	GameTime_t m_flPhaseStartTime; // 0xca0	
	GameTime_t m_flJumpTime; // 0xca4	
	EJumpType_t m_LastJumpType; // 0xca8	
	bool m_bShouldCreateAirJumpEffects; // 0xca9	
private:
	[[maybe_unused]] uint8_t __pad0caa[0x2]; // 0xcaa
public:
	GameTime_t m_flDoubleJumpFailTime; // 0xcac	
	ECitadelAbilityOrders m_eDoubleJumpFailReason; // 0xcb0	
	Vector m_vWallJumpNormalUsed; // 0xcb4	
private:
	[[maybe_unused]] uint8_t __pad0cc0[0x118]; // 0xcc0
public:
	// MNetworkEnable
	CCitadelAutoScaledTime m_flGroundDashJumpStartTime; // 0xdd8	
	// MNetworkEnable
	CCitadelAutoScaledTime m_flGroundDashJumpEndTime; // 0xdf0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bJumped; // 0xe08	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bCanDashJump; // 0xe09	
private:
	[[maybe_unused]] uint8_t __pad0e0a[0x2]; // 0xe0a
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	int32_t m_nDesiredAirJumpCount; // 0xe0c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	int32_t m_nExecutedAirJumpCount; // 0xe10	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bInSlideJump; // 0xe14	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	int8_t m_nConsecutiveAirJumps; // 0xe15	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	int8_t m_nConsecutiveWallJumps; // 0xe16	
private:
	[[maybe_unused]] uint8_t __pad0e17[0x1]; // 0xe17
public:
	Vector m_vLastWallCollidedWithNormal; // 0xe18	
};

