#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xcd8
// Has VTable
// 
// MNetworkVarNames "bool m_bIsVisibleOnMinimap"
// MNetworkVarNames "GameTime_t m_flStoppedMovingStartTime"
class CAbility_Fathom_LurkersAmbush : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0b00[0x188]; // 0xb00
public:
	CModifierHandleTyped< CCitadelModifier > m_hRegenModifier; // 0xc88	
	CModifierHandleTyped< CCitadelModifier > m_hInvisModifier; // 0xca0	
	// MNetworkEnable
	bool m_bIsVisibleOnMinimap; // 0xcb8	
private:
	[[maybe_unused]] uint8_t __pad0cb9[0x3]; // 0xcb9
public:
	// MNetworkEnable
	GameTime_t m_flStoppedMovingStartTime; // 0xcbc	
	Vector m_vLastPos; // 0xcc0	
	float m_flImmobilizeDuration; // 0xccc	
	GameTime_t m_flChannelTimeStarted; // 0xcd0	
};

