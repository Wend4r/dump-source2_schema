#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xf88
// Has VTable
// 
// MNetworkVarNames "bool m_bPlayingUninterruptableAct"
// MNetworkVarNames "PlayerAnimEvent_t m_nUninterruptableActivity"
class CFists : public CCSWeaponBase
{
public:
	// MNetworkEnable
	bool m_bPlayingUninterruptableAct; // 0xf70	
private:
	[[maybe_unused]] uint8_t __pad0f71[0x3]; // 0xf71
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnUninterruptChanged"
	PlayerAnimEvent_t m_nUninterruptableActivity; // 0xf74	
	bool m_bRestorePrevWep; // 0xf78	
private:
	[[maybe_unused]] uint8_t __pad0f79[0x3]; // 0xf79
public:
	CHandle< CBasePlayerWeapon > m_hWeaponBeforePrevious; // 0xf7c	
	CHandle< CBasePlayerWeapon > m_hWeaponPrevious; // 0xf80	
	bool m_bDelayedHardPunchIncoming; // 0xf84	
	bool m_bDestroyAfterTaunt; // 0xf85	
};

