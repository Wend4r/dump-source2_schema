#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe78
// Has VTable
// 
// MNetworkVarNames "bool m_bIsVisibleOnMinimap"
// MNetworkVarNames "GameTime_t m_flStoppedMovingStartTime"
class CAbility_Fathom_LurkersAmbush : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ca0[0x188]; // 0xca0
public:
	CModifierHandleTyped< CCitadelModifier > m_hRegenModifier; // 0xe28	
	CModifierHandleTyped< CCitadelModifier > m_hInvisModifier; // 0xe40	
	// MNetworkEnable
	bool m_bIsVisibleOnMinimap; // 0xe58	
private:
	[[maybe_unused]] uint8_t __pad0e59[0x3]; // 0xe59
public:
	// MNetworkEnable
	GameTime_t m_flStoppedMovingStartTime; // 0xe5c	
	Vector m_vLastPos; // 0xe60	
	float m_flImmobilizeDuration; // 0xe6c	
	GameTime_t m_flChannelTimeStarted; // 0xe70	
};

