#pragma once

#include <cstdint>

struct CNetworkOriginQuantizedVector;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb88
// Has VTable
// 
// MNetworkVarNames "CNetworkOriginQuantizedVector m_vTop"
// MNetworkVarNames "CNetworkOriginQuantizedVector m_vBottom"
// MNetworkVarNames "bool m_bRequestStopClimbing"
// MNetworkVarNames "bool m_bRequestJumpToRoof"
// MNetworkVarNames "GameTime_t m_flLastMoveTime"
// MNetworkVarNames "GameTime_t m_flMoveDownStartTime"
// MNetworkVarNames "EClimbRopeState_t m_eClimbState"
class CCitadel_Ability_Climb_Rope : public CCitadelBaseAbility
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	CNetworkOriginQuantizedVector m_vTop; // 0xaf8	
private:
	[[maybe_unused]] uint8_t __pad0b20[0x8]; // 0xb20
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	CNetworkOriginQuantizedVector m_vBottom; // 0xb28	
private:
	[[maybe_unused]] uint8_t __pad0b50[0x8]; // 0xb50
public:
	GameTime_t m_flActivatePressTime; // 0xb58	
	GameTime_t m_flDisconnectTime; // 0xb5c	
	GameTime_t m_flClimbStartTime; // 0xb60	
	Vector m_vLastPos; // 0xb64	
private:
	[[maybe_unused]] uint8_t __pad0b70[0x8]; // 0xb70
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bRequestStopClimbing; // 0xb78	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bRequestJumpToRoof; // 0xb79	
private:
	[[maybe_unused]] uint8_t __pad0b7a[0x2]; // 0xb7a
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flLastMoveTime; // 0xb7c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flMoveDownStartTime; // 0xb80	
	// MNetworkEnable
	EClimbRopeState_t m_eClimbState; // 0xb84	
};

