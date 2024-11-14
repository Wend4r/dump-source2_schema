#pragma once

#include <cstdint>

struct GameTime_t;
struct GameTick_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xfa8
// Has VTable
// 
// MNetworkVarNames "bool m_bRedraw"
// MNetworkVarNames "bool m_bIsHeldByPlayer"
// MNetworkVarNames "bool m_bPinPulled"
// MNetworkVarNames "bool m_bJumpThrow"
// MNetworkVarNames "bool m_bThrowAnimating"
// MNetworkVarNames "GameTime_t m_fThrowTime"
// MNetworkVarNames "float m_flThrowStrength"
// MNetworkVarNames "float m_flThrowStrengthApproach"
// MNetworkVarNames "GameTime_t m_fDropTime"
// MNetworkVarNames "GameTime_t m_fPinPullTime"
// MNetworkVarNames "bool m_bJustPulledPin"
// MNetworkVarNames "GameTick_t m_nNextHoldTick"
// MNetworkVarNames "float m_flNextHoldFrac"
// MNetworkVarNames "CHandle< CCSWeaponBase> m_hSwitchToWeaponAfterThrow"
class CBaseCSGrenade : public CCSWeaponBase
{
public:
	// MNetworkEnable
	bool m_bRedraw; // 0xf70	
	// MNetworkEnable
	// MNetworkChangeCallback "OnGrenadeStateChanged"
	bool m_bIsHeldByPlayer; // 0xf71	
	// MNetworkEnable
	// MNetworkChangeCallback "OnGrenadeStateChanged"
	bool m_bPinPulled; // 0xf72	
	// MNetworkEnable
	bool m_bJumpThrow; // 0xf73	
	// MNetworkEnable
	bool m_bThrowAnimating; // 0xf74	
private:
	[[maybe_unused]] uint8_t __pad0f75[0x3]; // 0xf75
public:
	// MNetworkEnable
	GameTime_t m_fThrowTime; // 0xf78	
	// MNetworkEnable
	float m_flThrowStrength; // 0xf7c	
	// MNetworkEnable
	float m_flThrowStrengthApproach; // 0xf80	
	// MNetworkEnable
	GameTime_t m_fDropTime; // 0xf84	
	// MNetworkEnable
	GameTime_t m_fPinPullTime; // 0xf88	
	// MNetworkEnable
	bool m_bJustPulledPin; // 0xf8c	
private:
	[[maybe_unused]] uint8_t __pad0f8d[0x3]; // 0xf8d
public:
	// MNetworkEnable
	GameTick_t m_nNextHoldTick; // 0xf90	
	// MNetworkEnable
	float m_flNextHoldFrac; // 0xf94	
	// MNetworkEnable
	CHandle< CCSWeaponBase > m_hSwitchToWeaponAfterThrow; // 0xf98	
};

